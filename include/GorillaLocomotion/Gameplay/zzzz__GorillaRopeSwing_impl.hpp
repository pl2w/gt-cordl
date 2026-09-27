#pragma once
// IWYU pragma private; include "GorillaLocomotion/Gameplay/GorillaRopeSwing.hpp"
#include "UnityEngine/XR/zzzz__XRNode_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit_impl.hpp"
#include "UnityEngine/zzzz__Transform_impl.hpp"
#include "GorillaLocomotion/Gameplay/zzzz__GorillaRopeSwing_def.hpp"
#include "GlobalNamespace/zzzz__BuilderPiece_def.hpp"
#include "GlobalNamespace/zzzz__IBuilderPieceComponent_def.hpp"
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_def.hpp"
#include "GorillaLocomotion/Climbing/zzzz__GorillaVelocityTracker_def.hpp"
#include "GorillaLocomotion/Gameplay/zzzz__GorillaRopeSwingSettings_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::GorillaRopeSwing.EdRecalculateId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::GorillaRopeSwing::*)()>(&::GorillaLocomotion::Gameplay::GorillaRopeSwing::EdRecalculateId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ce94c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(),
                        {"EdRecalculateId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::GorillaRopeSwing.get_isIdle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaLocomotion::Gameplay::GorillaRopeSwing::*)()>(&::GorillaLocomotion::Gameplay::GorillaRopeSwing::get_isIdle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ce9824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(),
                        {"get_isIdle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::GorillaRopeSwing.set_isIdle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::GorillaRopeSwing::*)(bool)>(&::GorillaLocomotion::Gameplay::GorillaRopeSwing::set_isIdle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ce982c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(),
                        {"set_isIdle", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::GorillaRopeSwing.get_isFullyIdle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaLocomotion::Gameplay::GorillaRopeSwing::*)()>(&::GorillaLocomotion::Gameplay::GorillaRopeSwing::get_isFullyIdle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ce9834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(),
                        {"get_isFullyIdle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::GorillaRopeSwing.set_isFullyIdle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::GorillaRopeSwing::*)(bool)>(&::GorillaLocomotion::Gameplay::GorillaRopeSwing::set_isFullyIdle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ce983c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(),
                        {"set_isFullyIdle", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::GorillaRopeSwing.get_SupportsMovingAtRuntime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaLocomotion::Gameplay::GorillaRopeSwing::*)()>(&::GorillaLocomotion::Gameplay::GorillaRopeSwing::get_SupportsMovingAtRuntime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ce9844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(),
                        {"get_SupportsMovingAtRuntime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::GorillaRopeSwing.get_hasPlayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaLocomotion::Gameplay::GorillaRopeSwing::*)()>(&::GorillaLocomotion::Gameplay::GorillaRopeSwing::get_hasPlayers)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5ce984c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(),
                        {"get_hasPlayers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::GorillaRopeSwing.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::GorillaRopeSwing::*)()>(&::GorillaLocomotion::Gameplay::GorillaRopeSwing::Awake)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5ce98b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(),
                    {::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::GorillaRopeSwing.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::GorillaRopeSwing::*)()>(&::GorillaLocomotion::Gameplay::GorillaRopeSwing::Start)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5ce9b54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(),
                    {::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::GorillaRopeSwing.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::GorillaRopeSwing::*)()>(&::GorillaLocomotion::Gameplay::GorillaRopeSwing::OnDestroy)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5ce9be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::GorillaRopeSwing.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::GorillaRopeSwing::*)()>(&::GorillaLocomotion::Gameplay::GorillaRopeSwing::OnEnable)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5ce9ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(),
                    {::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::GorillaRopeSwing.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::GorillaRopeSwing::*)()>(&::GorillaLocomotion::Gameplay::GorillaRopeSwing::OnDisable)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5cea060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::GorillaRopeSwing.CalculateId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::GorillaRopeSwing::*)(bool)>(&::GorillaLocomotion::Gameplay::GorillaRopeSwing::CalculateId)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x5ce94d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(),
                        {"CalculateId", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::GorillaRopeSwing.InvokeUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::GorillaRopeSwing::*)()>(&::GorillaLocomotion::Gameplay::GorillaRopeSwing::InvokeUpdate)> {
  constexpr static std::size_t size = 0x70c;
  constexpr static std::size_t addrs = 0x5cea2cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(),
                        {"InvokeUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::GorillaRopeSwing.SetIsIdle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::GorillaRopeSwing::*)(bool, bool)>(&::GorillaLocomotion::Gameplay::GorillaRopeSwing::SetIsIdle)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x5ce99a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(),
                        {"SetIsIdle", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::GorillaRopeSwing.GetBone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GorillaLocomotion::Gameplay::GorillaRopeSwing::*)(int32_t)>(&::GorillaLocomotion::Gameplay::GorillaRopeSwing::GetBone)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5ceacf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(),
                        {"GetBone", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::GorillaRopeSwing.GetBoneIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaLocomotion::Gameplay::GorillaRopeSwing::*)(::UnityEngine::Transform*)>(&::GorillaLocomotion::Gameplay::GorillaRopeSwing::GetBoneIndex)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5ceb1cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(),
                        {"GetBoneIndex", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::GorillaRopeSwing.AttachLocalPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::GorillaRopeSwing::*)(::UnityEngine::XR::XRNode, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GorillaLocomotion::Gameplay::GorillaRopeSwing::AttachLocalPlayer)> {
  constexpr static std::size_t size = 0x5e4;
  constexpr static std::size_t addrs = 0x5ceb280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(),
                        {"AttachLocalPlayer", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::GorillaRopeSwing.DetachLocalPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::GorillaRopeSwing::*)()>(&::GorillaLocomotion::Gameplay::GorillaRopeSwing::DetachLocalPlayer)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5cebc94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(),
                        {"DetachLocalPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::GorillaRopeSwing.ToggleVelocityTracker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::GorillaRopeSwing::*)(bool, int32_t, ::UnityEngine::Vector3)>(&::GorillaLocomotion::Gameplay::GorillaRopeSwing::ToggleVelocityTracker)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5ceb0d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(),
                        {"ToggleVelocityTracker", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::GorillaRopeSwing.RefreshAllBonesMass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::GorillaRopeSwing::*)()>(&::GorillaLocomotion::Gameplay::GorillaRopeSwing::RefreshAllBonesMass)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5ceb864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(),
                        {"RefreshAllBonesMass", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::GorillaRopeSwing.AttachRemotePlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaLocomotion::Gameplay::GorillaRopeSwing::*)(int32_t, int32_t, ::UnityEngine::Transform*, ::UnityEngine::Vector3)>(&::GorillaLocomotion::Gameplay::GorillaRopeSwing::AttachRemotePlayer)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x5cec22c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(),
                        {"AttachRemotePlayer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::GorillaRopeSwing.DetachRemotePlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::GorillaRopeSwing::*)(int32_t)>(&::GorillaLocomotion::Gameplay::GorillaRopeSwing::DetachRemotePlayer)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5cec410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(),
                        {"DetachRemotePlayer", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::GorillaRopeSwing.SetVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::GorillaRopeSwing::*)(int32_t, ::UnityEngine::Vector3, bool, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GorillaLocomotion::Gameplay::GorillaRopeSwing::SetVelocity)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x5cead70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(),
                        {"SetVelocity", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::GorillaRopeSwing.OnPieceCreate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::GorillaRopeSwing::*)(int32_t, int32_t)>(&::GorillaLocomotion::Gameplay::GorillaRopeSwing::OnPieceCreate)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x5cec878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(),
                        {"OnPieceCreate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::GorillaRopeSwing.OnPieceDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::GorillaRopeSwing::*)()>(&::GorillaLocomotion::Gameplay::GorillaRopeSwing::OnPieceDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cecac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(),
                        {"OnPieceDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::GorillaRopeSwing.OnPiecePlacementDeserialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::GorillaRopeSwing::*)()>(&::GorillaLocomotion::Gameplay::GorillaRopeSwing::OnPiecePlacementDeserialized)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5cecacc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(),
                        {"OnPiecePlacementDeserialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::GorillaRopeSwing.OnPieceActivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::GorillaRopeSwing::*)()>(&::GorillaLocomotion::Gameplay::GorillaRopeSwing::OnPieceActivate)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5cecd20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(),
                        {"OnPieceActivate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::GorillaRopeSwing.IsAttachedToMovingPiece
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaLocomotion::Gameplay::GorillaRopeSwing::*)()>(&::GorillaLocomotion::Gameplay::GorillaRopeSwing::IsAttachedToMovingPiece)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5cecc50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(),
                        {"IsAttachedToMovingPiece", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::GorillaRopeSwing.OnPieceDeactivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::GorillaRopeSwing::*)()>(&::GorillaLocomotion::Gameplay::GorillaRopeSwing::OnPieceDeactivate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cecd98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(),
                        {"OnPieceDeactivate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::GorillaRopeSwing._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::GorillaRopeSwing::*)()>(&::GorillaLocomotion::Gameplay::GorillaRopeSwing::_ctor)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5cecda0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_get_ropeId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ropeId;
}
constexpr int32_t const& GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_get_ropeId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ropeId;
}
constexpr void GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_set_ropeId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ropeId = value;
}
constexpr ::StringW& GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_get_staticId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___staticId;
}
constexpr ::StringW const& GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_get_staticId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___staticId;
}
constexpr void GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_set_staticId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___staticId = value;
}
constexpr bool& GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_get_useStaticId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useStaticId;
}
constexpr bool const& GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_get_useStaticId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useStaticId;
}
constexpr void GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_set_useStaticId(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useStaticId = value;
}
constexpr float_t& GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_get_ropeBitGenOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ropeBitGenOffset;
}
constexpr float_t const& GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_get_ropeBitGenOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ropeBitGenOffset;
}
constexpr void GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_set_ropeBitGenOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ropeBitGenOffset = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_get_prefabRopeBit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefabRopeBit;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_get_prefabRopeBit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefabRopeBit;
}
constexpr void GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_set_prefabRopeBit(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prefabRopeBit = value;
}
constexpr bool& GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_get_supportMovingAtRuntime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___supportMovingAtRuntime;
}
constexpr bool const& GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_get_supportMovingAtRuntime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___supportMovingAtRuntime;
}
constexpr void GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_set_supportMovingAtRuntime(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___supportMovingAtRuntime = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_get_nodes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodes;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_get_nodes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodes;
}
constexpr void GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_set_nodes(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nodes = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*& GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_get_remotePlayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remotePlayers;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* const& GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_get_remotePlayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remotePlayers;
}
constexpr void GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_set_remotePlayers(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___remotePlayers = value;
}
constexpr float_t& GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_get_lastGrabTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastGrabTime;
}
constexpr float_t const& GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_get_lastGrabTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastGrabTime;
}
constexpr void GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_set_lastGrabTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastGrabTime = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_get_ropeCreakSFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ropeCreakSFX;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_get_ropeCreakSFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ropeCreakSFX;
}
constexpr void GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_set_ropeCreakSFX(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ropeCreakSFX = value;
}
constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker>& GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_get_velocityTracker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityTracker;
}
constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker> const& GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_get_velocityTracker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityTracker;
}
constexpr void GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_set_velocityTracker(::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocityTracker = value;
}
constexpr bool& GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_get_localPlayerOn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localPlayerOn;
}
constexpr bool const& GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_get_localPlayerOn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localPlayerOn;
}
constexpr void GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_set_localPlayerOn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localPlayerOn = value;
}
constexpr int32_t& GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_get_localPlayerBoneIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localPlayerBoneIndex;
}
constexpr int32_t const& GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_get_localPlayerBoneIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localPlayerBoneIndex;
}
constexpr void GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_set_localPlayerBoneIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localPlayerBoneIndex = value;
}
constexpr ::UnityEngine::XR::XRNode& GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_get_localPlayerXRNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localPlayerXRNode;
}
constexpr ::UnityEngine::XR::XRNode const& GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_get_localPlayerXRNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localPlayerXRNode;
}
constexpr void GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_set_localPlayerXRNode(::UnityEngine::XR::XRNode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localPlayerXRNode = value;
}
constexpr bool& GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_get__isIdle_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isIdle_k__BackingField;
}
constexpr bool const& GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_get__isIdle_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isIdle_k__BackingField;
}
constexpr void GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_set__isIdle_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isIdle_k__BackingField = value;
}
constexpr bool& GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_get__isFullyIdle_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isFullyIdle_k__BackingField;
}
constexpr bool const& GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_get__isFullyIdle_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isFullyIdle_k__BackingField;
}
constexpr void GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_set__isFullyIdle_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isFullyIdle_k__BackingField = value;
}
constexpr float_t& GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_get_potentialIdleTimer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___potentialIdleTimer;
}
constexpr float_t const& GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_get_potentialIdleTimer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___potentialIdleTimer;
}
constexpr void GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_set_potentialIdleTimer(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___potentialIdleTimer = value;
}
constexpr int32_t& GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_get_ropeLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ropeLength;
}
constexpr int32_t const& GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_get_ropeLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ropeLength;
}
constexpr void GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_set_ropeLength(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ropeLength = value;
}
constexpr ::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwingSettings>& GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_get_settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settings;
}
constexpr ::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwingSettings> const& GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_get_settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settings;
}
constexpr void GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_set_settings(::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwingSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___settings = value;
}
constexpr bool& GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_get_hasMonkeBlockParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasMonkeBlockParent;
}
constexpr bool const& GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_get_hasMonkeBlockParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasMonkeBlockParent;
}
constexpr void GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_set_hasMonkeBlockParent(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasMonkeBlockParent = value;
}
constexpr ::UnityW<::GlobalNamespace::BuilderPiece>& GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_get_monkeBlockParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___monkeBlockParent;
}
constexpr ::UnityW<::GlobalNamespace::BuilderPiece> const& GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_get_monkeBlockParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___monkeBlockParent;
}
constexpr void GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_set_monkeBlockParent(::UnityW<::GlobalNamespace::BuilderPiece>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___monkeBlockParent = value;
}
constexpr int32_t& GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_get_ropeDataStartIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ropeDataStartIndex;
}
constexpr int32_t const& GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_get_ropeDataStartIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ropeDataStartIndex;
}
constexpr void GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_set_ropeDataStartIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ropeDataStartIndex = value;
}
constexpr int32_t& GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_get_ropeDataIndexOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ropeDataIndexOffset;
}
constexpr int32_t const& GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_get_ropeDataIndexOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ropeDataIndexOffset;
}
constexpr void GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_set_ropeDataIndexOffset(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ropeDataIndexOffset = value;
}
constexpr ::UnityEngine::LayerMask& GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_get_wallLayerMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wallLayerMask;
}
constexpr ::UnityEngine::LayerMask const& GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_get_wallLayerMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wallLayerMask;
}
constexpr void GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_set_wallLayerMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wallLayerMask = value;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit>& GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_get_nodeHits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodeHits;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit> const& GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_get_nodeHits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodeHits;
}
constexpr void GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_set_nodeHits(::ArrayW<::UnityEngine::RaycastHit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nodeHits = value;
}
constexpr float_t& GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_get_scaleFactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleFactor;
}
constexpr float_t const& GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_get_scaleFactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleFactor;
}
constexpr void GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_set_scaleFactor(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scaleFactor = value;
}
constexpr bool& GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_get_started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___started;
}
constexpr bool const& GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_get_started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___started;
}
constexpr void GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_set_started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___started = value;
}
constexpr int32_t& GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_get_lastNodeCheckIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastNodeCheckIndex;
}
constexpr int32_t const& GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_get_lastNodeCheckIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastNodeCheckIndex;
}
constexpr void GorillaLocomotion::Gameplay::GorillaRopeSwing::__cordl_internal_set_lastNodeCheckIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastNodeCheckIndex = value;
}
inline void GorillaLocomotion::Gameplay::GorillaRopeSwing::EdRecalculateId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(),
                        {"EdRecalculateId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaLocomotion::Gameplay::GorillaRopeSwing::get_isIdle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(),
                        {"get_isIdle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaLocomotion::Gameplay::GorillaRopeSwing::set_isIdle(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(),
                        {"set_isIdle", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GorillaLocomotion::Gameplay::GorillaRopeSwing::get_isFullyIdle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(),
                        {"get_isFullyIdle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaLocomotion::Gameplay::GorillaRopeSwing::set_isFullyIdle(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(),
                        {"set_isFullyIdle", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GorillaLocomotion::Gameplay::GorillaRopeSwing::get_SupportsMovingAtRuntime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(),
                        {"get_SupportsMovingAtRuntime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaLocomotion::Gameplay::GorillaRopeSwing::get_hasPlayers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(),
                        {"get_hasPlayers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaLocomotion::Gameplay::GorillaRopeSwing::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::Gameplay::GorillaRopeSwing::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::Gameplay::GorillaRopeSwing::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::Gameplay::GorillaRopeSwing::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::Gameplay::GorillaRopeSwing::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::Gameplay::GorillaRopeSwing::CalculateId(bool  force)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(),
                        {"CalculateId", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, force);
}
inline void GorillaLocomotion::Gameplay::GorillaRopeSwing::InvokeUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(),
                        {"InvokeUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::Gameplay::GorillaRopeSwing::SetIsIdle(bool  idle, bool  resetPos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(),
                        {"SetIsIdle", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, idle, resetPos);
}
inline ::UnityW<::UnityEngine::Transform> GorillaLocomotion::Gameplay::GorillaRopeSwing::GetBone(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(),
                        {"GetBone", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method, index);
}
inline int32_t GorillaLocomotion::Gameplay::GorillaRopeSwing::GetBoneIndex(::UnityEngine::Transform*  r)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(),
                        {"GetBoneIndex", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, r);
}
inline void GorillaLocomotion::Gameplay::GorillaRopeSwing::AttachLocalPlayer(::UnityEngine::XR::XRNode  xrNode, ::UnityEngine::Transform*  grabbedBone, ::UnityEngine::Vector3  offset, ::UnityEngine::Vector3  velocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(),
                        {"AttachLocalPlayer", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xrNode, grabbedBone, offset, velocity);
}
inline void GorillaLocomotion::Gameplay::GorillaRopeSwing::DetachLocalPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(),
                        {"DetachLocalPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::Gameplay::GorillaRopeSwing::ToggleVelocityTracker(bool  enable, int32_t  boneIndex, ::UnityEngine::Vector3  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(),
                        {"ToggleVelocityTracker", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enable, boneIndex, offset);
}
inline void GorillaLocomotion::Gameplay::GorillaRopeSwing::RefreshAllBonesMass()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(),
                        {"RefreshAllBonesMass", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaLocomotion::Gameplay::GorillaRopeSwing::AttachRemotePlayer(int32_t  playerId, int32_t  boneIndex, ::UnityEngine::Transform*  offsetTransform, ::UnityEngine::Vector3  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(),
                        {"AttachRemotePlayer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, playerId, boneIndex, offsetTransform, offset);
}
inline void GorillaLocomotion::Gameplay::GorillaRopeSwing::DetachRemotePlayer(int32_t  playerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(),
                        {"DetachRemotePlayer", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId);
}
inline void GorillaLocomotion::Gameplay::GorillaRopeSwing::SetVelocity(int32_t  boneIndex, ::UnityEngine::Vector3  velocity, bool  wholeRope, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(),
                        {"SetVelocity", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, boneIndex, velocity, wholeRope, info);
}
inline void GorillaLocomotion::Gameplay::GorillaRopeSwing::OnPieceCreate(int32_t  pieceType, int32_t  pieceId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(),
                        {"OnPieceCreate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pieceType, pieceId);
}
inline void GorillaLocomotion::Gameplay::GorillaRopeSwing::OnPieceDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(),
                        {"OnPieceDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::Gameplay::GorillaRopeSwing::OnPiecePlacementDeserialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(),
                        {"OnPiecePlacementDeserialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::Gameplay::GorillaRopeSwing::OnPieceActivate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(),
                        {"OnPieceActivate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaLocomotion::Gameplay::GorillaRopeSwing::IsAttachedToMovingPiece()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(),
                        {"IsAttachedToMovingPiece", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaLocomotion::Gameplay::GorillaRopeSwing::OnPieceDeactivate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(),
                        {"OnPieceDeactivate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::Gameplay::GorillaRopeSwing::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaLocomotion::Gameplay::GorillaRopeSwing* GorillaLocomotion::Gameplay::GorillaRopeSwing::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>());
}
/// @brief Convert operator to "::GlobalNamespace::IBuilderPieceComponent"
constexpr  GorillaLocomotion::Gameplay::GorillaRopeSwing::operator ::GlobalNamespace::IBuilderPieceComponent*() noexcept {
return static_cast<::GlobalNamespace::IBuilderPieceComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBuilderPieceComponent"
constexpr ::GlobalNamespace::IBuilderPieceComponent* GorillaLocomotion::Gameplay::GorillaRopeSwing::i___GlobalNamespace__IBuilderPieceComponent() noexcept {
return static_cast<::GlobalNamespace::IBuilderPieceComponent*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaLocomotion::Gameplay::GorillaRopeSwing::GorillaRopeSwing()   {
}
