#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersPawn.hpp"
#include "GlobalNamespace/zzzz__CrittersActor_impl.hpp"
#include "GlobalNamespace/zzzz__CrittersPawn_CreatureState_impl.hpp"
#include "GlobalNamespace/zzzz__KeyValueStringPair_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__CrittersPawn_def.hpp"
#include "GlobalNamespace/zzzz__CritterConfiguration_def.hpp"
#include "GlobalNamespace/zzzz__CritterVisuals_def.hpp"
#include "GlobalNamespace/zzzz__CrittersActor_CrittersActorType_def.hpp"
#include "GlobalNamespace/zzzz__CrittersActor_def.hpp"
#include "GlobalNamespace/zzzz__CrittersAnim_def.hpp"
#include "GlobalNamespace/zzzz__CrittersCage_def.hpp"
#include "GlobalNamespace/zzzz__CrittersFood_def.hpp"
#include "GlobalNamespace/zzzz__CrittersGrabber_def.hpp"
#include "GlobalNamespace/zzzz__CrittersPawn_CreatureState_def.hpp"
#include "GlobalNamespace/zzzz__CrittersPawn_CreatureUpdateData_def.hpp"
#include "GlobalNamespace/zzzz__IEyeScannable_def.hpp"
#include "GlobalNamespace/zzzz__KeyValueStringPair_def.hpp"
#include "GlobalNamespace/zzzz__crittersAttractorStruct_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersPawn::*)()>(&::GlobalNamespace::CrittersPawn::Initialize)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x560a040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersPawn*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.InitializeTemplateValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersPawn::*)()>(&::GlobalNamespace::CrittersPawn::InitializeTemplateValues)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x560a210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"InitializeTemplateValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.JumpVelocityForDistanceAtAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::CrittersPawn::*)(float_t, float_t)>(&::GlobalNamespace::CrittersPawn::JumpVelocityForDistanceAtAngle)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x560a26c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"JumpVelocityForDistanceAtAngle", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersPawn::*)()>(&::GlobalNamespace::CrittersPawn::OnEnable)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x560a360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersPawn*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersPawn::*)()>(&::GlobalNamespace::CrittersPawn::OnDisable)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x560a430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersPawn*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.GetAdditiveJumpDelay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::CrittersPawn::*)()>(&::GlobalNamespace::CrittersPawn::GetAdditiveJumpDelay)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x560a500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"GetAdditiveJumpDelay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.LocalJump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersPawn::*)(float_t, float_t)>(&::GlobalNamespace::CrittersPawn::LocalJump)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x560a54c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"LocalJump", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.CanSeeActor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CrittersPawn::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::CrittersPawn::CanSeeActor)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x560a790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"CanSeeActor", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.IsGrabPossible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CrittersPawn::*)(::GlobalNamespace::CrittersGrabber*)>(&::GlobalNamespace::CrittersPawn::IsGrabPossible)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x560a924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"IsGrabPossible", {}, {::i2c::type_of<::GlobalNamespace::CrittersGrabber*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.WithinCaptureDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CrittersPawn::*)(::GlobalNamespace::CrittersCage*)>(&::GlobalNamespace::CrittersPawn::WithinCaptureDistance)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x560aa10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"WithinCaptureDistance", {}, {::i2c::type_of<::GlobalNamespace::CrittersCage*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.AwareOfActor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CrittersPawn::*)(::GlobalNamespace::CrittersActor*)>(&::GlobalNamespace::CrittersPawn::AwareOfActor)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x56040d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"AwareOfActor", {}, {::i2c::type_of<::GlobalNamespace::CrittersActor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.ProcessLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CrittersPawn::*)()>(&::GlobalNamespace::CrittersPawn::ProcessLocal)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x560aaf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersPawn*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.StuckCheck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersPawn::*)()>(&::GlobalNamespace::CrittersPawn::StuckCheck)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x560ad04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"StuckCheck", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.DespawnCheck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersPawn::*)()>(&::GlobalNamespace::CrittersPawn::DespawnCheck)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x560ae50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"DespawnCheck", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.SetTemplate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersPawn::*)(int32_t)>(&::GlobalNamespace::CrittersPawn::SetTemplate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5605a3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"SetTemplate", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.UpdateTemplate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersPawn::*)()>(&::GlobalNamespace::CrittersPawn::UpdateTemplate)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x560be0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"UpdateTemplate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.InitializeAttractors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersPawn::*)()>(&::GlobalNamespace::CrittersPawn::InitializeAttractors)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x560bee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"InitializeAttractors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.ProcessRemote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersPawn::*)()>(&::GlobalNamespace::CrittersPawn::ProcessRemote)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x560c0a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersPawn*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.SetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersPawn::*)(::GlobalNamespace::CrittersPawn_CreatureState)>(&::GlobalNamespace::CrittersPawn::SetState)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x5605a44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"SetState", {}, {::i2c::type_of<::GlobalNamespace::CrittersPawn_CreatureState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.ClearOngoingStateFX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersPawn::*)()>(&::GlobalNamespace::CrittersPawn::ClearOngoingStateFX)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x560c0c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"ClearOngoingStateFX", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.StartOngoingStateFX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersPawn::*)(::GlobalNamespace::CrittersPawn_CreatureState)>(&::GlobalNamespace::CrittersPawn::StartOngoingStateFX)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x560c154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"StartOngoingStateFX", {}, {::i2c::type_of<::GlobalNamespace::CrittersPawn_CreatureState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.UpdateStateColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersPawn::*)()>(&::GlobalNamespace::CrittersPawn::UpdateStateColor)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x560c2d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"UpdateStateColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.UpdateStateAnim
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersPawn::*)()>(&::GlobalNamespace::CrittersPawn::UpdateStateAnim)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x560bce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"UpdateStateAnim", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.IdleStateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersPawn::*)()>(&::GlobalNamespace::CrittersPawn::IdleStateUpdate)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x560ad98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"IdleStateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.EatingStateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersPawn::*)()>(&::GlobalNamespace::CrittersPawn::EatingStateUpdate)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x560afc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"EatingStateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.SleepingStateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersPawn::*)()>(&::GlobalNamespace::CrittersPawn::SleepingStateUpdate)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x560b08c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"SleepingStateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.AttractedStateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersPawn::*)()>(&::GlobalNamespace::CrittersPawn::AttractedStateUpdate)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x560b0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"AttractedStateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.RunningStateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersPawn::*)()>(&::GlobalNamespace::CrittersPawn::RunningStateUpdate)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x560b224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"RunningStateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.SeekingFoodStateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersPawn::*)()>(&::GlobalNamespace::CrittersPawn::SeekingFoodStateUpdate)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x560b44c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"SeekingFoodStateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.GrabbedStateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersPawn::*)()>(&::GlobalNamespace::CrittersPawn::GrabbedStateUpdate)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x560b33c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"GrabbedStateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.HandleRemoteReleased
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersPawn::*)()>(&::GlobalNamespace::CrittersPawn::HandleRemoteReleased)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x560cc58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersPawn*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.Released
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersPawn::*)(bool, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::CrittersPawn::Released)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x560cdc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersPawn*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.CapturedStateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersPawn::*)()>(&::GlobalNamespace::CrittersPawn::CapturedStateUpdate)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x560b774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"CapturedStateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.StunnedStateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersPawn::*)()>(&::GlobalNamespace::CrittersPawn::StunnedStateUpdate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x560b92c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"StunnedStateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.WaitingToDespawnStateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersPawn::*)()>(&::GlobalNamespace::CrittersPawn::WaitingToDespawnStateUpdate)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x560b988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"WaitingToDespawnStateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.DespawningStateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersPawn::*)()>(&::GlobalNamespace::CrittersPawn::DespawningStateUpdate)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x560ba90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"DespawningStateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.SpawningStateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersPawn::*)()>(&::GlobalNamespace::CrittersPawn::SpawningStateUpdate)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x560bb5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"SpawningStateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.UpdateMoodSourceData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersPawn::*)()>(&::GlobalNamespace::CrittersPawn::UpdateMoodSourceData)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x560acc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"UpdateMoodSourceData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.UpdateHunger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersPawn::*)()>(&::GlobalNamespace::CrittersPawn::UpdateHunger)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x560d0e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"UpdateHunger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.UpdateFearAndAttraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersPawn::*)()>(&::GlobalNamespace::CrittersPawn::UpdateFearAndAttraction)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x560d1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"UpdateFearAndAttraction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.IncreaseFear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersPawn::*)(float_t, ::GlobalNamespace::CrittersActor*)>(&::GlobalNamespace::CrittersPawn::IncreaseFear)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x55ff7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"IncreaseFear", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::CrittersActor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.IncreaseAttraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersPawn::*)(float_t, ::GlobalNamespace::CrittersActor*)>(&::GlobalNamespace::CrittersPawn::IncreaseAttraction)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x55ff934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"IncreaseAttraction", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::CrittersActor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.UpdateSleepiness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersPawn::*)()>(&::GlobalNamespace::CrittersPawn::UpdateSleepiness)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x560d3ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"UpdateSleepiness", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.UpdateStruggle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersPawn::*)()>(&::GlobalNamespace::CrittersPawn::UpdateStruggle)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x560d460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"UpdateStruggle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.UpdateSlowed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersPawn::*)()>(&::GlobalNamespace::CrittersPawn::UpdateSlowed)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x560d4dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"UpdateSlowed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.UpdateGrabbed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersPawn::*)()>(&::GlobalNamespace::CrittersPawn::UpdateGrabbed)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x560d6b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"UpdateGrabbed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.UpdateCaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersPawn::*)()>(&::GlobalNamespace::CrittersPawn::UpdateCaged)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x560d88c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"UpdateCaged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.RandomJump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersPawn::*)()>(&::GlobalNamespace::CrittersPawn::RandomJump)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x560c634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"RandomJump", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.JumpTowards
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersPawn::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::CrittersPawn::JumpTowards)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x560c708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"JumpTowards", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.JumpAwayFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersPawn::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::CrittersPawn::JumpAwayFrom)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x560ca5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"JumpAwayFrom", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.SomethingInTheWay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CrittersPawn::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::CrittersPawn::SomethingInTheWay)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x560dae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"SomethingInTheWay", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.CanBeGrabbed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CrittersPawn::*)(::GlobalNamespace::CrittersActor*)>(&::GlobalNamespace::CrittersPawn::CanBeGrabbed)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x560dc58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersPawn*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.GrabbedBy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersPawn::*)(::GlobalNamespace::CrittersActor*, bool, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, bool)>(&::GlobalNamespace::CrittersPawn::GrabbedBy)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x560dc74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersPawn*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.RemoteGrabbedBy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersPawn::*)(::GlobalNamespace::CrittersActor*)>(&::GlobalNamespace::CrittersPawn::RemoteGrabbedBy)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x560df10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersPawn*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.Stunned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersPawn::*)(float_t)>(&::GlobalNamespace::CrittersPawn::Stunned)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x560e10c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"Stunned", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.AboveFearThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CrittersPawn::*)()>(&::GlobalNamespace::CrittersPawn::AboveFearThreshold)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x560c4b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"AboveFearThreshold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.BelowNotAfraidThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CrittersPawn::*)()>(&::GlobalNamespace::CrittersPawn::BelowNotAfraidThreshold)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x560cc44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"BelowNotAfraidThreshold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.AboveAttractedThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CrittersPawn::*)()>(&::GlobalNamespace::CrittersPawn::AboveAttractedThreshold)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x560c4c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"AboveAttractedThreshold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.BelowUnAttractedThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CrittersPawn::*)()>(&::GlobalNamespace::CrittersPawn::BelowUnAttractedThreshold)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x560c6f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"BelowUnAttractedThreshold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.AboveHungryThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CrittersPawn::*)()>(&::GlobalNamespace::CrittersPawn::AboveHungryThreshold)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x560c4dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"AboveHungryThreshold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.BelowNotHungryThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CrittersPawn::*)()>(&::GlobalNamespace::CrittersPawn::BelowNotHungryThreshold)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x560c6cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"BelowNotHungryThreshold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.AboveSleepyThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CrittersPawn::*)()>(&::GlobalNamespace::CrittersPawn::AboveSleepyThreshold)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x560c4f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"AboveSleepyThreshold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.BelowNotSleepyThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CrittersPawn::*)()>(&::GlobalNamespace::CrittersPawn::BelowNotSleepyThreshold)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x560c6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"BelowNotSleepyThreshold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.CanJump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CrittersPawn::*)()>(&::GlobalNamespace::CrittersPawn::CanJump)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x560c504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"CanJump", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.OnCollisionEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersPawn::*)(::UnityEngine::Collision*)>(&::GlobalNamespace::CrittersPawn::OnCollisionEnter)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x560e158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.OnCollisionExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersPawn::*)(::UnityEngine::Collision*)>(&::GlobalNamespace::CrittersPawn::OnCollisionExit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x560e164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"OnCollisionExit", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.SetVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersPawn::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::CrittersPawn::SetVelocity)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x560e16c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"SetVelocity", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.AddActorDataToList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::CrittersPawn::*)(::by_ref<::System::Collections::Generic::List_1<::System::Object*>*>)>(&::GlobalNamespace::CrittersPawn::AddActorDataToList)> {
  constexpr static std::size_t size = 0x76c;
  constexpr static std::size_t addrs = 0x560e184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersPawn*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.TotalActorDataLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::CrittersPawn::*)()>(&::GlobalNamespace::CrittersPawn::TotalActorDataLength)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x560e8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersPawn*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.UpdateFromRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::CrittersPawn::*)(::ArrayW<::System::Object*>, int32_t)>(&::GlobalNamespace::CrittersPawn::UpdateFromRPC)> {
  constexpr static std::size_t size = 0x5fc;
  constexpr static std::size_t addrs = 0x560e918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersPawn*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.UpdateSpecificActor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CrittersPawn::*)(::Photon::Pun::PhotonStream*)>(&::GlobalNamespace::CrittersPawn::UpdateSpecificActor)> {
  constexpr static std::size_t size = 0x578;
  constexpr static std::size_t addrs = 0x560ef14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersPawn*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.SendDataByCrittersActorType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersPawn::*)(::Photon::Pun::PhotonStream*)>(&::GlobalNamespace::CrittersPawn::SendDataByCrittersActorType)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x560f48c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersPawn*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.SetConfiguration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersPawn::*)(::GlobalNamespace::CritterConfiguration*)>(&::GlobalNamespace::CrittersPawn::SetConfiguration)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x560f810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"SetConfiguration", {}, {::i2c::type_of<::GlobalNamespace::CritterConfiguration*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.SetSpawnData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersPawn::*)(::ArrayW<::System::Object*>)>(&::GlobalNamespace::CrittersPawn::SetSpawnData)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5607658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"SetSpawnData", {}, {::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.IEyeScannable_get_scannableId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::CrittersPawn::*)()>(&::GlobalNamespace::CrittersPawn::IEyeScannable_get_scannableId)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x560f848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"IEyeScannable.get_scannableId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.IEyeScannable_get_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::CrittersPawn::*)()>(&::GlobalNamespace::CrittersPawn::IEyeScannable_get_Position)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x560f868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"IEyeScannable.get_Position", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.IEyeScannable_get_Bounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::GlobalNamespace::CrittersPawn::*)()>(&::GlobalNamespace::CrittersPawn::IEyeScannable_get_Bounds)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x560f89c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"IEyeScannable.get_Bounds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.IEyeScannable_get_Entries
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::GlobalNamespace::KeyValueStringPair>* (::GlobalNamespace::CrittersPawn::*)()>(&::GlobalNamespace::CrittersPawn::IEyeScannable_get_Entries)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x560f8dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"IEyeScannable.get_Entries", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.BuildEyeScannerData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::GlobalNamespace::KeyValueStringPair>* (::GlobalNamespace::CrittersPawn::*)()>(&::GlobalNamespace::CrittersPawn::BuildEyeScannerData)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x560f8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"BuildEyeScannerData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.GetCurrentStateName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::CrittersPawn::*)()>(&::GlobalNamespace::CrittersPawn::GetCurrentStateName)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x560fbe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"GetCurrentStateName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.add_OnDataChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersPawn::*)(::System::Action*)>(&::GlobalNamespace::CrittersPawn::add_OnDataChange)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x560fdc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"add_OnDataChange", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn.remove_OnDataChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersPawn::*)(::System::Action*)>(&::GlobalNamespace::CrittersPawn::remove_OnDataChange)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x560fe60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"remove_OnDataChange", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersPawn::*)()>(&::GlobalNamespace::CrittersPawn::_ctor)> {
  constexpr static std::size_t size = 0xac0;
  constexpr static std::size_t addrs = 0x560fefc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::CritterConfiguration*& GlobalNamespace::CrittersPawn::__cordl_internal_get_creatureConfiguration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___creatureConfiguration;
}
constexpr ::GlobalNamespace::CritterConfiguration* const& GlobalNamespace::CrittersPawn::__cordl_internal_get_creatureConfiguration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___creatureConfiguration;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_creatureConfiguration(::GlobalNamespace::CritterConfiguration*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___creatureConfiguration = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& GlobalNamespace::CrittersPawn::__cordl_internal_get_bodyCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyCollider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GlobalNamespace::CrittersPawn::__cordl_internal_get_bodyCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyCollider;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_bodyCollider(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bodyCollider = value;
}
constexpr float_t& GlobalNamespace::CrittersPawn::__cordl_internal_get_maxJumpVel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxJumpVel;
}
constexpr float_t const& GlobalNamespace::CrittersPawn::__cordl_internal_get_maxJumpVel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxJumpVel;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_maxJumpVel(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxJumpVel = value;
}
constexpr float_t& GlobalNamespace::CrittersPawn::__cordl_internal_get_jumpCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jumpCooldown;
}
constexpr float_t const& GlobalNamespace::CrittersPawn::__cordl_internal_get_jumpCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jumpCooldown;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_jumpCooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jumpCooldown = value;
}
constexpr float_t& GlobalNamespace::CrittersPawn::__cordl_internal_get_scaredJumpCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaredJumpCooldown;
}
constexpr float_t const& GlobalNamespace::CrittersPawn::__cordl_internal_get_scaredJumpCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaredJumpCooldown;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_scaredJumpCooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scaredJumpCooldown = value;
}
constexpr float_t& GlobalNamespace::CrittersPawn::__cordl_internal_get_jumpVariabilityTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jumpVariabilityTime;
}
constexpr float_t const& GlobalNamespace::CrittersPawn::__cordl_internal_get_jumpVariabilityTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jumpVariabilityTime;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_jumpVariabilityTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jumpVariabilityTime = value;
}
constexpr float_t& GlobalNamespace::CrittersPawn::__cordl_internal_get_visionConeAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visionConeAngle;
}
constexpr float_t const& GlobalNamespace::CrittersPawn::__cordl_internal_get_visionConeAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visionConeAngle;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_visionConeAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___visionConeAngle = value;
}
constexpr float_t& GlobalNamespace::CrittersPawn::__cordl_internal_get_sensoryRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sensoryRange;
}
constexpr float_t const& GlobalNamespace::CrittersPawn::__cordl_internal_get_sensoryRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sensoryRange;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_sensoryRange(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sensoryRange = value;
}
constexpr float_t& GlobalNamespace::CrittersPawn::__cordl_internal_get_maxHunger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxHunger;
}
constexpr float_t const& GlobalNamespace::CrittersPawn::__cordl_internal_get_maxHunger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxHunger;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_maxHunger(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxHunger = value;
}
constexpr float_t& GlobalNamespace::CrittersPawn::__cordl_internal_get_hungryThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hungryThreshold;
}
constexpr float_t const& GlobalNamespace::CrittersPawn::__cordl_internal_get_hungryThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hungryThreshold;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_hungryThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hungryThreshold = value;
}
constexpr float_t& GlobalNamespace::CrittersPawn::__cordl_internal_get_satiatedThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___satiatedThreshold;
}
constexpr float_t const& GlobalNamespace::CrittersPawn::__cordl_internal_get_satiatedThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___satiatedThreshold;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_satiatedThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___satiatedThreshold = value;
}
constexpr float_t& GlobalNamespace::CrittersPawn::__cordl_internal_get_hungerLostPerSecond()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hungerLostPerSecond;
}
constexpr float_t const& GlobalNamespace::CrittersPawn::__cordl_internal_get_hungerLostPerSecond() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hungerLostPerSecond;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_hungerLostPerSecond(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hungerLostPerSecond = value;
}
constexpr float_t& GlobalNamespace::CrittersPawn::__cordl_internal_get_hungerGainedPerSecond()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hungerGainedPerSecond;
}
constexpr float_t const& GlobalNamespace::CrittersPawn::__cordl_internal_get_hungerGainedPerSecond() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hungerGainedPerSecond;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_hungerGainedPerSecond(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hungerGainedPerSecond = value;
}
constexpr float_t& GlobalNamespace::CrittersPawn::__cordl_internal_get_maxFear()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxFear;
}
constexpr float_t const& GlobalNamespace::CrittersPawn::__cordl_internal_get_maxFear() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxFear;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_maxFear(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxFear = value;
}
constexpr float_t& GlobalNamespace::CrittersPawn::__cordl_internal_get_scaredThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaredThreshold;
}
constexpr float_t const& GlobalNamespace::CrittersPawn::__cordl_internal_get_scaredThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaredThreshold;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_scaredThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scaredThreshold = value;
}
constexpr float_t& GlobalNamespace::CrittersPawn::__cordl_internal_get_calmThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___calmThreshold;
}
constexpr float_t const& GlobalNamespace::CrittersPawn::__cordl_internal_get_calmThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___calmThreshold;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_calmThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___calmThreshold = value;
}
constexpr float_t& GlobalNamespace::CrittersPawn::__cordl_internal_get_fearLostPerSecond()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fearLostPerSecond;
}
constexpr float_t const& GlobalNamespace::CrittersPawn::__cordl_internal_get_fearLostPerSecond() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fearLostPerSecond;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_fearLostPerSecond(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fearLostPerSecond = value;
}
constexpr float_t& GlobalNamespace::CrittersPawn::__cordl_internal_get_maxAttraction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxAttraction;
}
constexpr float_t const& GlobalNamespace::CrittersPawn::__cordl_internal_get_maxAttraction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxAttraction;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_maxAttraction(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxAttraction = value;
}
constexpr float_t& GlobalNamespace::CrittersPawn::__cordl_internal_get_attractedThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attractedThreshold;
}
constexpr float_t const& GlobalNamespace::CrittersPawn::__cordl_internal_get_attractedThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attractedThreshold;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_attractedThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attractedThreshold = value;
}
constexpr float_t& GlobalNamespace::CrittersPawn::__cordl_internal_get_unattractedThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unattractedThreshold;
}
constexpr float_t const& GlobalNamespace::CrittersPawn::__cordl_internal_get_unattractedThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unattractedThreshold;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_unattractedThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unattractedThreshold = value;
}
constexpr float_t& GlobalNamespace::CrittersPawn::__cordl_internal_get_attractionLostPerSecond()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attractionLostPerSecond;
}
constexpr float_t const& GlobalNamespace::CrittersPawn::__cordl_internal_get_attractionLostPerSecond() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attractionLostPerSecond;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_attractionLostPerSecond(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attractionLostPerSecond = value;
}
constexpr float_t& GlobalNamespace::CrittersPawn::__cordl_internal_get_maxSleepiness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSleepiness;
}
constexpr float_t const& GlobalNamespace::CrittersPawn::__cordl_internal_get_maxSleepiness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSleepiness;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_maxSleepiness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxSleepiness = value;
}
constexpr float_t& GlobalNamespace::CrittersPawn::__cordl_internal_get_tiredThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tiredThreshold;
}
constexpr float_t const& GlobalNamespace::CrittersPawn::__cordl_internal_get_tiredThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tiredThreshold;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_tiredThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tiredThreshold = value;
}
constexpr float_t& GlobalNamespace::CrittersPawn::__cordl_internal_get_awakeThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___awakeThreshold;
}
constexpr float_t const& GlobalNamespace::CrittersPawn::__cordl_internal_get_awakeThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___awakeThreshold;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_awakeThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___awakeThreshold = value;
}
constexpr float_t& GlobalNamespace::CrittersPawn::__cordl_internal_get_sleepinessGainedPerSecond()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sleepinessGainedPerSecond;
}
constexpr float_t const& GlobalNamespace::CrittersPawn::__cordl_internal_get_sleepinessGainedPerSecond() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sleepinessGainedPerSecond;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_sleepinessGainedPerSecond(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sleepinessGainedPerSecond = value;
}
constexpr float_t& GlobalNamespace::CrittersPawn::__cordl_internal_get_sleepinessLostPerSecond()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sleepinessLostPerSecond;
}
constexpr float_t const& GlobalNamespace::CrittersPawn::__cordl_internal_get_sleepinessLostPerSecond() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sleepinessLostPerSecond;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_sleepinessLostPerSecond(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sleepinessLostPerSecond = value;
}
constexpr float_t& GlobalNamespace::CrittersPawn::__cordl_internal_get_maxStruggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxStruggle;
}
constexpr float_t const& GlobalNamespace::CrittersPawn::__cordl_internal_get_maxStruggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxStruggle;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_maxStruggle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxStruggle = value;
}
constexpr float_t& GlobalNamespace::CrittersPawn::__cordl_internal_get_escapeThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___escapeThreshold;
}
constexpr float_t const& GlobalNamespace::CrittersPawn::__cordl_internal_get_escapeThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___escapeThreshold;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_escapeThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___escapeThreshold = value;
}
constexpr float_t& GlobalNamespace::CrittersPawn::__cordl_internal_get_catchableThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catchableThreshold;
}
constexpr float_t const& GlobalNamespace::CrittersPawn::__cordl_internal_get_catchableThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catchableThreshold;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_catchableThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___catchableThreshold = value;
}
constexpr float_t& GlobalNamespace::CrittersPawn::__cordl_internal_get_struggleGainedPerSecond()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___struggleGainedPerSecond;
}
constexpr float_t const& GlobalNamespace::CrittersPawn::__cordl_internal_get_struggleGainedPerSecond() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___struggleGainedPerSecond;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_struggleGainedPerSecond(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___struggleGainedPerSecond = value;
}
constexpr float_t& GlobalNamespace::CrittersPawn::__cordl_internal_get_struggleLostPerSecond()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___struggleLostPerSecond;
}
constexpr float_t const& GlobalNamespace::CrittersPawn::__cordl_internal_get_struggleLostPerSecond() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___struggleLostPerSecond;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_struggleLostPerSecond(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___struggleLostPerSecond = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::crittersAttractorStruct>*& GlobalNamespace::CrittersPawn::__cordl_internal_get_attractedToList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attractedToList;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::crittersAttractorStruct>* const& GlobalNamespace::CrittersPawn::__cordl_internal_get_attractedToList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attractedToList;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_attractedToList(::System::Collections::Generic::List_1<::GlobalNamespace::crittersAttractorStruct>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attractedToList = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::crittersAttractorStruct>*& GlobalNamespace::CrittersPawn::__cordl_internal_get_afraidOfList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___afraidOfList;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::crittersAttractorStruct>* const& GlobalNamespace::CrittersPawn::__cordl_internal_get_afraidOfList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___afraidOfList;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_afraidOfList(::System::Collections::Generic::List_1<::GlobalNamespace::crittersAttractorStruct>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___afraidOfList = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersActor_CrittersActorType,float_t>*& GlobalNamespace::CrittersPawn::__cordl_internal_get_afraidOfTypes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___afraidOfTypes;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersActor_CrittersActorType,float_t>* const& GlobalNamespace::CrittersPawn::__cordl_internal_get_afraidOfTypes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___afraidOfTypes;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_afraidOfTypes(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersActor_CrittersActorType,float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___afraidOfTypes = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersActor_CrittersActorType,float_t>*& GlobalNamespace::CrittersPawn::__cordl_internal_get_attractedToTypes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attractedToTypes;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersActor_CrittersActorType,float_t>* const& GlobalNamespace::CrittersPawn::__cordl_internal_get_attractedToTypes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attractedToTypes;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_attractedToTypes(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersActor_CrittersActorType,float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attractedToTypes = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::CrittersPawn::__cordl_internal_get_rB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rB;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::CrittersPawn::__cordl_internal_get_rB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rB;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_rB(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rB = value;
}
constexpr ::GlobalNamespace::CrittersPawn_CreatureState& GlobalNamespace::CrittersPawn::__cordl_internal_get_currentState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr ::GlobalNamespace::CrittersPawn_CreatureState const& GlobalNamespace::CrittersPawn::__cordl_internal_get_currentState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_currentState(::GlobalNamespace::CrittersPawn_CreatureState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentState = value;
}
constexpr float_t& GlobalNamespace::CrittersPawn::__cordl_internal_get_currentHunger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentHunger;
}
constexpr float_t const& GlobalNamespace::CrittersPawn::__cordl_internal_get_currentHunger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentHunger;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_currentHunger(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentHunger = value;
}
constexpr float_t& GlobalNamespace::CrittersPawn::__cordl_internal_get_currentFear()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentFear;
}
constexpr float_t const& GlobalNamespace::CrittersPawn::__cordl_internal_get_currentFear() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentFear;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_currentFear(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentFear = value;
}
constexpr float_t& GlobalNamespace::CrittersPawn::__cordl_internal_get_currentAttraction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentAttraction;
}
constexpr float_t const& GlobalNamespace::CrittersPawn::__cordl_internal_get_currentAttraction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentAttraction;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_currentAttraction(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentAttraction = value;
}
constexpr float_t& GlobalNamespace::CrittersPawn::__cordl_internal_get_currentSleepiness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSleepiness;
}
constexpr float_t const& GlobalNamespace::CrittersPawn::__cordl_internal_get_currentSleepiness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSleepiness;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_currentSleepiness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentSleepiness = value;
}
constexpr float_t& GlobalNamespace::CrittersPawn::__cordl_internal_get_currentStruggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentStruggle;
}
constexpr float_t const& GlobalNamespace::CrittersPawn::__cordl_internal_get_currentStruggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentStruggle;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_currentStruggle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentStruggle = value;
}
constexpr double_t& GlobalNamespace::CrittersPawn::__cordl_internal_get_lifeTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lifeTime;
}
constexpr double_t const& GlobalNamespace::CrittersPawn::__cordl_internal_get_lifeTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lifeTime;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_lifeTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lifeTime = value;
}
constexpr double_t& GlobalNamespace::CrittersPawn::__cordl_internal_get_lifeTimeStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lifeTimeStart;
}
constexpr double_t const& GlobalNamespace::CrittersPawn::__cordl_internal_get_lifeTimeStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lifeTimeStart;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_lifeTimeStart(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lifeTimeStart = value;
}
constexpr ::UnityW<::GlobalNamespace::CrittersFood>& GlobalNamespace::CrittersPawn::__cordl_internal_get_eatingTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eatingTarget;
}
constexpr ::UnityW<::GlobalNamespace::CrittersFood> const& GlobalNamespace::CrittersPawn::__cordl_internal_get_eatingTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eatingTarget;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_eatingTarget(::UnityW<::GlobalNamespace::CrittersFood>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eatingTarget = value;
}
constexpr ::UnityW<::GlobalNamespace::CrittersActor>& GlobalNamespace::CrittersPawn::__cordl_internal_get_fearTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fearTarget;
}
constexpr ::UnityW<::GlobalNamespace::CrittersActor> const& GlobalNamespace::CrittersPawn::__cordl_internal_get_fearTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fearTarget;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_fearTarget(::UnityW<::GlobalNamespace::CrittersActor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fearTarget = value;
}
constexpr ::UnityW<::GlobalNamespace::CrittersActor>& GlobalNamespace::CrittersPawn::__cordl_internal_get_attractionTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attractionTarget;
}
constexpr ::UnityW<::GlobalNamespace::CrittersActor> const& GlobalNamespace::CrittersPawn::__cordl_internal_get_attractionTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attractionTarget;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_attractionTarget(::UnityW<::GlobalNamespace::CrittersActor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attractionTarget = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::CrittersPawn::__cordl_internal_get_lastSeenFearPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSeenFearPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::CrittersPawn::__cordl_internal_get_lastSeenFearPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSeenFearPosition;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_lastSeenFearPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastSeenFearPosition = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::CrittersPawn::__cordl_internal_get_lastSeenAttractionPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSeenAttractionPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::CrittersPawn::__cordl_internal_get_lastSeenAttractionPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSeenAttractionPosition;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_lastSeenAttractionPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastSeenAttractionPosition = value;
}
constexpr ::UnityW<::GlobalNamespace::CrittersGrabber>& GlobalNamespace::CrittersPawn::__cordl_internal_get_grabbedTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabbedTarget;
}
constexpr ::UnityW<::GlobalNamespace::CrittersGrabber> const& GlobalNamespace::CrittersPawn::__cordl_internal_get_grabbedTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabbedTarget;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_grabbedTarget(::UnityW<::GlobalNamespace::CrittersGrabber>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabbedTarget = value;
}
constexpr ::UnityW<::GlobalNamespace::CrittersCage>& GlobalNamespace::CrittersPawn::__cordl_internal_get_cageTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cageTarget;
}
constexpr ::UnityW<::GlobalNamespace::CrittersCage> const& GlobalNamespace::CrittersPawn::__cordl_internal_get_cageTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cageTarget;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_cageTarget(::UnityW<::GlobalNamespace::CrittersCage>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cageTarget = value;
}
constexpr int32_t& GlobalNamespace::CrittersPawn::__cordl_internal_get_actorIdTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actorIdTarget;
}
constexpr int32_t const& GlobalNamespace::CrittersPawn::__cordl_internal_get_actorIdTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actorIdTarget;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_actorIdTarget(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___actorIdTarget = value;
}
constexpr float_t& GlobalNamespace::CrittersPawn::__cordl_internal_get_eatingRadiusMaxSquared()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eatingRadiusMaxSquared;
}
constexpr float_t const& GlobalNamespace::CrittersPawn::__cordl_internal_get_eatingRadiusMaxSquared() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eatingRadiusMaxSquared;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_eatingRadiusMaxSquared(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eatingRadiusMaxSquared = value;
}
constexpr bool& GlobalNamespace::CrittersPawn::__cordl_internal_get_withinEatingRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___withinEatingRadius;
}
constexpr bool const& GlobalNamespace::CrittersPawn::__cordl_internal_get_withinEatingRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___withinEatingRadius;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_withinEatingRadius(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___withinEatingRadius = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::CrittersPawn::__cordl_internal_get_animTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animTarget;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::CrittersPawn::__cordl_internal_get_animTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animTarget;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_animTarget(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animTarget = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::CrittersPawn::__cordl_internal_get_myRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::CrittersPawn::__cordl_internal_get_myRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRenderer;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_myRenderer(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myRenderer = value;
}
constexpr float_t& GlobalNamespace::CrittersPawn::__cordl_internal_get_autoSeeFoodDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoSeeFoodDistance;
}
constexpr float_t const& GlobalNamespace::CrittersPawn::__cordl_internal_get_autoSeeFoodDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoSeeFoodDistance;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_autoSeeFoodDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___autoSeeFoodDistance = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::CrittersActor>>*& GlobalNamespace::CrittersPawn::__cordl_internal_get_soundsHeard()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundsHeard;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::CrittersActor>>* const& GlobalNamespace::CrittersPawn::__cordl_internal_get_soundsHeard() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundsHeard;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_soundsHeard(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::CrittersActor>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___soundsHeard = value;
}
constexpr float_t& GlobalNamespace::CrittersPawn::__cordl_internal_get_fudge()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fudge;
}
constexpr float_t const& GlobalNamespace::CrittersPawn::__cordl_internal_get_fudge() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fudge;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_fudge(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fudge = value;
}
constexpr float_t& GlobalNamespace::CrittersPawn::__cordl_internal_get_obstacleSeeDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___obstacleSeeDistance;
}
constexpr float_t const& GlobalNamespace::CrittersPawn::__cordl_internal_get_obstacleSeeDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___obstacleSeeDistance;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_obstacleSeeDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___obstacleSeeDistance = value;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit>& GlobalNamespace::CrittersPawn::__cordl_internal_get_raycastHits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raycastHits;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit> const& GlobalNamespace::CrittersPawn::__cordl_internal_get_raycastHits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raycastHits;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_raycastHits(::ArrayW<::UnityEngine::RaycastHit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___raycastHits = value;
}
constexpr bool& GlobalNamespace::CrittersPawn::__cordl_internal_get_canJump()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canJump;
}
constexpr bool const& GlobalNamespace::CrittersPawn::__cordl_internal_get_canJump() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canJump;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_canJump(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___canJump = value;
}
constexpr bool& GlobalNamespace::CrittersPawn::__cordl_internal_get_wasSomethingInTheWay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasSomethingInTheWay;
}
constexpr bool const& GlobalNamespace::CrittersPawn::__cordl_internal_get_wasSomethingInTheWay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasSomethingInTheWay;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_wasSomethingInTheWay(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasSomethingInTheWay = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::CrittersPawn::__cordl_internal_get_hat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hat;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::CrittersPawn::__cordl_internal_get_hat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hat;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_hat(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hat = value;
}
constexpr int32_t& GlobalNamespace::CrittersPawn::__cordl_internal_get_LastTemplateIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LastTemplateIndex;
}
constexpr int32_t const& GlobalNamespace::CrittersPawn::__cordl_internal_get_LastTemplateIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LastTemplateIndex;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_LastTemplateIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LastTemplateIndex = value;
}
constexpr int32_t& GlobalNamespace::CrittersPawn::__cordl_internal_get_TemplateIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TemplateIndex;
}
constexpr int32_t const& GlobalNamespace::CrittersPawn::__cordl_internal_get_TemplateIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TemplateIndex;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_TemplateIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TemplateIndex = value;
}
constexpr double_t& GlobalNamespace::CrittersPawn::__cordl_internal_get__nextDespawnCheck()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nextDespawnCheck;
}
constexpr double_t const& GlobalNamespace::CrittersPawn::__cordl_internal_get__nextDespawnCheck() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nextDespawnCheck;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set__nextDespawnCheck(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nextDespawnCheck = value;
}
constexpr double_t& GlobalNamespace::CrittersPawn::__cordl_internal_get__nextStuckCheck()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nextStuckCheck;
}
constexpr double_t const& GlobalNamespace::CrittersPawn::__cordl_internal_get__nextStuckCheck() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nextStuckCheck;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set__nextStuckCheck(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nextStuckCheck = value;
}
constexpr float_t& GlobalNamespace::CrittersPawn::__cordl_internal_get_killHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___killHeight;
}
constexpr float_t const& GlobalNamespace::CrittersPawn::__cordl_internal_get_killHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___killHeight;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_killHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___killHeight = value;
}
constexpr float_t& GlobalNamespace::CrittersPawn::__cordl_internal_get_remainingStunnedTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remainingStunnedTime;
}
constexpr float_t const& GlobalNamespace::CrittersPawn::__cordl_internal_get_remainingStunnedTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remainingStunnedTime;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_remainingStunnedTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___remainingStunnedTime = value;
}
constexpr float_t& GlobalNamespace::CrittersPawn::__cordl_internal_get_remainingSlowedTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remainingSlowedTime;
}
constexpr float_t const& GlobalNamespace::CrittersPawn::__cordl_internal_get_remainingSlowedTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remainingSlowedTime;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_remainingSlowedTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___remainingSlowedTime = value;
}
constexpr float_t& GlobalNamespace::CrittersPawn::__cordl_internal_get_slowSpeedMod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slowSpeedMod;
}
constexpr float_t const& GlobalNamespace::CrittersPawn::__cordl_internal_get_slowSpeedMod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slowSpeedMod;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_slowSpeedMod(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slowSpeedMod = value;
}
constexpr ::UnityW<::GlobalNamespace::CritterVisuals>& GlobalNamespace::CrittersPawn::__cordl_internal_get_visuals()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visuals;
}
constexpr ::UnityW<::GlobalNamespace::CritterVisuals> const& GlobalNamespace::CrittersPawn::__cordl_internal_get_visuals() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visuals;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_visuals(::UnityW<::GlobalNamespace::CritterVisuals>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___visuals = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersPawn_CreatureState,::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::CrittersPawn::__cordl_internal_get_StartStateFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StartStateFX;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersPawn_CreatureState,::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::CrittersPawn::__cordl_internal_get_StartStateFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StartStateFX;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_StartStateFX(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersPawn_CreatureState,::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StartStateFX = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersPawn_CreatureState,::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::CrittersPawn::__cordl_internal_get_OngoingStateFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OngoingStateFX;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersPawn_CreatureState,::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::CrittersPawn::__cordl_internal_get_OngoingStateFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OngoingStateFX;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_OngoingStateFX(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersPawn_CreatureState,::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OngoingStateFX = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CrittersPawn::__cordl_internal_get_OnReleasedFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnReleasedFX;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CrittersPawn::__cordl_internal_get_OnReleasedFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnReleasedFX;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_OnReleasedFX(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnReleasedFX = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CrittersPawn::__cordl_internal_get_currentOngoingStateFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentOngoingStateFX;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CrittersPawn::__cordl_internal_get_currentOngoingStateFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentOngoingStateFX;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_currentOngoingStateFX(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentOngoingStateFX = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersPawn_CreatureState,::GlobalNamespace::CrittersAnim*>*& GlobalNamespace::CrittersPawn::__cordl_internal_get_stateAnim()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateAnim;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersPawn_CreatureState,::GlobalNamespace::CrittersAnim*>* const& GlobalNamespace::CrittersPawn::__cordl_internal_get_stateAnim() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateAnim;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_stateAnim(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersPawn_CreatureState,::GlobalNamespace::CrittersAnim*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stateAnim = value;
}
constexpr ::GlobalNamespace::CrittersAnim*& GlobalNamespace::CrittersPawn::__cordl_internal_get_currentAnim()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentAnim;
}
constexpr ::GlobalNamespace::CrittersAnim* const& GlobalNamespace::CrittersPawn::__cordl_internal_get_currentAnim() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentAnim;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_currentAnim(::GlobalNamespace::CrittersAnim*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentAnim = value;
}
constexpr float_t& GlobalNamespace::CrittersPawn::__cordl_internal_get_currentAnimTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentAnimTime;
}
constexpr float_t const& GlobalNamespace::CrittersPawn::__cordl_internal_get_currentAnimTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentAnimTime;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_currentAnimTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentAnimTime = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::CrittersPawn::__cordl_internal_get_grabbedHaptics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabbedHaptics;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::CrittersPawn::__cordl_internal_get_grabbedHaptics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabbedHaptics;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_grabbedHaptics(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabbedHaptics = value;
}
constexpr float_t& GlobalNamespace::CrittersPawn::__cordl_internal_get_grabbedHapticsStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabbedHapticsStrength;
}
constexpr float_t const& GlobalNamespace::CrittersPawn::__cordl_internal_get_grabbedHapticsStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabbedHapticsStrength;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_grabbedHapticsStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabbedHapticsStrength = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::CrittersPawn::__cordl_internal_get_spawnInHeighMovement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnInHeighMovement;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::CrittersPawn::__cordl_internal_get_spawnInHeighMovement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnInHeighMovement;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_spawnInHeighMovement(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnInHeighMovement = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::CrittersPawn::__cordl_internal_get_despawnInHeighMovement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___despawnInHeighMovement;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::CrittersPawn::__cordl_internal_get_despawnInHeighMovement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___despawnInHeighMovement;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_despawnInHeighMovement(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___despawnInHeighMovement = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::CrittersPawn::__cordl_internal_get_spawningStartingPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawningStartingPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::CrittersPawn::__cordl_internal_get_spawningStartingPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawningStartingPosition;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_spawningStartingPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawningStartingPosition = value;
}
constexpr double_t& GlobalNamespace::CrittersPawn::__cordl_internal_get_spawnStartTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnStartTime;
}
constexpr double_t const& GlobalNamespace::CrittersPawn::__cordl_internal_get_spawnStartTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnStartTime;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_spawnStartTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnStartTime = value;
}
constexpr double_t& GlobalNamespace::CrittersPawn::__cordl_internal_get_despawnStartTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___despawnStartTime;
}
constexpr double_t const& GlobalNamespace::CrittersPawn::__cordl_internal_get_despawnStartTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___despawnStartTime;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_despawnStartTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___despawnStartTime = value;
}
constexpr float_t& GlobalNamespace::CrittersPawn::__cordl_internal_get__spawnAnimationDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spawnAnimationDuration;
}
constexpr float_t const& GlobalNamespace::CrittersPawn::__cordl_internal_get__spawnAnimationDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spawnAnimationDuration;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set__spawnAnimationDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____spawnAnimationDuration = value;
}
constexpr float_t& GlobalNamespace::CrittersPawn::__cordl_internal_get__despawnAnimationDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____despawnAnimationDuration;
}
constexpr float_t const& GlobalNamespace::CrittersPawn::__cordl_internal_get__despawnAnimationDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____despawnAnimationDuration;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set__despawnAnimationDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____despawnAnimationDuration = value;
}
constexpr double_t& GlobalNamespace::CrittersPawn::__cordl_internal_get__spawnAnimTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spawnAnimTime;
}
constexpr double_t const& GlobalNamespace::CrittersPawn::__cordl_internal_get__spawnAnimTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spawnAnimTime;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set__spawnAnimTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____spawnAnimTime = value;
}
constexpr double_t& GlobalNamespace::CrittersPawn::__cordl_internal_get__despawnAnimTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____despawnAnimTime;
}
constexpr double_t const& GlobalNamespace::CrittersPawn::__cordl_internal_get__despawnAnimTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____despawnAnimTime;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set__despawnAnimTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____despawnAnimTime = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::CrittersPawn::__cordl_internal_get_debugStateIndicator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugStateIndicator;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::CrittersPawn::__cordl_internal_get_debugStateIndicator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugStateIndicator;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_debugStateIndicator(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugStateIndicator = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::CrittersPawn::__cordl_internal_get_debugColorIdle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugColorIdle;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::CrittersPawn::__cordl_internal_get_debugColorIdle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugColorIdle;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_debugColorIdle(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugColorIdle = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::CrittersPawn::__cordl_internal_get_debugColorSeekingFood()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugColorSeekingFood;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::CrittersPawn::__cordl_internal_get_debugColorSeekingFood() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugColorSeekingFood;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_debugColorSeekingFood(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugColorSeekingFood = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::CrittersPawn::__cordl_internal_get_debugColorEating()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugColorEating;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::CrittersPawn::__cordl_internal_get_debugColorEating() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugColorEating;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_debugColorEating(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugColorEating = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::CrittersPawn::__cordl_internal_get_debugColorScared()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugColorScared;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::CrittersPawn::__cordl_internal_get_debugColorScared() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugColorScared;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_debugColorScared(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugColorScared = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::CrittersPawn::__cordl_internal_get_debugColorSleeping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugColorSleeping;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::CrittersPawn::__cordl_internal_get_debugColorSleeping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugColorSleeping;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_debugColorSleeping(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugColorSleeping = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::CrittersPawn::__cordl_internal_get_debugColorCaught()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugColorCaught;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::CrittersPawn::__cordl_internal_get_debugColorCaught() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugColorCaught;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_debugColorCaught(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugColorCaught = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::CrittersPawn::__cordl_internal_get_debugColorCaged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugColorCaged;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::CrittersPawn::__cordl_internal_get_debugColorCaged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugColorCaged;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_debugColorCaged(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugColorCaged = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::CrittersPawn::__cordl_internal_get_debugColorStunned()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugColorStunned;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::CrittersPawn::__cordl_internal_get_debugColorStunned() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugColorStunned;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_debugColorStunned(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugColorStunned = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::CrittersPawn::__cordl_internal_get_debugColorAttracted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugColorAttracted;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::CrittersPawn::__cordl_internal_get_debugColorAttracted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugColorAttracted;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_debugColorAttracted(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugColorAttracted = value;
}
constexpr int32_t& GlobalNamespace::CrittersPawn::__cordl_internal_get_regionId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___regionId;
}
constexpr int32_t const& GlobalNamespace::CrittersPawn::__cordl_internal_get_regionId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___regionId;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_regionId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___regionId = value;
}
constexpr ::ArrayW<::GlobalNamespace::KeyValueStringPair>& GlobalNamespace::CrittersPawn::__cordl_internal_get_eyeScanData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eyeScanData;
}
constexpr ::ArrayW<::GlobalNamespace::KeyValueStringPair> const& GlobalNamespace::CrittersPawn::__cordl_internal_get_eyeScanData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eyeScanData;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_eyeScanData(::ArrayW<::GlobalNamespace::KeyValueStringPair>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eyeScanData = value;
}
constexpr ::System::Action*& GlobalNamespace::CrittersPawn::__cordl_internal_get_OnDataChange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDataChange;
}
constexpr ::System::Action* const& GlobalNamespace::CrittersPawn::__cordl_internal_get_OnDataChange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDataChange;
}
constexpr void GlobalNamespace::CrittersPawn::__cordl_internal_set_OnDataChange(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnDataChange = value;
}
inline void GlobalNamespace::CrittersPawn::Initialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersPawn*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersPawn::InitializeTemplateValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"InitializeTemplateValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GlobalNamespace::CrittersPawn::JumpVelocityForDistanceAtAngle(float_t  horizontalDistance, float_t  angle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"JumpVelocityForDistanceAtAngle", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, horizontalDistance, angle);
}
inline void GlobalNamespace::CrittersPawn::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersPawn*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersPawn::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersPawn*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GlobalNamespace::CrittersPawn::GetAdditiveJumpDelay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"GetAdditiveJumpDelay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersPawn::LocalJump(float_t  maxVel, float_t  jumpAngle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"LocalJump", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, maxVel, jumpAngle);
}
inline bool GlobalNamespace::CrittersPawn::CanSeeActor(::UnityEngine::Vector3  actorPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"CanSeeActor", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, actorPosition);
}
inline bool GlobalNamespace::CrittersPawn::IsGrabPossible(::GlobalNamespace::CrittersGrabber*  actor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"IsGrabPossible", {}, {::i2c::type_of<::GlobalNamespace::CrittersGrabber*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, actor);
}
inline bool GlobalNamespace::CrittersPawn::WithinCaptureDistance(::GlobalNamespace::CrittersCage*  actor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"WithinCaptureDistance", {}, {::i2c::type_of<::GlobalNamespace::CrittersCage*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, actor);
}
inline bool GlobalNamespace::CrittersPawn::AwareOfActor(::GlobalNamespace::CrittersActor*  actor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"AwareOfActor", {}, {::i2c::type_of<::GlobalNamespace::CrittersActor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, actor);
}
inline bool GlobalNamespace::CrittersPawn::ProcessLocal()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersPawn*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersPawn::StuckCheck()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"StuckCheck", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersPawn::DespawnCheck()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"DespawnCheck", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersPawn::SetTemplate(int32_t  templateIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"SetTemplate", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, templateIndex);
}
inline void GlobalNamespace::CrittersPawn::UpdateTemplate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"UpdateTemplate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersPawn::InitializeAttractors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"InitializeAttractors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersPawn::ProcessRemote()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersPawn*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersPawn::SetState(::GlobalNamespace::CrittersPawn_CreatureState  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"SetState", {}, {::i2c::type_of<::GlobalNamespace::CrittersPawn_CreatureState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GlobalNamespace::CrittersPawn::ClearOngoingStateFX()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"ClearOngoingStateFX", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersPawn::StartOngoingStateFX(::GlobalNamespace::CrittersPawn_CreatureState  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"StartOngoingStateFX", {}, {::i2c::type_of<::GlobalNamespace::CrittersPawn_CreatureState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void GlobalNamespace::CrittersPawn::UpdateStateColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"UpdateStateColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersPawn::UpdateStateAnim()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"UpdateStateAnim", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersPawn::IdleStateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"IdleStateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersPawn::EatingStateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"EatingStateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersPawn::SleepingStateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"SleepingStateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersPawn::AttractedStateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"AttractedStateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersPawn::RunningStateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"RunningStateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersPawn::SeekingFoodStateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"SeekingFoodStateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersPawn::GrabbedStateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"GrabbedStateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersPawn::HandleRemoteReleased()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersPawn*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersPawn::Released(bool  keepWorldPosition, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  position, ::UnityEngine::Vector3  impulse, ::UnityEngine::Vector3  impulseRotation)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersPawn*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keepWorldPosition, rotation, position, impulse, impulseRotation);
}
inline void GlobalNamespace::CrittersPawn::CapturedStateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"CapturedStateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersPawn::StunnedStateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"StunnedStateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersPawn::WaitingToDespawnStateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"WaitingToDespawnStateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersPawn::DespawningStateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"DespawningStateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersPawn::SpawningStateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"SpawningStateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersPawn::UpdateMoodSourceData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"UpdateMoodSourceData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersPawn::UpdateHunger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"UpdateHunger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersPawn::UpdateFearAndAttraction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"UpdateFearAndAttraction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersPawn::IncreaseFear(float_t  fearAmount, ::GlobalNamespace::CrittersActor*  actor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"IncreaseFear", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::CrittersActor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fearAmount, actor);
}
inline void GlobalNamespace::CrittersPawn::IncreaseAttraction(float_t  attractionAmount, ::GlobalNamespace::CrittersActor*  actor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"IncreaseAttraction", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::CrittersActor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attractionAmount, actor);
}
inline void GlobalNamespace::CrittersPawn::UpdateSleepiness()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"UpdateSleepiness", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersPawn::UpdateStruggle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"UpdateStruggle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersPawn::UpdateSlowed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"UpdateSlowed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersPawn::UpdateGrabbed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"UpdateGrabbed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersPawn::UpdateCaged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"UpdateCaged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersPawn::RandomJump()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"RandomJump", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersPawn::JumpTowards(::UnityEngine::Vector3  targetPos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"JumpTowards", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetPos);
}
inline void GlobalNamespace::CrittersPawn::JumpAwayFrom(::UnityEngine::Vector3  targetPos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"JumpAwayFrom", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetPos);
}
inline bool GlobalNamespace::CrittersPawn::SomethingInTheWay(::UnityEngine::Vector3  direction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"SomethingInTheWay", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, direction);
}
inline bool GlobalNamespace::CrittersPawn::CanBeGrabbed(::GlobalNamespace::CrittersActor*  grabbedBy)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersPawn*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, grabbedBy);
}
inline void GlobalNamespace::CrittersPawn::GrabbedBy(::GlobalNamespace::CrittersActor*  grabbingActor, bool  positionOverride, ::UnityEngine::Quaternion  localRotation, ::UnityEngine::Vector3  localOffset, bool  disableGrabbing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersPawn*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabbingActor, positionOverride, localRotation, localOffset, disableGrabbing);
}
inline void GlobalNamespace::CrittersPawn::RemoteGrabbedBy(::GlobalNamespace::CrittersActor*  grabbingActor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersPawn*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabbingActor);
}
inline void GlobalNamespace::CrittersPawn::Stunned(float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"Stunned", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, duration);
}
inline bool GlobalNamespace::CrittersPawn::AboveFearThreshold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"AboveFearThreshold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::CrittersPawn::BelowNotAfraidThreshold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"BelowNotAfraidThreshold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::CrittersPawn::AboveAttractedThreshold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"AboveAttractedThreshold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::CrittersPawn::BelowUnAttractedThreshold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"BelowUnAttractedThreshold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::CrittersPawn::AboveHungryThreshold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"AboveHungryThreshold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::CrittersPawn::BelowNotHungryThreshold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"BelowNotHungryThreshold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::CrittersPawn::AboveSleepyThreshold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"AboveSleepyThreshold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::CrittersPawn::BelowNotSleepyThreshold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"BelowNotSleepyThreshold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::CrittersPawn::CanJump()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"CanJump", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersPawn::OnCollisionEnter(::UnityEngine::Collision*  collision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collision);
}
inline void GlobalNamespace::CrittersPawn::OnCollisionExit(::UnityEngine::Collision*  collision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"OnCollisionExit", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collision);
}
inline void GlobalNamespace::CrittersPawn::SetVelocity(::UnityEngine::Vector3  linearVelocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"SetVelocity", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, linearVelocity);
}
inline int32_t GlobalNamespace::CrittersPawn::AddActorDataToList(::by_ref<::System::Collections::Generic::List_1<::System::Object*>*>  objList)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersPawn*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, objList);
}
inline int32_t GlobalNamespace::CrittersPawn::TotalActorDataLength()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersPawn*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::CrittersPawn::UpdateFromRPC(::ArrayW<::System::Object*>  data, int32_t  startingIndex)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersPawn*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, data, startingIndex);
}
inline bool GlobalNamespace::CrittersPawn::UpdateSpecificActor(::Photon::Pun::PhotonStream*  stream)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersPawn*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, stream);
}
inline void GlobalNamespace::CrittersPawn::SendDataByCrittersActorType(::Photon::Pun::PhotonStream*  stream)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersPawn*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream);
}
inline void GlobalNamespace::CrittersPawn::SetConfiguration(::GlobalNamespace::CritterConfiguration*  getRandomConfiguration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"SetConfiguration", {}, {::i2c::type_of<::GlobalNamespace::CritterConfiguration*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, getRandomConfiguration);
}
inline void GlobalNamespace::CrittersPawn::SetSpawnData(::ArrayW<::System::Object*>  spawnData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"SetSpawnData", {}, {::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, spawnData);
}
inline int32_t GlobalNamespace::CrittersPawn::IEyeScannable_get_scannableId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"IEyeScannable.get_scannableId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::CrittersPawn::IEyeScannable_get_Position()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"IEyeScannable.get_Position", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Bounds GlobalNamespace::CrittersPawn::IEyeScannable_get_Bounds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"IEyeScannable.get_Bounds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method);
}
inline ::System::Collections::Generic::IList_1<::GlobalNamespace::KeyValueStringPair>* GlobalNamespace::CrittersPawn::IEyeScannable_get_Entries()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"IEyeScannable.get_Entries", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::GlobalNamespace::KeyValueStringPair>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IList_1<::GlobalNamespace::KeyValueStringPair>* GlobalNamespace::CrittersPawn::BuildEyeScannerData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"BuildEyeScannerData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::GlobalNamespace::KeyValueStringPair>*>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::CrittersPawn::GetCurrentStateName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"GetCurrentStateName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersPawn::add_OnDataChange(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"add_OnDataChange", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::CrittersPawn::remove_OnDataChange(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {"remove_OnDataChange", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::CrittersPawn::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CrittersPawn* GlobalNamespace::CrittersPawn::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CrittersPawn*>());
}
/// @brief Convert operator to "::GlobalNamespace::IEyeScannable"
constexpr  GlobalNamespace::CrittersPawn::operator ::GlobalNamespace::IEyeScannable*() noexcept {
return static_cast<::GlobalNamespace::IEyeScannable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IEyeScannable"
constexpr ::GlobalNamespace::IEyeScannable* GlobalNamespace::CrittersPawn::i___GlobalNamespace__IEyeScannable() noexcept {
return static_cast<::GlobalNamespace::IEyeScannable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CrittersPawn::CrittersPawn()   {
}
