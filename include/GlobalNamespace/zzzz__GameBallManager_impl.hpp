#pragma once
// IWYU pragma private; include "GlobalNamespace/GameBallManager.hpp"
#include "GlobalNamespace/zzzz__CallLimiter_impl.hpp"
#include "GlobalNamespace/zzzz__NetworkComponent_impl.hpp"
#include "GlobalNamespace/zzzz__GameBallManager_def.hpp"
#include "GlobalNamespace/zzzz__GameBallData_def.hpp"
#include "GlobalNamespace/zzzz__GameBallId_def.hpp"
#include "GlobalNamespace/zzzz__GameBallManager_RPC_def.hpp"
#include "GlobalNamespace/zzzz__GameBall_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "Photon/Pun/zzzz__PhotonView_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameBallManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameBallManager::*)()>(&::GlobalNamespace::GameBallManager::Awake)> {
  constexpr static std::size_t size = 0x454;
  constexpr static std::size_t addrs = 0x57a15d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameBallManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GameBallManager*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallManager.ValidateCallLimits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameBallManager::*)(::GlobalNamespace::GameBallManager_RPC, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GameBallManager::ValidateCallLimits)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x57a1a28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallManager*>(),
                        {"ValidateCallLimits", {}, {::i2c::type_of<::GlobalNamespace::GameBallManager_RPC>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallManager.ReportRPCCall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameBallManager::*)(::GlobalNamespace::GameBallManager_RPC, ::Photon::Pun::PhotonMessageInfo, ::StringW)>(&::GlobalNamespace::GameBallManager::ReportRPCCall)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x57a1af8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallManager*>(),
                        {"ReportRPCCall", {}, {::i2c::type_of<::GlobalNamespace::GameBallManager_RPC>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallManager.AddGameBall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameBallId (::GlobalNamespace::GameBallManager::*)(::GlobalNamespace::GameBall*)>(&::GlobalNamespace::GameBallManager::AddGameBall)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x57a1be8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallManager*>(),
                        {"AddGameBall", {}, {::i2c::type_of<::GlobalNamespace::GameBall*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallManager.GetGameBall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GameBall> (::GlobalNamespace::GameBallManager::*)(::GlobalNamespace::GameBallId)>(&::GlobalNamespace::GameBallManager::GetGameBall)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x57a1d4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallManager*>(),
                        {"GetGameBall", {}, {::i2c::type_of<::GlobalNamespace::GameBallId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallManager.TryGrabLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameBallId (::GlobalNamespace::GameBallManager::*)(::UnityEngine::Vector3, int32_t)>(&::GlobalNamespace::GameBallManager::TryGrabLocal)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x57a1dec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallManager*>(),
                        {"TryGrabLocal", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallManager.RequestGrabBall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameBallManager::*)(::GlobalNamespace::GameBallId, bool, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::GlobalNamespace::GameBallManager::RequestGrabBall)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x57a2010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallManager*>(),
                        {"RequestGrabBall", {}, {::i2c::type_of<::GlobalNamespace::GameBallId>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallManager.RequestGrabBallRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameBallManager::*)(int32_t, bool, int64_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GameBallManager::RequestGrabBallRPC)> {
  constexpr static std::size_t size = 0x6ec;
  constexpr static std::size_t addrs = 0x57a2854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallManager*>(),
                        {"RequestGrabBallRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallManager.GrabBallRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameBallManager::*)(int32_t, bool, int64_t, ::Photon::Realtime::Player*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GameBallManager::GrabBallRPC)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x57a2f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallManager*>(),
                        {"GrabBallRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallManager.GrabBall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameBallManager::*)(::GlobalNamespace::GameBallId, bool, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GameBallManager::GrabBall)> {
  constexpr static std::size_t size = 0x5b0;
  constexpr static std::size_t addrs = 0x57a22a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallManager*>(),
                        {"GrabBall", {}, {::i2c::type_of<::GlobalNamespace::GameBallId>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallManager.RequestThrowBall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameBallManager::*)(::GlobalNamespace::GameBallId, bool, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::GameBallManager::RequestThrowBall)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0x57a3390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallManager*>(),
                        {"RequestThrowBall", {}, {::i2c::type_of<::GlobalNamespace::GameBallId>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallManager.RequestThrowBallRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameBallManager::*)(int32_t, bool, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GameBallManager::RequestThrowBallRPC)> {
  constexpr static std::size_t size = 0x77c;
  constexpr static std::size_t addrs = 0x57a3c68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallManager*>(),
                        {"RequestThrowBallRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallManager.ThrowBallRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameBallManager::*)(int32_t, bool, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Photon::Realtime::Player*, double_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GameBallManager::ThrowBallRPC)> {
  constexpr static std::size_t size = 0x4d4;
  constexpr static std::size_t addrs = 0x57a4784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallManager*>(),
                        {"ThrowBallRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallManager.ValidateThrowBallParams
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameBallManager::*)(int32_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::GameBallManager::ValidateThrowBallParams)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x57a43e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallManager*>(),
                        {"ValidateThrowBallParams", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallManager.ThrowBall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameBallManager::*)(::GlobalNamespace::GameBallId, bool, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GameBallManager::ThrowBall)> {
  constexpr static std::size_t size = 0x4bc;
  constexpr static std::size_t addrs = 0x57a37ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallManager*>(),
                        {"ThrowBall", {}, {::i2c::type_of<::GlobalNamespace::GameBallId>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallManager.RequestLaunchBall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameBallManager::*)(::GlobalNamespace::GameBallId, ::UnityEngine::Vector3)>(&::GlobalNamespace::GameBallManager::RequestLaunchBall)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x57a4c58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallManager*>(),
                        {"RequestLaunchBall", {}, {::i2c::type_of<::GlobalNamespace::GameBallId>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallManager.RequestLaunchBallRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameBallManager::*)(int32_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GameBallManager::RequestLaunchBallRPC)> {
  constexpr static std::size_t size = 0x524;
  constexpr static std::size_t addrs = 0x57a5260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallManager*>(),
                        {"RequestLaunchBallRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallManager.LaunchBallRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameBallManager::*)(int32_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, double_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GameBallManager::LaunchBallRPC)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x57a5784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallManager*>(),
                        {"LaunchBallRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallManager.LaunchBall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameBallManager::*)(::GlobalNamespace::GameBallId, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3)>(&::GlobalNamespace::GameBallManager::LaunchBall)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x57a4fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallManager*>(),
                        {"LaunchBall", {}, {::i2c::type_of<::GlobalNamespace::GameBallId>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallManager.RequestTeleportBall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameBallManager::*)(::GlobalNamespace::GameBallId, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::GameBallManager::RequestTeleportBall)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x57a5b0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallManager*>(),
                        {"RequestTeleportBall", {}, {::i2c::type_of<::GlobalNamespace::GameBallId>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallManager.TeleportBallRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameBallManager::*)(int32_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GameBallManager::TeleportBallRPC)> {
  constexpr static std::size_t size = 0x4e8;
  constexpr static std::size_t addrs = 0x57a5ddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallManager*>(),
                        {"TeleportBallRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallManager.TeleportBall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameBallManager::*)(::GlobalNamespace::GameBallId, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::GameBallManager::TeleportBall)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x57a62c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallManager*>(),
                        {"TeleportBall", {}, {::i2c::type_of<::GlobalNamespace::GameBallId>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallManager.RequestSetBallPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameBallManager::*)(::GlobalNamespace::GameBallId)>(&::GlobalNamespace::GameBallManager::RequestSetBallPosition)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x57a6508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallManager*>(),
                        {"RequestSetBallPosition", {}, {::i2c::type_of<::GlobalNamespace::GameBallId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallManager.RequestSetBallPositionRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameBallManager::*)(int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GameBallManager::RequestSetBallPositionRPC)> {
  constexpr static std::size_t size = 0x4ac;
  constexpr static std::size_t addrs = 0x57a66bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallManager*>(),
                        {"RequestSetBallPositionRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallManager.WriteDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameBallManager::*)()>(&::GlobalNamespace::GameBallManager::WriteDataFusion)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57a6b68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameBallManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GameBallManager*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallManager.ReadDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameBallManager::*)()>(&::GlobalNamespace::GameBallManager::ReadDataFusion)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57a6b6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameBallManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GameBallManager*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallManager.WriteDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameBallManager::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GameBallManager::WriteDataPUN)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57a6b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameBallManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GameBallManager*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallManager.ReadDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameBallManager::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GameBallManager::ReadDataPUN)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57a6b74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameBallManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GameBallManager*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameBallManager::*)()>(&::GlobalNamespace::GameBallManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57a6b78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallManager.CopyBackingFieldsToState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameBallManager::*)(bool)>(&::GlobalNamespace::GameBallManager::CopyBackingFieldsToState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57a6b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameBallManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GameBallManager*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallManager.CopyStateToBackingFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameBallManager::*)()>(&::GlobalNamespace::GameBallManager::CopyStateToBackingFields)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x57a6b88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameBallManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GameBallManager*>(), 24}
                ));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Photon::Pun::PhotonView>& GlobalNamespace::GameBallManager::__cordl_internal_get_photonView()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___photonView;
}
constexpr ::UnityW<::Photon::Pun::PhotonView> const& GlobalNamespace::GameBallManager::__cordl_internal_get_photonView() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___photonView;
}
constexpr void GlobalNamespace::GameBallManager::__cordl_internal_set_photonView(::UnityW<::Photon::Pun::PhotonView>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___photonView = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameBall>>*& GlobalNamespace::GameBallManager::__cordl_internal_get_gameBalls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameBalls;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameBall>>* const& GlobalNamespace::GameBallManager::__cordl_internal_get_gameBalls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameBalls;
}
constexpr void GlobalNamespace::GameBallManager::__cordl_internal_set_gameBalls(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameBall>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameBalls = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameBallData>*& GlobalNamespace::GameBallManager::__cordl_internal_get_gameBallData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameBallData;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameBallData>* const& GlobalNamespace::GameBallManager::__cordl_internal_get_gameBallData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameBallData;
}
constexpr void GlobalNamespace::GameBallManager::__cordl_internal_set_gameBallData(::System::Collections::Generic::List_1<::GlobalNamespace::GameBallData>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameBallData = value;
}
constexpr ::ArrayW<::GlobalNamespace::CallLimiter*>& GlobalNamespace::GameBallManager::__cordl_internal_get__callLimiters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____callLimiters;
}
constexpr ::ArrayW<::GlobalNamespace::CallLimiter*> const& GlobalNamespace::GameBallManager::__cordl_internal_get__callLimiters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____callLimiters;
}
constexpr void GlobalNamespace::GameBallManager::__cordl_internal_set__callLimiters(::ArrayW<::GlobalNamespace::CallLimiter*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____callLimiters = value;
}
inline void GlobalNamespace::GameBallManager::setStaticF_Instance(::UnityW<::GlobalNamespace::GameBallManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::GameBallManager>, "Instance", ::GlobalNamespace::GameBallManager*>(std::forward<::UnityW<::GlobalNamespace::GameBallManager>>(value));
}
inline ::UnityW<::GlobalNamespace::GameBallManager> GlobalNamespace::GameBallManager::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::GameBallManager>, "Instance", ::GlobalNamespace::GameBallManager*>();
}
inline void GlobalNamespace::GameBallManager::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameBallManager*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GameBallManager::ValidateCallLimits(::GlobalNamespace::GameBallManager_RPC  rpcCall, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallManager*>(),
                        {"ValidateCallLimits", {}, {::i2c::type_of<::GlobalNamespace::GameBallManager_RPC>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, rpcCall, info);
}
inline void GlobalNamespace::GameBallManager::ReportRPCCall(::GlobalNamespace::GameBallManager_RPC  rpcCall, ::Photon::Pun::PhotonMessageInfo  info, ::StringW  susReason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallManager*>(),
                        {"ReportRPCCall", {}, {::i2c::type_of<::GlobalNamespace::GameBallManager_RPC>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rpcCall, info, susReason);
}
inline ::GlobalNamespace::GameBallId GlobalNamespace::GameBallManager::AddGameBall(::GlobalNamespace::GameBall*  gameBall)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallManager*>(),
                        {"AddGameBall", {}, {::i2c::type_of<::GlobalNamespace::GameBall*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameBallId>(this, ___internal_method, gameBall);
}
inline ::UnityW<::GlobalNamespace::GameBall> GlobalNamespace::GameBallManager::GetGameBall(::GlobalNamespace::GameBallId  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallManager*>(),
                        {"GetGameBall", {}, {::i2c::type_of<::GlobalNamespace::GameBallId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GameBall>>(this, ___internal_method, id);
}
inline ::GlobalNamespace::GameBallId GlobalNamespace::GameBallManager::TryGrabLocal(::UnityEngine::Vector3  handPosition, int32_t  teamId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallManager*>(),
                        {"TryGrabLocal", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameBallId>(this, ___internal_method, handPosition, teamId);
}
inline void GlobalNamespace::GameBallManager::RequestGrabBall(::GlobalNamespace::GameBallId  ballId, bool  isLeftHand, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallManager*>(),
                        {"RequestGrabBall", {}, {::i2c::type_of<::GlobalNamespace::GameBallId>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ballId, isLeftHand, localPosition, localRotation);
}
inline void GlobalNamespace::GameBallManager::RequestGrabBallRPC(int32_t  gameBallIndex, bool  isLeftHand, int64_t  packedPosRot, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallManager*>(),
                        {"RequestGrabBallRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameBallIndex, isLeftHand, packedPosRot, info);
}
inline void GlobalNamespace::GameBallManager::GrabBallRPC(int32_t  gameBallIndex, bool  isLeftHand, int64_t  packedPosRot, ::Photon::Realtime::Player*  grabbedBy, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallManager*>(),
                        {"GrabBallRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameBallIndex, isLeftHand, packedPosRot, grabbedBy, info);
}
inline void GlobalNamespace::GameBallManager::GrabBall(::GlobalNamespace::GameBallId  gameBallId, bool  isLeftHand, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation, ::GlobalNamespace::NetPlayer*  grabbedByPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallManager*>(),
                        {"GrabBall", {}, {::i2c::type_of<::GlobalNamespace::GameBallId>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameBallId, isLeftHand, localPosition, localRotation, grabbedByPlayer);
}
inline void GlobalNamespace::GameBallManager::RequestThrowBall(::GlobalNamespace::GameBallId  ballId, bool  isLeftHand, ::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angVelocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallManager*>(),
                        {"RequestThrowBall", {}, {::i2c::type_of<::GlobalNamespace::GameBallId>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ballId, isLeftHand, velocity, angVelocity);
}
inline void GlobalNamespace::GameBallManager::RequestThrowBallRPC(int32_t  gameBallIndex, bool  isLeftHand, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angVelocity, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallManager*>(),
                        {"RequestThrowBallRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameBallIndex, isLeftHand, position, rotation, velocity, angVelocity, info);
}
inline void GlobalNamespace::GameBallManager::ThrowBallRPC(int32_t  gameBallIndex, bool  isLeftHand, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angVelocity, ::Photon::Realtime::Player*  thrownBy, double_t  throwTime, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallManager*>(),
                        {"ThrowBallRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameBallIndex, isLeftHand, position, rotation, velocity, angVelocity, thrownBy, throwTime, info);
}
inline bool GlobalNamespace::GameBallManager::ValidateThrowBallParams(int32_t  gameBallIndex, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angVelocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallManager*>(),
                        {"ValidateThrowBallParams", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gameBallIndex, position, rotation, velocity, angVelocity);
}
inline void GlobalNamespace::GameBallManager::ThrowBall(::GlobalNamespace::GameBallId  gameBallId, bool  isLeftHand, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angVelocity, ::GlobalNamespace::NetPlayer*  thrownByPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallManager*>(),
                        {"ThrowBall", {}, {::i2c::type_of<::GlobalNamespace::GameBallId>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameBallId, isLeftHand, position, rotation, velocity, angVelocity, thrownByPlayer);
}
inline void GlobalNamespace::GameBallManager::RequestLaunchBall(::GlobalNamespace::GameBallId  ballId, ::UnityEngine::Vector3  velocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallManager*>(),
                        {"RequestLaunchBall", {}, {::i2c::type_of<::GlobalNamespace::GameBallId>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ballId, velocity);
}
inline void GlobalNamespace::GameBallManager::RequestLaunchBallRPC(int32_t  gameBallIndex, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  velocity, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallManager*>(),
                        {"RequestLaunchBallRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameBallIndex, position, rotation, velocity, info);
}
inline void GlobalNamespace::GameBallManager::LaunchBallRPC(int32_t  gameBallIndex, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  velocity, double_t  throwTime, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallManager*>(),
                        {"LaunchBallRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameBallIndex, position, rotation, velocity, throwTime, info);
}
inline void GlobalNamespace::GameBallManager::LaunchBall(::GlobalNamespace::GameBallId  gameBallId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  velocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallManager*>(),
                        {"LaunchBall", {}, {::i2c::type_of<::GlobalNamespace::GameBallId>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameBallId, position, rotation, velocity);
}
inline void GlobalNamespace::GameBallManager::RequestTeleportBall(::GlobalNamespace::GameBallId  id, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angularVelocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallManager*>(),
                        {"RequestTeleportBall", {}, {::i2c::type_of<::GlobalNamespace::GameBallId>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, position, rotation, velocity, angularVelocity);
}
inline void GlobalNamespace::GameBallManager::TeleportBallRPC(int32_t  gameBallIndex, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angularVelocity, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallManager*>(),
                        {"TeleportBallRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameBallIndex, position, rotation, velocity, angularVelocity, info);
}
inline void GlobalNamespace::GameBallManager::TeleportBall(::GlobalNamespace::GameBallId  gameBallId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angularVelocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallManager*>(),
                        {"TeleportBall", {}, {::i2c::type_of<::GlobalNamespace::GameBallId>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameBallId, position, rotation, velocity, angularVelocity);
}
inline void GlobalNamespace::GameBallManager::RequestSetBallPosition(::GlobalNamespace::GameBallId  ballId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallManager*>(),
                        {"RequestSetBallPosition", {}, {::i2c::type_of<::GlobalNamespace::GameBallId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ballId);
}
inline void GlobalNamespace::GameBallManager::RequestSetBallPositionRPC(int32_t  gameBallIndex, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallManager*>(),
                        {"RequestSetBallPositionRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameBallIndex, info);
}
inline void GlobalNamespace::GameBallManager::WriteDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameBallManager*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameBallManager::ReadDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameBallManager*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameBallManager::WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameBallManager*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::GameBallManager::ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameBallManager*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::GameBallManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameBallManager::CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameBallManager*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void GlobalNamespace::GameBallManager::CopyStateToBackingFields()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameBallManager*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameBallManager* GlobalNamespace::GameBallManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameBallManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameBallManager::GameBallManager()   {
}
