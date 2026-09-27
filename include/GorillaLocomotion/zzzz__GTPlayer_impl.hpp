#pragma once
// IWYU pragma private; include "GorillaLocomotion/GTPlayer.hpp"
#include "GorillaLocomotion/Swimming/zzzz__WaterVolume_SurfaceQuery_impl.hpp"
#include "GorillaLocomotion/zzzz__GTPlayer_HandHoldState_impl.hpp"
#include "GorillaLocomotion/zzzz__GTPlayer_HandState_impl.hpp"
#include "GorillaLocomotion/zzzz__GTPlayer_HoverBoardCast_impl.hpp"
#include "GorillaLocomotion/zzzz__GTPlayer_MaterialData_impl.hpp"
#include "GorillaLocomotion/zzzz__GTPlayer_MovingSurfaceContactPoint_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Collider_impl.hpp"
#include "UnityEngine/zzzz__ContactPoint_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit_impl.hpp"
#include "UnityEngine/zzzz__RigidbodyInterpolation_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaLocomotion/zzzz__GTPlayer_def.hpp"
#include "GlobalNamespace/zzzz__BasePlatform_def.hpp"
#include "GlobalNamespace/zzzz__BuilderPiece_def.hpp"
#include "GlobalNamespace/zzzz__ConnectedControllerHandler_def.hpp"
#include "GlobalNamespace/zzzz__ForceDisableHoverboardTrigger_def.hpp"
#include "GlobalNamespace/zzzz__GorillaGrabber_def.hpp"
#include "GlobalNamespace/zzzz__GorillaSurfaceOverride_def.hpp"
#include "GlobalNamespace/zzzz__HandLinkAuthorityStatus_def.hpp"
#include "GlobalNamespace/zzzz__HoverboardAreaTrigger_def.hpp"
#include "GlobalNamespace/zzzz__HoverboardAudio_def.hpp"
#include "GlobalNamespace/zzzz__HoverboardVisual_def.hpp"
#include "GlobalNamespace/zzzz__NativeSizeChangerSettings_def.hpp"
#include "GlobalNamespace/zzzz__PlayerAudioManager_def.hpp"
#include "GlobalNamespace/zzzz__TakeMyHand_HandLink_def.hpp"
#include "GorillaLocomotion/Climbing/zzzz__GorillaClimbableRef_def.hpp"
#include "GorillaLocomotion/Climbing/zzzz__GorillaClimbable_def.hpp"
#include "GorillaLocomotion/Climbing/zzzz__GorillaHandClimber_def.hpp"
#include "GorillaLocomotion/Climbing/zzzz__GorillaVelocityTracker_def.hpp"
#include "GorillaLocomotion/Gameplay/zzzz__GorillaRopeSwing_def.hpp"
#include "GorillaLocomotion/Gameplay/zzzz__GorillaZipline_def.hpp"
#include "GorillaLocomotion/Swimming/zzzz__PlayerSwimmingParameters_def.hpp"
#include "GorillaLocomotion/Swimming/zzzz__WaterCurrent_def.hpp"
#include "GorillaLocomotion/Swimming/zzzz__WaterParameters_def.hpp"
#include "GorillaLocomotion/Swimming/zzzz__WaterVolume_SurfaceQuery_def.hpp"
#include "GorillaLocomotion/Swimming/zzzz__WaterVolume_def.hpp"
#include "GorillaLocomotion/zzzz__GTPlayer_HandHoldState_def.hpp"
#include "GorillaLocomotion/zzzz__GTPlayer_HandState_def.hpp"
#include "GorillaLocomotion/zzzz__GTPlayer_HoverBoardCast_def.hpp"
#include "GorillaLocomotion/zzzz__GTPlayer_LiquidProperties_def.hpp"
#include "GorillaLocomotion/zzzz__GTPlayer_LiquidType_def.hpp"
#include "GorillaLocomotion/zzzz__GTPlayer_MaterialData_def.hpp"
#include "GorillaLocomotion/zzzz__GTPlayer_MovingSurfaceContactPoint_def.hpp"
#include "GorillaLocomotion/zzzz__GTPlayer__DoLaunch_d__494_def.hpp"
#include "GorillaLocomotion/zzzz__GTPlayer_def.hpp"
#include "GorillaLocomotion/zzzz__StiltID_def.hpp"
#include "GorillaTag/zzzz__MaterialDatasSO_def.hpp"
#include "GorillaTagScripts/zzzz__LayerChanger_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__CapsuleCollider_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__ForceMode_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MeshCollider_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__PhysicsMaterial_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__RigidbodyInterpolation_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__SphereCollider_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GorillaLocomotion::GTPlayer> (*)()>(&::GorillaLocomotion::GTPlayer::get_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5cbafa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.get_bodyInitialHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::get_bodyInitialHeight)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5cbaff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_bodyInitialHeight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.get_LeftHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GTPlayer_HandState (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::get_LeftHand)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cbb164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_LeftHand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.get_LeftHandRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::GlobalNamespace::GTPlayer_HandState> (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::get_LeftHandRef)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cbb174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_LeftHandRef", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.get_RightHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GTPlayer_HandState (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::get_RightHand)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cbb17c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_RightHand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.get_RightHandRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::GlobalNamespace::GTPlayer_HandState> (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::get_RightHandRef)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cbb18c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_RightHandRef", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.GetMaterialTouchIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaLocomotion::GTPlayer::*)(bool)>(&::GorillaLocomotion::GTPlayer::GetMaterialTouchIndex)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5cbb194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"GetMaterialTouchIndex", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.GetSurfaceOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GorillaSurfaceOverride> (::GorillaLocomotion::GTPlayer::*)(bool)>(&::GorillaLocomotion::GTPlayer::GetSurfaceOverride)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5cbb1ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"GetSurfaceOverride", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.GetTouchHitInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RaycastHit (::GorillaLocomotion::GTPlayer::*)(bool)>(&::GorillaLocomotion::GTPlayer::GetTouchHitInfo)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5cbb1c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"GetTouchHitInfo", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.IsHandTouching
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaLocomotion::GTPlayer::*)(bool)>(&::GorillaLocomotion::GTPlayer::IsHandTouching)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5cbb238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"IsHandTouching", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.GetHandVelocityTracker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker> (::GorillaLocomotion::GTPlayer::*)(bool)>(&::GorillaLocomotion::GTPlayer::GetHandVelocityTracker)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5cbb254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"GetHandVelocityTracker", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.GetInteractPointVelocityTracker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker> (::GorillaLocomotion::GTPlayer::*)(bool)>(&::GorillaLocomotion::GTPlayer::GetInteractPointVelocityTracker)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5cbb26c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"GetInteractPointVelocityTracker", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.GetControllerTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GorillaLocomotion::GTPlayer::*)(bool)>(&::GorillaLocomotion::GTPlayer::GetControllerTransform)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5cbb284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"GetControllerTransform", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.GetHandFollower
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GorillaLocomotion::GTPlayer::*)(bool)>(&::GorillaLocomotion::GTPlayer::GetHandFollower)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5cbb29c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"GetHandFollower", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.GetHandOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GorillaLocomotion::GTPlayer::*)(bool)>(&::GorillaLocomotion::GTPlayer::GetHandOffset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5cbb2b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"GetHandOffset", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.GetHandRotOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::GorillaLocomotion::GTPlayer::*)(bool)>(&::GorillaLocomotion::GTPlayer::GetHandRotOffset)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5cbb2ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"GetHandRotOffset", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.GetHandPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GorillaLocomotion::GTPlayer::*)(bool, ::GorillaLocomotion::StiltID)>(&::GorillaLocomotion::GTPlayer::GetHandPosition)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5cbb334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"GetHandPosition", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::GorillaLocomotion::StiltID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.GetHandTapData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(bool, ::GorillaLocomotion::StiltID, ::by_ref<bool>, ::by_ref<bool>, ::by_ref<int32_t>, ::by_ref<::GlobalNamespace::GorillaSurfaceOverride*>, ::by_ref<::UnityEngine::RaycastHit>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::GorillaLocomotion::Climbing::GorillaVelocityTracker*>)>(&::GorillaLocomotion::GTPlayer::GetHandTapData)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5cbb3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"GetHandTapData", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::GorillaLocomotion::StiltID>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GorillaSurfaceOverride*>>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::GorillaLocomotion::Climbing::GorillaVelocityTracker*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.SetHandOffsets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(bool, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::GorillaLocomotion::GTPlayer::SetHandOffsets)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5cbb4b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"SetHandOffsets", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.get_playerRigidBody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rigidbody> (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::get_playerRigidBody)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cbb4fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_playerRigidBody", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.set_playerRigidBody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(::UnityEngine::Rigidbody*)>(&::GorillaLocomotion::GTPlayer::set_playerRigidBody)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cbb504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"set_playerRigidBody", {}, {::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.get_LastPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::get_LastPosition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cbb514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_LastPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.get_InstantaneousVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::get_InstantaneousVelocity)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cbb524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_InstantaneousVelocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.get_AveragedVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::get_AveragedVelocity)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cbb534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_AveragedVelocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.get_CosmeticsHeadTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::get_CosmeticsHeadTarget)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cbb544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_CosmeticsHeadTarget", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.get_scale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::get_scale)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cbb54c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_scale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.get_NativeScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::get_NativeScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cbb55c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_NativeScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.get_ScaleMultiplier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::get_ScaleMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cbb564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_ScaleMultiplier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.SetScaleMultiplier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(float_t)>(&::GorillaLocomotion::GTPlayer::SetScaleMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cbb56c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"SetScaleMultiplier", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.SetNativeScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(::GlobalNamespace::NativeSizeChangerSettings*)>(&::GorillaLocomotion::GTPlayer::SetNativeScale)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5cbb574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"SetNativeScale", {}, {::i2c::type_of<::GlobalNamespace::NativeSizeChangerSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.get_IsDefaultScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::get_IsDefaultScale)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5cbb70c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_IsDefaultScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.get_turnedThisFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::get_turnedThisFrame)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cbb734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_turnedThisFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.get_materialData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::GTPlayer_MaterialData>* (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::get_materialData)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5cbb744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_materialData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.GetSwimmingParams
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GorillaLocomotion::Swimming::PlayerSwimmingParameters> (::GorillaLocomotion::GTPlayer::*)(::GlobalNamespace::GTPlayer_LiquidType)>(&::GorillaLocomotion::GTPlayer::GetSwimmingParams)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5cbb75c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"GetSwimmingParams", {}, {::i2c::type_of<::GlobalNamespace::GTPlayer_LiquidType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.GetSwimmingParams
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GorillaLocomotion::Swimming::PlayerSwimmingParameters> (::GorillaLocomotion::GTPlayer::*)(::GorillaLocomotion::Swimming::WaterVolume*)>(&::GorillaLocomotion::GTPlayer::GetSwimmingParams)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5cbb7b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"GetSwimmingParams", {}, {::i2c::type_of<::GorillaLocomotion::Swimming::WaterVolume*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.get_IsFrozen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::get_IsFrozen)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cbb840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_IsFrozen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.set_IsFrozen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(bool)>(&::GorillaLocomotion::GTPlayer::set_IsFrozen)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cbb848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"set_IsFrozen", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.get_forcedUnderwater
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::get_forcedUnderwater)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cbb850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_forcedUnderwater", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.set_forcedUnderwater
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(bool)>(&::GorillaLocomotion::GTPlayer::set_forcedUnderwater)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cbb858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"set_forcedUnderwater", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.get_siJumpMultiplier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::get_siJumpMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cbb860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_siJumpMultiplier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.set_siJumpMultiplier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(float_t)>(&::GorillaLocomotion::GTPlayer::set_siJumpMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cbb868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"set_siJumpMultiplier", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.get_HeadOverlappingWaterVolumes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Swimming::WaterVolume>>* (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::get_HeadOverlappingWaterVolumes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cbb870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_HeadOverlappingWaterVolumes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.get_InWater
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::get_InWater)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cbb878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_InWater", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.get_HeadInWater
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::get_HeadInWater)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cbb880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_HeadInWater", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.get_CurrentWaterVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GorillaLocomotion::Swimming::WaterVolume> (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::get_CurrentWaterVolume)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5cbb888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_CurrentWaterVolume", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.get_WaterSurfaceForHead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::WaterVolume_SurfaceQuery (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::get_WaterSurfaceForHead)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5cbb958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_WaterSurfaceForHead", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.get_LeftHandWaterVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GorillaLocomotion::Swimming::WaterVolume> (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::get_LeftHandWaterVolume)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cbb970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_LeftHandWaterVolume", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.get_RightHandWaterVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GorillaLocomotion::Swimming::WaterVolume> (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::get_RightHandWaterVolume)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cbb978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_RightHandWaterVolume", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.get_LeftHandWaterSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::WaterVolume_SurfaceQuery (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::get_LeftHandWaterSurface)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5cbb980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_LeftHandWaterSurface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.get_RightHandWaterSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::WaterVolume_SurfaceQuery (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::get_RightHandWaterSurface)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5cbb998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_RightHandWaterSurface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.get_LastLeftHandPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::get_LastLeftHandPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cbb9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_LastLeftHandPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.get_LastRightHandPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::get_LastRightHandPosition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cbb9bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_LastRightHandPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.get_RigidbodyVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::get_RigidbodyVelocity)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5cbb9cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_RigidbodyVelocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.get_HeadCenterPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::get_HeadCenterPosition)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5cbb9e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_HeadCenterPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.get_HandContactingSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::get_HandContactingSurface)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5cbba70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_HandContactingSurface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.get_BodyOnGround
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::get_BodyOnGround)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5cbba90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_BodyOnGround", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.get_IsGroundedHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::get_IsGroundedHand)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5cbbac4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_IsGroundedHand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.get_IsGroundedButt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::get_IsGroundedButt)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5cbbafc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_IsGroundedButt", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.get_TentacleActiveAtFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::get_TentacleActiveAtFrame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cbbb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_TentacleActiveAtFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.set_TentacleActiveAtFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(int32_t)>(&::GorillaLocomotion::GTPlayer::set_TentacleActiveAtFrame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cbbb38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"set_TentacleActiveAtFrame", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.get_IsTentacleActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::get_IsTentacleActive)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5cbbb40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_IsTentacleActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.get_LaserZiplineActiveAtFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::get_LaserZiplineActiveAtFrame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cbbb60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_LaserZiplineActiveAtFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.set_LaserZiplineActiveAtFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(int32_t)>(&::GorillaLocomotion::GTPlayer::set_LaserZiplineActiveAtFrame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cbbb68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"set_LaserZiplineActiveAtFrame", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.get_IsLaserZiplineActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::get_IsLaserZiplineActive)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5cbbb70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_IsLaserZiplineActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.get_ThrusterActiveAtFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::get_ThrusterActiveAtFrame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cbbb90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_ThrusterActiveAtFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.set_ThrusterActiveAtFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(int32_t)>(&::GorillaLocomotion::GTPlayer::set_ThrusterActiveAtFrame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cbbb98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"set_ThrusterActiveAtFrame", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.get_IsThrusterActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::get_IsThrusterActive)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5cbbba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_IsThrusterActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.set_PlayerRotationOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(::UnityEngine::Quaternion)>(&::GorillaLocomotion::GTPlayer::set_PlayerRotationOverride)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5cbbbc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"set_PlayerRotationOverride", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.get_IsBodySliding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::get_IsBodySliding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cbbbec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_IsBodySliding", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.set_IsBodySliding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(bool)>(&::GorillaLocomotion::GTPlayer::set_IsBodySliding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cbbbf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"set_IsBodySliding", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.get_bodyGroundIsSlippery
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::get_bodyGroundIsSlippery)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cbbbfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_bodyGroundIsSlippery", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.set_bodyGroundIsSlippery
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(bool)>(&::GorillaLocomotion::GTPlayer::set_bodyGroundIsSlippery)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cbbc04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"set_bodyGroundIsSlippery", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.get_CurrentClimbable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GorillaLocomotion::Climbing::GorillaClimbable> (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::get_CurrentClimbable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cbbc0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_CurrentClimbable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.get_CurrentClimber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber> (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::get_CurrentClimber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cbbc14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_CurrentClimber", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.get_jumpMultiplier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::get_jumpMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cbbc1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_jumpMultiplier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.set_jumpMultiplier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(float_t)>(&::GorillaLocomotion::GTPlayer::set_jumpMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cbbc24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"set_jumpMultiplier", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.get_LastTouchedGroundAtNetworkTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::get_LastTouchedGroundAtNetworkTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cbbc2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_LastTouchedGroundAtNetworkTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.set_LastTouchedGroundAtNetworkTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(float_t)>(&::GorillaLocomotion::GTPlayer::set_LastTouchedGroundAtNetworkTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cbbc34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"set_LastTouchedGroundAtNetworkTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.get_LastHandTouchedGroundAtNetworkTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::get_LastHandTouchedGroundAtNetworkTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cbbc3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_LastHandTouchedGroundAtNetworkTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.set_LastHandTouchedGroundAtNetworkTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(float_t)>(&::GorillaLocomotion::GTPlayer::set_LastHandTouchedGroundAtNetworkTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cbbc44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"set_LastHandTouchedGroundAtNetworkTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.EnableStilt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(::GorillaLocomotion::StiltID, bool, ::UnityEngine::Vector3, float_t, bool, bool, float_t, ::GorillaLocomotion::Climbing::GorillaVelocityTracker*)>(&::GorillaLocomotion::GTPlayer::EnableStilt)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x5cbbc4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"EnableStilt", {}, {::i2c::type_of<::GorillaLocomotion::StiltID>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GorillaLocomotion::Climbing::GorillaVelocityTracker*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.DisableStilt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(::GorillaLocomotion::StiltID)>(&::GorillaLocomotion::GTPlayer::DisableStilt)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5cbbee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"DisableStilt", {}, {::i2c::type_of<::GorillaLocomotion::StiltID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.UpdateStiltOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(::GorillaLocomotion::StiltID, ::UnityEngine::Vector3)>(&::GorillaLocomotion::GTPlayer::UpdateStiltOffset)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5cbbe74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"UpdateStiltOffset", {}, {::i2c::type_of<::GorillaLocomotion::StiltID>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::Awake)> {
  constexpr static std::size_t size = 0x5dc;
  constexpr static std::size_t addrs = 0x5cbbf18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::Start)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x5cbc854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::OnDestroy)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5cbcd98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.InitializeValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::InitializeValues)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x5cbc4f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"InitializeValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.SetHalloweenLevitation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(float_t, float_t, float_t, float_t, float_t, float_t)>(&::GorillaLocomotion::GTPlayer::SetHalloweenLevitation)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5cbcf80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"SetHalloweenLevitation", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.TeleportToTrain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(bool)>(&::GorillaLocomotion::GTPlayer::TeleportToTrain)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cbcfa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"TeleportToTrain", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.TeleportCleanup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::TeleportCleanup)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x5cbcfa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"TeleportCleanup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.TeleportTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, bool, bool)>(&::GorillaLocomotion::GTPlayer::TeleportTo)> {
  constexpr static std::size_t size = 0x68c;
  constexpr static std::size_t addrs = 0x5cbd2a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"TeleportTo", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.TeleportTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(::UnityEngine::Transform*, bool, bool)>(&::GorillaLocomotion::GTPlayer::TeleportTo)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x5cbd930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"TeleportTo", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.AddForce
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(::UnityEngine::Vector3, ::UnityEngine::ForceMode)>(&::GorillaLocomotion::GTPlayer::AddForce)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5cbdc5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"AddForce", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::ForceMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.SetPlayerVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(::UnityEngine::Vector3)>(&::GorillaLocomotion::GTPlayer::SetPlayerVelocity)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5cbdbc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"SetPlayerVelocity", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.get_GravityOverrideCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::get_GravityOverrideCount)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5cbdcd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_GravityOverrideCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.SetGravityOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(::UnityEngine::Object*, ::System::Action_1<::UnityW<::GorillaLocomotion::GTPlayer>>*)>(&::GorillaLocomotion::GTPlayer::SetGravityOverride)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5cbdd28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"SetGravityOverride", {}, {::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::System::Action_1<::UnityW<::GorillaLocomotion::GTPlayer>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.UnsetGravityOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(::UnityEngine::Object*)>(&::GorillaLocomotion::GTPlayer::UnsetGravityOverride)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5cbdd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"UnsetGravityOverride", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.ApplyGravityOverrides
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::ApplyGravityOverrides)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5cbdde8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"ApplyGravityOverrides", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.ApplyKnockback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(::UnityEngine::Vector3, float_t, bool)>(&::GorillaLocomotion::GTPlayer::ApplyKnockback)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x5cbdf34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"ApplyKnockback", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.ApplyClampedKnockback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(::UnityEngine::Vector3, float_t, float_t, bool)>(&::GorillaLocomotion::GTPlayer::ApplyClampedKnockback)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x5cbe170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"ApplyClampedKnockback", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::FixedUpdate)> {
  constexpr static std::size_t size = 0x2000;
  constexpr static std::size_t addrs = 0x5cbe4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.get_isHoverAllowed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::get_isHoverAllowed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cc2a08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_isHoverAllowed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.set_isHoverAllowed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(bool)>(&::GorillaLocomotion::GTPlayer::set_isHoverAllowed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cc2a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"set_isHoverAllowed", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.get_enableHoverMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::get_enableHoverMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cc2a18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_enableHoverMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.set_enableHoverMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(bool)>(&::GorillaLocomotion::GTPlayer::set_enableHoverMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cc2a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"set_enableHoverMode", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.SetHoverboardPosRot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::GorillaLocomotion::GTPlayer::SetHoverboardPosRot)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5cc2a28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"SetHoverboardPosRot", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.HoverboardLateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::HoverboardLateUpdate)> {
  constexpr static std::size_t size = 0x4f0;
  constexpr static std::size_t addrs = 0x5cc2b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"HoverboardLateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.HoverboardFixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GorillaLocomotion::GTPlayer::*)(::UnityEngine::Vector3)>(&::GorillaLocomotion::GTPlayer::HoverboardFixedUpdate)> {
  constexpr static std::size_t size = 0x12e0;
  constexpr static std::size_t addrs = 0x5cc06bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"HoverboardFixedUpdate", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.GrabPersonalHoverboard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(bool, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Color)>(&::GorillaLocomotion::GTPlayer::GrabPersonalHoverboard)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5cc3020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"GrabPersonalHoverboard", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.AddHoverArea
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(::GlobalNamespace::HoverboardAreaTrigger*)>(&::GorillaLocomotion::GTPlayer::AddHoverArea)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5cc318c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"AddHoverArea", {}, {::i2c::type_of<::GlobalNamespace::HoverboardAreaTrigger*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.RemoveHoverArea
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(::GlobalNamespace::HoverboardAreaTrigger*)>(&::GorillaLocomotion::GTPlayer::RemoveHoverArea)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5cc34a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"RemoveHoverArea", {}, {::i2c::type_of<::GlobalNamespace::HoverboardAreaTrigger*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.AddHoverDisabler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(::GlobalNamespace::ForceDisableHoverboardTrigger*)>(&::GorillaLocomotion::GTPlayer::AddHoverDisabler)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5cc35d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"AddHoverDisabler", {}, {::i2c::type_of<::GlobalNamespace::ForceDisableHoverboardTrigger*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.RemoveHoverDisabler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(::GlobalNamespace::ForceDisableHoverboardTrigger*)>(&::GorillaLocomotion::GTPlayer::RemoveHoverDisabler)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5cc3754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"RemoveHoverDisabler", {}, {::i2c::type_of<::GlobalNamespace::ForceDisableHoverboardTrigger*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.ForceHoverDisallowed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::ForceHoverDisallowed)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5cc3884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"ForceHoverDisallowed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.RefreshHoverAllowed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::RefreshHoverAllowed)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5cc3308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"RefreshHoverAllowed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.DelayedRemoveHoverboard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::DelayedRemoveHoverboard)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5cc3974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"DelayedRemoveHoverboard", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.SetHoverActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(bool)>(&::GorillaLocomotion::GTPlayer::SetHoverActive)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5cc39e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"SetHoverActive", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.BodyCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::BodyCollider)> {
  constexpr static std::size_t size = 0x5a8;
  constexpr static std::size_t addrs = 0x5cc3a7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"BodyCollider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.PositionWithOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GorillaLocomotion::GTPlayer::*)(::UnityEngine::Transform*, ::UnityEngine::Vector3)>(&::GorillaLocomotion::GTPlayer::PositionWithOffset)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5cbced0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"PositionWithOffset", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.ScaleAwayFromPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(float_t, float_t, ::UnityEngine::Vector3)>(&::GorillaLocomotion::GTPlayer::ScaleAwayFromPoint)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5cc4230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"ScaleAwayFromPoint", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.ScalePointAwayFromCenter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, float_t, float_t, float_t, ::UnityEngine::Vector3)>(&::GorillaLocomotion::GTPlayer::ScalePointAwayFromCenter)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5cc4380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"ScalePointAwayFromCenter", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.OnBeforeRenderInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::OnBeforeRenderInit)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x5cc449c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"OnBeforeRenderInit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::LateUpdate)> {
  constexpr static std::size_t size = 0x4ffc;
  constexpr static std::size_t addrs = 0x5cc46a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.ApplyNativeScaleAdjustment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GorillaLocomotion::GTPlayer::*)(float_t)>(&::GorillaLocomotion::GTPlayer::ApplyNativeScaleAdjustment)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5ccaae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"ApplyNativeScaleAdjustment", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.RotateWithSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GorillaLocomotion::GTPlayer::*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3)>(&::GorillaLocomotion::GTPlayer::RotateWithSurface)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x5cc9da8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"RotateWithSurface", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.stuckHandsCheckFixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::stuckHandsCheckFixedUpdate)> {
  constexpr static std::size_t size = 0x5ec;
  constexpr static std::size_t addrs = 0x5cc1f68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"stuckHandsCheckFixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.stuckHandsCheckLateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::GorillaLocomotion::GTPlayer::stuckHandsCheckLateUpdate)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5ccab2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"stuckHandsCheckLateUpdate", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.handleClimbing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(float_t)>(&::GorillaLocomotion::GTPlayer::handleClimbing)> {
  constexpr static std::size_t size = 0x5cc;
  constexpr static std::size_t addrs = 0x5cc199c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"handleClimbing", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.RequestTentacleMove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(bool, ::UnityEngine::Vector3)>(&::GorillaLocomotion::GTPlayer::RequestTentacleMove)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5ccc024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"RequestTentacleMove", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.HandleTentacleMovement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::HandleTentacleMovement)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5cca3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"HandleTentacleMovement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.TakeMyHand_GetSelfHandLinkAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::HandLinkAuthorityStatus (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::TakeMyHand_GetSelfHandLinkAuthority)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5ccc054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"TakeMyHand_GetSelfHandLinkAuthority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.TakeMyHand_ProcessMovement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::TakeMyHand_ProcessMovement)> {
  constexpr static std::size_t size = 0x428;
  constexpr static std::size_t addrs = 0x5cc9f88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"TakeMyHand_ProcessMovement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.TakeMyHand_PositionTriple
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(::GlobalNamespace::TakeMyHand_HandLink*, ::GlobalNamespace::TakeMyHand_HandLink*)>(&::GorillaLocomotion::GTPlayer::TakeMyHand_PositionTriple)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x5cccbe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"TakeMyHand_PositionTriple", {}, {::i2c::type_of<::GlobalNamespace::TakeMyHand_HandLink*>(), ::i2c::type_of<::GlobalNamespace::TakeMyHand_HandLink*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.TakeMyHand_PositionBoth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(::GlobalNamespace::TakeMyHand_HandLink*)>(&::GorillaLocomotion::GTPlayer::TakeMyHand_PositionBoth)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x5ccc968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"TakeMyHand_PositionBoth", {}, {::i2c::type_of<::GlobalNamespace::TakeMyHand_HandLink*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.TakeMyHand_PositionBoth_BothHands
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(::GlobalNamespace::TakeMyHand_HandLink*, ::GlobalNamespace::TakeMyHand_HandLink*)>(&::GorillaLocomotion::GTPlayer::TakeMyHand_PositionBoth_BothHands)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x5ccc5a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"TakeMyHand_PositionBoth_BothHands", {}, {::i2c::type_of<::GlobalNamespace::TakeMyHand_HandLink*>(), ::i2c::type_of<::GlobalNamespace::TakeMyHand_HandLink*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.TakeMyHand_PositionChild_LocalPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(::GlobalNamespace::TakeMyHand_HandLink*)>(&::GorillaLocomotion::GTPlayer::TakeMyHand_PositionChild_LocalPlayer)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x5cccee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"TakeMyHand_PositionChild_LocalPlayer", {}, {::i2c::type_of<::GlobalNamespace::TakeMyHand_HandLink*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.TakeMyHand_PositionChild_LocalPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(::GlobalNamespace::TakeMyHand_HandLink*, ::GlobalNamespace::TakeMyHand_HandLink*)>(&::GorillaLocomotion::GTPlayer::TakeMyHand_PositionChild_LocalPlayer)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x5ccc2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"TakeMyHand_PositionChild_LocalPlayer", {}, {::i2c::type_of<::GlobalNamespace::TakeMyHand_HandLink*>(), ::i2c::type_of<::GlobalNamespace::TakeMyHand_HandLink*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.TakeMyHand_PositionChild_RemotePlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(::GlobalNamespace::TakeMyHand_HandLink*)>(&::GorillaLocomotion::GTPlayer::TakeMyHand_PositionChild_RemotePlayer)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5ccc8b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"TakeMyHand_PositionChild_RemotePlayer", {}, {::i2c::type_of<::GlobalNamespace::TakeMyHand_HandLink*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.TakeMyHand_PositionChild_RemotePlayer_BothHands
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(::GlobalNamespace::TakeMyHand_HandLink*, ::GlobalNamespace::TakeMyHand_HandLink*)>(&::GorillaLocomotion::GTPlayer::TakeMyHand_PositionChild_RemotePlayer_BothHands)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5ccc1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"TakeMyHand_PositionChild_RemotePlayer_BothHands", {}, {::i2c::type_of<::GlobalNamespace::TakeMyHand_HandLink*>(), ::i2c::type_of<::GlobalNamespace::TakeMyHand_HandLink*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.IterativeCollisionSphereCast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaLocomotion::GTPlayer::*)(::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::Vector3>, bool, ::by_ref<float_t>, ::by_ref<::UnityEngine::RaycastHit>, bool)>(&::GorillaLocomotion::GTPlayer::IterativeCollisionSphereCast)> {
  constexpr static std::size_t size = 0x4f8;
  constexpr static std::size_t addrs = 0x5cc98b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"IterativeCollisionSphereCast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.CollisionsSphereCast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaLocomotion::GTPlayer::*)(::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::RaycastHit>)>(&::GorillaLocomotion::GTPlayer::CollisionsSphereCast)> {
  constexpr static std::size_t size = 0xd1c;
  constexpr static std::size_t addrs = 0x5ccd120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"CollisionsSphereCast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.GetSlidePercentage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GorillaLocomotion::GTPlayer::*)(::UnityEngine::RaycastHit)>(&::GorillaLocomotion::GTPlayer::GetSlidePercentage)> {
  constexpr static std::size_t size = 0x87c;
  constexpr static std::size_t addrs = 0x5ccde3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"GetSlidePercentage", {}, {::i2c::type_of<::UnityEngine::RaycastHit>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.IsTouchingMovingSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaLocomotion::GTPlayer::*)(::UnityEngine::Vector3, ::UnityEngine::RaycastHit, ::by_ref<int32_t>, ::by_ref<bool>, ::by_ref<bool>)>(&::GorillaLocomotion::GTPlayer::IsTouchingMovingSurface)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x5cca4cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"IsTouchingMovingSurface", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::RaycastHit>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.Turn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(float_t)>(&::GorillaLocomotion::GTPlayer::Turn)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x5cbcafc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"Turn", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.BeginClimbing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(::GorillaLocomotion::Climbing::GorillaClimbable*, ::GorillaLocomotion::Climbing::GorillaHandClimber*, ::GorillaLocomotion::Climbing::GorillaClimbableRef*)>(&::GorillaLocomotion::GTPlayer::BeginClimbing)> {
  constexpr static std::size_t size = 0x74c;
  constexpr static std::size_t addrs = 0x5cce788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"BeginClimbing", {}, {::i2c::type_of<::GorillaLocomotion::Climbing::GorillaClimbable*>(), ::i2c::type_of<::GorillaLocomotion::Climbing::GorillaHandClimber*>(), ::i2c::type_of<::GorillaLocomotion::Climbing::GorillaClimbableRef*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.VerifyClimbHelper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::VerifyClimbHelper)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5cceed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"VerifyClimbHelper", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.EndClimbing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(::GorillaLocomotion::Climbing::GorillaHandClimber*, bool, bool)>(&::GorillaLocomotion::GTPlayer::EndClimbing)> {
  constexpr static std::size_t size = 0x6a8;
  constexpr static std::size_t addrs = 0x5ccb97c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"EndClimbing", {}, {::i2c::type_of<::GorillaLocomotion::Climbing::GorillaHandClimber*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.ResetRigidbodyInterpolation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::ResetRigidbodyInterpolation)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5ccf024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"ResetRigidbodyInterpolation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.get_RigidbodyInterpolation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RigidbodyInterpolation (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::get_RigidbodyInterpolation)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5ccf044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_RigidbodyInterpolation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.set_RigidbodyInterpolation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(::UnityEngine::RigidbodyInterpolation)>(&::GorillaLocomotion::GTPlayer::set_RigidbodyInterpolation)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5ccf05c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"set_RigidbodyInterpolation", {}, {::i2c::type_of<::UnityEngine::RigidbodyInterpolation>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.enablePlayerGravity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(bool)>(&::GorillaLocomotion::GTPlayer::enablePlayerGravity)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5ccf008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"enablePlayerGravity", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.SetVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(::UnityEngine::Vector3)>(&::GorillaLocomotion::GTPlayer::SetVelocity)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5ccf074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"SetVelocity", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.RigidbodyMovePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(::UnityEngine::Vector3)>(&::GorillaLocomotion::GTPlayer::RigidbodyMovePosition)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5ccf08c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"RigidbodyMovePosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.TempFreezeHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(bool, float_t)>(&::GorillaLocomotion::GTPlayer::TempFreezeHand)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5ccf0a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"TempFreezeHand", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.StoreVelocities
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::StoreVelocities)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5cca774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"StoreVelocities", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.AntiTeleportTechnology
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::AntiTeleportTechnology)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x5cc04e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"AntiTeleportTechnology", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.MaxSphereSizeForNoOverlap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaLocomotion::GTPlayer::*)(float_t, ::UnityEngine::Vector3, bool, ::by_ref<float_t>)>(&::GorillaLocomotion::GTPlayer::MaxSphereSizeForNoOverlap)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x5cc4024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"MaxSphereSizeForNoOverlap", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.CrazyCheck2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaLocomotion::GTPlayer::*)(float_t, ::UnityEngine::Vector3)>(&::GorillaLocomotion::GTPlayer::CrazyCheck2)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5cc97e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"CrazyCheck2", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.NonAllocRaycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaLocomotion::GTPlayer::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GorillaLocomotion::GTPlayer::NonAllocRaycast)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5ccf19c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"NonAllocRaycast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.ClearColliderBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(::by_ref<::ArrayW<::UnityEngine::Collider*>>)>(&::GorillaLocomotion::GTPlayer::ClearColliderBuffer)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5ccf134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"ClearColliderBuffer", {}, {::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Collider*>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.ClearRaycasthitBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(::by_ref<::ArrayW<::UnityEngine::RaycastHit>>)>(&::GorillaLocomotion::GTPlayer::ClearRaycasthitBuffer)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5ccb914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"ClearRaycasthitBuffer", {}, {::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::RaycastHit>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.MovingSurfaceMovement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::MovingSurfaceMovement)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5cc96a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"MovingSurfaceMovement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.ComputeLocalHitPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::RaycastHit, ::by_ref<::UnityEngine::Vector3>)>(&::GorillaLocomotion::GTPlayer::ComputeLocalHitPoint)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5ccb7d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"ComputeLocalHitPoint", {}, {::i2c::type_of<::UnityEngine::RaycastHit>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.ComputeWorldHitPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::RaycastHit, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::Vector3>)>(&::GorillaLocomotion::GTPlayer::ComputeWorldHitPoint)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5cc96c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"ComputeWorldHitPoint", {}, {::i2c::type_of<::UnityEngine::RaycastHit>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.ExtraVelMultiplier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::ExtraVelMultiplier)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5ccaa10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"ExtraVelMultiplier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.ExtraVelMaxMultiplier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::ExtraVelMaxMultiplier)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5cca934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"ExtraVelMaxMultiplier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.SetMaximumSlipThisFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::SetMaximumSlipThisFrame)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5cbe148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"SetMaximumSlipThisFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.SetLeftMaximumSlipThisFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::SetLeftMaximumSlipThisFrame)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5ccf370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"SetLeftMaximumSlipThisFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.SetRightMaximumSlipThisFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::SetRightMaximumSlipThisFrame)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5ccf38c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"SetRightMaximumSlipThisFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.ChangeLayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(::StringW)>(&::GorillaLocomotion::GTPlayer::ChangeLayer)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5ccf3a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"ChangeLayer", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.RestoreLayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::RestoreLayer)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5ccf460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"RestoreLayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.OnEnterWaterVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(::UnityEngine::Collider*, ::GorillaLocomotion::Swimming::WaterVolume*)>(&::GorillaLocomotion::GTPlayer::OnEnterWaterVolume)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5ccf4e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"OnEnterWaterVolume", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::GorillaLocomotion::Swimming::WaterVolume*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.OnExitWaterVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(::UnityEngine::Collider*, ::GorillaLocomotion::Swimming::WaterVolume*)>(&::GorillaLocomotion::GTPlayer::OnExitWaterVolume)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5ccf688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"OnExitWaterVolume", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::GorillaLocomotion::Swimming::WaterVolume*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.GetSwimmingVelocityForHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaLocomotion::GTPlayer::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::by_ref<::GorillaLocomotion::Swimming::WaterVolume*>, ::by_ref<::GlobalNamespace::WaterVolume_SurfaceQuery>, ::by_ref<::UnityEngine::Vector3>)>(&::GorillaLocomotion::GTPlayer::GetSwimmingVelocityForHand)> {
  constexpr static std::size_t size = 0x950;
  constexpr static std::size_t addrs = 0x5ccab94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"GetSwimmingVelocityForHand", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::GorillaLocomotion::Swimming::WaterVolume*>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::WaterVolume_SurfaceQuery>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.CheckWaterSurfaceJump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaLocomotion::GTPlayer::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::GorillaLocomotion::Swimming::PlayerSwimmingParameters*, ::GorillaLocomotion::Swimming::WaterVolume*, ::GlobalNamespace::WaterVolume_SurfaceQuery, ::by_ref<::UnityEngine::Vector3>)>(&::GorillaLocomotion::GTPlayer::CheckWaterSurfaceJump)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x5ccb4e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"CheckWaterSurfaceJump", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GorillaLocomotion::Swimming::PlayerSwimmingParameters*>(), ::i2c::type_of<::GorillaLocomotion::Swimming::WaterVolume*>(), ::i2c::type_of<::GlobalNamespace::WaterVolume_SurfaceQuery>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.TryNormalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaLocomotion::GTPlayer::*)(::UnityEngine::Vector3, ::by_ref<::UnityEngine::Vector3>, ::by_ref<float_t>, float_t)>(&::GorillaLocomotion::GTPlayer::TryNormalize)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5ccf768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"TryNormalize", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.TryNormalizeDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaLocomotion::GTPlayer::*)(::UnityEngine::Vector3, ::by_ref<::UnityEngine::Vector3>, ::by_ref<float_t>, float_t)>(&::GorillaLocomotion::GTPlayer::TryNormalizeDown)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5ccf86c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"TryNormalizeDown", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.FreezeTagSlidePercentage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::FreezeTagSlidePercentage)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5cce6b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"FreezeTagSlidePercentage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.OnCollisionStay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(::UnityEngine::Collision*)>(&::GorillaLocomotion::GTPlayer::OnCollisionStay)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x5ccf96c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"OnCollisionStay", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.DoLaunch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(::UnityEngine::Vector3)>(&::GorillaLocomotion::GTPlayer::DoLaunch)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5ccfbd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"DoLaunch", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::OnEnable)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5ccfc9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.OnJoinedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::OnJoinedRoom)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5ccfd84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"OnJoinedRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::OnDisable)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5ccfda0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.ForceRigidBodySync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::ForceRigidBodySync)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cbcf74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"ForceRigidBodySync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.ClearHandHolds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::ClearHandHolds)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5cbd27c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"ClearHandHolds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.AddHandHold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::GlobalNamespace::GorillaGrabber*, bool, bool, ::by_ref<::UnityEngine::Vector3>)>(&::GorillaLocomotion::GTPlayer::AddHandHold)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x5cd0138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"AddHandHold", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::GorillaGrabber*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.RemoveHandHold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(::GlobalNamespace::GorillaGrabber*, bool)>(&::GorillaLocomotion::GTPlayer::RemoveHandHold)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5cd0370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"RemoveHandHold", {}, {::i2c::type_of<::GlobalNamespace::GorillaGrabber*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.OnChangeActiveHandhold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::OnChangeActiveHandhold)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x5ccfe88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"OnChangeActiveHandhold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer.FixedUpdate_HandHolds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)(float_t)>(&::GorillaLocomotion::GTPlayer::FixedUpdate_HandHolds)> {
  constexpr static std::size_t size = 0x4b4;
  constexpr static std::size_t addrs = 0x5cc2554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"FixedUpdate_HandHolds", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer::*)()>(&::GorillaLocomotion::GTPlayer::_ctor)> {
  constexpr static std::size_t size = 0x7ac;
  constexpr static std::size_t addrs = 0x5cd044c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer._GetSlidePercentage_b__455_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaLocomotion::GTPlayer::*)(::GlobalNamespace::GTPlayer_MaterialData)>(&::GorillaLocomotion::GTPlayer::_GetSlidePercentage_b__455_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5cd0c5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"<GetSlidePercentage>b__455_0", {}, {::i2c::type_of<::GlobalNamespace::GTPlayer_MaterialData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer._GetSlidePercentage_b__455_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaLocomotion::GTPlayer::*)(::GlobalNamespace::GTPlayer_MaterialData)>(&::GorillaLocomotion::GTPlayer::_GetSlidePercentage_b__455_1)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5cd0c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"<GetSlidePercentage>b__455_1", {}, {::i2c::type_of<::GlobalNamespace::GTPlayer_MaterialData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer._BeginClimbing_g__SnapAxis_458_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<float_t>, float_t)>(&::GorillaLocomotion::GTPlayer::_BeginClimbing_g__SnapAxis_458_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5ccefe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"<BeginClimbing>g__SnapAxis|458_0", {}, {::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Camera>& GorillaLocomotion::GTPlayer::__cordl_internal_get_mainCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mainCamera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& GorillaLocomotion::GTPlayer::__cordl_internal_get_mainCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mainCamera;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_mainCamera(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mainCamera = value;
}
constexpr ::UnityW<::UnityEngine::SphereCollider>& GorillaLocomotion::GTPlayer::__cordl_internal_get_headCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headCollider;
}
constexpr ::UnityW<::UnityEngine::SphereCollider> const& GorillaLocomotion::GTPlayer::__cordl_internal_get_headCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headCollider;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_headCollider(::UnityW<::UnityEngine::SphereCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headCollider = value;
}
constexpr ::UnityW<::UnityEngine::CapsuleCollider>& GorillaLocomotion::GTPlayer::__cordl_internal_get_bodyCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyCollider;
}
constexpr ::UnityW<::UnityEngine::CapsuleCollider> const& GorillaLocomotion::GTPlayer::__cordl_internal_get_bodyCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyCollider;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_bodyCollider(::UnityW<::UnityEngine::CapsuleCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bodyCollider = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_bodyInitialRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyInitialRadius;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_bodyInitialRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyInitialRadius;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_bodyInitialRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bodyInitialRadius = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get__bodyInitialHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bodyInitialHeight;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get__bodyInitialHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bodyInitialHeight;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set__bodyInitialHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bodyInitialHeight = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_currentBodyHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentBodyHeight;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_currentBodyHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentBodyHeight;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_currentBodyHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentBodyHeight = value;
}
constexpr double_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_frameCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frameCount;
}
constexpr double_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_frameCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frameCount;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_frameCount(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frameCount = value;
}
constexpr ::UnityEngine::RaycastHit& GorillaLocomotion::GTPlayer::__cordl_internal_get_bodyHitInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyHitInfo;
}
constexpr ::UnityEngine::RaycastHit const& GorillaLocomotion::GTPlayer::__cordl_internal_get_bodyHitInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyHitInfo;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_bodyHitInfo(::UnityEngine::RaycastHit  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bodyHitInfo = value;
}
constexpr ::UnityEngine::RaycastHit& GorillaLocomotion::GTPlayer::__cordl_internal_get_lastHitInfoHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastHitInfoHand;
}
constexpr ::UnityEngine::RaycastHit const& GorillaLocomotion::GTPlayer::__cordl_internal_get_lastHitInfoHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastHitInfoHand;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_lastHitInfoHand(::UnityEngine::RaycastHit  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastHitInfoHand = value;
}
constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker>& GorillaLocomotion::GTPlayer::__cordl_internal_get_bodyVelocityTracker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyVelocityTracker;
}
constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker> const& GorillaLocomotion::GTPlayer::__cordl_internal_get_bodyVelocityTracker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyVelocityTracker;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_bodyVelocityTracker(::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bodyVelocityTracker = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerAudioManager>& GorillaLocomotion::GTPlayer::__cordl_internal_get_audioManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioManager;
}
constexpr ::UnityW<::GlobalNamespace::PlayerAudioManager> const& GorillaLocomotion::GTPlayer::__cordl_internal_get_audioManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioManager;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_audioManager(::UnityW<::GlobalNamespace::PlayerAudioManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioManager = value;
}
constexpr ::GlobalNamespace::GTPlayer_HandState& GorillaLocomotion::GTPlayer::__cordl_internal_get_leftHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHand;
}
constexpr ::GlobalNamespace::GTPlayer_HandState const& GorillaLocomotion::GTPlayer::__cordl_internal_get_leftHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHand;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_leftHand(::GlobalNamespace::GTPlayer_HandState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftHand = value;
}
constexpr ::GlobalNamespace::GTPlayer_HandState& GorillaLocomotion::GTPlayer::__cordl_internal_get_rightHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHand;
}
constexpr ::GlobalNamespace::GTPlayer_HandState const& GorillaLocomotion::GTPlayer::__cordl_internal_get_rightHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHand;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_rightHand(::GlobalNamespace::GTPlayer_HandState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightHand = value;
}
constexpr ::ArrayW<::GlobalNamespace::GTPlayer_HandState>& GorillaLocomotion::GTPlayer::__cordl_internal_get_stiltStates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stiltStates;
}
constexpr ::ArrayW<::GlobalNamespace::GTPlayer_HandState> const& GorillaLocomotion::GTPlayer::__cordl_internal_get_stiltStates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stiltStates;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_stiltStates(::ArrayW<::GlobalNamespace::GTPlayer_HandState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stiltStates = value;
}
constexpr bool& GorillaLocomotion::GTPlayer::__cordl_internal_get_anyHandIsColliding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anyHandIsColliding;
}
constexpr bool const& GorillaLocomotion::GTPlayer::__cordl_internal_get_anyHandIsColliding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anyHandIsColliding;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_anyHandIsColliding(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anyHandIsColliding = value;
}
constexpr bool& GorillaLocomotion::GTPlayer::__cordl_internal_get_anyHandWasColliding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anyHandWasColliding;
}
constexpr bool const& GorillaLocomotion::GTPlayer::__cordl_internal_get_anyHandWasColliding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anyHandWasColliding;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_anyHandWasColliding(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anyHandWasColliding = value;
}
constexpr bool& GorillaLocomotion::GTPlayer::__cordl_internal_get_anyHandIsSliding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anyHandIsSliding;
}
constexpr bool const& GorillaLocomotion::GTPlayer::__cordl_internal_get_anyHandIsSliding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anyHandIsSliding;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_anyHandIsSliding(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anyHandIsSliding = value;
}
constexpr bool& GorillaLocomotion::GTPlayer::__cordl_internal_get_anyHandWasSliding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anyHandWasSliding;
}
constexpr bool const& GorillaLocomotion::GTPlayer::__cordl_internal_get_anyHandWasSliding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anyHandWasSliding;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_anyHandWasSliding(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anyHandWasSliding = value;
}
constexpr bool& GorillaLocomotion::GTPlayer::__cordl_internal_get_anyHandIsSticking()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anyHandIsSticking;
}
constexpr bool const& GorillaLocomotion::GTPlayer::__cordl_internal_get_anyHandIsSticking() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anyHandIsSticking;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_anyHandIsSticking(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anyHandIsSticking = value;
}
constexpr bool& GorillaLocomotion::GTPlayer::__cordl_internal_get_anyHandWasSticking()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anyHandWasSticking;
}
constexpr bool const& GorillaLocomotion::GTPlayer::__cordl_internal_get_anyHandWasSticking() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anyHandWasSticking;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_anyHandWasSticking(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anyHandWasSticking = value;
}
constexpr bool& GorillaLocomotion::GTPlayer::__cordl_internal_get_forceRBSync()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forceRBSync;
}
constexpr bool const& GorillaLocomotion::GTPlayer::__cordl_internal_get_forceRBSync() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forceRBSync;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_forceRBSync(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___forceRBSync = value;
}
constexpr ::UnityEngine::Vector3& GorillaLocomotion::GTPlayer::__cordl_internal_get_lastHeadPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastHeadPosition;
}
constexpr ::UnityEngine::Vector3 const& GorillaLocomotion::GTPlayer::__cordl_internal_get_lastHeadPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastHeadPosition;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_lastHeadPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastHeadPosition = value;
}
constexpr ::UnityEngine::Vector3& GorillaLocomotion::GTPlayer::__cordl_internal_get_lastRigidbodyPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRigidbodyPosition;
}
constexpr ::UnityEngine::Vector3 const& GorillaLocomotion::GTPlayer::__cordl_internal_get_lastRigidbodyPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRigidbodyPosition;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_lastRigidbodyPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastRigidbodyPosition = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GorillaLocomotion::GTPlayer::__cordl_internal_get__playerRigidBody_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerRigidBody_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GorillaLocomotion::GTPlayer::__cordl_internal_get__playerRigidBody_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerRigidBody_k__BackingField;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set__playerRigidBody_k__BackingField(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playerRigidBody_k__BackingField = value;
}
constexpr ::UnityEngine::RigidbodyInterpolation& GorillaLocomotion::GTPlayer::__cordl_internal_get_playerRigidbodyInterpolationDefault()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerRigidbodyInterpolationDefault;
}
constexpr ::UnityEngine::RigidbodyInterpolation const& GorillaLocomotion::GTPlayer::__cordl_internal_get_playerRigidbodyInterpolationDefault() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerRigidbodyInterpolationDefault;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_playerRigidbodyInterpolationDefault(::UnityEngine::RigidbodyInterpolation  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerRigidbodyInterpolationDefault = value;
}
constexpr int32_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_velocityHistorySize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityHistorySize;
}
constexpr int32_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_velocityHistorySize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityHistorySize;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_velocityHistorySize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocityHistorySize = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_maxArmLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxArmLength;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_maxArmLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxArmLength;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_maxArmLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxArmLength = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_unStickDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unStickDistance;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_unStickDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unStickDistance;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_unStickDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unStickDistance = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_velocityLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityLimit;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_velocityLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityLimit;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_velocityLimit(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocityLimit = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_slideVelocityLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slideVelocityLimit;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_slideVelocityLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slideVelocityLimit;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_slideVelocityLimit(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slideVelocityLimit = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_maxJumpSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxJumpSpeed;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_maxJumpSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxJumpSpeed;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_maxJumpSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxJumpSpeed = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get__jumpMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jumpMultiplier;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get__jumpMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jumpMultiplier;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set__jumpMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____jumpMultiplier = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_minimumRaycastDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minimumRaycastDistance;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_minimumRaycastDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minimumRaycastDistance;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_minimumRaycastDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minimumRaycastDistance = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_defaultSlideFactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultSlideFactor;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_defaultSlideFactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultSlideFactor;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_defaultSlideFactor(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultSlideFactor = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_slidingMinimum()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slidingMinimum;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_slidingMinimum() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slidingMinimum;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_slidingMinimum(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slidingMinimum = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_defaultPrecision()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultPrecision;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_defaultPrecision() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultPrecision;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_defaultPrecision(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultPrecision = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_teleportThresholdNoVel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teleportThresholdNoVel;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_teleportThresholdNoVel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teleportThresholdNoVel;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_teleportThresholdNoVel(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___teleportThresholdNoVel = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_frictionConstant()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frictionConstant;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_frictionConstant() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frictionConstant;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_frictionConstant(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frictionConstant = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_slideControl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slideControl;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_slideControl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slideControl;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_slideControl(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slideControl = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_stickDepth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stickDepth;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_stickDepth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stickDepth;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_stickDepth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stickDepth = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& GorillaLocomotion::GTPlayer::__cordl_internal_get_velocityHistory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityHistory;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& GorillaLocomotion::GTPlayer::__cordl_internal_get_velocityHistory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityHistory;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_velocityHistory(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocityHistory = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& GorillaLocomotion::GTPlayer::__cordl_internal_get_slideAverageHistory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slideAverageHistory;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& GorillaLocomotion::GTPlayer::__cordl_internal_get_slideAverageHistory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slideAverageHistory;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_slideAverageHistory(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slideAverageHistory = value;
}
constexpr int32_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_velocityIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityIndex;
}
constexpr int32_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_velocityIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityIndex;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_velocityIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocityIndex = value;
}
constexpr ::UnityEngine::Vector3& GorillaLocomotion::GTPlayer::__cordl_internal_get_currentVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentVelocity;
}
constexpr ::UnityEngine::Vector3 const& GorillaLocomotion::GTPlayer::__cordl_internal_get_currentVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentVelocity;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_currentVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentVelocity = value;
}
constexpr ::UnityEngine::Vector3& GorillaLocomotion::GTPlayer::__cordl_internal_get_averagedVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___averagedVelocity;
}
constexpr ::UnityEngine::Vector3 const& GorillaLocomotion::GTPlayer::__cordl_internal_get_averagedVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___averagedVelocity;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_averagedVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___averagedVelocity = value;
}
constexpr ::UnityEngine::Vector3& GorillaLocomotion::GTPlayer::__cordl_internal_get_lastPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPosition;
}
constexpr ::UnityEngine::Vector3 const& GorillaLocomotion::GTPlayer::__cordl_internal_get_lastPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPosition;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_lastPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastPosition = value;
}
constexpr ::UnityEngine::Vector3& GorillaLocomotion::GTPlayer::__cordl_internal_get_bodyOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyOffset;
}
constexpr ::UnityEngine::Vector3 const& GorillaLocomotion::GTPlayer::__cordl_internal_get_bodyOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyOffset;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_bodyOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bodyOffset = value;
}
constexpr ::UnityEngine::LayerMask& GorillaLocomotion::GTPlayer::__cordl_internal_get_locomotionEnabledLayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___locomotionEnabledLayers;
}
constexpr ::UnityEngine::LayerMask const& GorillaLocomotion::GTPlayer::__cordl_internal_get_locomotionEnabledLayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___locomotionEnabledLayers;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_locomotionEnabledLayers(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___locomotionEnabledLayers = value;
}
constexpr ::UnityEngine::LayerMask& GorillaLocomotion::GTPlayer::__cordl_internal_get_hoverboardLocomotionLayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoverboardLocomotionLayers;
}
constexpr ::UnityEngine::LayerMask const& GorillaLocomotion::GTPlayer::__cordl_internal_get_hoverboardLocomotionLayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoverboardLocomotionLayers;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_hoverboardLocomotionLayers(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hoverboardLocomotionLayers = value;
}
constexpr ::UnityEngine::LayerMask& GorillaLocomotion::GTPlayer::__cordl_internal_get_waterLayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waterLayer;
}
constexpr ::UnityEngine::LayerMask const& GorillaLocomotion::GTPlayer::__cordl_internal_get_waterLayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waterLayer;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_waterLayer(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waterLayer = value;
}
constexpr bool& GorillaLocomotion::GTPlayer::__cordl_internal_get_wasHeadTouching()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasHeadTouching;
}
constexpr bool const& GorillaLocomotion::GTPlayer::__cordl_internal_get_wasHeadTouching() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasHeadTouching;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_wasHeadTouching(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasHeadTouching = value;
}
constexpr int32_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_currentMaterialIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentMaterialIndex;
}
constexpr int32_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_currentMaterialIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentMaterialIndex;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_currentMaterialIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentMaterialIndex = value;
}
constexpr ::UnityEngine::Vector3& GorillaLocomotion::GTPlayer::__cordl_internal_get_headSlideNormal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headSlideNormal;
}
constexpr ::UnityEngine::Vector3 const& GorillaLocomotion::GTPlayer::__cordl_internal_get_headSlideNormal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headSlideNormal;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_headSlideNormal(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headSlideNormal = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_headSlipPercentage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headSlipPercentage;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_headSlipPercentage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headSlipPercentage;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_headSlipPercentage(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headSlipPercentage = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaLocomotion::GTPlayer::__cordl_internal_get_cosmeticsHeadTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cosmeticsHeadTarget;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaLocomotion::GTPlayer::__cordl_internal_get_cosmeticsHeadTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cosmeticsHeadTarget;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_cosmeticsHeadTarget(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cosmeticsHeadTarget = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_nativeScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nativeScale;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_nativeScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nativeScale;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_nativeScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nativeScale = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_scaleMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleMultiplier;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_scaleMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleMultiplier;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_scaleMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scaleMultiplier = value;
}
constexpr ::GlobalNamespace::NativeSizeChangerSettings*& GorillaLocomotion::GTPlayer::__cordl_internal_get_activeSizeChangerSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeSizeChangerSettings;
}
constexpr ::GlobalNamespace::NativeSizeChangerSettings* const& GorillaLocomotion::GTPlayer::__cordl_internal_get_activeSizeChangerSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeSizeChangerSettings;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_activeSizeChangerSettings(::GlobalNamespace::NativeSizeChangerSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeSizeChangerSettings = value;
}
constexpr bool& GorillaLocomotion::GTPlayer::__cordl_internal_get_debugMovement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugMovement;
}
constexpr bool const& GorillaLocomotion::GTPlayer::__cordl_internal_get_debugMovement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugMovement;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_debugMovement(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugMovement = value;
}
constexpr bool& GorillaLocomotion::GTPlayer::__cordl_internal_get_disableMovement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableMovement;
}
constexpr bool const& GorillaLocomotion::GTPlayer::__cordl_internal_get_disableMovement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableMovement;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_disableMovement(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disableMovement = value;
}
constexpr bool& GorillaLocomotion::GTPlayer::__cordl_internal_get_inOverlay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inOverlay;
}
constexpr bool const& GorillaLocomotion::GTPlayer::__cordl_internal_get_inOverlay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inOverlay;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_inOverlay(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inOverlay = value;
}
constexpr bool& GorillaLocomotion::GTPlayer::__cordl_internal_get_isUserPresent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isUserPresent;
}
constexpr bool const& GorillaLocomotion::GTPlayer::__cordl_internal_get_isUserPresent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isUserPresent;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_isUserPresent(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isUserPresent = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaLocomotion::GTPlayer::__cordl_internal_get_turnParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turnParent;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaLocomotion::GTPlayer::__cordl_internal_get_turnParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turnParent;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_turnParent(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___turnParent = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaLocomotion::GTPlayer::__cordl_internal_get_RecordingRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RecordingRig;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaLocomotion::GTPlayer::__cordl_internal_get_RecordingRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RecordingRig;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_RecordingRig(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RecordingRig = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaSurfaceOverride>& GorillaLocomotion::GTPlayer::__cordl_internal_get_currentOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentOverride;
}
constexpr ::UnityW<::GlobalNamespace::GorillaSurfaceOverride> const& GorillaLocomotion::GTPlayer::__cordl_internal_get_currentOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentOverride;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_currentOverride(::UnityW<::GlobalNamespace::GorillaSurfaceOverride>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentOverride = value;
}
constexpr ::UnityW<::GorillaTag::MaterialDatasSO>& GorillaLocomotion::GTPlayer::__cordl_internal_get_materialDatasSO()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialDatasSO;
}
constexpr ::UnityW<::GorillaTag::MaterialDatasSO> const& GorillaLocomotion::GTPlayer::__cordl_internal_get_materialDatasSO() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialDatasSO;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_materialDatasSO(::UnityW<::GorillaTag::MaterialDatasSO>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___materialDatasSO = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_degreesTurnedThisFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___degreesTurnedThisFrame;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_degreesTurnedThisFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___degreesTurnedThisFrame;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_degreesTurnedThisFrame(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___degreesTurnedThisFrame = value;
}
constexpr ::UnityEngine::Vector3& GorillaLocomotion::GTPlayer::__cordl_internal_get_bodyOffsetVector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyOffsetVector;
}
constexpr ::UnityEngine::Vector3 const& GorillaLocomotion::GTPlayer::__cordl_internal_get_bodyOffsetVector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyOffsetVector;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_bodyOffsetVector(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bodyOffsetVector = value;
}
constexpr ::UnityEngine::Vector3& GorillaLocomotion::GTPlayer::__cordl_internal_get_movementToProjectedAboveCollisionPlane()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___movementToProjectedAboveCollisionPlane;
}
constexpr ::UnityEngine::Vector3 const& GorillaLocomotion::GTPlayer::__cordl_internal_get_movementToProjectedAboveCollisionPlane() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___movementToProjectedAboveCollisionPlane;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_movementToProjectedAboveCollisionPlane(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___movementToProjectedAboveCollisionPlane = value;
}
constexpr ::UnityW<::UnityEngine::MeshCollider>& GorillaLocomotion::GTPlayer::__cordl_internal_get_meshCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshCollider;
}
constexpr ::UnityW<::UnityEngine::MeshCollider> const& GorillaLocomotion::GTPlayer::__cordl_internal_get_meshCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshCollider;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_meshCollider(::UnityW<::UnityEngine::MeshCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meshCollider = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& GorillaLocomotion::GTPlayer::__cordl_internal_get_collidedMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collidedMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& GorillaLocomotion::GTPlayer::__cordl_internal_get_collidedMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collidedMesh;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_collidedMesh(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collidedMesh = value;
}
constexpr ::GlobalNamespace::GTPlayer_MaterialData& GorillaLocomotion::GTPlayer::__cordl_internal_get_foundMatData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___foundMatData;
}
constexpr ::GlobalNamespace::GTPlayer_MaterialData const& GorillaLocomotion::GTPlayer::__cordl_internal_get_foundMatData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___foundMatData;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_foundMatData(::GlobalNamespace::GTPlayer_MaterialData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___foundMatData = value;
}
constexpr ::StringW& GorillaLocomotion::GTPlayer::__cordl_internal_get_findMatName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___findMatName;
}
constexpr ::StringW const& GorillaLocomotion::GTPlayer::__cordl_internal_get_findMatName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___findMatName;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_findMatName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___findMatName = value;
}
constexpr int32_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_vertex1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vertex1;
}
constexpr int32_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_vertex1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vertex1;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_vertex1(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vertex1 = value;
}
constexpr int32_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_vertex2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vertex2;
}
constexpr int32_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_vertex2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vertex2;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_vertex2(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vertex2 = value;
}
constexpr int32_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_vertex3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vertex3;
}
constexpr int32_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_vertex3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vertex3;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_vertex3(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vertex3 = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GorillaLocomotion::GTPlayer::__cordl_internal_get_trianglesList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trianglesList;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GorillaLocomotion::GTPlayer::__cordl_internal_get_trianglesList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trianglesList;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_trianglesList(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trianglesList = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Mesh>,::ArrayW<int32_t>>*& GorillaLocomotion::GTPlayer::__cordl_internal_get_meshTrianglesDict()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshTrianglesDict;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Mesh>,::ArrayW<int32_t>>* const& GorillaLocomotion::GTPlayer::__cordl_internal_get_meshTrianglesDict() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshTrianglesDict;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_meshTrianglesDict(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Mesh>,::ArrayW<int32_t>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meshTrianglesDict = value;
}
constexpr ::ArrayW<int32_t>& GorillaLocomotion::GTPlayer::__cordl_internal_get_sharedMeshTris()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharedMeshTris;
}
constexpr ::ArrayW<int32_t> const& GorillaLocomotion::GTPlayer::__cordl_internal_get_sharedMeshTris() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharedMeshTris;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_sharedMeshTris(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sharedMeshTris = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_lastRealTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRealTime;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_lastRealTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRealTime;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_lastRealTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastRealTime = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_calcDeltaTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___calcDeltaTime;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_calcDeltaTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___calcDeltaTime;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_calcDeltaTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___calcDeltaTime = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_tempRealTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempRealTime;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_tempRealTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempRealTime;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_tempRealTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tempRealTime = value;
}
constexpr ::UnityEngine::Vector3& GorillaLocomotion::GTPlayer::__cordl_internal_get_slideVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slideVelocity;
}
constexpr ::UnityEngine::Vector3 const& GorillaLocomotion::GTPlayer::__cordl_internal_get_slideVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slideVelocity;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_slideVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slideVelocity = value;
}
constexpr ::UnityEngine::Vector3& GorillaLocomotion::GTPlayer::__cordl_internal_get_slideAverageNormal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slideAverageNormal;
}
constexpr ::UnityEngine::Vector3 const& GorillaLocomotion::GTPlayer::__cordl_internal_get_slideAverageNormal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slideAverageNormal;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_slideAverageNormal(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slideAverageNormal = value;
}
constexpr ::UnityEngine::RaycastHit& GorillaLocomotion::GTPlayer::__cordl_internal_get_tempHitInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempHitInfo;
}
constexpr ::UnityEngine::RaycastHit const& GorillaLocomotion::GTPlayer::__cordl_internal_get_tempHitInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempHitInfo;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_tempHitInfo(::UnityEngine::RaycastHit  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tempHitInfo = value;
}
constexpr ::UnityEngine::RaycastHit& GorillaLocomotion::GTPlayer::__cordl_internal_get_junkHit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___junkHit;
}
constexpr ::UnityEngine::RaycastHit const& GorillaLocomotion::GTPlayer::__cordl_internal_get_junkHit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___junkHit;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_junkHit(::UnityEngine::RaycastHit  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___junkHit = value;
}
constexpr ::UnityEngine::Vector3& GorillaLocomotion::GTPlayer::__cordl_internal_get_firstPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firstPosition;
}
constexpr ::UnityEngine::Vector3 const& GorillaLocomotion::GTPlayer::__cordl_internal_get_firstPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firstPosition;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_firstPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___firstPosition = value;
}
constexpr ::UnityEngine::RaycastHit& GorillaLocomotion::GTPlayer::__cordl_internal_get_tempIterativeHit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempIterativeHit;
}
constexpr ::UnityEngine::RaycastHit const& GorillaLocomotion::GTPlayer::__cordl_internal_get_tempIterativeHit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempIterativeHit;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_tempIterativeHit(::UnityEngine::RaycastHit  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tempIterativeHit = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_maxSphereSize1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSphereSize1;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_maxSphereSize1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSphereSize1;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_maxSphereSize1(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxSphereSize1 = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_maxSphereSize2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSphereSize2;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_maxSphereSize2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSphereSize2;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_maxSphereSize2(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxSphereSize2 = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& GorillaLocomotion::GTPlayer::__cordl_internal_get_overlapColliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlapColliders;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& GorillaLocomotion::GTPlayer::__cordl_internal_get_overlapColliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlapColliders;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_overlapColliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overlapColliders = value;
}
constexpr int32_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_overlapAttempts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlapAttempts;
}
constexpr int32_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_overlapAttempts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlapAttempts;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_overlapAttempts(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overlapAttempts = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_averageSlipPercentage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___averageSlipPercentage;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_averageSlipPercentage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___averageSlipPercentage;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_averageSlipPercentage(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___averageSlipPercentage = value;
}
constexpr ::UnityEngine::Vector3& GorillaLocomotion::GTPlayer::__cordl_internal_get_surfaceDirection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___surfaceDirection;
}
constexpr ::UnityEngine::Vector3 const& GorillaLocomotion::GTPlayer::__cordl_internal_get_surfaceDirection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___surfaceDirection;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_surfaceDirection(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___surfaceDirection = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_iceThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___iceThreshold;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_iceThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___iceThreshold;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_iceThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___iceThreshold = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_bodyMaxRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyMaxRadius;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_bodyMaxRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyMaxRadius;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_bodyMaxRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bodyMaxRadius = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_bodyLerp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyLerp;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_bodyLerp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyLerp;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_bodyLerp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bodyLerp = value;
}
constexpr bool& GorillaLocomotion::GTPlayer::__cordl_internal_get_areBothTouching()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___areBothTouching;
}
constexpr bool const& GorillaLocomotion::GTPlayer::__cordl_internal_get_areBothTouching() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___areBothTouching;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_areBothTouching(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___areBothTouching = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_slideFactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slideFactor;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_slideFactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slideFactor;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_slideFactor(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slideFactor = value;
}
constexpr bool& GorillaLocomotion::GTPlayer::__cordl_internal_get_didAJump()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___didAJump;
}
constexpr bool const& GorillaLocomotion::GTPlayer::__cordl_internal_get_didAJump() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___didAJump;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_didAJump(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___didAJump = value;
}
constexpr bool& GorillaLocomotion::GTPlayer::__cordl_internal_get_updateRB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateRB;
}
constexpr bool const& GorillaLocomotion::GTPlayer::__cordl_internal_get_updateRB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateRB;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_updateRB(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___updateRB = value;
}
constexpr ::UnityW<::UnityEngine::Renderer>& GorillaLocomotion::GTPlayer::__cordl_internal_get_slideRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slideRenderer;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& GorillaLocomotion::GTPlayer::__cordl_internal_get_slideRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slideRenderer;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_slideRenderer(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slideRenderer = value;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit>& GorillaLocomotion::GTPlayer::__cordl_internal_get_rayCastNonAllocColliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rayCastNonAllocColliders;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit> const& GorillaLocomotion::GTPlayer::__cordl_internal_get_rayCastNonAllocColliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rayCastNonAllocColliders;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_rayCastNonAllocColliders(::ArrayW<::UnityEngine::RaycastHit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rayCastNonAllocColliders = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& GorillaLocomotion::GTPlayer::__cordl_internal_get_crazyCheckVectors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crazyCheckVectors;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& GorillaLocomotion::GTPlayer::__cordl_internal_get_crazyCheckVectors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crazyCheckVectors;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_crazyCheckVectors(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crazyCheckVectors = value;
}
constexpr ::UnityEngine::RaycastHit& GorillaLocomotion::GTPlayer::__cordl_internal_get_emptyHit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emptyHit;
}
constexpr ::UnityEngine::RaycastHit const& GorillaLocomotion::GTPlayer::__cordl_internal_get_emptyHit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emptyHit;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_emptyHit(::UnityEngine::RaycastHit  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___emptyHit = value;
}
constexpr int32_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_bufferCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bufferCount;
}
constexpr int32_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_bufferCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bufferCount;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_bufferCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bufferCount = value;
}
constexpr ::UnityEngine::Vector3& GorillaLocomotion::GTPlayer::__cordl_internal_get_lastOpenHeadPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastOpenHeadPosition;
}
constexpr ::UnityEngine::Vector3 const& GorillaLocomotion::GTPlayer::__cordl_internal_get_lastOpenHeadPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastOpenHeadPosition;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_lastOpenHeadPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastOpenHeadPosition = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*& GorillaLocomotion::GTPlayer::__cordl_internal_get_tempMaterialArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempMaterialArray;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* const& GorillaLocomotion::GTPlayer::__cordl_internal_get_tempMaterialArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempMaterialArray;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_tempMaterialArray(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tempMaterialArray = value;
}
constexpr ::System::Nullable_1<::UnityEngine::Vector3>& GorillaLocomotion::GTPlayer::__cordl_internal_get_antiDriftLastPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___antiDriftLastPosition;
}
constexpr ::System::Nullable_1<::UnityEngine::Vector3> const& GorillaLocomotion::GTPlayer::__cordl_internal_get_antiDriftLastPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___antiDriftLastPosition;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_antiDriftLastPosition(::System::Nullable_1<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___antiDriftLastPosition = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::UnityW<::UnityEngine::PhysicsMaterial>>*& GorillaLocomotion::GTPlayer::__cordl_internal_get_bodyTouchedSurfaces()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyTouchedSurfaces;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::UnityW<::UnityEngine::PhysicsMaterial>>* const& GorillaLocomotion::GTPlayer::__cordl_internal_get_bodyTouchedSurfaces() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyTouchedSurfaces;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_bodyTouchedSurfaces(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::UnityW<::UnityEngine::PhysicsMaterial>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bodyTouchedSurfaces = value;
}
constexpr bool& GorillaLocomotion::GTPlayer::__cordl_internal_get_primaryButtonPressed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___primaryButtonPressed;
}
constexpr bool const& GorillaLocomotion::GTPlayer::__cordl_internal_get_primaryButtonPressed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___primaryButtonPressed;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_primaryButtonPressed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___primaryButtonPressed = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Swimming::PlayerSwimmingParameters>>*& GorillaLocomotion::GTPlayer::__cordl_internal_get_swimmingParamsList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swimmingParamsList;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Swimming::PlayerSwimmingParameters>>* const& GorillaLocomotion::GTPlayer::__cordl_internal_get_swimmingParamsList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swimmingParamsList;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_swimmingParamsList(::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Swimming::PlayerSwimmingParameters>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swimmingParamsList = value;
}
constexpr ::UnityW<::GorillaLocomotion::Swimming::WaterParameters>& GorillaLocomotion::GTPlayer::__cordl_internal_get_waterParams()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waterParams;
}
constexpr ::UnityW<::GorillaLocomotion::Swimming::WaterParameters> const& GorillaLocomotion::GTPlayer::__cordl_internal_get_waterParams() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waterParams;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_waterParams(::UnityW<::GorillaLocomotion::Swimming::WaterParameters>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waterParams = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GTPlayer_LiquidProperties>*& GorillaLocomotion::GTPlayer::__cordl_internal_get_liquidPropertiesList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___liquidPropertiesList;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GTPlayer_LiquidProperties>* const& GorillaLocomotion::GTPlayer::__cordl_internal_get_liquidPropertiesList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___liquidPropertiesList;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_liquidPropertiesList(::System::Collections::Generic::List_1<::GlobalNamespace::GTPlayer_LiquidProperties>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___liquidPropertiesList = value;
}
constexpr bool& GorillaLocomotion::GTPlayer::__cordl_internal_get_debugDrawSwimming()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugDrawSwimming;
}
constexpr bool const& GorillaLocomotion::GTPlayer::__cordl_internal_get_debugDrawSwimming() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugDrawSwimming;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_debugDrawSwimming(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugDrawSwimming = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaLocomotion::GTPlayer::__cordl_internal_get_wizardStaffSlamEffects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wizardStaffSlamEffects;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaLocomotion::GTPlayer::__cordl_internal_get_wizardStaffSlamEffects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wizardStaffSlamEffects;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_wizardStaffSlamEffects(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wizardStaffSlamEffects = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaLocomotion::GTPlayer::__cordl_internal_get_geodeHitEffects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___geodeHitEffects;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaLocomotion::GTPlayer::__cordl_internal_get_geodeHitEffects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___geodeHitEffects;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_geodeHitEffects(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___geodeHitEffects = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_freezeTagHandSlidePercent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___freezeTagHandSlidePercent;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_freezeTagHandSlidePercent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___freezeTagHandSlidePercent;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_freezeTagHandSlidePercent(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___freezeTagHandSlidePercent = value;
}
constexpr bool& GorillaLocomotion::GTPlayer::__cordl_internal_get_debugFreezeTag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugFreezeTag;
}
constexpr bool const& GorillaLocomotion::GTPlayer::__cordl_internal_get_debugFreezeTag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugFreezeTag;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_debugFreezeTag(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugFreezeTag = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_frozenBodyBuoyancyFactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frozenBodyBuoyancyFactor;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_frozenBodyBuoyancyFactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frozenBodyBuoyancyFactor;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_frozenBodyBuoyancyFactor(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frozenBodyBuoyancyFactor = value;
}
constexpr bool& GorillaLocomotion::GTPlayer::__cordl_internal_get__IsFrozen_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsFrozen_k__BackingField;
}
constexpr bool const& GorillaLocomotion::GTPlayer::__cordl_internal_get__IsFrozen_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsFrozen_k__BackingField;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set__IsFrozen_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsFrozen_k__BackingField = value;
}
constexpr ::UnityW<::GorillaLocomotion::Swimming::WaterVolume>& GorillaLocomotion::GTPlayer::__cordl_internal_get_leftHandWaterVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandWaterVolume;
}
constexpr ::UnityW<::GorillaLocomotion::Swimming::WaterVolume> const& GorillaLocomotion::GTPlayer::__cordl_internal_get_leftHandWaterVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandWaterVolume;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_leftHandWaterVolume(::UnityW<::GorillaLocomotion::Swimming::WaterVolume>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftHandWaterVolume = value;
}
constexpr ::UnityW<::GorillaLocomotion::Swimming::WaterVolume>& GorillaLocomotion::GTPlayer::__cordl_internal_get_rightHandWaterVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandWaterVolume;
}
constexpr ::UnityW<::GorillaLocomotion::Swimming::WaterVolume> const& GorillaLocomotion::GTPlayer::__cordl_internal_get_rightHandWaterVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandWaterVolume;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_rightHandWaterVolume(::UnityW<::GorillaLocomotion::Swimming::WaterVolume>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightHandWaterVolume = value;
}
constexpr ::GlobalNamespace::WaterVolume_SurfaceQuery& GorillaLocomotion::GTPlayer::__cordl_internal_get_leftHandWaterSurface()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandWaterSurface;
}
constexpr ::GlobalNamespace::WaterVolume_SurfaceQuery const& GorillaLocomotion::GTPlayer::__cordl_internal_get_leftHandWaterSurface() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandWaterSurface;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_leftHandWaterSurface(::GlobalNamespace::WaterVolume_SurfaceQuery  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftHandWaterSurface = value;
}
constexpr ::GlobalNamespace::WaterVolume_SurfaceQuery& GorillaLocomotion::GTPlayer::__cordl_internal_get_rightHandWaterSurface()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandWaterSurface;
}
constexpr ::GlobalNamespace::WaterVolume_SurfaceQuery const& GorillaLocomotion::GTPlayer::__cordl_internal_get_rightHandWaterSurface() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandWaterSurface;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_rightHandWaterSurface(::GlobalNamespace::WaterVolume_SurfaceQuery  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightHandWaterSurface = value;
}
constexpr ::UnityEngine::Vector3& GorillaLocomotion::GTPlayer::__cordl_internal_get_swimmingVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swimmingVelocity;
}
constexpr ::UnityEngine::Vector3 const& GorillaLocomotion::GTPlayer::__cordl_internal_get_swimmingVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swimmingVelocity;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_swimmingVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swimmingVelocity = value;
}
constexpr ::GlobalNamespace::WaterVolume_SurfaceQuery& GorillaLocomotion::GTPlayer::__cordl_internal_get_waterSurfaceForHead()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waterSurfaceForHead;
}
constexpr ::GlobalNamespace::WaterVolume_SurfaceQuery const& GorillaLocomotion::GTPlayer::__cordl_internal_get_waterSurfaceForHead() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waterSurfaceForHead;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_waterSurfaceForHead(::GlobalNamespace::WaterVolume_SurfaceQuery  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waterSurfaceForHead = value;
}
constexpr bool& GorillaLocomotion::GTPlayer::__cordl_internal_get_bodyInWater()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyInWater;
}
constexpr bool const& GorillaLocomotion::GTPlayer::__cordl_internal_get_bodyInWater() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyInWater;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_bodyInWater(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bodyInWater = value;
}
constexpr bool& GorillaLocomotion::GTPlayer::__cordl_internal_get_headInWater()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headInWater;
}
constexpr bool const& GorillaLocomotion::GTPlayer::__cordl_internal_get_headInWater() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headInWater;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_headInWater(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headInWater = value;
}
constexpr bool& GorillaLocomotion::GTPlayer::__cordl_internal_get_audioSetToUnderwater()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSetToUnderwater;
}
constexpr bool const& GorillaLocomotion::GTPlayer::__cordl_internal_get_audioSetToUnderwater() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSetToUnderwater;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_audioSetToUnderwater(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSetToUnderwater = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_buoyancyExtension()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buoyancyExtension;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_buoyancyExtension() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buoyancyExtension;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_buoyancyExtension(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buoyancyExtension = value;
}
constexpr bool& GorillaLocomotion::GTPlayer::__cordl_internal_get__forcedUnderwater_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____forcedUnderwater_k__BackingField;
}
constexpr bool const& GorillaLocomotion::GTPlayer::__cordl_internal_get__forcedUnderwater_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____forcedUnderwater_k__BackingField;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set__forcedUnderwater_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____forcedUnderwater_k__BackingField = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get__siJumpMultiplier_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____siJumpMultiplier_k__BackingField;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get__siJumpMultiplier_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____siJumpMultiplier_k__BackingField;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set__siJumpMultiplier_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____siJumpMultiplier_k__BackingField = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_lastWaterSurfaceJumpTimeLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastWaterSurfaceJumpTimeLeft;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_lastWaterSurfaceJumpTimeLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastWaterSurfaceJumpTimeLeft;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_lastWaterSurfaceJumpTimeLeft(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastWaterSurfaceJumpTimeLeft = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_lastWaterSurfaceJumpTimeRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastWaterSurfaceJumpTimeRight;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_lastWaterSurfaceJumpTimeRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastWaterSurfaceJumpTimeRight;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_lastWaterSurfaceJumpTimeRight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastWaterSurfaceJumpTimeRight = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_waterSurfaceJumpCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waterSurfaceJumpCooldown;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_waterSurfaceJumpCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waterSurfaceJumpCooldown;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_waterSurfaceJumpCooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waterSurfaceJumpCooldown = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_leftHandNonDiveHapticsAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandNonDiveHapticsAmount;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_leftHandNonDiveHapticsAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandNonDiveHapticsAmount;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_leftHandNonDiveHapticsAmount(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftHandNonDiveHapticsAmount = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_rightHandNonDiveHapticsAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandNonDiveHapticsAmount;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_rightHandNonDiveHapticsAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandNonDiveHapticsAmount;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_rightHandNonDiveHapticsAmount(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightHandNonDiveHapticsAmount = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Swimming::WaterVolume>>*& GorillaLocomotion::GTPlayer::__cordl_internal_get_headOverlappingWaterVolumes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headOverlappingWaterVolumes;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Swimming::WaterVolume>>* const& GorillaLocomotion::GTPlayer::__cordl_internal_get_headOverlappingWaterVolumes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headOverlappingWaterVolumes;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_headOverlappingWaterVolumes(::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Swimming::WaterVolume>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headOverlappingWaterVolumes = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Swimming::WaterVolume>>*& GorillaLocomotion::GTPlayer::__cordl_internal_get_bodyOverlappingWaterVolumes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyOverlappingWaterVolumes;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Swimming::WaterVolume>>* const& GorillaLocomotion::GTPlayer::__cordl_internal_get_bodyOverlappingWaterVolumes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyOverlappingWaterVolumes;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_bodyOverlappingWaterVolumes(::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Swimming::WaterVolume>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bodyOverlappingWaterVolumes = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Swimming::WaterCurrent>>*& GorillaLocomotion::GTPlayer::__cordl_internal_get_activeWaterCurrents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeWaterCurrents;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Swimming::WaterCurrent>>* const& GorillaLocomotion::GTPlayer::__cordl_internal_get_activeWaterCurrents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeWaterCurrents;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_activeWaterCurrents(::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Swimming::WaterCurrent>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeWaterCurrents = value;
}
constexpr int32_t& GorillaLocomotion::GTPlayer::__cordl_internal_get__TentacleActiveAtFrame_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TentacleActiveAtFrame_k__BackingField;
}
constexpr int32_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get__TentacleActiveAtFrame_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TentacleActiveAtFrame_k__BackingField;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set__TentacleActiveAtFrame_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TentacleActiveAtFrame_k__BackingField = value;
}
constexpr int32_t& GorillaLocomotion::GTPlayer::__cordl_internal_get__LaserZiplineActiveAtFrame_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LaserZiplineActiveAtFrame_k__BackingField;
}
constexpr int32_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get__LaserZiplineActiveAtFrame_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LaserZiplineActiveAtFrame_k__BackingField;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set__LaserZiplineActiveAtFrame_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LaserZiplineActiveAtFrame_k__BackingField = value;
}
constexpr int32_t& GorillaLocomotion::GTPlayer::__cordl_internal_get__ThrusterActiveAtFrame_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ThrusterActiveAtFrame_k__BackingField;
}
constexpr int32_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get__ThrusterActiveAtFrame_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ThrusterActiveAtFrame_k__BackingField;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set__ThrusterActiveAtFrame_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ThrusterActiveAtFrame_k__BackingField = value;
}
constexpr ::UnityEngine::Quaternion& GorillaLocomotion::GTPlayer::__cordl_internal_get_playerRotationOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerRotationOverride;
}
constexpr ::UnityEngine::Quaternion const& GorillaLocomotion::GTPlayer::__cordl_internal_get_playerRotationOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerRotationOverride;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_playerRotationOverride(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerRotationOverride = value;
}
constexpr int32_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_playerRotationOverrideFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerRotationOverrideFrame;
}
constexpr int32_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_playerRotationOverrideFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerRotationOverrideFrame;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_playerRotationOverrideFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerRotationOverrideFrame = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_playerRotationOverrideDecayRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerRotationOverrideDecayRate;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_playerRotationOverrideDecayRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerRotationOverrideDecayRate;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_playerRotationOverrideDecayRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerRotationOverrideDecayRate = value;
}
constexpr bool& GorillaLocomotion::GTPlayer::__cordl_internal_get__IsBodySliding_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsBodySliding_k__BackingField;
}
constexpr bool const& GorillaLocomotion::GTPlayer::__cordl_internal_get__IsBodySliding_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsBodySliding_k__BackingField;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set__IsBodySliding_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsBodySliding_k__BackingField = value;
}
constexpr ::ArrayW<::UnityEngine::ContactPoint>& GorillaLocomotion::GTPlayer::__cordl_internal_get_bodyCollisionContacts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyCollisionContacts;
}
constexpr ::ArrayW<::UnityEngine::ContactPoint> const& GorillaLocomotion::GTPlayer::__cordl_internal_get_bodyCollisionContacts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyCollisionContacts;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_bodyCollisionContacts(::ArrayW<::UnityEngine::ContactPoint>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bodyCollisionContacts = value;
}
constexpr int32_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_bodyCollisionContactsCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyCollisionContactsCount;
}
constexpr int32_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_bodyCollisionContactsCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyCollisionContactsCount;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_bodyCollisionContactsCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bodyCollisionContactsCount = value;
}
constexpr ::UnityEngine::ContactPoint& GorillaLocomotion::GTPlayer::__cordl_internal_get_bodyGroundContact()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyGroundContact;
}
constexpr ::UnityEngine::ContactPoint const& GorillaLocomotion::GTPlayer::__cordl_internal_get_bodyGroundContact() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyGroundContact;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_bodyGroundContact(::UnityEngine::ContactPoint  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bodyGroundContact = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_bodyGroundContactTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyGroundContactTime;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_bodyGroundContactTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyGroundContactTime;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_bodyGroundContactTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bodyGroundContactTime = value;
}
constexpr bool& GorillaLocomotion::GTPlayer::__cordl_internal_get__bodyGroundIsSlippery_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bodyGroundIsSlippery_k__BackingField;
}
constexpr bool const& GorillaLocomotion::GTPlayer::__cordl_internal_get__bodyGroundIsSlippery_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bodyGroundIsSlippery_k__BackingField;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set__bodyGroundIsSlippery_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bodyGroundIsSlippery_k__BackingField = value;
}
constexpr bool& GorillaLocomotion::GTPlayer::__cordl_internal_get_exitMovingSurface()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exitMovingSurface;
}
constexpr bool const& GorillaLocomotion::GTPlayer::__cordl_internal_get_exitMovingSurface() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exitMovingSurface;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_exitMovingSurface(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exitMovingSurface = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_exitMovingSurfaceThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exitMovingSurfaceThreshold;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_exitMovingSurfaceThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exitMovingSurfaceThreshold;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_exitMovingSurfaceThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exitMovingSurfaceThreshold = value;
}
constexpr bool& GorillaLocomotion::GTPlayer::__cordl_internal_get_isClimbableMoving()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isClimbableMoving;
}
constexpr bool const& GorillaLocomotion::GTPlayer::__cordl_internal_get_isClimbableMoving() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isClimbableMoving;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_isClimbableMoving(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isClimbableMoving = value;
}
constexpr ::UnityEngine::Quaternion& GorillaLocomotion::GTPlayer::__cordl_internal_get_lastClimbableRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastClimbableRotation;
}
constexpr ::UnityEngine::Quaternion const& GorillaLocomotion::GTPlayer::__cordl_internal_get_lastClimbableRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastClimbableRotation;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_lastClimbableRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastClimbableRotation = value;
}
constexpr int32_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_lastAttachedToMovingSurfaceFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastAttachedToMovingSurfaceFrame;
}
constexpr int32_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_lastAttachedToMovingSurfaceFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastAttachedToMovingSurfaceFrame;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_lastAttachedToMovingSurfaceFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastAttachedToMovingSurfaceFrame = value;
}
constexpr bool& GorillaLocomotion::GTPlayer::__cordl_internal_get_isHandHoldMoving()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isHandHoldMoving;
}
constexpr bool const& GorillaLocomotion::GTPlayer::__cordl_internal_get_isHandHoldMoving() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isHandHoldMoving;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_isHandHoldMoving(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isHandHoldMoving = value;
}
constexpr ::UnityEngine::Quaternion& GorillaLocomotion::GTPlayer::__cordl_internal_get_lastHandHoldRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastHandHoldRotation;
}
constexpr ::UnityEngine::Quaternion const& GorillaLocomotion::GTPlayer::__cordl_internal_get_lastHandHoldRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastHandHoldRotation;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_lastHandHoldRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastHandHoldRotation = value;
}
constexpr ::UnityEngine::Vector3& GorillaLocomotion::GTPlayer::__cordl_internal_get_movingHandHoldReleaseVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___movingHandHoldReleaseVelocity;
}
constexpr ::UnityEngine::Vector3 const& GorillaLocomotion::GTPlayer::__cordl_internal_get_movingHandHoldReleaseVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___movingHandHoldReleaseVelocity;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_movingHandHoldReleaseVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___movingHandHoldReleaseVelocity = value;
}
constexpr ::GlobalNamespace::GTPlayer_MovingSurfaceContactPoint& GorillaLocomotion::GTPlayer::__cordl_internal_get_lastMovingSurfaceContact()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastMovingSurfaceContact;
}
constexpr ::GlobalNamespace::GTPlayer_MovingSurfaceContactPoint const& GorillaLocomotion::GTPlayer::__cordl_internal_get_lastMovingSurfaceContact() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastMovingSurfaceContact;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_lastMovingSurfaceContact(::GlobalNamespace::GTPlayer_MovingSurfaceContactPoint  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastMovingSurfaceContact = value;
}
constexpr int32_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_lastMovingSurfaceID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastMovingSurfaceID;
}
constexpr int32_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_lastMovingSurfaceID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastMovingSurfaceID;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_lastMovingSurfaceID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastMovingSurfaceID = value;
}
constexpr ::UnityW<::GlobalNamespace::BuilderPiece>& GorillaLocomotion::GTPlayer::__cordl_internal_get_lastMonkeBlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastMonkeBlock;
}
constexpr ::UnityW<::GlobalNamespace::BuilderPiece> const& GorillaLocomotion::GTPlayer::__cordl_internal_get_lastMonkeBlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastMonkeBlock;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_lastMonkeBlock(::UnityW<::GlobalNamespace::BuilderPiece>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastMonkeBlock = value;
}
constexpr ::UnityEngine::Quaternion& GorillaLocomotion::GTPlayer::__cordl_internal_get_lastMovingSurfaceRot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastMovingSurfaceRot;
}
constexpr ::UnityEngine::Quaternion const& GorillaLocomotion::GTPlayer::__cordl_internal_get_lastMovingSurfaceRot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastMovingSurfaceRot;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_lastMovingSurfaceRot(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastMovingSurfaceRot = value;
}
constexpr ::UnityEngine::RaycastHit& GorillaLocomotion::GTPlayer::__cordl_internal_get_lastMovingSurfaceHit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastMovingSurfaceHit;
}
constexpr ::UnityEngine::RaycastHit const& GorillaLocomotion::GTPlayer::__cordl_internal_get_lastMovingSurfaceHit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastMovingSurfaceHit;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_lastMovingSurfaceHit(::UnityEngine::RaycastHit  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastMovingSurfaceHit = value;
}
constexpr ::UnityEngine::Vector3& GorillaLocomotion::GTPlayer::__cordl_internal_get_lastMovingSurfaceTouchLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastMovingSurfaceTouchLocal;
}
constexpr ::UnityEngine::Vector3 const& GorillaLocomotion::GTPlayer::__cordl_internal_get_lastMovingSurfaceTouchLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastMovingSurfaceTouchLocal;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_lastMovingSurfaceTouchLocal(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastMovingSurfaceTouchLocal = value;
}
constexpr ::UnityEngine::Vector3& GorillaLocomotion::GTPlayer::__cordl_internal_get_lastMovingSurfaceTouchWorld()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastMovingSurfaceTouchWorld;
}
constexpr ::UnityEngine::Vector3 const& GorillaLocomotion::GTPlayer::__cordl_internal_get_lastMovingSurfaceTouchWorld() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastMovingSurfaceTouchWorld;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_lastMovingSurfaceTouchWorld(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastMovingSurfaceTouchWorld = value;
}
constexpr ::UnityEngine::Vector3& GorillaLocomotion::GTPlayer::__cordl_internal_get_movingSurfaceOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___movingSurfaceOffset;
}
constexpr ::UnityEngine::Vector3 const& GorillaLocomotion::GTPlayer::__cordl_internal_get_movingSurfaceOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___movingSurfaceOffset;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_movingSurfaceOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___movingSurfaceOffset = value;
}
constexpr bool& GorillaLocomotion::GTPlayer::__cordl_internal_get_wasMovingSurfaceMonkeBlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasMovingSurfaceMonkeBlock;
}
constexpr bool const& GorillaLocomotion::GTPlayer::__cordl_internal_get_wasMovingSurfaceMonkeBlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasMovingSurfaceMonkeBlock;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_wasMovingSurfaceMonkeBlock(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasMovingSurfaceMonkeBlock = value;
}
constexpr ::UnityEngine::Vector3& GorillaLocomotion::GTPlayer::__cordl_internal_get_lastMovingSurfaceVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastMovingSurfaceVelocity;
}
constexpr ::UnityEngine::Vector3 const& GorillaLocomotion::GTPlayer::__cordl_internal_get_lastMovingSurfaceVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastMovingSurfaceVelocity;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_lastMovingSurfaceVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastMovingSurfaceVelocity = value;
}
constexpr bool& GorillaLocomotion::GTPlayer::__cordl_internal_get_wasBodyOnGround()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasBodyOnGround;
}
constexpr bool const& GorillaLocomotion::GTPlayer::__cordl_internal_get_wasBodyOnGround() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasBodyOnGround;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_wasBodyOnGround(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasBodyOnGround = value;
}
constexpr ::UnityW<::GlobalNamespace::BasePlatform>& GorillaLocomotion::GTPlayer::__cordl_internal_get_currentPlatform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentPlatform;
}
constexpr ::UnityW<::GlobalNamespace::BasePlatform> const& GorillaLocomotion::GTPlayer::__cordl_internal_get_currentPlatform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentPlatform;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_currentPlatform(::UnityW<::GlobalNamespace::BasePlatform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentPlatform = value;
}
constexpr ::UnityW<::GlobalNamespace::BasePlatform>& GorillaLocomotion::GTPlayer::__cordl_internal_get_lastPlatformTouched()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPlatformTouched;
}
constexpr ::UnityW<::GlobalNamespace::BasePlatform> const& GorillaLocomotion::GTPlayer::__cordl_internal_get_lastPlatformTouched() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPlatformTouched;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_lastPlatformTouched(::UnityW<::GlobalNamespace::BasePlatform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastPlatformTouched = value;
}
constexpr ::UnityEngine::Vector3& GorillaLocomotion::GTPlayer::__cordl_internal_get_lastFrameTouchPosLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastFrameTouchPosLocal;
}
constexpr ::UnityEngine::Vector3 const& GorillaLocomotion::GTPlayer::__cordl_internal_get_lastFrameTouchPosLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastFrameTouchPosLocal;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_lastFrameTouchPosLocal(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastFrameTouchPosLocal = value;
}
constexpr ::UnityEngine::Vector3& GorillaLocomotion::GTPlayer::__cordl_internal_get_lastFrameTouchPosWorld()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastFrameTouchPosWorld;
}
constexpr ::UnityEngine::Vector3 const& GorillaLocomotion::GTPlayer::__cordl_internal_get_lastFrameTouchPosWorld() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastFrameTouchPosWorld;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_lastFrameTouchPosWorld(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastFrameTouchPosWorld = value;
}
constexpr bool& GorillaLocomotion::GTPlayer::__cordl_internal_get_lastFrameHasValidTouchPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastFrameHasValidTouchPos;
}
constexpr bool const& GorillaLocomotion::GTPlayer::__cordl_internal_get_lastFrameHasValidTouchPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastFrameHasValidTouchPos;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_lastFrameHasValidTouchPos(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastFrameHasValidTouchPos = value;
}
constexpr ::UnityEngine::Vector3& GorillaLocomotion::GTPlayer::__cordl_internal_get_refMovement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___refMovement;
}
constexpr ::UnityEngine::Vector3 const& GorillaLocomotion::GTPlayer::__cordl_internal_get_refMovement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___refMovement;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_refMovement(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___refMovement = value;
}
constexpr ::UnityEngine::Vector3& GorillaLocomotion::GTPlayer::__cordl_internal_get_platformTouchOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformTouchOffset;
}
constexpr ::UnityEngine::Vector3 const& GorillaLocomotion::GTPlayer::__cordl_internal_get_platformTouchOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformTouchOffset;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_platformTouchOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___platformTouchOffset = value;
}
constexpr ::UnityEngine::Vector3& GorillaLocomotion::GTPlayer::__cordl_internal_get_debugLastRightHandPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugLastRightHandPosition;
}
constexpr ::UnityEngine::Vector3 const& GorillaLocomotion::GTPlayer::__cordl_internal_get_debugLastRightHandPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugLastRightHandPosition;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_debugLastRightHandPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugLastRightHandPosition = value;
}
constexpr ::UnityEngine::Vector3& GorillaLocomotion::GTPlayer::__cordl_internal_get_debugPlatformDeltaPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugPlatformDeltaPosition;
}
constexpr ::UnityEngine::Vector3 const& GorillaLocomotion::GTPlayer::__cordl_internal_get_debugPlatformDeltaPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugPlatformDeltaPosition;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_debugPlatformDeltaPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugPlatformDeltaPosition = value;
}
constexpr double_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_tempFreezeRightHandEnableTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempFreezeRightHandEnableTime;
}
constexpr double_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_tempFreezeRightHandEnableTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempFreezeRightHandEnableTime;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_tempFreezeRightHandEnableTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tempFreezeRightHandEnableTime = value;
}
constexpr double_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_tempFreezeLeftHandEnableTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempFreezeLeftHandEnableTime;
}
constexpr double_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_tempFreezeLeftHandEnableTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempFreezeLeftHandEnableTime;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_tempFreezeLeftHandEnableTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tempFreezeLeftHandEnableTime = value;
}
constexpr bool& GorillaLocomotion::GTPlayer::__cordl_internal_get_isClimbing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isClimbing;
}
constexpr bool const& GorillaLocomotion::GTPlayer::__cordl_internal_get_isClimbing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isClimbing;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_isClimbing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isClimbing = value;
}
constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaClimbable>& GorillaLocomotion::GTPlayer::__cordl_internal_get_currentClimbable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentClimbable;
}
constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaClimbable> const& GorillaLocomotion::GTPlayer::__cordl_internal_get_currentClimbable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentClimbable;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_currentClimbable(::UnityW<::GorillaLocomotion::Climbing::GorillaClimbable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentClimbable = value;
}
constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber>& GorillaLocomotion::GTPlayer::__cordl_internal_get_currentClimber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentClimber;
}
constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber> const& GorillaLocomotion::GTPlayer::__cordl_internal_get_currentClimber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentClimber;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_currentClimber(::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentClimber = value;
}
constexpr ::UnityEngine::Vector3& GorillaLocomotion::GTPlayer::__cordl_internal_get_climbHelperTargetPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___climbHelperTargetPos;
}
constexpr ::UnityEngine::Vector3 const& GorillaLocomotion::GTPlayer::__cordl_internal_get_climbHelperTargetPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___climbHelperTargetPos;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_climbHelperTargetPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___climbHelperTargetPos = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaLocomotion::GTPlayer::__cordl_internal_get_climbHelper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___climbHelper;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaLocomotion::GTPlayer::__cordl_internal_get_climbHelper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___climbHelper;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_climbHelper(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___climbHelper = value;
}
constexpr ::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwing>& GorillaLocomotion::GTPlayer::__cordl_internal_get_currentSwing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSwing;
}
constexpr ::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwing> const& GorillaLocomotion::GTPlayer::__cordl_internal_get_currentSwing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSwing;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_currentSwing(::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwing>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentSwing = value;
}
constexpr ::UnityW<::GorillaLocomotion::Gameplay::GorillaZipline>& GorillaLocomotion::GTPlayer::__cordl_internal_get_currentZipline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentZipline;
}
constexpr ::UnityW<::GorillaLocomotion::Gameplay::GorillaZipline> const& GorillaLocomotion::GTPlayer::__cordl_internal_get_currentZipline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentZipline;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_currentZipline(::UnityW<::GorillaLocomotion::Gameplay::GorillaZipline>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentZipline = value;
}
constexpr ::UnityW<::GlobalNamespace::ConnectedControllerHandler>& GorillaLocomotion::GTPlayer::__cordl_internal_get_controllerState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controllerState;
}
constexpr ::UnityW<::GlobalNamespace::ConnectedControllerHandler> const& GorillaLocomotion::GTPlayer::__cordl_internal_get_controllerState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controllerState;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_controllerState(::UnityW<::GlobalNamespace::ConnectedControllerHandler>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___controllerState = value;
}
constexpr int32_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_sizeLayerMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sizeLayerMask;
}
constexpr int32_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_sizeLayerMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sizeLayerMask;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_sizeLayerMask(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sizeLayerMask = value;
}
constexpr bool& GorillaLocomotion::GTPlayer::__cordl_internal_get_InReportMenu()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InReportMenu;
}
constexpr bool const& GorillaLocomotion::GTPlayer::__cordl_internal_get_InReportMenu() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InReportMenu;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_InReportMenu(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InReportMenu = value;
}
constexpr ::UnityW<::GorillaTagScripts::LayerChanger>& GorillaLocomotion::GTPlayer::__cordl_internal_get_layerChanger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerChanger;
}
constexpr ::UnityW<::GorillaTagScripts::LayerChanger> const& GorillaLocomotion::GTPlayer::__cordl_internal_get_layerChanger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerChanger;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_layerChanger(::UnityW<::GorillaTagScripts::LayerChanger>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layerChanger = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get__LastTouchedGroundAtNetworkTime_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastTouchedGroundAtNetworkTime_k__BackingField;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get__LastTouchedGroundAtNetworkTime_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastTouchedGroundAtNetworkTime_k__BackingField;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set__LastTouchedGroundAtNetworkTime_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LastTouchedGroundAtNetworkTime_k__BackingField = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get__LastHandTouchedGroundAtNetworkTime_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastHandTouchedGroundAtNetworkTime_k__BackingField;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get__LastHandTouchedGroundAtNetworkTime_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastHandTouchedGroundAtNetworkTime_k__BackingField;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set__LastHandTouchedGroundAtNetworkTime_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LastHandTouchedGroundAtNetworkTime_k__BackingField = value;
}
constexpr bool& GorillaLocomotion::GTPlayer::__cordl_internal_get_hasCorrectedForTracking()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasCorrectedForTracking;
}
constexpr bool const& GorillaLocomotion::GTPlayer::__cordl_internal_get_hasCorrectedForTracking() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasCorrectedForTracking;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_hasCorrectedForTracking(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasCorrectedForTracking = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_halloweenLevitationStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___halloweenLevitationStrength;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_halloweenLevitationStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___halloweenLevitationStrength;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_halloweenLevitationStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___halloweenLevitationStrength = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_halloweenLevitationFullStrengthDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___halloweenLevitationFullStrengthDuration;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_halloweenLevitationFullStrengthDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___halloweenLevitationFullStrengthDuration;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_halloweenLevitationFullStrengthDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___halloweenLevitationFullStrengthDuration = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_halloweenLevitationTotalDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___halloweenLevitationTotalDuration;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_halloweenLevitationTotalDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___halloweenLevitationTotalDuration;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_halloweenLevitationTotalDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___halloweenLevitationTotalDuration = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_halloweenLevitationBonusStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___halloweenLevitationBonusStrength;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_halloweenLevitationBonusStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___halloweenLevitationBonusStrength;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_halloweenLevitationBonusStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___halloweenLevitationBonusStrength = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_halloweenLevitateBonusOffAtYSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___halloweenLevitateBonusOffAtYSpeed;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_halloweenLevitateBonusOffAtYSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___halloweenLevitateBonusOffAtYSpeed;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_halloweenLevitateBonusOffAtYSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___halloweenLevitateBonusOffAtYSpeed = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_halloweenLevitateBonusFullAtYSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___halloweenLevitateBonusFullAtYSpeed;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_halloweenLevitateBonusFullAtYSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___halloweenLevitateBonusFullAtYSpeed;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_halloweenLevitateBonusFullAtYSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___halloweenLevitateBonusFullAtYSpeed = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_lastTouchedGroundTimestamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTouchedGroundTimestamp;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_lastTouchedGroundTimestamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTouchedGroundTimestamp;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_lastTouchedGroundTimestamp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastTouchedGroundTimestamp = value;
}
constexpr bool& GorillaLocomotion::GTPlayer::__cordl_internal_get_teleportToTrain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teleportToTrain;
}
constexpr bool const& GorillaLocomotion::GTPlayer::__cordl_internal_get_teleportToTrain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teleportToTrain;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_teleportToTrain(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___teleportToTrain = value;
}
constexpr bool& GorillaLocomotion::GTPlayer::__cordl_internal_get_isAttachedToTrain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isAttachedToTrain;
}
constexpr bool const& GorillaLocomotion::GTPlayer::__cordl_internal_get_isAttachedToTrain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isAttachedToTrain;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_isAttachedToTrain(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isAttachedToTrain = value;
}
constexpr bool& GorillaLocomotion::GTPlayer::__cordl_internal_get_stuckLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stuckLeft;
}
constexpr bool const& GorillaLocomotion::GTPlayer::__cordl_internal_get_stuckLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stuckLeft;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_stuckLeft(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stuckLeft = value;
}
constexpr bool& GorillaLocomotion::GTPlayer::__cordl_internal_get_stuckRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stuckRight;
}
constexpr bool const& GorillaLocomotion::GTPlayer::__cordl_internal_get_stuckRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stuckRight;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_stuckRight(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stuckRight = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_lastScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastScale;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_lastScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastScale;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_lastScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastScale = value;
}
constexpr ::UnityEngine::Vector3& GorillaLocomotion::GTPlayer::__cordl_internal_get_currentSlopDirection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSlopDirection;
}
constexpr ::UnityEngine::Vector3 const& GorillaLocomotion::GTPlayer::__cordl_internal_get_currentSlopDirection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSlopDirection;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_currentSlopDirection(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentSlopDirection = value;
}
constexpr ::UnityEngine::Vector3& GorillaLocomotion::GTPlayer::__cordl_internal_get_lastSlopeDirection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSlopeDirection;
}
constexpr ::UnityEngine::Vector3 const& GorillaLocomotion::GTPlayer::__cordl_internal_get_lastSlopeDirection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSlopeDirection;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_lastSlopeDirection(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastSlopeDirection = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Object>,::System::Action_1<::UnityW<::GorillaLocomotion::GTPlayer>>*>*& GorillaLocomotion::GTPlayer::__cordl_internal_get_gravityOverrides()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravityOverrides;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Object>,::System::Action_1<::UnityW<::GorillaLocomotion::GTPlayer>>*>* const& GorillaLocomotion::GTPlayer::__cordl_internal_get_gravityOverrides() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravityOverrides;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_gravityOverrides(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Object>,::System::Action_1<::UnityW<::GorillaLocomotion::GTPlayer>>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gravityOverrides = value;
}
constexpr bool& GorillaLocomotion::GTPlayer::__cordl_internal_get__isHoverAllowed_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isHoverAllowed_k__BackingField;
}
constexpr bool const& GorillaLocomotion::GTPlayer::__cordl_internal_get__isHoverAllowed_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isHoverAllowed_k__BackingField;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set__isHoverAllowed_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isHoverAllowed_k__BackingField = value;
}
constexpr bool& GorillaLocomotion::GTPlayer::__cordl_internal_get__enableHoverMode_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enableHoverMode_k__BackingField;
}
constexpr bool const& GorillaLocomotion::GTPlayer::__cordl_internal_get__enableHoverMode_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enableHoverMode_k__BackingField;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set__enableHoverMode_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____enableHoverMode_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::HoverboardAreaTrigger>>*& GorillaLocomotion::GTPlayer::__cordl_internal_get_inHoverAreas()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inHoverAreas;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::HoverboardAreaTrigger>>* const& GorillaLocomotion::GTPlayer::__cordl_internal_get_inHoverAreas() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inHoverAreas;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_inHoverAreas(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::HoverboardAreaTrigger>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inHoverAreas = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ForceDisableHoverboardTrigger>>*& GorillaLocomotion::GTPlayer::__cordl_internal_get_inHoverDisablers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inHoverDisablers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ForceDisableHoverboardTrigger>>* const& GorillaLocomotion::GTPlayer::__cordl_internal_get_inHoverDisablers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inHoverDisablers;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_inHoverDisablers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ForceDisableHoverboardTrigger>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inHoverDisablers = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_hoverIdealHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoverIdealHeight;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_hoverIdealHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoverIdealHeight;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_hoverIdealHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hoverIdealHeight = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_hoverCarveSidewaysSpeedLossFactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoverCarveSidewaysSpeedLossFactor;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_hoverCarveSidewaysSpeedLossFactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoverCarveSidewaysSpeedLossFactor;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_hoverCarveSidewaysSpeedLossFactor(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hoverCarveSidewaysSpeedLossFactor = value;
}
constexpr ::UnityEngine::AnimationCurve*& GorillaLocomotion::GTPlayer::__cordl_internal_get_hoverCarveAngleResponsiveness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoverCarveAngleResponsiveness;
}
constexpr ::UnityEngine::AnimationCurve* const& GorillaLocomotion::GTPlayer::__cordl_internal_get_hoverCarveAngleResponsiveness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoverCarveAngleResponsiveness;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_hoverCarveAngleResponsiveness(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hoverCarveAngleResponsiveness = value;
}
constexpr ::UnityW<::GlobalNamespace::HoverboardVisual>& GorillaLocomotion::GTPlayer::__cordl_internal_get_hoverboardVisual()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoverboardVisual;
}
constexpr ::UnityW<::GlobalNamespace::HoverboardVisual> const& GorillaLocomotion::GTPlayer::__cordl_internal_get_hoverboardVisual() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoverboardVisual;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_hoverboardVisual(::UnityW<::GlobalNamespace::HoverboardVisual>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hoverboardVisual = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_sidewaysDrag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sidewaysDrag;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_sidewaysDrag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sidewaysDrag;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_sidewaysDrag(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sidewaysDrag = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_hoveringSlowSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoveringSlowSpeed;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_hoveringSlowSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoveringSlowSpeed;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_hoveringSlowSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hoveringSlowSpeed = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_hoveringSlowStoppingFactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoveringSlowStoppingFactor;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_hoveringSlowStoppingFactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoveringSlowStoppingFactor;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_hoveringSlowStoppingFactor(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hoveringSlowStoppingFactor = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_hoverboardPaddleBoostMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoverboardPaddleBoostMultiplier;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_hoverboardPaddleBoostMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoverboardPaddleBoostMultiplier;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_hoverboardPaddleBoostMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hoverboardPaddleBoostMultiplier = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_hoverboardPaddleBoostMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoverboardPaddleBoostMax;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_hoverboardPaddleBoostMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoverboardPaddleBoostMax;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_hoverboardPaddleBoostMax(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hoverboardPaddleBoostMax = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_hoverboardBoostGracePeriod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoverboardBoostGracePeriod;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_hoverboardBoostGracePeriod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoverboardBoostGracePeriod;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_hoverboardBoostGracePeriod(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hoverboardBoostGracePeriod = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_hoverBodyHasCollisionsOutsideRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoverBodyHasCollisionsOutsideRadius;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_hoverBodyHasCollisionsOutsideRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoverBodyHasCollisionsOutsideRadius;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_hoverBodyHasCollisionsOutsideRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hoverBodyHasCollisionsOutsideRadius = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_hoverBodyCollisionRadiusUpOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoverBodyCollisionRadiusUpOffset;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_hoverBodyCollisionRadiusUpOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoverBodyCollisionRadiusUpOffset;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_hoverBodyCollisionRadiusUpOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hoverBodyCollisionRadiusUpOffset = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_hoverGeneralUpwardForce()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoverGeneralUpwardForce;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_hoverGeneralUpwardForce() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoverGeneralUpwardForce;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_hoverGeneralUpwardForce(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hoverGeneralUpwardForce = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_hoverTiltAdjustsForwardFactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoverTiltAdjustsForwardFactor;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_hoverTiltAdjustsForwardFactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoverTiltAdjustsForwardFactor;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_hoverTiltAdjustsForwardFactor(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hoverTiltAdjustsForwardFactor = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_hoverMinGrindSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoverMinGrindSpeed;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_hoverMinGrindSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoverMinGrindSpeed;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_hoverMinGrindSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hoverMinGrindSpeed = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_hoverSlamJumpStrengthFactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoverSlamJumpStrengthFactor;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_hoverSlamJumpStrengthFactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoverSlamJumpStrengthFactor;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_hoverSlamJumpStrengthFactor(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hoverSlamJumpStrengthFactor = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_hoverMaxPaddleSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoverMaxPaddleSpeed;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_hoverMaxPaddleSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoverMaxPaddleSpeed;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_hoverMaxPaddleSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hoverMaxPaddleSpeed = value;
}
constexpr ::UnityW<::GlobalNamespace::HoverboardAudio>& GorillaLocomotion::GTPlayer::__cordl_internal_get_hoverboardAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoverboardAudio;
}
constexpr ::UnityW<::GlobalNamespace::HoverboardAudio> const& GorillaLocomotion::GTPlayer::__cordl_internal_get_hoverboardAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoverboardAudio;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_hoverboardAudio(::UnityW<::GlobalNamespace::HoverboardAudio>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hoverboardAudio = value;
}
constexpr bool& GorillaLocomotion::GTPlayer::__cordl_internal_get_hasHoverPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasHoverPoint;
}
constexpr bool const& GorillaLocomotion::GTPlayer::__cordl_internal_get_hasHoverPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasHoverPoint;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_hasHoverPoint(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasHoverPoint = value;
}
constexpr float_t& GorillaLocomotion::GTPlayer::__cordl_internal_get_boostEnabledUntilTimestamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boostEnabledUntilTimestamp;
}
constexpr float_t const& GorillaLocomotion::GTPlayer::__cordl_internal_get_boostEnabledUntilTimestamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boostEnabledUntilTimestamp;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_boostEnabledUntilTimestamp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___boostEnabledUntilTimestamp = value;
}
constexpr ::ArrayW<::GlobalNamespace::GTPlayer_HoverBoardCast>& GorillaLocomotion::GTPlayer::__cordl_internal_get_hoverboardCasts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoverboardCasts;
}
constexpr ::ArrayW<::GlobalNamespace::GTPlayer_HoverBoardCast> const& GorillaLocomotion::GTPlayer::__cordl_internal_get_hoverboardCasts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoverboardCasts;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_hoverboardCasts(::ArrayW<::GlobalNamespace::GTPlayer_HoverBoardCast>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hoverboardCasts = value;
}
constexpr ::UnityEngine::Vector3& GorillaLocomotion::GTPlayer::__cordl_internal_get_hoverboardPlayerLocalPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoverboardPlayerLocalPos;
}
constexpr ::UnityEngine::Vector3 const& GorillaLocomotion::GTPlayer::__cordl_internal_get_hoverboardPlayerLocalPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoverboardPlayerLocalPos;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_hoverboardPlayerLocalPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hoverboardPlayerLocalPos = value;
}
constexpr ::UnityEngine::Quaternion& GorillaLocomotion::GTPlayer::__cordl_internal_get_hoverboardPlayerLocalRot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoverboardPlayerLocalRot;
}
constexpr ::UnityEngine::Quaternion const& GorillaLocomotion::GTPlayer::__cordl_internal_get_hoverboardPlayerLocalRot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoverboardPlayerLocalRot;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_hoverboardPlayerLocalRot(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hoverboardPlayerLocalRot = value;
}
constexpr bool& GorillaLocomotion::GTPlayer::__cordl_internal_get_didHoverLastFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___didHoverLastFrame;
}
constexpr bool const& GorillaLocomotion::GTPlayer::__cordl_internal_get_didHoverLastFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___didHoverLastFrame;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_didHoverLastFrame(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___didHoverLastFrame = value;
}
constexpr bool& GorillaLocomotion::GTPlayer::__cordl_internal_get_hasLeftHandTentacleMove()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasLeftHandTentacleMove;
}
constexpr bool const& GorillaLocomotion::GTPlayer::__cordl_internal_get_hasLeftHandTentacleMove() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasLeftHandTentacleMove;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_hasLeftHandTentacleMove(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasLeftHandTentacleMove = value;
}
constexpr bool& GorillaLocomotion::GTPlayer::__cordl_internal_get_hasRightHandTentacleMove()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasRightHandTentacleMove;
}
constexpr bool const& GorillaLocomotion::GTPlayer::__cordl_internal_get_hasRightHandTentacleMove() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasRightHandTentacleMove;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_hasRightHandTentacleMove(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasRightHandTentacleMove = value;
}
constexpr ::UnityEngine::Vector3& GorillaLocomotion::GTPlayer::__cordl_internal_get_leftHandTentacleMove()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandTentacleMove;
}
constexpr ::UnityEngine::Vector3 const& GorillaLocomotion::GTPlayer::__cordl_internal_get_leftHandTentacleMove() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandTentacleMove;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_leftHandTentacleMove(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftHandTentacleMove = value;
}
constexpr ::UnityEngine::Vector3& GorillaLocomotion::GTPlayer::__cordl_internal_get_rightHandTentacleMove()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandTentacleMove;
}
constexpr ::UnityEngine::Vector3 const& GorillaLocomotion::GTPlayer::__cordl_internal_get_rightHandTentacleMove() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandTentacleMove;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_rightHandTentacleMove(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightHandTentacleMove = value;
}
constexpr ::GlobalNamespace::GTPlayer_HandHoldState& GorillaLocomotion::GTPlayer::__cordl_internal_get_activeHandHold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeHandHold;
}
constexpr ::GlobalNamespace::GTPlayer_HandHoldState const& GorillaLocomotion::GTPlayer::__cordl_internal_get_activeHandHold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeHandHold;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_activeHandHold(::GlobalNamespace::GTPlayer_HandHoldState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeHandHold = value;
}
constexpr ::GlobalNamespace::GTPlayer_HandHoldState& GorillaLocomotion::GTPlayer::__cordl_internal_get_secondaryHandHold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___secondaryHandHold;
}
constexpr ::GlobalNamespace::GTPlayer_HandHoldState const& GorillaLocomotion::GTPlayer::__cordl_internal_get_secondaryHandHold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___secondaryHandHold;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_secondaryHandHold(::GlobalNamespace::GTPlayer_HandHoldState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___secondaryHandHold = value;
}
constexpr ::UnityW<::UnityEngine::PhysicsMaterial>& GorillaLocomotion::GTPlayer::__cordl_internal_get_slipperyMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slipperyMaterial;
}
constexpr ::UnityW<::UnityEngine::PhysicsMaterial> const& GorillaLocomotion::GTPlayer::__cordl_internal_get_slipperyMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slipperyMaterial;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_slipperyMaterial(::UnityW<::UnityEngine::PhysicsMaterial>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slipperyMaterial = value;
}
constexpr bool& GorillaLocomotion::GTPlayer::__cordl_internal_get_wasHoldingHandhold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasHoldingHandhold;
}
constexpr bool const& GorillaLocomotion::GTPlayer::__cordl_internal_get_wasHoldingHandhold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasHoldingHandhold;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_wasHoldingHandhold(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasHoldingHandhold = value;
}
constexpr ::UnityEngine::Vector3& GorillaLocomotion::GTPlayer::__cordl_internal_get_secondLastPreHandholdVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___secondLastPreHandholdVelocity;
}
constexpr ::UnityEngine::Vector3 const& GorillaLocomotion::GTPlayer::__cordl_internal_get_secondLastPreHandholdVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___secondLastPreHandholdVelocity;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_secondLastPreHandholdVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___secondLastPreHandholdVelocity = value;
}
constexpr ::UnityEngine::Vector3& GorillaLocomotion::GTPlayer::__cordl_internal_get_lastPreHandholdVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPreHandholdVelocity;
}
constexpr ::UnityEngine::Vector3 const& GorillaLocomotion::GTPlayer::__cordl_internal_get_lastPreHandholdVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPreHandholdVelocity;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_lastPreHandholdVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastPreHandholdVelocity = value;
}
constexpr ::UnityEngine::AnimationCurve*& GorillaLocomotion::GTPlayer::__cordl_internal_get_nativeScaleMagnitudeAdjustmentFactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nativeScaleMagnitudeAdjustmentFactor;
}
constexpr ::UnityEngine::AnimationCurve* const& GorillaLocomotion::GTPlayer::__cordl_internal_get_nativeScaleMagnitudeAdjustmentFactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nativeScaleMagnitudeAdjustmentFactor;
}
constexpr void GorillaLocomotion::GTPlayer::__cordl_internal_set_nativeScaleMagnitudeAdjustmentFactor(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nativeScaleMagnitudeAdjustmentFactor = value;
}
inline void GorillaLocomotion::GTPlayer::setStaticF_LocomotionEnabledLayers(::UnityEngine::LayerMask  value)  {
::cordl_internals::setStaticField<::UnityEngine::LayerMask, "LocomotionEnabledLayers", ::GorillaLocomotion::GTPlayer*>(std::forward<::UnityEngine::LayerMask>(value));
}
inline ::UnityEngine::LayerMask GorillaLocomotion::GTPlayer::getStaticF_LocomotionEnabledLayers()  {
return ::cordl_internals::getStaticField<::UnityEngine::LayerMask, "LocomotionEnabledLayers", ::GorillaLocomotion::GTPlayer*>();
}
inline void GorillaLocomotion::GTPlayer::setStaticF__instance(::UnityW<::GorillaLocomotion::GTPlayer>  value)  {
::cordl_internals::setStaticField<::UnityW<::GorillaLocomotion::GTPlayer>, "_instance", ::GorillaLocomotion::GTPlayer*>(std::forward<::UnityW<::GorillaLocomotion::GTPlayer>>(value));
}
inline ::UnityW<::GorillaLocomotion::GTPlayer> GorillaLocomotion::GTPlayer::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GorillaLocomotion::GTPlayer>, "_instance", ::GorillaLocomotion::GTPlayer*>();
}
inline void GorillaLocomotion::GTPlayer::setStaticF_hasInstance(bool  value)  {
::cordl_internals::setStaticField<bool, "hasInstance", ::GorillaLocomotion::GTPlayer*>(std::forward<bool>(value));
}
inline bool GorillaLocomotion::GTPlayer::getStaticF_hasInstance()  {
return ::cordl_internals::getStaticField<bool, "hasInstance", ::GorillaLocomotion::GTPlayer*>();
}
inline ::UnityW<::GorillaLocomotion::GTPlayer> GorillaLocomotion::GTPlayer::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GorillaLocomotion::GTPlayer>>(nullptr, ___internal_method);
}
inline float_t GorillaLocomotion::GTPlayer::get_bodyInitialHeight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_bodyInitialHeight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::GlobalNamespace::GTPlayer_HandState GorillaLocomotion::GTPlayer::get_LeftHand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_LeftHand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GTPlayer_HandState>(this, ___internal_method);
}
inline ::by_ref<::GlobalNamespace::GTPlayer_HandState> GorillaLocomotion::GTPlayer::get_LeftHandRef()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_LeftHandRef", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::GlobalNamespace::GTPlayer_HandState>>(this, ___internal_method);
}
inline ::GlobalNamespace::GTPlayer_HandState GorillaLocomotion::GTPlayer::get_RightHand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_RightHand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GTPlayer_HandState>(this, ___internal_method);
}
inline ::by_ref<::GlobalNamespace::GTPlayer_HandState> GorillaLocomotion::GTPlayer::get_RightHandRef()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_RightHandRef", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::GlobalNamespace::GTPlayer_HandState>>(this, ___internal_method);
}
inline int32_t GorillaLocomotion::GTPlayer::GetMaterialTouchIndex(bool  isLeftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"GetMaterialTouchIndex", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, isLeftHand);
}
inline ::UnityW<::GlobalNamespace::GorillaSurfaceOverride> GorillaLocomotion::GTPlayer::GetSurfaceOverride(bool  isLeftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"GetSurfaceOverride", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GorillaSurfaceOverride>>(this, ___internal_method, isLeftHand);
}
inline ::UnityEngine::RaycastHit GorillaLocomotion::GTPlayer::GetTouchHitInfo(bool  isLeftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"GetTouchHitInfo", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RaycastHit>(this, ___internal_method, isLeftHand);
}
inline bool GorillaLocomotion::GTPlayer::IsHandTouching(bool  isLeftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"IsHandTouching", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, isLeftHand);
}
inline ::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker> GorillaLocomotion::GTPlayer::GetHandVelocityTracker(bool  isLeftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"GetHandVelocityTracker", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker>>(this, ___internal_method, isLeftHand);
}
inline ::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker> GorillaLocomotion::GTPlayer::GetInteractPointVelocityTracker(bool  isLeftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"GetInteractPointVelocityTracker", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker>>(this, ___internal_method, isLeftHand);
}
inline ::UnityW<::UnityEngine::Transform> GorillaLocomotion::GTPlayer::GetControllerTransform(bool  isLeftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"GetControllerTransform", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method, isLeftHand);
}
inline ::UnityW<::UnityEngine::Transform> GorillaLocomotion::GTPlayer::GetHandFollower(bool  isLeftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"GetHandFollower", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method, isLeftHand);
}
inline ::UnityEngine::Vector3 GorillaLocomotion::GTPlayer::GetHandOffset(bool  isLeftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"GetHandOffset", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, isLeftHand);
}
inline ::UnityEngine::Quaternion GorillaLocomotion::GTPlayer::GetHandRotOffset(bool  isLeftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"GetHandRotOffset", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method, isLeftHand);
}
inline ::UnityEngine::Vector3 GorillaLocomotion::GTPlayer::GetHandPosition(bool  isLeftHand, ::GorillaLocomotion::StiltID  stiltID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"GetHandPosition", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::GorillaLocomotion::StiltID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, isLeftHand, stiltID);
}
inline void GorillaLocomotion::GTPlayer::GetHandTapData(bool  isLeftHand, ::GorillaLocomotion::StiltID  stiltID, ::by_ref<bool>  wasHandTouching, ::by_ref<bool>  wasSliding, ::by_ref<int32_t>  handMatIndex, ::by_ref<::GlobalNamespace::GorillaSurfaceOverride*>  surfaceOverride, ::by_ref<::UnityEngine::RaycastHit>  handHitInfo, ::by_ref<::UnityEngine::Vector3>  handPosition, ::by_ref<::GorillaLocomotion::Climbing::GorillaVelocityTracker*>  handVelocityTracker)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"GetHandTapData", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::GorillaLocomotion::StiltID>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GorillaSurfaceOverride*>>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::GorillaLocomotion::Climbing::GorillaVelocityTracker*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isLeftHand, stiltID, wasHandTouching, wasSliding, handMatIndex, surfaceOverride, handHitInfo, handPosition, handVelocityTracker);
}
inline void GorillaLocomotion::GTPlayer::SetHandOffsets(bool  isLeftHand, ::UnityEngine::Vector3  handOffset, ::UnityEngine::Quaternion  handRotOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"SetHandOffsets", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isLeftHand, handOffset, handRotOffset);
}
inline ::UnityW<::UnityEngine::Rigidbody> GorillaLocomotion::GTPlayer::get_playerRigidBody()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_playerRigidBody", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rigidbody>>(this, ___internal_method);
}
inline void GorillaLocomotion::GTPlayer::set_playerRigidBody(::UnityEngine::Rigidbody*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"set_playerRigidBody", {}, {::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 GorillaLocomotion::GTPlayer::get_LastPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_LastPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GorillaLocomotion::GTPlayer::get_InstantaneousVelocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_InstantaneousVelocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GorillaLocomotion::GTPlayer::get_AveragedVelocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_AveragedVelocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> GorillaLocomotion::GTPlayer::get_CosmeticsHeadTarget()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_CosmeticsHeadTarget", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline float_t GorillaLocomotion::GTPlayer::get_scale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_scale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GorillaLocomotion::GTPlayer::get_NativeScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_NativeScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GorillaLocomotion::GTPlayer::get_ScaleMultiplier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_ScaleMultiplier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GorillaLocomotion::GTPlayer::SetScaleMultiplier(float_t  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"SetScaleMultiplier", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline void GorillaLocomotion::GTPlayer::SetNativeScale(::GlobalNamespace::NativeSizeChangerSettings*  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"SetNativeScale", {}, {::i2c::type_of<::GlobalNamespace::NativeSizeChangerSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline bool GorillaLocomotion::GTPlayer::get_IsDefaultScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_IsDefaultScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaLocomotion::GTPlayer::get_turnedThisFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_turnedThisFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::GTPlayer_MaterialData>* GorillaLocomotion::GTPlayer::get_materialData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_materialData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::GTPlayer_MaterialData>*>(this, ___internal_method);
}
inline ::UnityW<::GorillaLocomotion::Swimming::PlayerSwimmingParameters> GorillaLocomotion::GTPlayer::GetSwimmingParams(::GlobalNamespace::GTPlayer_LiquidType  liquidType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"GetSwimmingParams", {}, {::i2c::type_of<::GlobalNamespace::GTPlayer_LiquidType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GorillaLocomotion::Swimming::PlayerSwimmingParameters>>(this, ___internal_method, liquidType);
}
inline ::UnityW<::GorillaLocomotion::Swimming::PlayerSwimmingParameters> GorillaLocomotion::GTPlayer::GetSwimmingParams(::GorillaLocomotion::Swimming::WaterVolume*  volume)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"GetSwimmingParams", {}, {::i2c::type_of<::GorillaLocomotion::Swimming::WaterVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GorillaLocomotion::Swimming::PlayerSwimmingParameters>>(this, ___internal_method, volume);
}
inline bool GorillaLocomotion::GTPlayer::get_IsFrozen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_IsFrozen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaLocomotion::GTPlayer::set_IsFrozen(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"set_IsFrozen", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GorillaLocomotion::GTPlayer::get_forcedUnderwater()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_forcedUnderwater", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaLocomotion::GTPlayer::set_forcedUnderwater(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"set_forcedUnderwater", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GorillaLocomotion::GTPlayer::get_siJumpMultiplier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_siJumpMultiplier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GorillaLocomotion::GTPlayer::set_siJumpMultiplier(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"set_siJumpMultiplier", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Swimming::WaterVolume>>* GorillaLocomotion::GTPlayer::get_HeadOverlappingWaterVolumes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_HeadOverlappingWaterVolumes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Swimming::WaterVolume>>*>(this, ___internal_method);
}
inline bool GorillaLocomotion::GTPlayer::get_InWater()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_InWater", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaLocomotion::GTPlayer::get_HeadInWater()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_HeadInWater", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::GorillaLocomotion::Swimming::WaterVolume> GorillaLocomotion::GTPlayer::get_CurrentWaterVolume()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_CurrentWaterVolume", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GorillaLocomotion::Swimming::WaterVolume>>(this, ___internal_method);
}
inline ::GlobalNamespace::WaterVolume_SurfaceQuery GorillaLocomotion::GTPlayer::get_WaterSurfaceForHead()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_WaterSurfaceForHead", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::WaterVolume_SurfaceQuery>(this, ___internal_method);
}
inline ::UnityW<::GorillaLocomotion::Swimming::WaterVolume> GorillaLocomotion::GTPlayer::get_LeftHandWaterVolume()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_LeftHandWaterVolume", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GorillaLocomotion::Swimming::WaterVolume>>(this, ___internal_method);
}
inline ::UnityW<::GorillaLocomotion::Swimming::WaterVolume> GorillaLocomotion::GTPlayer::get_RightHandWaterVolume()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_RightHandWaterVolume", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GorillaLocomotion::Swimming::WaterVolume>>(this, ___internal_method);
}
inline ::GlobalNamespace::WaterVolume_SurfaceQuery GorillaLocomotion::GTPlayer::get_LeftHandWaterSurface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_LeftHandWaterSurface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::WaterVolume_SurfaceQuery>(this, ___internal_method);
}
inline ::GlobalNamespace::WaterVolume_SurfaceQuery GorillaLocomotion::GTPlayer::get_RightHandWaterSurface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_RightHandWaterSurface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::WaterVolume_SurfaceQuery>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GorillaLocomotion::GTPlayer::get_LastLeftHandPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_LastLeftHandPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GorillaLocomotion::GTPlayer::get_LastRightHandPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_LastRightHandPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GorillaLocomotion::GTPlayer::get_RigidbodyVelocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_RigidbodyVelocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GorillaLocomotion::GTPlayer::get_HeadCenterPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_HeadCenterPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline bool GorillaLocomotion::GTPlayer::get_HandContactingSurface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_HandContactingSurface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaLocomotion::GTPlayer::get_BodyOnGround()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_BodyOnGround", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaLocomotion::GTPlayer::get_IsGroundedHand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_IsGroundedHand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaLocomotion::GTPlayer::get_IsGroundedButt()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_IsGroundedButt", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t GorillaLocomotion::GTPlayer::get_TentacleActiveAtFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_TentacleActiveAtFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GorillaLocomotion::GTPlayer::set_TentacleActiveAtFrame(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"set_TentacleActiveAtFrame", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GorillaLocomotion::GTPlayer::get_IsTentacleActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_IsTentacleActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t GorillaLocomotion::GTPlayer::get_LaserZiplineActiveAtFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_LaserZiplineActiveAtFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GorillaLocomotion::GTPlayer::set_LaserZiplineActiveAtFrame(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"set_LaserZiplineActiveAtFrame", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GorillaLocomotion::GTPlayer::get_IsLaserZiplineActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_IsLaserZiplineActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t GorillaLocomotion::GTPlayer::get_ThrusterActiveAtFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_ThrusterActiveAtFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GorillaLocomotion::GTPlayer::set_ThrusterActiveAtFrame(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"set_ThrusterActiveAtFrame", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GorillaLocomotion::GTPlayer::get_IsThrusterActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_IsThrusterActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaLocomotion::GTPlayer::set_PlayerRotationOverride(::UnityEngine::Quaternion  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"set_PlayerRotationOverride", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GorillaLocomotion::GTPlayer::get_IsBodySliding()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_IsBodySliding", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaLocomotion::GTPlayer::set_IsBodySliding(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"set_IsBodySliding", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GorillaLocomotion::GTPlayer::get_bodyGroundIsSlippery()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_bodyGroundIsSlippery", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaLocomotion::GTPlayer::set_bodyGroundIsSlippery(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"set_bodyGroundIsSlippery", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GorillaLocomotion::Climbing::GorillaClimbable> GorillaLocomotion::GTPlayer::get_CurrentClimbable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_CurrentClimbable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GorillaLocomotion::Climbing::GorillaClimbable>>(this, ___internal_method);
}
inline ::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber> GorillaLocomotion::GTPlayer::get_CurrentClimber()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_CurrentClimber", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber>>(this, ___internal_method);
}
inline float_t GorillaLocomotion::GTPlayer::get_jumpMultiplier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_jumpMultiplier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GorillaLocomotion::GTPlayer::set_jumpMultiplier(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"set_jumpMultiplier", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GorillaLocomotion::GTPlayer::get_LastTouchedGroundAtNetworkTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_LastTouchedGroundAtNetworkTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GorillaLocomotion::GTPlayer::set_LastTouchedGroundAtNetworkTime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"set_LastTouchedGroundAtNetworkTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GorillaLocomotion::GTPlayer::get_LastHandTouchedGroundAtNetworkTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_LastHandTouchedGroundAtNetworkTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GorillaLocomotion::GTPlayer::set_LastHandTouchedGroundAtNetworkTime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"set_LastHandTouchedGroundAtNetworkTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaLocomotion::GTPlayer::EnableStilt(::GorillaLocomotion::StiltID  stiltID, bool  isLeftHand, ::UnityEngine::Vector3  currentTipWorldPos, float_t  maxArmLength, bool  canTag, bool  canStun, float_t  customBoostFactor, ::GorillaLocomotion::Climbing::GorillaVelocityTracker*  velocityTracker)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"EnableStilt", {}, {::i2c::type_of<::GorillaLocomotion::StiltID>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GorillaLocomotion::Climbing::GorillaVelocityTracker*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stiltID, isLeftHand, currentTipWorldPos, maxArmLength, canTag, canStun, customBoostFactor, velocityTracker);
}
inline void GorillaLocomotion::GTPlayer::DisableStilt(::GorillaLocomotion::StiltID  stiltID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"DisableStilt", {}, {::i2c::type_of<::GorillaLocomotion::StiltID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stiltID);
}
inline void GorillaLocomotion::GTPlayer::UpdateStiltOffset(::GorillaLocomotion::StiltID  stiltID, ::UnityEngine::Vector3  currentTipWorldPos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"UpdateStiltOffset", {}, {::i2c::type_of<::GorillaLocomotion::StiltID>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stiltID, currentTipWorldPos);
}
inline void GorillaLocomotion::GTPlayer::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::GTPlayer::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::GTPlayer::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::GTPlayer::InitializeValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"InitializeValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::GTPlayer::SetHalloweenLevitation(float_t  levitateStrength, float_t  levitateDuration, float_t  levitateBlendOutDuration, float_t  levitateBonusStrength, float_t  levitateBonusOffAtYSpeed, float_t  levitateBonusFullAtYSpeed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"SetHalloweenLevitation", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, levitateStrength, levitateDuration, levitateBlendOutDuration, levitateBonusStrength, levitateBonusOffAtYSpeed, levitateBonusFullAtYSpeed);
}
inline void GorillaLocomotion::GTPlayer::TeleportToTrain(bool  enable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"TeleportToTrain", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enable);
}
inline void GorillaLocomotion::GTPlayer::TeleportCleanup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"TeleportCleanup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::GTPlayer::TeleportTo(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, bool  keepVelocity, bool  center)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"TeleportTo", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, rotation, keepVelocity, center);
}
inline void GorillaLocomotion::GTPlayer::TeleportTo(::UnityEngine::Transform*  destination, bool  matchDestinationRotation, bool  maintainVelocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"TeleportTo", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destination, matchDestinationRotation, maintainVelocity);
}
inline void GorillaLocomotion::GTPlayer::AddForce(::UnityEngine::Vector3  force, ::UnityEngine::ForceMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"AddForce", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::ForceMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, force, mode);
}
inline void GorillaLocomotion::GTPlayer::SetPlayerVelocity(::UnityEngine::Vector3  newVelocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"SetPlayerVelocity", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newVelocity);
}
inline int32_t GorillaLocomotion::GTPlayer::get_GravityOverrideCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_GravityOverrideCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GorillaLocomotion::GTPlayer::SetGravityOverride(::UnityEngine::Object*  caller, ::System::Action_1<::UnityW<::GorillaLocomotion::GTPlayer>>*  gravityFunction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"SetGravityOverride", {}, {::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::System::Action_1<::UnityW<::GorillaLocomotion::GTPlayer>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, caller, gravityFunction);
}
inline void GorillaLocomotion::GTPlayer::UnsetGravityOverride(::UnityEngine::Object*  caller)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"UnsetGravityOverride", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, caller);
}
inline void GorillaLocomotion::GTPlayer::ApplyGravityOverrides()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"ApplyGravityOverrides", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::GTPlayer::ApplyKnockback(::UnityEngine::Vector3  direction, float_t  speed, bool  forceOffTheGround)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"ApplyKnockback", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, direction, speed, forceOffTheGround);
}
inline void GorillaLocomotion::GTPlayer::ApplyClampedKnockback(::UnityEngine::Vector3  direction, float_t  speed, float_t  boostMultiplier, bool  forceOffTheGround)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"ApplyClampedKnockback", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, direction, speed, boostMultiplier, forceOffTheGround);
}
inline void GorillaLocomotion::GTPlayer::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaLocomotion::GTPlayer::get_isHoverAllowed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_isHoverAllowed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaLocomotion::GTPlayer::set_isHoverAllowed(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"set_isHoverAllowed", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GorillaLocomotion::GTPlayer::get_enableHoverMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_enableHoverMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaLocomotion::GTPlayer::set_enableHoverMode(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"set_enableHoverMode", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaLocomotion::GTPlayer::SetHoverboardPosRot(::UnityEngine::Vector3  worldPos, ::UnityEngine::Quaternion  worldRot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"SetHoverboardPosRot", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, worldPos, worldRot);
}
inline void GorillaLocomotion::GTPlayer::HoverboardLateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"HoverboardLateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GorillaLocomotion::GTPlayer::HoverboardFixedUpdate(::UnityEngine::Vector3  velocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"HoverboardFixedUpdate", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, velocity);
}
inline void GorillaLocomotion::GTPlayer::GrabPersonalHoverboard(bool  isLeftHand, ::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot, ::UnityEngine::Color  col)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"GrabPersonalHoverboard", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isLeftHand, pos, rot, col);
}
inline void GorillaLocomotion::GTPlayer::AddHoverArea(::GlobalNamespace::HoverboardAreaTrigger*  area)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"AddHoverArea", {}, {::i2c::type_of<::GlobalNamespace::HoverboardAreaTrigger*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, area);
}
inline void GorillaLocomotion::GTPlayer::RemoveHoverArea(::GlobalNamespace::HoverboardAreaTrigger*  area)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"RemoveHoverArea", {}, {::i2c::type_of<::GlobalNamespace::HoverboardAreaTrigger*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, area);
}
inline void GorillaLocomotion::GTPlayer::AddHoverDisabler(::GlobalNamespace::ForceDisableHoverboardTrigger*  disabler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"AddHoverDisabler", {}, {::i2c::type_of<::GlobalNamespace::ForceDisableHoverboardTrigger*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disabler);
}
inline void GorillaLocomotion::GTPlayer::RemoveHoverDisabler(::GlobalNamespace::ForceDisableHoverboardTrigger*  disabler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"RemoveHoverDisabler", {}, {::i2c::type_of<::GlobalNamespace::ForceDisableHoverboardTrigger*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disabler);
}
inline void GorillaLocomotion::GTPlayer::ForceHoverDisallowed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"ForceHoverDisallowed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::GTPlayer::RefreshHoverAllowed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"RefreshHoverAllowed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GorillaLocomotion::GTPlayer::DelayedRemoveHoverboard()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"DelayedRemoveHoverboard", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GorillaLocomotion::GTPlayer::SetHoverActive(bool  enable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"SetHoverActive", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enable);
}
inline void GorillaLocomotion::GTPlayer::BodyCollider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"BodyCollider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GorillaLocomotion::GTPlayer::PositionWithOffset(::UnityEngine::Transform*  transformToModify, ::UnityEngine::Vector3  offsetVector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"PositionWithOffset", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, transformToModify, offsetVector);
}
inline void GorillaLocomotion::GTPlayer::ScaleAwayFromPoint(float_t  oldScale, float_t  newScale, ::UnityEngine::Vector3  scaleCenter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"ScaleAwayFromPoint", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldScale, newScale, scaleCenter);
}
inline ::UnityEngine::Vector3 GorillaLocomotion::GTPlayer::ScalePointAwayFromCenter(::UnityEngine::Vector3  point, float_t  baseRadius, float_t  oldScale, float_t  newScale, ::UnityEngine::Vector3  scaleCenter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"ScalePointAwayFromCenter", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, point, baseRadius, oldScale, newScale, scaleCenter);
}
inline void GorillaLocomotion::GTPlayer::OnBeforeRenderInit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"OnBeforeRenderInit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::GTPlayer::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GorillaLocomotion::GTPlayer::ApplyNativeScaleAdjustment(float_t  adjustedMagnitude)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"ApplyNativeScaleAdjustment", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, adjustedMagnitude);
}
inline float_t GorillaLocomotion::GTPlayer::RotateWithSurface(::UnityEngine::Quaternion  rotationDelta, ::UnityEngine::Vector3  pivot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"RotateWithSurface", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, rotationDelta, pivot);
}
inline void GorillaLocomotion::GTPlayer::stuckHandsCheckFixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"stuckHandsCheckFixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::GTPlayer::stuckHandsCheckLateUpdate(::by_ref<::UnityEngine::Vector3>  finalLeftHandPosition, ::by_ref<::UnityEngine::Vector3>  finalRightHandPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"stuckHandsCheckLateUpdate", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, finalLeftHandPosition, finalRightHandPosition);
}
inline void GorillaLocomotion::GTPlayer::handleClimbing(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"handleClimbing", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void GorillaLocomotion::GTPlayer::RequestTentacleMove(bool  isLeftHand, ::UnityEngine::Vector3  move)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"RequestTentacleMove", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isLeftHand, move);
}
inline bool GorillaLocomotion::GTPlayer::HandleTentacleMovement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"HandleTentacleMovement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::HandLinkAuthorityStatus GorillaLocomotion::GTPlayer::TakeMyHand_GetSelfHandLinkAuthority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"TakeMyHand_GetSelfHandLinkAuthority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HandLinkAuthorityStatus>(this, ___internal_method);
}
inline void GorillaLocomotion::GTPlayer::TakeMyHand_ProcessMovement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"TakeMyHand_ProcessMovement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::GTPlayer::TakeMyHand_PositionTriple(::GlobalNamespace::TakeMyHand_HandLink*  linkA, ::GlobalNamespace::TakeMyHand_HandLink*  linkB)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"TakeMyHand_PositionTriple", {}, {::i2c::type_of<::GlobalNamespace::TakeMyHand_HandLink*>(), ::i2c::type_of<::GlobalNamespace::TakeMyHand_HandLink*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, linkA, linkB);
}
inline void GorillaLocomotion::GTPlayer::TakeMyHand_PositionBoth(::GlobalNamespace::TakeMyHand_HandLink*  link)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"TakeMyHand_PositionBoth", {}, {::i2c::type_of<::GlobalNamespace::TakeMyHand_HandLink*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, link);
}
inline void GorillaLocomotion::GTPlayer::TakeMyHand_PositionBoth_BothHands(::GlobalNamespace::TakeMyHand_HandLink*  link1, ::GlobalNamespace::TakeMyHand_HandLink*  link2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"TakeMyHand_PositionBoth_BothHands", {}, {::i2c::type_of<::GlobalNamespace::TakeMyHand_HandLink*>(), ::i2c::type_of<::GlobalNamespace::TakeMyHand_HandLink*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, link1, link2);
}
inline void GorillaLocomotion::GTPlayer::TakeMyHand_PositionChild_LocalPlayer(::GlobalNamespace::TakeMyHand_HandLink*  parentLink)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"TakeMyHand_PositionChild_LocalPlayer", {}, {::i2c::type_of<::GlobalNamespace::TakeMyHand_HandLink*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parentLink);
}
inline void GorillaLocomotion::GTPlayer::TakeMyHand_PositionChild_LocalPlayer(::GlobalNamespace::TakeMyHand_HandLink*  linkA, ::GlobalNamespace::TakeMyHand_HandLink*  linkB)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"TakeMyHand_PositionChild_LocalPlayer", {}, {::i2c::type_of<::GlobalNamespace::TakeMyHand_HandLink*>(), ::i2c::type_of<::GlobalNamespace::TakeMyHand_HandLink*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, linkA, linkB);
}
inline void GorillaLocomotion::GTPlayer::TakeMyHand_PositionChild_RemotePlayer(::GlobalNamespace::TakeMyHand_HandLink*  childLink)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"TakeMyHand_PositionChild_RemotePlayer", {}, {::i2c::type_of<::GlobalNamespace::TakeMyHand_HandLink*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, childLink);
}
inline void GorillaLocomotion::GTPlayer::TakeMyHand_PositionChild_RemotePlayer_BothHands(::GlobalNamespace::TakeMyHand_HandLink*  childLink1, ::GlobalNamespace::TakeMyHand_HandLink*  childLink2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"TakeMyHand_PositionChild_RemotePlayer_BothHands", {}, {::i2c::type_of<::GlobalNamespace::TakeMyHand_HandLink*>(), ::i2c::type_of<::GlobalNamespace::TakeMyHand_HandLink*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, childLink1, childLink2);
}
inline bool GorillaLocomotion::GTPlayer::IterativeCollisionSphereCast(::UnityEngine::Vector3  startPosition, float_t  sphereRadius, ::UnityEngine::Vector3  movementVector, ::UnityEngine::Vector3  boostVector, ::by_ref<::UnityEngine::Vector3>  endPosition, bool  singleHand, ::by_ref<float_t>  slipPercentage, ::by_ref<::UnityEngine::RaycastHit>  iterativeHitInfo, bool  fullSlide)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"IterativeCollisionSphereCast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, startPosition, sphereRadius, movementVector, boostVector, endPosition, singleHand, slipPercentage, iterativeHitInfo, fullSlide);
}
inline bool GorillaLocomotion::GTPlayer::CollisionsSphereCast(::UnityEngine::Vector3  startPosition, float_t  sphereRadius, ::UnityEngine::Vector3  movementVector, ::by_ref<::UnityEngine::Vector3>  finalPosition, ::by_ref<::UnityEngine::RaycastHit>  collisionsHitInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"CollisionsSphereCast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, startPosition, sphereRadius, movementVector, finalPosition, collisionsHitInfo);
}
inline float_t GorillaLocomotion::GTPlayer::GetSlidePercentage(::UnityEngine::RaycastHit  raycastHit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"GetSlidePercentage", {}, {::i2c::type_of<::UnityEngine::RaycastHit>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, raycastHit);
}
inline bool GorillaLocomotion::GTPlayer::IsTouchingMovingSurface(::UnityEngine::Vector3  rayOrigin, ::UnityEngine::RaycastHit  raycastHit, ::by_ref<int32_t>  movingSurfaceId, ::by_ref<bool>  sideTouch, ::by_ref<bool>  isMonkeBlock)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"IsTouchingMovingSurface", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::RaycastHit>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, rayOrigin, raycastHit, movingSurfaceId, sideTouch, isMonkeBlock);
}
inline void GorillaLocomotion::GTPlayer::Turn(float_t  degrees)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"Turn", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, degrees);
}
inline void GorillaLocomotion::GTPlayer::BeginClimbing(::GorillaLocomotion::Climbing::GorillaClimbable*  climbable, ::GorillaLocomotion::Climbing::GorillaHandClimber*  hand, ::GorillaLocomotion::Climbing::GorillaClimbableRef*  climbableRef)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"BeginClimbing", {}, {::i2c::type_of<::GorillaLocomotion::Climbing::GorillaClimbable*>(), ::i2c::type_of<::GorillaLocomotion::Climbing::GorillaHandClimber*>(), ::i2c::type_of<::GorillaLocomotion::Climbing::GorillaClimbableRef*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, climbable, hand, climbableRef);
}
inline void GorillaLocomotion::GTPlayer::VerifyClimbHelper()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"VerifyClimbHelper", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::GTPlayer::EndClimbing(::GorillaLocomotion::Climbing::GorillaHandClimber*  hand, bool  startingNewClimb, bool  doDontReclimb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"EndClimbing", {}, {::i2c::type_of<::GorillaLocomotion::Climbing::GorillaHandClimber*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand, startingNewClimb, doDontReclimb);
}
inline void GorillaLocomotion::GTPlayer::ResetRigidbodyInterpolation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"ResetRigidbodyInterpolation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::RigidbodyInterpolation GorillaLocomotion::GTPlayer::get_RigidbodyInterpolation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"get_RigidbodyInterpolation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RigidbodyInterpolation>(this, ___internal_method);
}
inline void GorillaLocomotion::GTPlayer::set_RigidbodyInterpolation(::UnityEngine::RigidbodyInterpolation  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"set_RigidbodyInterpolation", {}, {::i2c::type_of<::UnityEngine::RigidbodyInterpolation>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaLocomotion::GTPlayer::enablePlayerGravity(bool  useGravity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"enablePlayerGravity", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, useGravity);
}
inline void GorillaLocomotion::GTPlayer::SetVelocity(::UnityEngine::Vector3  velocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"SetVelocity", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, velocity);
}
inline void GorillaLocomotion::GTPlayer::RigidbodyMovePosition(::UnityEngine::Vector3  pos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"RigidbodyMovePosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pos);
}
inline void GorillaLocomotion::GTPlayer::TempFreezeHand(bool  isLeft, float_t  freezeDuration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"TempFreezeHand", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isLeft, freezeDuration);
}
inline void GorillaLocomotion::GTPlayer::StoreVelocities()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"StoreVelocities", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::GTPlayer::AntiTeleportTechnology()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"AntiTeleportTechnology", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaLocomotion::GTPlayer::MaxSphereSizeForNoOverlap(float_t  testRadius, ::UnityEngine::Vector3  checkPosition, bool  ignoreOneWay, ::by_ref<float_t>  overlapRadiusTest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"MaxSphereSizeForNoOverlap", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, testRadius, checkPosition, ignoreOneWay, overlapRadiusTest);
}
inline bool GorillaLocomotion::GTPlayer::CrazyCheck2(float_t  sphereSize, ::UnityEngine::Vector3  startPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"CrazyCheck2", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sphereSize, startPosition);
}
inline int32_t GorillaLocomotion::GTPlayer::NonAllocRaycast(::UnityEngine::Vector3  startPosition, ::UnityEngine::Vector3  endPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"NonAllocRaycast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, startPosition, endPosition);
}
inline void GorillaLocomotion::GTPlayer::ClearColliderBuffer(::by_ref<::ArrayW<::UnityEngine::Collider*>>  colliders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"ClearColliderBuffer", {}, {::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Collider*>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colliders);
}
inline void GorillaLocomotion::GTPlayer::ClearRaycasthitBuffer(::by_ref<::ArrayW<::UnityEngine::RaycastHit>>  raycastHits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"ClearRaycasthitBuffer", {}, {::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::RaycastHit>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, raycastHits);
}
inline ::UnityEngine::Vector3 GorillaLocomotion::GTPlayer::MovingSurfaceMovement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"MovingSurfaceMovement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline bool GorillaLocomotion::GTPlayer::ComputeLocalHitPoint(::UnityEngine::RaycastHit  hit, ::by_ref<::UnityEngine::Vector3>  localHitPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"ComputeLocalHitPoint", {}, {::i2c::type_of<::UnityEngine::RaycastHit>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hit, localHitPoint);
}
inline bool GorillaLocomotion::GTPlayer::ComputeWorldHitPoint(::UnityEngine::RaycastHit  hit, ::UnityEngine::Vector3  localPoint, ::by_ref<::UnityEngine::Vector3>  worldHitPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"ComputeWorldHitPoint", {}, {::i2c::type_of<::UnityEngine::RaycastHit>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hit, localPoint, worldHitPoint);
}
inline float_t GorillaLocomotion::GTPlayer::ExtraVelMultiplier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"ExtraVelMultiplier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GorillaLocomotion::GTPlayer::ExtraVelMaxMultiplier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"ExtraVelMaxMultiplier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GorillaLocomotion::GTPlayer::SetMaximumSlipThisFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"SetMaximumSlipThisFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::GTPlayer::SetLeftMaximumSlipThisFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"SetLeftMaximumSlipThisFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::GTPlayer::SetRightMaximumSlipThisFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"SetRightMaximumSlipThisFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::GTPlayer::ChangeLayer(::StringW  layerName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"ChangeLayer", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, layerName);
}
inline void GorillaLocomotion::GTPlayer::RestoreLayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"RestoreLayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::GTPlayer::OnEnterWaterVolume(::UnityEngine::Collider*  playerCollider, ::GorillaLocomotion::Swimming::WaterVolume*  volume)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"OnEnterWaterVolume", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::GorillaLocomotion::Swimming::WaterVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerCollider, volume);
}
inline void GorillaLocomotion::GTPlayer::OnExitWaterVolume(::UnityEngine::Collider*  playerCollider, ::GorillaLocomotion::Swimming::WaterVolume*  volume)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"OnExitWaterVolume", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::GorillaLocomotion::Swimming::WaterVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerCollider, volume);
}
inline bool GorillaLocomotion::GTPlayer::GetSwimmingVelocityForHand(::UnityEngine::Vector3  startingHandPosition, ::UnityEngine::Vector3  endingHandPosition, ::UnityEngine::Vector3  palmForwardDirection, float_t  dt, ::by_ref<::GorillaLocomotion::Swimming::WaterVolume*>  contactingWaterVolume, ::by_ref<::GlobalNamespace::WaterVolume_SurfaceQuery>  waterSurface, ::by_ref<::UnityEngine::Vector3>  swimmingVelocityChange)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"GetSwimmingVelocityForHand", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::GorillaLocomotion::Swimming::WaterVolume*>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::WaterVolume_SurfaceQuery>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, startingHandPosition, endingHandPosition, palmForwardDirection, dt, contactingWaterVolume, waterSurface, swimmingVelocityChange);
}
inline bool GorillaLocomotion::GTPlayer::CheckWaterSurfaceJump(::UnityEngine::Vector3  startingHandPosition, ::UnityEngine::Vector3  endingHandPosition, ::UnityEngine::Vector3  palmForwardDirection, ::UnityEngine::Vector3  handAvgVelocity, ::GorillaLocomotion::Swimming::PlayerSwimmingParameters*  parameters, ::GorillaLocomotion::Swimming::WaterVolume*  contactingWaterVolume, ::GlobalNamespace::WaterVolume_SurfaceQuery  waterSurface, ::by_ref<::UnityEngine::Vector3>  jumpVelocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"CheckWaterSurfaceJump", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GorillaLocomotion::Swimming::PlayerSwimmingParameters*>(), ::i2c::type_of<::GorillaLocomotion::Swimming::WaterVolume*>(), ::i2c::type_of<::GlobalNamespace::WaterVolume_SurfaceQuery>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, startingHandPosition, endingHandPosition, palmForwardDirection, handAvgVelocity, parameters, contactingWaterVolume, waterSurface, jumpVelocity);
}
inline bool GorillaLocomotion::GTPlayer::TryNormalize(::UnityEngine::Vector3  input, ::by_ref<::UnityEngine::Vector3>  normalized, ::by_ref<float_t>  magnitude, float_t  eps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"TryNormalize", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, input, normalized, magnitude, eps);
}
inline bool GorillaLocomotion::GTPlayer::TryNormalizeDown(::UnityEngine::Vector3  input, ::by_ref<::UnityEngine::Vector3>  normalized, ::by_ref<float_t>  magnitude, float_t  eps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"TryNormalizeDown", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, input, normalized, magnitude, eps);
}
inline float_t GorillaLocomotion::GTPlayer::FreezeTagSlidePercentage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"FreezeTagSlidePercentage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GorillaLocomotion::GTPlayer::OnCollisionStay(::UnityEngine::Collision*  collision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"OnCollisionStay", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collision);
}
inline void GorillaLocomotion::GTPlayer::DoLaunch(::UnityEngine::Vector3  velocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"DoLaunch", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, velocity);
}
inline void GorillaLocomotion::GTPlayer::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::GTPlayer::OnJoinedRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"OnJoinedRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::GTPlayer::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::GTPlayer::ForceRigidBodySync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"ForceRigidBodySync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::GTPlayer::ClearHandHolds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"ClearHandHolds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::GTPlayer::AddHandHold(::UnityEngine::Transform*  objectHeld, ::UnityEngine::Vector3  localPositionHeld, ::GlobalNamespace::GorillaGrabber*  grabber, bool  forLeftHand, bool  rotatePlayerWhenHeld, ::by_ref<::UnityEngine::Vector3>  grabbedVelocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"AddHandHold", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::GorillaGrabber*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, objectHeld, localPositionHeld, grabber, forLeftHand, rotatePlayerWhenHeld, grabbedVelocity);
}
inline void GorillaLocomotion::GTPlayer::RemoveHandHold(::GlobalNamespace::GorillaGrabber*  grabber, bool  forLeftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"RemoveHandHold", {}, {::i2c::type_of<::GlobalNamespace::GorillaGrabber*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabber, forLeftHand);
}
inline void GorillaLocomotion::GTPlayer::OnChangeActiveHandhold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"OnChangeActiveHandhold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::GTPlayer::FixedUpdate_HandHolds(float_t  timeDelta)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"FixedUpdate_HandHolds", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeDelta);
}
inline void GorillaLocomotion::GTPlayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaLocomotion::GTPlayer::_GetSlidePercentage_b__455_0(::GlobalNamespace::GTPlayer_MaterialData  matData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"<GetSlidePercentage>b__455_0", {}, {::i2c::type_of<::GlobalNamespace::GTPlayer_MaterialData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, matData);
}
inline bool GorillaLocomotion::GTPlayer::_GetSlidePercentage_b__455_1(::GlobalNamespace::GTPlayer_MaterialData  matData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"<GetSlidePercentage>b__455_1", {}, {::i2c::type_of<::GlobalNamespace::GTPlayer_MaterialData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, matData);
}
inline void GorillaLocomotion::GTPlayer::_BeginClimbing_g__SnapAxis_458_0(::by_ref<float_t>  val, float_t  maxDist)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer*>(),
                        {"<BeginClimbing>g__SnapAxis|458_0", {}, {::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, val, maxDist);
}
inline ::GorillaLocomotion::GTPlayer* GorillaLocomotion::GTPlayer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaLocomotion::GTPlayer*>());
}
// Ctor Parameters []
constexpr ::GorillaLocomotion::GTPlayer::GTPlayer()   {
}
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer__DelayedRemoveHoverboard_d__425._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer__DelayedRemoveHoverboard_d__425::*)(int32_t)>(&::GorillaLocomotion::GTPlayer__DelayedRemoveHoverboard_d__425::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5cdaa88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer__DelayedRemoveHoverboard_d__425*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer__DelayedRemoveHoverboard_d__425.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer__DelayedRemoveHoverboard_d__425::*)()>(&::GorillaLocomotion::GTPlayer__DelayedRemoveHoverboard_d__425::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cdaab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer__DelayedRemoveHoverboard_d__425*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer__DelayedRemoveHoverboard_d__425.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaLocomotion::GTPlayer__DelayedRemoveHoverboard_d__425::*)()>(&::GorillaLocomotion::GTPlayer__DelayedRemoveHoverboard_d__425::MoveNext)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5cdaab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer__DelayedRemoveHoverboard_d__425*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer__DelayedRemoveHoverboard_d__425.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaLocomotion::GTPlayer__DelayedRemoveHoverboard_d__425::*)()>(&::GorillaLocomotion::GTPlayer__DelayedRemoveHoverboard_d__425::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cdabc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer__DelayedRemoveHoverboard_d__425*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer__DelayedRemoveHoverboard_d__425.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayer__DelayedRemoveHoverboard_d__425::*)()>(&::GorillaLocomotion::GTPlayer__DelayedRemoveHoverboard_d__425::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5cdabc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer__DelayedRemoveHoverboard_d__425*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayer__DelayedRemoveHoverboard_d__425.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaLocomotion::GTPlayer__DelayedRemoveHoverboard_d__425::*)()>(&::GorillaLocomotion::GTPlayer__DelayedRemoveHoverboard_d__425::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cdac00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer__DelayedRemoveHoverboard_d__425*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaLocomotion::GTPlayer__DelayedRemoveHoverboard_d__425::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GorillaLocomotion::GTPlayer__DelayedRemoveHoverboard_d__425::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GorillaLocomotion::GTPlayer__DelayedRemoveHoverboard_d__425::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GorillaLocomotion::GTPlayer__DelayedRemoveHoverboard_d__425::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GorillaLocomotion::GTPlayer__DelayedRemoveHoverboard_d__425::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GorillaLocomotion::GTPlayer__DelayedRemoveHoverboard_d__425::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GorillaLocomotion::GTPlayer>& GorillaLocomotion::GTPlayer__DelayedRemoveHoverboard_d__425::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GorillaLocomotion::GTPlayer> const& GorillaLocomotion::GTPlayer__DelayedRemoveHoverboard_d__425::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GorillaLocomotion::GTPlayer__DelayedRemoveHoverboard_d__425::__cordl_internal_set___4__this(::UnityW<::GorillaLocomotion::GTPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GorillaLocomotion::GTPlayer__DelayedRemoveHoverboard_d__425::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer__DelayedRemoveHoverboard_d__425*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GorillaLocomotion::GTPlayer__DelayedRemoveHoverboard_d__425::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer__DelayedRemoveHoverboard_d__425*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaLocomotion::GTPlayer__DelayedRemoveHoverboard_d__425::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer__DelayedRemoveHoverboard_d__425*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GorillaLocomotion::GTPlayer__DelayedRemoveHoverboard_d__425::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer__DelayedRemoveHoverboard_d__425*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GorillaLocomotion::GTPlayer__DelayedRemoveHoverboard_d__425::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer__DelayedRemoveHoverboard_d__425*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GorillaLocomotion::GTPlayer__DelayedRemoveHoverboard_d__425::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayer__DelayedRemoveHoverboard_d__425*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GorillaLocomotion::GTPlayer__DelayedRemoveHoverboard_d__425* GorillaLocomotion::GTPlayer__DelayedRemoveHoverboard_d__425::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaLocomotion::GTPlayer__DelayedRemoveHoverboard_d__425*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GorillaLocomotion::GTPlayer__DelayedRemoveHoverboard_d__425::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GorillaLocomotion::GTPlayer__DelayedRemoveHoverboard_d__425::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GorillaLocomotion::GTPlayer__DelayedRemoveHoverboard_d__425::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GorillaLocomotion::GTPlayer__DelayedRemoveHoverboard_d__425::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GorillaLocomotion::GTPlayer__DelayedRemoveHoverboard_d__425::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GorillaLocomotion::GTPlayer__DelayedRemoveHoverboard_d__425::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaLocomotion::GTPlayer__DelayedRemoveHoverboard_d__425::GTPlayer__DelayedRemoveHoverboard_d__425()   {
}
