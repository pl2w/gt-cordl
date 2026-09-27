#pragma once
// IWYU pragma private; include "GlobalNamespace/LckBodyCameraSpawner.hpp"
#include "GlobalNamespace/zzzz__LckBodyCameraSpawner_CameraPosition_impl.hpp"
#include "GlobalNamespace/zzzz__LckBodyCameraSpawner_CameraState_impl.hpp"
#include "GlobalNamespace/zzzz__MonoBehaviourTick_impl.hpp"
#include "Liv/Lck/GorillaTag/zzzz__CameraMode_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Transform_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__LckBodyCameraSpawner_def.hpp"
#include "GlobalNamespace/zzzz__GorillaGrabber_def.hpp"
#include "GlobalNamespace/zzzz__LckBodyCameraSpawner_CameraPosition_def.hpp"
#include "GlobalNamespace/zzzz__LckBodyCameraSpawner_CameraState_def.hpp"
#include "GlobalNamespace/zzzz__LckBodyCameraSpawner_def.hpp"
#include "GlobalNamespace/zzzz__LckDirectGrabbable_def.hpp"
#include "GlobalNamespace/zzzz__TabletSpawnInstance_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GlobalNamespace/zzzz__ZoneData_def.hpp"
#include "Liv/Lck/Cosmetics/zzzz__LckGameObjectSwapCosmetic_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtDummyTablet_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__LineRenderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LckBodyCameraSpawner.SetFollowTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckBodyCameraSpawner::*)(::UnityEngine::Transform*)>(&::GlobalNamespace::LckBodyCameraSpawner::SetFollowTransform)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x56c323c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner*>(),
                        {"SetFollowTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckBodyCameraSpawner.get_tabletSpawnInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::TabletSpawnInstance* (::GlobalNamespace::LckBodyCameraSpawner::*)()>(&::GlobalNamespace::LckBodyCameraSpawner::get_tabletSpawnInstance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56c324c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner*>(),
                        {"get_tabletSpawnInstance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckBodyCameraSpawner.add_OnCameraStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::LckBodyCameraSpawner_CameraStateDelegate*)>(&::GlobalNamespace::LckBodyCameraSpawner::add_OnCameraStateChange)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x56c3254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner*>(),
                        {"add_OnCameraStateChange", {}, {::i2c::type_of<::GlobalNamespace::LckBodyCameraSpawner_CameraStateDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckBodyCameraSpawner.remove_OnCameraStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::LckBodyCameraSpawner_CameraStateDelegate*)>(&::GlobalNamespace::LckBodyCameraSpawner::remove_OnCameraStateChange)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x56c330c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner*>(),
                        {"remove_OnCameraStateChange", {}, {::i2c::type_of<::GlobalNamespace::LckBodyCameraSpawner_CameraStateDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckBodyCameraSpawner.get_cameraState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::LckBodyCameraSpawner_CameraState (::GlobalNamespace::LckBodyCameraSpawner::*)()>(&::GlobalNamespace::LckBodyCameraSpawner::get_cameraState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56c33c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner*>(),
                        {"get_cameraState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckBodyCameraSpawner.set_cameraState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckBodyCameraSpawner::*)(::GlobalNamespace::LckBodyCameraSpawner_CameraState)>(&::GlobalNamespace::LckBodyCameraSpawner::set_cameraState)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x56c33cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner*>(),
                        {"set_cameraState", {}, {::i2c::type_of<::GlobalNamespace::LckBodyCameraSpawner_CameraState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckBodyCameraSpawner.SetPreviewActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckBodyCameraSpawner::*)(bool)>(&::GlobalNamespace::LckBodyCameraSpawner::SetPreviewActive)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x56c37f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner*>(),
                        {"SetPreviewActive", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckBodyCameraSpawner.get_cameraPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::LckBodyCameraSpawner_CameraPosition (::GlobalNamespace::LckBodyCameraSpawner::*)()>(&::GlobalNamespace::LckBodyCameraSpawner::get_cameraPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56c3908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner*>(),
                        {"get_cameraPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckBodyCameraSpawner.set_cameraPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckBodyCameraSpawner::*)(::GlobalNamespace::LckBodyCameraSpawner_CameraPosition)>(&::GlobalNamespace::LckBodyCameraSpawner::set_cameraPosition)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x56c3650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner*>(),
                        {"set_cameraPosition", {}, {::i2c::type_of<::GlobalNamespace::LckBodyCameraSpawner_CameraPosition>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckBodyCameraSpawner.get_cameraVisible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LckBodyCameraSpawner::*)()>(&::GlobalNamespace::LckBodyCameraSpawner::get_cameraVisible)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x56c3a34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner*>(),
                        {"get_cameraVisible", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckBodyCameraSpawner.set_cameraVisible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckBodyCameraSpawner::*)(bool)>(&::GlobalNamespace::LckBodyCameraSpawner::set_cameraVisible)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x56c37a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner*>(),
                        {"set_cameraVisible", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckBodyCameraSpawner.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckBodyCameraSpawner::*)()>(&::GlobalNamespace::LckBodyCameraSpawner::Awake)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x56c3a5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckBodyCameraSpawner.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckBodyCameraSpawner::*)()>(&::GlobalNamespace::LckBodyCameraSpawner::OnEnable)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x56c3acc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckBodyCameraSpawner.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckBodyCameraSpawner::*)()>(&::GlobalNamespace::LckBodyCameraSpawner::Update)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x56c3df8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckBodyCameraSpawner.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckBodyCameraSpawner::*)()>(&::GlobalNamespace::LckBodyCameraSpawner::OnDisable)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x56c3e0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckBodyCameraSpawner.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckBodyCameraSpawner::*)()>(&::GlobalNamespace::LckBodyCameraSpawner::Tick)> {
  constexpr static std::size_t size = 0x798;
  constexpr static std::size_t addrs = 0x56c4098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner*>(),
                    {::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckBodyCameraSpawner.OnZoneChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckBodyCameraSpawner::*)(::ArrayW<::GlobalNamespace::ZoneData*>)>(&::GlobalNamespace::LckBodyCameraSpawner::OnZoneChanged)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x56c5004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner*>(),
                        {"OnZoneChanged", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::ZoneData*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckBodyCameraSpawner.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckBodyCameraSpawner::*)()>(&::GlobalNamespace::LckBodyCameraSpawner::OnDestroy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x56c5050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckBodyCameraSpawner.ManuallySetCameraOnNeck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckBodyCameraSpawner::*)()>(&::GlobalNamespace::LckBodyCameraSpawner::ManuallySetCameraOnNeck)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x56c5064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner*>(),
                        {"ManuallySetCameraOnNeck", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckBodyCameraSpawner.OnCameraModelReleased
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckBodyCameraSpawner::*)()>(&::GlobalNamespace::LckBodyCameraSpawner::OnCameraModelReleased)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x56c5144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner*>(),
                        {"OnCameraModelReleased", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckBodyCameraSpawner.SpawnCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckBodyCameraSpawner::*)(::GlobalNamespace::GorillaGrabber*, ::UnityEngine::Transform*)>(&::GlobalNamespace::LckBodyCameraSpawner::SpawnCamera)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x56c4aec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner*>(),
                        {"SpawnCamera", {}, {::i2c::type_of<::GlobalNamespace::GorillaGrabber*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckBodyCameraSpawner.ShouldSpawnCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LckBodyCameraSpawner::*)(::UnityEngine::Transform*)>(&::GlobalNamespace::LckBodyCameraSpawner::ShouldSpawnCamera)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x56c4a0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner*>(),
                        {"ShouldSpawnCamera", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckBodyCameraSpawner.ChangeCameraModelParent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckBodyCameraSpawner::*)(::UnityEngine::Transform*)>(&::GlobalNamespace::LckBodyCameraSpawner::ChangeCameraModelParent)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x56c3910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner*>(),
                        {"ChangeCameraModelParent", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckBodyCameraSpawner.InitCameraStrap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckBodyCameraSpawner::*)()>(&::GlobalNamespace::LckBodyCameraSpawner::InitCameraStrap)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x56c3d78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner*>(),
                        {"InitCameraStrap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckBodyCameraSpawner.UpdateCameraStrap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckBodyCameraSpawner::*)()>(&::GlobalNamespace::LckBodyCameraSpawner::UpdateCameraStrap)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x56c4830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner*>(),
                        {"UpdateCameraStrap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckBodyCameraSpawner.ResetCameraModel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckBodyCameraSpawner::*)()>(&::GlobalNamespace::LckBodyCameraSpawner::ResetCameraModel)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x56c36f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner*>(),
                        {"ResetCameraModel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckBodyCameraSpawner.GetLocalRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::VRRig> (::GlobalNamespace::LckBodyCameraSpawner::*)()>(&::GlobalNamespace::LckBodyCameraSpawner::GetLocalRig)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x56c5274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner*>(),
                        {"GetLocalRig", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckBodyCameraSpawner.IsSlingshotHeldInHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LckBodyCameraSpawner::*)(::by_ref<bool>, ::by_ref<bool>)>(&::GlobalNamespace::LckBodyCameraSpawner::IsSlingshotHeldInHand)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x56c5360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner*>(),
                        {"IsSlingshotHeldInHand", {}, {::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckBodyCameraSpawner.IsSlingshotActiveInHierarchy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LckBodyCameraSpawner::*)()>(&::GlobalNamespace::LckBodyCameraSpawner::IsSlingshotActiveInHierarchy)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x56c4f38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner*>(),
                        {"IsSlingshotActiveInHierarchy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckBodyCameraSpawner._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckBodyCameraSpawner::*)()>(&::GlobalNamespace::LckBodyCameraSpawner::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x56c5444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_get__cameraSpawnPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraSpawnPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_get__cameraSpawnPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraSpawnPrefab;
}
constexpr void GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_set__cameraSpawnPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cameraSpawnPrefab = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_get__cameraSpawnParentTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraSpawnParentTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_get__cameraSpawnParentTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraSpawnParentTransform;
}
constexpr void GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_set__cameraSpawnParentTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cameraSpawnParentTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_get__cameraModelOriginTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraModelOriginTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_get__cameraModelOriginTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraModelOriginTransform;
}
constexpr void GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_set__cameraModelOriginTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cameraModelOriginTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_get__cameraModelTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraModelTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_get__cameraModelTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraModelTransform;
}
constexpr void GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_set__cameraModelTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cameraModelTransform = value;
}
constexpr ::UnityW<::GlobalNamespace::LckDirectGrabbable>& GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_get__cameraModelGrabbable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraModelGrabbable;
}
constexpr ::UnityW<::GlobalNamespace::LckDirectGrabbable> const& GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_get__cameraModelGrabbable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraModelGrabbable;
}
constexpr void GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_set__cameraModelGrabbable(::UnityW<::GlobalNamespace::LckDirectGrabbable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cameraModelGrabbable = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_get__cameraPositionDefault()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraPositionDefault;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_get__cameraPositionDefault() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraPositionDefault;
}
constexpr void GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_set__cameraPositionDefault(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cameraPositionDefault = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_get__cameraPositionSlingshot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraPositionSlingshot;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_get__cameraPositionSlingshot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraPositionSlingshot;
}
constexpr void GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_set__cameraPositionSlingshot(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cameraPositionSlingshot = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_get__chestSpawnRotationOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____chestSpawnRotationOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_get__chestSpawnRotationOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____chestSpawnRotationOffset;
}
constexpr void GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_set__chestSpawnRotationOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____chestSpawnRotationOffset = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_get__rightHandSpawnOffsetAndroid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightHandSpawnOffsetAndroid;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_get__rightHandSpawnOffsetAndroid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightHandSpawnOffsetAndroid;
}
constexpr void GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_set__rightHandSpawnOffsetAndroid(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rightHandSpawnOffsetAndroid = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_get__leftHandSpawnOffsetAndroid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftHandSpawnOffsetAndroid;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_get__leftHandSpawnOffsetAndroid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftHandSpawnOffsetAndroid;
}
constexpr void GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_set__leftHandSpawnOffsetAndroid(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____leftHandSpawnOffsetAndroid = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_get__rotationOffsetAndroid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationOffsetAndroid;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_get__rotationOffsetAndroid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationOffsetAndroid;
}
constexpr void GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_set__rotationOffsetAndroid(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rotationOffsetAndroid = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_get__rotationOffsetWindows()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationOffsetWindows;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_get__rotationOffsetWindows() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationOffsetWindows;
}
constexpr void GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_set__rotationOffsetWindows(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rotationOffsetWindows = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_get__rightHandSpawnOffsetWindows()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightHandSpawnOffsetWindows;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_get__rightHandSpawnOffsetWindows() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightHandSpawnOffsetWindows;
}
constexpr void GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_set__rightHandSpawnOffsetWindows(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rightHandSpawnOffsetWindows = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_get__leftHandSpawnOffsetWindows()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftHandSpawnOffsetWindows;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_get__leftHandSpawnOffsetWindows() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftHandSpawnOffsetWindows;
}
constexpr void GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_set__leftHandSpawnOffsetWindows(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____leftHandSpawnOffsetWindows = value;
}
constexpr float_t& GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_get__activateDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activateDistance;
}
constexpr float_t const& GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_get__activateDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activateDistance;
}
constexpr void GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_set__activateDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activateDistance = value;
}
constexpr float_t& GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_get__snapToNeckDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snapToNeckDistance;
}
constexpr float_t const& GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_get__snapToNeckDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snapToNeckDistance;
}
constexpr void GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_set__snapToNeckDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____snapToNeckDistance = value;
}
constexpr ::UnityW<::UnityEngine::LineRenderer>& GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_get__cameraStrapRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraStrapRenderer;
}
constexpr ::UnityW<::UnityEngine::LineRenderer> const& GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_get__cameraStrapRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraStrapRenderer;
}
constexpr void GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_set__cameraStrapRenderer(::UnityW<::UnityEngine::LineRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cameraStrapRenderer = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_get__cameraStrapPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraStrapPoints;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_get__cameraStrapPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraStrapPoints;
}
constexpr void GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_set__cameraStrapPoints(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cameraStrapPoints = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_get__normalColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____normalColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_get__normalColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____normalColor;
}
constexpr void GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_set__normalColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____normalColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_get__ghostColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ghostColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_get__ghostColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ghostColor;
}
constexpr void GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_set__ghostColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ghostColor = value;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtDummyTablet>& GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_get__dummyTablet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dummyTablet;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtDummyTablet> const& GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_get__dummyTablet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dummyTablet;
}
constexpr void GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_set__dummyTablet(::UnityW<::Liv::Lck::GorillaTag::GtDummyTablet>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dummyTablet = value;
}
constexpr ::UnityW<::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic>& GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_get__swapTablet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____swapTablet;
}
constexpr ::UnityW<::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic> const& GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_get__swapTablet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____swapTablet;
}
constexpr void GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_set__swapTablet(::UnityW<::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____swapTablet = value;
}
constexpr ::UnityW<::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic>& GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_get__swapEmobi()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____swapEmobi;
}
constexpr ::UnityW<::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic> const& GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_get__swapEmobi() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____swapEmobi;
}
constexpr void GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_set__swapEmobi(::UnityW<::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____swapEmobi = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_get__followTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____followTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_get__followTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____followTransform;
}
constexpr void GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_set__followTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____followTransform = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_get__cameraStrapPositions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraStrapPositions;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_get__cameraStrapPositions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraStrapPositions;
}
constexpr void GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_set__cameraStrapPositions(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cameraStrapPositions = value;
}
constexpr ::GlobalNamespace::TabletSpawnInstance*& GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_get__tabletSpawnInstance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tabletSpawnInstance;
}
constexpr ::GlobalNamespace::TabletSpawnInstance* const& GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_get__tabletSpawnInstance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tabletSpawnInstance;
}
constexpr void GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_set__tabletSpawnInstance(::GlobalNamespace::TabletSpawnInstance*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tabletSpawnInstance = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_get__localRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_get__localRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localRig;
}
constexpr void GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_set__localRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____localRig = value;
}
constexpr bool& GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_get__shouldMoveCameraToNeck()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shouldMoveCameraToNeck;
}
constexpr bool const& GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_get__shouldMoveCameraToNeck() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shouldMoveCameraToNeck;
}
constexpr void GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_set__shouldMoveCameraToNeck(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____shouldMoveCameraToNeck = value;
}
constexpr ::System::Nullable_1<::Liv::Lck::GorillaTag::CameraMode>& GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_get__returnToCameraMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____returnToCameraMode;
}
constexpr ::System::Nullable_1<::Liv::Lck::GorillaTag::CameraMode> const& GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_get__returnToCameraMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____returnToCameraMode;
}
constexpr void GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_set__returnToCameraMode(::System::Nullable_1<::Liv::Lck::GorillaTag::CameraMode>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____returnToCameraMode = value;
}
constexpr ::GlobalNamespace::LckBodyCameraSpawner_CameraState& GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_get__cameraState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraState;
}
constexpr ::GlobalNamespace::LckBodyCameraSpawner_CameraState const& GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_get__cameraState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraState;
}
constexpr void GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_set__cameraState(::GlobalNamespace::LckBodyCameraSpawner_CameraState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cameraState = value;
}
constexpr ::GlobalNamespace::LckBodyCameraSpawner_CameraPosition& GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_get__cameraPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraPosition;
}
constexpr ::GlobalNamespace::LckBodyCameraSpawner_CameraPosition const& GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_get__cameraPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraPosition;
}
constexpr void GlobalNamespace::LckBodyCameraSpawner::__cordl_internal_set__cameraPosition(::GlobalNamespace::LckBodyCameraSpawner_CameraPosition  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cameraPosition = value;
}
inline void GlobalNamespace::LckBodyCameraSpawner::setStaticF_OnCameraStateChange(::GlobalNamespace::LckBodyCameraSpawner_CameraStateDelegate*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::LckBodyCameraSpawner_CameraStateDelegate*, "OnCameraStateChange", ::GlobalNamespace::LckBodyCameraSpawner*>(std::forward<::GlobalNamespace::LckBodyCameraSpawner_CameraStateDelegate*>(value));
}
inline ::GlobalNamespace::LckBodyCameraSpawner_CameraStateDelegate* GlobalNamespace::LckBodyCameraSpawner::getStaticF_OnCameraStateChange()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::LckBodyCameraSpawner_CameraStateDelegate*, "OnCameraStateChange", ::GlobalNamespace::LckBodyCameraSpawner*>();
}
inline void GlobalNamespace::LckBodyCameraSpawner::SetFollowTransform(::UnityEngine::Transform*  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner*>(),
                        {"SetFollowTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transform);
}
inline ::GlobalNamespace::TabletSpawnInstance* GlobalNamespace::LckBodyCameraSpawner::get_tabletSpawnInstance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner*>(),
                        {"get_tabletSpawnInstance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TabletSpawnInstance*>(this, ___internal_method);
}
inline void GlobalNamespace::LckBodyCameraSpawner::add_OnCameraStateChange(::GlobalNamespace::LckBodyCameraSpawner_CameraStateDelegate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner*>(),
                        {"add_OnCameraStateChange", {}, {::i2c::type_of<::GlobalNamespace::LckBodyCameraSpawner_CameraStateDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::LckBodyCameraSpawner::remove_OnCameraStateChange(::GlobalNamespace::LckBodyCameraSpawner_CameraStateDelegate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner*>(),
                        {"remove_OnCameraStateChange", {}, {::i2c::type_of<::GlobalNamespace::LckBodyCameraSpawner_CameraStateDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::GlobalNamespace::LckBodyCameraSpawner_CameraState GlobalNamespace::LckBodyCameraSpawner::get_cameraState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner*>(),
                        {"get_cameraState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LckBodyCameraSpawner_CameraState>(this, ___internal_method);
}
inline void GlobalNamespace::LckBodyCameraSpawner::set_cameraState(::GlobalNamespace::LckBodyCameraSpawner_CameraState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner*>(),
                        {"set_cameraState", {}, {::i2c::type_of<::GlobalNamespace::LckBodyCameraSpawner_CameraState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LckBodyCameraSpawner::SetPreviewActive(bool  isActive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner*>(),
                        {"SetPreviewActive", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isActive);
}
inline ::GlobalNamespace::LckBodyCameraSpawner_CameraPosition GlobalNamespace::LckBodyCameraSpawner::get_cameraPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner*>(),
                        {"get_cameraPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LckBodyCameraSpawner_CameraPosition>(this, ___internal_method);
}
inline void GlobalNamespace::LckBodyCameraSpawner::set_cameraPosition(::GlobalNamespace::LckBodyCameraSpawner_CameraPosition  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner*>(),
                        {"set_cameraPosition", {}, {::i2c::type_of<::GlobalNamespace::LckBodyCameraSpawner_CameraPosition>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::LckBodyCameraSpawner::get_cameraVisible()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner*>(),
                        {"get_cameraVisible", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::LckBodyCameraSpawner::set_cameraVisible(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner*>(),
                        {"set_cameraVisible", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LckBodyCameraSpawner::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LckBodyCameraSpawner::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LckBodyCameraSpawner::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LckBodyCameraSpawner::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LckBodyCameraSpawner::Tick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LckBodyCameraSpawner::OnZoneChanged(::ArrayW<::GlobalNamespace::ZoneData*>  zones)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner*>(),
                        {"OnZoneChanged", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::ZoneData*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, zones);
}
inline void GlobalNamespace::LckBodyCameraSpawner::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LckBodyCameraSpawner::ManuallySetCameraOnNeck()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner*>(),
                        {"ManuallySetCameraOnNeck", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LckBodyCameraSpawner::OnCameraModelReleased()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner*>(),
                        {"OnCameraModelReleased", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LckBodyCameraSpawner::SpawnCamera(::GlobalNamespace::GorillaGrabber*  overrideGorillaGrabber, ::UnityEngine::Transform*  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner*>(),
                        {"SpawnCamera", {}, {::i2c::type_of<::GlobalNamespace::GorillaGrabber*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, overrideGorillaGrabber, transform);
}
inline bool GlobalNamespace::LckBodyCameraSpawner::ShouldSpawnCamera(::UnityEngine::Transform*  gorillaGrabberTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner*>(),
                        {"ShouldSpawnCamera", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gorillaGrabberTransform);
}
inline void GlobalNamespace::LckBodyCameraSpawner::ChangeCameraModelParent(::UnityEngine::Transform*  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner*>(),
                        {"ChangeCameraModelParent", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transform);
}
inline void GlobalNamespace::LckBodyCameraSpawner::InitCameraStrap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner*>(),
                        {"InitCameraStrap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LckBodyCameraSpawner::UpdateCameraStrap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner*>(),
                        {"UpdateCameraStrap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LckBodyCameraSpawner::ResetCameraModel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner*>(),
                        {"ResetCameraModel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::VRRig> GlobalNamespace::LckBodyCameraSpawner::GetLocalRig()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner*>(),
                        {"GetLocalRig", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::VRRig>>(this, ___internal_method);
}
inline bool GlobalNamespace::LckBodyCameraSpawner::IsSlingshotHeldInHand(::by_ref<bool>  leftHand, ::by_ref<bool>  rightHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner*>(),
                        {"IsSlingshotHeldInHand", {}, {::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, leftHand, rightHand);
}
inline bool GlobalNamespace::LckBodyCameraSpawner::IsSlingshotActiveInHierarchy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner*>(),
                        {"IsSlingshotActiveInHierarchy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::LckBodyCameraSpawner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LckBodyCameraSpawner* GlobalNamespace::LckBodyCameraSpawner::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LckBodyCameraSpawner*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LckBodyCameraSpawner::LckBodyCameraSpawner()   {
}
//  Writing Method size for method: ::GlobalNamespace::LckBodyCameraSpawner_CameraStateDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckBodyCameraSpawner_CameraStateDelegate::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::LckBodyCameraSpawner_CameraStateDelegate::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x56c54c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner_CameraStateDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckBodyCameraSpawner_CameraStateDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckBodyCameraSpawner_CameraStateDelegate::*)(::GlobalNamespace::LckBodyCameraSpawner_CameraState)>(&::GlobalNamespace::LckBodyCameraSpawner_CameraStateDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x56c5560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner_CameraStateDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner_CameraStateDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckBodyCameraSpawner_CameraStateDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::LckBodyCameraSpawner_CameraStateDelegate::*)(::GlobalNamespace::LckBodyCameraSpawner_CameraState, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::LckBodyCameraSpawner_CameraStateDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x56c5574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner_CameraStateDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner_CameraStateDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckBodyCameraSpawner_CameraStateDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckBodyCameraSpawner_CameraStateDelegate::*)(::System::IAsyncResult*)>(&::GlobalNamespace::LckBodyCameraSpawner_CameraStateDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x56c55f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner_CameraStateDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner_CameraStateDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LckBodyCameraSpawner_CameraStateDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner_CameraStateDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::LckBodyCameraSpawner_CameraStateDelegate::Invoke(::GlobalNamespace::LckBodyCameraSpawner_CameraState  state)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner_CameraStateDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline ::System::IAsyncResult* GlobalNamespace::LckBodyCameraSpawner_CameraStateDelegate::BeginInvoke(::GlobalNamespace::LckBodyCameraSpawner_CameraState  state, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner_CameraStateDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, state, callback, object);
}
inline void GlobalNamespace::LckBodyCameraSpawner_CameraStateDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::LckBodyCameraSpawner_CameraStateDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::LckBodyCameraSpawner_CameraStateDelegate* GlobalNamespace::LckBodyCameraSpawner_CameraStateDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LckBodyCameraSpawner_CameraStateDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LckBodyCameraSpawner_CameraStateDelegate::LckBodyCameraSpawner_CameraStateDelegate()   {
}
