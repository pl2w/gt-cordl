#pragma once
// IWYU pragma private; include "GorillaLocomotion/Swimming/WaterVolume.hpp"
#include "GorillaLocomotion/zzzz__GTPlayer_LiquidType_impl.hpp"
#include "GorillaTag/GuidedRefs/zzzz__BaseGuidedRefTargetMono_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaLocomotion/Swimming/zzzz__WaterVolume_def.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__WaterVolumeProperties_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemTick_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaLocomotion/Swimming/zzzz__WaterCurrent_def.hpp"
#include "GorillaLocomotion/Swimming/zzzz__WaterOverlappingCollider_def.hpp"
#include "GorillaLocomotion/Swimming/zzzz__WaterParameters_def.hpp"
#include "GorillaLocomotion/Swimming/zzzz__WaterVolume_SurfaceQuery_def.hpp"
#include "GorillaLocomotion/Swimming/zzzz__WaterVolume_def.hpp"
#include "GorillaLocomotion/zzzz__GTPlayer_LiquidType_def.hpp"
#include "GorillaTag/GuidedRefs/zzzz__GuidedRefTargetIdSO_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__MeshCollider_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaLocomotion::Swimming::WaterVolume.get_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaLocomotion::Swimming::WaterVolume::*)()>(&::GorillaLocomotion::Swimming::WaterVolume::get_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ce492c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"get_TickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Swimming::WaterVolume.set_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Swimming::WaterVolume::*)(bool)>(&::GorillaLocomotion::Swimming::WaterVolume::set_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ce4934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Swimming::WaterVolume.add_ColliderEnteredVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Swimming::WaterVolume::*)(::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*)>(&::GorillaLocomotion::Swimming::WaterVolume::add_ColliderEnteredVolume)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5ce493c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"add_ColliderEnteredVolume", {}, {::i2c::type_of<::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Swimming::WaterVolume.remove_ColliderEnteredVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Swimming::WaterVolume::*)(::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*)>(&::GorillaLocomotion::Swimming::WaterVolume::remove_ColliderEnteredVolume)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5ce49d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"remove_ColliderEnteredVolume", {}, {::i2c::type_of<::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Swimming::WaterVolume.add_ColliderExitedVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Swimming::WaterVolume::*)(::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*)>(&::GorillaLocomotion::Swimming::WaterVolume::add_ColliderExitedVolume)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5ce4a74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"add_ColliderExitedVolume", {}, {::i2c::type_of<::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Swimming::WaterVolume.remove_ColliderExitedVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Swimming::WaterVolume::*)(::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*)>(&::GorillaLocomotion::Swimming::WaterVolume::remove_ColliderExitedVolume)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5ce4b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"remove_ColliderExitedVolume", {}, {::i2c::type_of<::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Swimming::WaterVolume.add_ColliderEnteredWater
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Swimming::WaterVolume::*)(::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*)>(&::GorillaLocomotion::Swimming::WaterVolume::add_ColliderEnteredWater)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5ce4bac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"add_ColliderEnteredWater", {}, {::i2c::type_of<::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Swimming::WaterVolume.remove_ColliderEnteredWater
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Swimming::WaterVolume::*)(::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*)>(&::GorillaLocomotion::Swimming::WaterVolume::remove_ColliderEnteredWater)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5ce4c48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"remove_ColliderEnteredWater", {}, {::i2c::type_of<::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Swimming::WaterVolume.add_ColliderExitedWater
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Swimming::WaterVolume::*)(::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*)>(&::GorillaLocomotion::Swimming::WaterVolume::add_ColliderExitedWater)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5ce4ce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"add_ColliderExitedWater", {}, {::i2c::type_of<::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Swimming::WaterVolume.remove_ColliderExitedWater
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Swimming::WaterVolume::*)(::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*)>(&::GorillaLocomotion::Swimming::WaterVolume::remove_ColliderExitedWater)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5ce4d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"remove_ColliderExitedWater", {}, {::i2c::type_of<::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Swimming::WaterVolume.get_LiquidType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GTPlayer_LiquidType (::GorillaLocomotion::Swimming::WaterVolume::*)()>(&::GorillaLocomotion::Swimming::WaterVolume::get_LiquidType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ce4e1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"get_LiquidType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Swimming::WaterVolume.get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GorillaLocomotion::Swimming::WaterCurrent> (::GorillaLocomotion::Swimming::WaterVolume::*)()>(&::GorillaLocomotion::Swimming::WaterVolume::get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ce4e24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Swimming::WaterVolume.get_Parameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GorillaLocomotion::Swimming::WaterParameters> (::GorillaLocomotion::Swimming::WaterVolume::*)()>(&::GorillaLocomotion::Swimming::WaterVolume::get_Parameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ce4e2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"get_Parameters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Swimming::WaterVolume.get_PlayerVRRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::VRRig> (::GorillaLocomotion::Swimming::WaterVolume::*)()>(&::GorillaLocomotion::Swimming::WaterVolume::get_PlayerVRRig)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5ce4e34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"get_PlayerVRRig", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Swimming::WaterVolume.GetSurfaceQueryForPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaLocomotion::Swimming::WaterVolume::*)(::UnityEngine::Vector3, ::by_ref<::GlobalNamespace::WaterVolume_SurfaceQuery>, bool)>(&::GorillaLocomotion::Swimming::WaterVolume::GetSurfaceQueryForPoint)> {
  constexpr static std::size_t size = 0xb24;
  constexpr static std::size_t addrs = 0x5cdf874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"GetSurfaceQueryForPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::GlobalNamespace::WaterVolume_SurfaceQuery>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Swimming::WaterVolume.HitOutsideSurfaceOfMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaLocomotion::Swimming::WaterVolume::*)(::UnityEngine::Vector3, ::UnityEngine::MeshCollider*, ::UnityEngine::RaycastHit)>(&::GorillaLocomotion::Swimming::WaterVolume::HitOutsideSurfaceOfMesh)> {
  constexpr static std::size_t size = 0x5ec;
  constexpr static std::size_t addrs = 0x5ce4f48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"HitOutsideSurfaceOfMesh", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::MeshCollider*>(), ::i2c::type_of<::UnityEngine::RaycastHit>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Swimming::WaterVolume.DebugDrawMeshColliderHitTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Swimming::WaterVolume::*)(::UnityEngine::RaycastHit)>(&::GorillaLocomotion::Swimming::WaterVolume::DebugDrawMeshColliderHitTriangle)> {
  constexpr static std::size_t size = 0x4f4;
  constexpr static std::size_t addrs = 0x5ce5534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"DebugDrawMeshColliderHitTriangle", {}, {::i2c::type_of<::UnityEngine::RaycastHit>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Swimming::WaterVolume.RaycastWater
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaLocomotion::Swimming::WaterVolume::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::RaycastHit>, float_t, int32_t)>(&::GorillaLocomotion::Swimming::WaterVolume::RaycastWater)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5ce5a28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"RaycastWater", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Swimming::WaterVolume.CheckColliderInVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaLocomotion::Swimming::WaterVolume::*)(::UnityEngine::Collider*, ::by_ref<bool>, ::by_ref<bool>)>(&::GorillaLocomotion::Swimming::WaterVolume::CheckColliderInVolume)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5ce5bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"CheckColliderInVolume", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Swimming::WaterVolume.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Swimming::WaterVolume::*)()>(&::GorillaLocomotion::Swimming::WaterVolume::Awake)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5ce5d38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                    {::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Swimming::WaterVolume.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Swimming::WaterVolume::*)()>(&::GorillaLocomotion::Swimming::WaterVolume::OnEnable)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5ce5ffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Swimming::WaterVolume.RefreshColliders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Swimming::WaterVolume::*)()>(&::GorillaLocomotion::Swimming::WaterVolume::RefreshColliders)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x5ce5d54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"RefreshColliders", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Swimming::WaterVolume.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Swimming::WaterVolume::*)()>(&::GorillaLocomotion::Swimming::WaterVolume::OnDisable)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x5ce6068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Swimming::WaterVolume.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Swimming::WaterVolume::*)()>(&::GorillaLocomotion::Swimming::WaterVolume::Tick)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x5ce6568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Swimming::WaterVolume.RemoveCollidersOutsideVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Swimming::WaterVolume::*)(float_t)>(&::GorillaLocomotion::Swimming::WaterVolume::RemoveCollidersOutsideVolume)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x5ce62e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"RemoveCollidersOutsideVolume", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Swimming::WaterVolume.CheckColliderAgainstWater
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Swimming::WaterVolume::*)(::by_ref<::GorillaLocomotion::Swimming::WaterOverlappingCollider>, float_t)>(&::GorillaLocomotion::Swimming::WaterVolume::CheckColliderAgainstWater)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x5ce6760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"CheckColliderAgainstWater", {}, {::i2c::type_of<::by_ref<::GorillaLocomotion::Swimming::WaterOverlappingCollider>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Swimming::WaterVolume.GetColliderVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GorillaLocomotion::Swimming::WaterVolume::*)(::by_ref<::GorillaLocomotion::Swimming::WaterOverlappingCollider>)>(&::GorillaLocomotion::Swimming::WaterVolume::GetColliderVelocity)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x5ce771c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"GetColliderVelocity", {}, {::i2c::type_of<::by_ref<::GorillaLocomotion::Swimming::WaterOverlappingCollider>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Swimming::WaterVolume.OnWaterSurfaceEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Swimming::WaterVolume::*)(::by_ref<::GorillaLocomotion::Swimming::WaterOverlappingCollider>)>(&::GorillaLocomotion::Swimming::WaterVolume::OnWaterSurfaceEnter)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x5ce6cd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"OnWaterSurfaceEnter", {}, {::i2c::type_of<::by_ref<::GorillaLocomotion::Swimming::WaterOverlappingCollider>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Swimming::WaterVolume.OnWaterSurfaceExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Swimming::WaterVolume::*)(::by_ref<::GorillaLocomotion::Swimming::WaterOverlappingCollider>, float_t)>(&::GorillaLocomotion::Swimming::WaterVolume::OnWaterSurfaceExit)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x5ce6f6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"OnWaterSurfaceExit", {}, {::i2c::type_of<::by_ref<::GorillaLocomotion::Swimming::WaterOverlappingCollider>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Swimming::WaterVolume.ColliderOutOfWaterUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Swimming::WaterVolume::*)(::by_ref<::GorillaLocomotion::Swimming::WaterOverlappingCollider>, float_t)>(&::GorillaLocomotion::Swimming::WaterVolume::ColliderOutOfWaterUpdate)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5ce7318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"ColliderOutOfWaterUpdate", {}, {::i2c::type_of<::by_ref<::GorillaLocomotion::Swimming::WaterOverlappingCollider>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Swimming::WaterVolume.ColliderInWaterUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Swimming::WaterVolume::*)(::by_ref<::GorillaLocomotion::Swimming::WaterOverlappingCollider>, float_t)>(&::GorillaLocomotion::Swimming::WaterVolume::ColliderInWaterUpdate)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x5ce7400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"ColliderInWaterUpdate", {}, {::i2c::type_of<::by_ref<::GorillaLocomotion::Swimming::WaterOverlappingCollider>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Swimming::WaterVolume.TryRegisterOwnershipOfCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Swimming::WaterVolume::*)(::UnityEngine::Collider*, bool, bool)>(&::GorillaLocomotion::Swimming::WaterVolume::TryRegisterOwnershipOfCollider)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5ce6b1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"TryRegisterOwnershipOfCollider", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Swimming::WaterVolume.UnregisterOwnershipOfCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Swimming::WaterVolume::*)(::UnityEngine::Collider*)>(&::GorillaLocomotion::Swimming::WaterVolume::UnregisterOwnershipOfCollider)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5ce764c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"UnregisterOwnershipOfCollider", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Swimming::WaterVolume.HasOwnershipOfCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaLocomotion::Swimming::WaterVolume::*)(::UnityEngine::Collider*)>(&::GorillaLocomotion::Swimming::WaterVolume::HasOwnershipOfCollider)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5ce7238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"HasOwnershipOfCollider", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Swimming::WaterVolume.CanPlayerSwim
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaLocomotion::Swimming::WaterVolume::*)()>(&::GorillaLocomotion::Swimming::WaterVolume::CanPlayerSwim)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5ce79a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                    {::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Swimming::WaterVolume.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Swimming::WaterVolume::*)(::UnityEngine::Collider*)>(&::GorillaLocomotion::Swimming::WaterVolume::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x6e8;
  constexpr static std::size_t addrs = 0x5ce7abc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Swimming::WaterVolume.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Swimming::WaterVolume::*)(::UnityEngine::Collider*)>(&::GorillaLocomotion::Swimming::WaterVolume::OnTriggerExit)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x5ce81a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Swimming::WaterVolume.SetPropertiesFromPlaceholder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Swimming::WaterVolume::*)(::GT_CustomMapSupportRuntime::WaterVolumeProperties, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*, ::GorillaLocomotion::Swimming::WaterParameters*)>(&::GorillaLocomotion::Swimming::WaterVolume::SetPropertiesFromPlaceholder)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5ce8410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"SetPropertiesFromPlaceholder", {}, {::i2c::type_of<::GT_CustomMapSupportRuntime::WaterVolumeProperties>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*>(), ::i2c::type_of<::GorillaLocomotion::Swimming::WaterParameters*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Swimming::WaterVolume._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Swimming::WaterVolume::*)()>(&::GorillaLocomotion::Swimming::WaterVolume::_ctor)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5ce84f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_get_surfacePlane()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___surfacePlane;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_get_surfacePlane() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___surfacePlane;
}
constexpr void GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_set_surfacePlane(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___surfacePlane = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshCollider>>*& GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_get_surfaceColliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___surfaceColliders;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshCollider>>* const& GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_get_surfaceColliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___surfaceColliders;
}
constexpr void GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_set_surfaceColliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshCollider>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___surfaceColliders = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_get_volumeColliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volumeColliders;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_get_volumeColliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volumeColliders;
}
constexpr void GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_set_volumeColliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___volumeColliders = value;
}
constexpr ::GlobalNamespace::GTPlayer_LiquidType& GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_get_liquidType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___liquidType;
}
constexpr ::GlobalNamespace::GTPlayer_LiquidType const& GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_get_liquidType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___liquidType;
}
constexpr void GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_set_liquidType(::GlobalNamespace::GTPlayer_LiquidType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___liquidType = value;
}
constexpr ::UnityW<::GorillaLocomotion::Swimming::WaterCurrent>& GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_get_waterCurrent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waterCurrent;
}
constexpr ::UnityW<::GorillaLocomotion::Swimming::WaterCurrent> const& GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_get_waterCurrent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waterCurrent;
}
constexpr void GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_set_waterCurrent(::UnityW<::GorillaLocomotion::Swimming::WaterCurrent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waterCurrent = value;
}
constexpr ::UnityW<::GorillaLocomotion::Swimming::WaterParameters>& GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_get_waterParams()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waterParams;
}
constexpr ::UnityW<::GorillaLocomotion::Swimming::WaterParameters> const& GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_get_waterParams() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waterParams;
}
constexpr void GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_set_waterParams(::UnityW<::GorillaLocomotion::Swimming::WaterParameters>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waterParams = value;
}
constexpr bool& GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_get_isStationary()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isStationary;
}
constexpr bool const& GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_get_isStationary() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isStationary;
}
constexpr void GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_set_isStationary(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isStationary = value;
}
constexpr bool& GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_get_isMonkeblock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isMonkeblock;
}
constexpr bool const& GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_get_isMonkeblock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isMonkeblock;
}
constexpr void GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_set_isMonkeblock(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isMonkeblock = value;
}
constexpr bool& GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_get__TickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr bool const& GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_get__TickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr void GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_set__TickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TickRunning_k__BackingField = value;
}
constexpr ::ArrayW<int32_t>& GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_get_sharedMeshTris()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharedMeshTris;
}
constexpr ::ArrayW<int32_t> const& GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_get_sharedMeshTris() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharedMeshTris;
}
constexpr void GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_set_sharedMeshTris(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sharedMeshTris = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_get_sharedMeshVerts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharedMeshVerts;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_get_sharedMeshVerts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharedMeshVerts;
}
constexpr void GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_set_sharedMeshVerts(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sharedMeshVerts = value;
}
constexpr ::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*& GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_get_ColliderEnteredVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ColliderEnteredVolume;
}
constexpr ::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent* const& GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_get_ColliderEnteredVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ColliderEnteredVolume;
}
constexpr void GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_set_ColliderEnteredVolume(::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ColliderEnteredVolume = value;
}
constexpr ::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*& GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_get_ColliderExitedVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ColliderExitedVolume;
}
constexpr ::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent* const& GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_get_ColliderExitedVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ColliderExitedVolume;
}
constexpr void GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_set_ColliderExitedVolume(::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ColliderExitedVolume = value;
}
constexpr ::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*& GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_get_ColliderEnteredWater()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ColliderEnteredWater;
}
constexpr ::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent* const& GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_get_ColliderEnteredWater() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ColliderEnteredWater;
}
constexpr void GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_set_ColliderEnteredWater(::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ColliderEnteredWater = value;
}
constexpr ::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*& GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_get_ColliderExitedWater()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ColliderExitedWater;
}
constexpr ::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent* const& GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_get_ColliderExitedWater() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ColliderExitedWater;
}
constexpr void GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_set_ColliderExitedWater(::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ColliderExitedWater = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_get_playerVRRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerVRRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_get_playerVRRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerVRRig;
}
constexpr void GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_set_playerVRRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerVRRig = value;
}
constexpr float_t& GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_get_volumeMaxHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volumeMaxHeight;
}
constexpr float_t const& GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_get_volumeMaxHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volumeMaxHeight;
}
constexpr void GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_set_volumeMaxHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___volumeMaxHeight = value;
}
constexpr float_t& GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_get_volumeMinHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volumeMinHeight;
}
constexpr float_t const& GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_get_volumeMinHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volumeMinHeight;
}
constexpr void GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_set_volumeMinHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___volumeMinHeight = value;
}
constexpr bool& GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_get_debugDrawSurfaceCast()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugDrawSurfaceCast;
}
constexpr bool const& GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_get_debugDrawSurfaceCast() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugDrawSurfaceCast;
}
constexpr void GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_set_debugDrawSurfaceCast(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugDrawSurfaceCast = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_get_triggerCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerCollider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_get_triggerCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerCollider;
}
constexpr void GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_set_triggerCollider(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggerCollider = value;
}
constexpr ::System::Collections::Generic::List_1<::GorillaLocomotion::Swimming::WaterOverlappingCollider>*& GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_get_persistentColliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___persistentColliders;
}
constexpr ::System::Collections::Generic::List_1<::GorillaLocomotion::Swimming::WaterOverlappingCollider>* const& GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_get_persistentColliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___persistentColliders;
}
constexpr void GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_set_persistentColliders(::System::Collections::Generic::List_1<::GorillaLocomotion::Swimming::WaterOverlappingCollider>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___persistentColliders = value;
}
constexpr ::UnityW<::GorillaTag::GuidedRefs::GuidedRefTargetIdSO>& GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_get__guidedRefTargetId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____guidedRefTargetId;
}
constexpr ::UnityW<::GorillaTag::GuidedRefs::GuidedRefTargetIdSO> const& GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_get__guidedRefTargetId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____guidedRefTargetId;
}
constexpr void GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_set__guidedRefTargetId(::UnityW<::GorillaTag::GuidedRefs::GuidedRefTargetIdSO>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____guidedRefTargetId = value;
}
constexpr ::UnityW<::UnityEngine::Object>& GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_get__guidedRefTargetObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____guidedRefTargetObject;
}
constexpr ::UnityW<::UnityEngine::Object> const& GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_get__guidedRefTargetObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____guidedRefTargetObject;
}
constexpr void GorillaLocomotion::Swimming::WaterVolume::__cordl_internal_set__guidedRefTargetObject(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____guidedRefTargetObject = value;
}
inline void GorillaLocomotion::Swimming::WaterVolume::setStaticF_splashRPCSendTimes(::ArrayW<float_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<float_t>, "splashRPCSendTimes", ::GorillaLocomotion::Swimming::WaterVolume*>(std::forward<::ArrayW<float_t>>(value));
}
inline ::ArrayW<float_t> GorillaLocomotion::Swimming::WaterVolume::getStaticF_splashRPCSendTimes()  {
return ::cordl_internals::getStaticField<::ArrayW<float_t>, "splashRPCSendTimes", ::GorillaLocomotion::Swimming::WaterVolume*>();
}
inline void GorillaLocomotion::Swimming::WaterVolume::setStaticF_sharedColliderRegistry(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityW<::GorillaLocomotion::Swimming::WaterVolume>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityW<::GorillaLocomotion::Swimming::WaterVolume>>*, "sharedColliderRegistry", ::GorillaLocomotion::Swimming::WaterVolume*>(std::forward<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityW<::GorillaLocomotion::Swimming::WaterVolume>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityW<::GorillaLocomotion::Swimming::WaterVolume>>* GorillaLocomotion::Swimming::WaterVolume::getStaticF_sharedColliderRegistry()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityW<::GorillaLocomotion::Swimming::WaterVolume>>*, "sharedColliderRegistry", ::GorillaLocomotion::Swimming::WaterVolume*>();
}
inline void GorillaLocomotion::Swimming::WaterVolume::setStaticF_meshTrianglesDict(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Mesh>,::ArrayW<int32_t>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Mesh>,::ArrayW<int32_t>>*, "meshTrianglesDict", ::GorillaLocomotion::Swimming::WaterVolume*>(std::forward<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Mesh>,::ArrayW<int32_t>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Mesh>,::ArrayW<int32_t>>* GorillaLocomotion::Swimming::WaterVolume::getStaticF_meshTrianglesDict()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Mesh>,::ArrayW<int32_t>>*, "meshTrianglesDict", ::GorillaLocomotion::Swimming::WaterVolume*>();
}
inline void GorillaLocomotion::Swimming::WaterVolume::setStaticF_meshVertsDict(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Mesh>,::ArrayW<::UnityEngine::Vector3>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Mesh>,::ArrayW<::UnityEngine::Vector3>>*, "meshVertsDict", ::GorillaLocomotion::Swimming::WaterVolume*>(std::forward<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Mesh>,::ArrayW<::UnityEngine::Vector3>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Mesh>,::ArrayW<::UnityEngine::Vector3>>* GorillaLocomotion::Swimming::WaterVolume::getStaticF_meshVertsDict()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Mesh>,::ArrayW<::UnityEngine::Vector3>>*, "meshVertsDict", ::GorillaLocomotion::Swimming::WaterVolume*>();
}
inline bool GorillaLocomotion::Swimming::WaterVolume::get_TickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"get_TickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaLocomotion::Swimming::WaterVolume::set_TickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaLocomotion::Swimming::WaterVolume::add_ColliderEnteredVolume(::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"add_ColliderEnteredVolume", {}, {::i2c::type_of<::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaLocomotion::Swimming::WaterVolume::remove_ColliderEnteredVolume(::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"remove_ColliderEnteredVolume", {}, {::i2c::type_of<::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaLocomotion::Swimming::WaterVolume::add_ColliderExitedVolume(::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"add_ColliderExitedVolume", {}, {::i2c::type_of<::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaLocomotion::Swimming::WaterVolume::remove_ColliderExitedVolume(::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"remove_ColliderExitedVolume", {}, {::i2c::type_of<::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaLocomotion::Swimming::WaterVolume::add_ColliderEnteredWater(::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"add_ColliderEnteredWater", {}, {::i2c::type_of<::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaLocomotion::Swimming::WaterVolume::remove_ColliderEnteredWater(::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"remove_ColliderEnteredWater", {}, {::i2c::type_of<::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaLocomotion::Swimming::WaterVolume::add_ColliderExitedWater(::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"add_ColliderExitedWater", {}, {::i2c::type_of<::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaLocomotion::Swimming::WaterVolume::remove_ColliderExitedWater(::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"remove_ColliderExitedWater", {}, {::i2c::type_of<::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::GTPlayer_LiquidType GorillaLocomotion::Swimming::WaterVolume::get_LiquidType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"get_LiquidType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GTPlayer_LiquidType>(this, ___internal_method);
}
inline ::UnityW<::GorillaLocomotion::Swimming::WaterCurrent> GorillaLocomotion::Swimming::WaterVolume::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GorillaLocomotion::Swimming::WaterCurrent>>(this, ___internal_method);
}
inline ::UnityW<::GorillaLocomotion::Swimming::WaterParameters> GorillaLocomotion::Swimming::WaterVolume::get_Parameters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"get_Parameters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GorillaLocomotion::Swimming::WaterParameters>>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::VRRig> GorillaLocomotion::Swimming::WaterVolume::get_PlayerVRRig()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"get_PlayerVRRig", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::VRRig>>(this, ___internal_method);
}
inline bool GorillaLocomotion::Swimming::WaterVolume::GetSurfaceQueryForPoint(::UnityEngine::Vector3  point, ::by_ref<::GlobalNamespace::WaterVolume_SurfaceQuery>  result, bool  debugDraw)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"GetSurfaceQueryForPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::GlobalNamespace::WaterVolume_SurfaceQuery>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, point, result, debugDraw);
}
inline bool GorillaLocomotion::Swimming::WaterVolume::HitOutsideSurfaceOfMesh(::UnityEngine::Vector3  castDir, ::UnityEngine::MeshCollider*  meshCollider, ::UnityEngine::RaycastHit  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"HitOutsideSurfaceOfMesh", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::MeshCollider*>(), ::i2c::type_of<::UnityEngine::RaycastHit>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, castDir, meshCollider, hit);
}
inline void GorillaLocomotion::Swimming::WaterVolume::DebugDrawMeshColliderHitTriangle(::UnityEngine::RaycastHit  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"DebugDrawMeshColliderHitTriangle", {}, {::i2c::type_of<::UnityEngine::RaycastHit>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hit);
}
inline bool GorillaLocomotion::Swimming::WaterVolume::RaycastWater(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::by_ref<::UnityEngine::RaycastHit>  hit, float_t  distance, int32_t  layerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"RaycastWater", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, origin, direction, hit, distance, layerMask);
}
inline bool GorillaLocomotion::Swimming::WaterVolume::CheckColliderInVolume(::UnityEngine::Collider*  collider, ::by_ref<bool>  inWater, ::by_ref<bool>  surfaceDetected)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"CheckColliderInVolume", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, collider, inWater, surfaceDetected);
}
inline void GorillaLocomotion::Swimming::WaterVolume::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::Swimming::WaterVolume::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::Swimming::WaterVolume::RefreshColliders()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"RefreshColliders", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::Swimming::WaterVolume::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::Swimming::WaterVolume::Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::Swimming::WaterVolume::RemoveCollidersOutsideVolume(float_t  currentTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"RemoveCollidersOutsideVolume", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentTime);
}
inline void GorillaLocomotion::Swimming::WaterVolume::CheckColliderAgainstWater(::by_ref<::GorillaLocomotion::Swimming::WaterOverlappingCollider>  persistentCollider, float_t  currentTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"CheckColliderAgainstWater", {}, {::i2c::type_of<::by_ref<::GorillaLocomotion::Swimming::WaterOverlappingCollider>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, persistentCollider, currentTime);
}
inline ::UnityEngine::Vector3 GorillaLocomotion::Swimming::WaterVolume::GetColliderVelocity(::by_ref<::GorillaLocomotion::Swimming::WaterOverlappingCollider>  persistentCollider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"GetColliderVelocity", {}, {::i2c::type_of<::by_ref<::GorillaLocomotion::Swimming::WaterOverlappingCollider>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, persistentCollider);
}
inline void GorillaLocomotion::Swimming::WaterVolume::OnWaterSurfaceEnter(::by_ref<::GorillaLocomotion::Swimming::WaterOverlappingCollider>  persistentCollider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"OnWaterSurfaceEnter", {}, {::i2c::type_of<::by_ref<::GorillaLocomotion::Swimming::WaterOverlappingCollider>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, persistentCollider);
}
inline void GorillaLocomotion::Swimming::WaterVolume::OnWaterSurfaceExit(::by_ref<::GorillaLocomotion::Swimming::WaterOverlappingCollider>  persistentCollider, float_t  currentTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"OnWaterSurfaceExit", {}, {::i2c::type_of<::by_ref<::GorillaLocomotion::Swimming::WaterOverlappingCollider>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, persistentCollider, currentTime);
}
inline void GorillaLocomotion::Swimming::WaterVolume::ColliderOutOfWaterUpdate(::by_ref<::GorillaLocomotion::Swimming::WaterOverlappingCollider>  persistentCollider, float_t  currentTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"ColliderOutOfWaterUpdate", {}, {::i2c::type_of<::by_ref<::GorillaLocomotion::Swimming::WaterOverlappingCollider>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, persistentCollider, currentTime);
}
inline void GorillaLocomotion::Swimming::WaterVolume::ColliderInWaterUpdate(::by_ref<::GorillaLocomotion::Swimming::WaterOverlappingCollider>  persistentCollider, float_t  currentTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"ColliderInWaterUpdate", {}, {::i2c::type_of<::by_ref<::GorillaLocomotion::Swimming::WaterOverlappingCollider>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, persistentCollider, currentTime);
}
inline void GorillaLocomotion::Swimming::WaterVolume::TryRegisterOwnershipOfCollider(::UnityEngine::Collider*  collider, bool  isInWater, bool  isSurfaceDetected)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"TryRegisterOwnershipOfCollider", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collider, isInWater, isSurfaceDetected);
}
inline void GorillaLocomotion::Swimming::WaterVolume::UnregisterOwnershipOfCollider(::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"UnregisterOwnershipOfCollider", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collider);
}
inline bool GorillaLocomotion::Swimming::WaterVolume::HasOwnershipOfCollider(::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"HasOwnershipOfCollider", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, collider);
}
inline bool GorillaLocomotion::Swimming::WaterVolume::CanPlayerSwim()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaLocomotion::Swimming::WaterVolume::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GorillaLocomotion::Swimming::WaterVolume::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GorillaLocomotion::Swimming::WaterVolume::SetPropertiesFromPlaceholder(::GT_CustomMapSupportRuntime::WaterVolumeProperties  properties, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  waterVolumeColliders, ::GorillaLocomotion::Swimming::WaterParameters*  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {"SetPropertiesFromPlaceholder", {}, {::i2c::type_of<::GT_CustomMapSupportRuntime::WaterVolumeProperties>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*>(), ::i2c::type_of<::GorillaLocomotion::Swimming::WaterParameters*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, properties, waterVolumeColliders, parameters);
}
inline void GorillaLocomotion::Swimming::WaterVolume::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaLocomotion::Swimming::WaterVolume* GorillaLocomotion::Swimming::WaterVolume::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaLocomotion::Swimming::WaterVolume*>());
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr  GorillaLocomotion::Swimming::WaterVolume::operator ::GlobalNamespace::ITickSystemTick*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* GorillaLocomotion::Swimming::WaterVolume::i___GlobalNamespace__ITickSystemTick() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaLocomotion::Swimming::WaterVolume::WaterVolume()   {
}
//  Writing Method size for method: ::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent::*)(::System::Object*, ::System::IntPtr)>(&::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5ce8aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent::*)(::GorillaLocomotion::Swimming::WaterVolume*, ::UnityEngine::Collider*)>(&::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5ce8bac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*>(),
                    {::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent::*)(::GorillaLocomotion::Swimming::WaterVolume*, ::UnityEngine::Collider*, ::System::AsyncCallback*, ::System::Object*)>(&::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5ce8bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*>(),
                    {::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent::*)(::System::IAsyncResult*)>(&::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ce8be8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*>(),
                    {::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent::Invoke(::GorillaLocomotion::Swimming::WaterVolume*  volume, ::UnityEngine::Collider*  collider)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, volume, collider);
}
inline ::System::IAsyncResult* GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent::BeginInvoke(::GorillaLocomotion::Swimming::WaterVolume*  volume, ::UnityEngine::Collider*  collider, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, volume, collider, callback, object);
}
inline void GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent* GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*>(object, method));
}
// Ctor Parameters []
constexpr ::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent::WaterVolume_WaterVolumeEvent()   {
}
