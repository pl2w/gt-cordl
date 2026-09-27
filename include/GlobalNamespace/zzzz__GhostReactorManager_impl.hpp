#pragma once
// IWYU pragma private; include "GlobalNamespace/GhostReactorManager.hpp"
#include "GlobalNamespace/zzzz__GTZone_impl.hpp"
#include "GlobalNamespace/zzzz__NetworkComponent_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GhostReactorManager_def.hpp"
#include "GlobalNamespace/zzzz__CallLimiter_def.hpp"
#include "GlobalNamespace/zzzz__CallLimitersList_2_def.hpp"
#include "GlobalNamespace/zzzz__GREnemyBossMoon_Behavior_def.hpp"
#include "GlobalNamespace/zzzz__GRNoiseEventManager_def.hpp"
#include "GlobalNamespace/zzzz__GRPlayer_GRPlayerState_def.hpp"
#include "GlobalNamespace/zzzz__GRPlayer_def.hpp"
#include "GlobalNamespace/zzzz__GRReviveStation_def.hpp"
#include "GlobalNamespace/zzzz__GRToolProgressionManager_ToolParts_def.hpp"
#include "GlobalNamespace/zzzz__GRToolUpgradePurchaseStationFull_def.hpp"
#include "GlobalNamespace/zzzz__GRToolUpgradeStation_def.hpp"
#include "GlobalNamespace/zzzz__GRTool_GRToolType_def.hpp"
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include "GlobalNamespace/zzzz__GameAgentManager_def.hpp"
#include "GlobalNamespace/zzzz__GameEntityId_def.hpp"
#include "GlobalNamespace/zzzz__GameEntityManager_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactorManager_GRPlayerAction_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactorManager_RPC_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactorManager_ToolPurchaseActionV2_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactorManager_ToolPurchaseStationAction_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactorManager_ToolPurchaseStationResponse_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactorManager_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactor_EnemyType_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactor_def.hpp"
#include "GlobalNamespace/zzzz__GorillaSurfaceOverride_def.hpp"
#include "GlobalNamespace/zzzz__IGameEntityZoneComponent_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__ProgressionManager_CoreType_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GlobalNamespace/zzzz__ZoneClearReason_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "Photon/Pun/zzzz__PhotonView_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/IO/zzzz__BinaryReader_def.hpp"
#include "System/IO/zzzz__BinaryWriter_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__WaitForSeconds_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)()>(&::GlobalNamespace::GhostReactorManager::Awake)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x584fe24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)()>(&::GlobalNamespace::GhostReactorManager::OnEnable)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x584fe88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(), 46}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)()>(&::GlobalNamespace::GhostReactorManager::OnDisable)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x584ff5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(), 47}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.IsAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GhostReactorManager::*)()>(&::GlobalNamespace::GhostReactorManager::IsAuthority)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x584fbe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"IsAuthority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.IsAuthorityPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GhostReactorManager::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GhostReactorManager::IsAuthorityPlayer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5850030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"IsAuthorityPlayer", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.IsAuthorityPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GhostReactorManager::*)(::Photon::Realtime::Player*)>(&::GlobalNamespace::GhostReactorManager::IsAuthorityPlayer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5850048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"IsAuthorityPlayer", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.GetAuthorityPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Realtime::Player* (::GlobalNamespace::GhostReactorManager::*)()>(&::GlobalNamespace::GhostReactorManager::GetAuthorityPlayer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5850060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"GetAuthorityPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.IsZoneActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GhostReactorManager::*)()>(&::GlobalNamespace::GhostReactorManager::IsZoneActive)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5850078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"IsZoneActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.IsPositionInZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GhostReactorManager::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::GhostReactorManager::IsPositionInZone)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5850098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"IsPositionInZone", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.IsValidClientRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GhostReactorManager::*)(::Photon::Realtime::Player*)>(&::GlobalNamespace::GhostReactorManager::IsValidClientRPC)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x58500b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"IsValidClientRPC", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.IsValidClientRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GhostReactorManager::*)(::Photon::Realtime::Player*, int32_t)>(&::GlobalNamespace::GhostReactorManager::IsValidClientRPC)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58500d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"IsValidClientRPC", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.IsValidClientRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GhostReactorManager::*)(::Photon::Realtime::Player*, int32_t, ::UnityEngine::Vector3)>(&::GlobalNamespace::GhostReactorManager::IsValidClientRPC)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58500f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"IsValidClientRPC", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.IsValidClientRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GhostReactorManager::*)(::Photon::Realtime::Player*, ::UnityEngine::Vector3)>(&::GlobalNamespace::GhostReactorManager::IsValidClientRPC)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5850108;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"IsValidClientRPC", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.IsValidAuthorityRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GhostReactorManager::*)(::Photon::Realtime::Player*)>(&::GlobalNamespace::GhostReactorManager::IsValidAuthorityRPC)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5850120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"IsValidAuthorityRPC", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.IsValidAuthorityRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GhostReactorManager::*)(::Photon::Realtime::Player*, int32_t)>(&::GlobalNamespace::GhostReactorManager::IsValidAuthorityRPC)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5850138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"IsValidAuthorityRPC", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.IsValidAuthorityRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GhostReactorManager::*)(::Photon::Realtime::Player*, int32_t, ::UnityEngine::Vector3)>(&::GlobalNamespace::GhostReactorManager::IsValidAuthorityRPC)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5850150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"IsValidAuthorityRPC", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.IsValidAuthorityRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GhostReactorManager::*)(::Photon::Realtime::Player*, ::UnityEngine::Vector3)>(&::GlobalNamespace::GhostReactorManager::IsValidAuthorityRPC)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5850168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"IsValidAuthorityRPC", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GhostReactorManager> (*)(::GlobalNamespace::GameEntity*)>(&::GlobalNamespace::GhostReactorManager::Get)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5850180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"Get", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.RefreshShiftCredit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)()>(&::GlobalNamespace::GhostReactorManager::RefreshShiftCredit)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5850230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RefreshShiftCredit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.RefreshShiftCreditRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GhostReactorManager::RefreshShiftCreditRPC)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5850234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RefreshShiftCreditRPC", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.SendMothershipId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)()>(&::GlobalNamespace::GhostReactorManager::SendMothershipId)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5850384;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"SendMothershipId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.SendMothershipIdRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(::StringW, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GhostReactorManager::SendMothershipIdRPC)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x58503b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"SendMothershipIdRPC", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.RequestCollectItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(::GlobalNamespace::GameEntityId, ::GlobalNamespace::GameEntityId)>(&::GlobalNamespace::GhostReactorManager::RequestCollectItem)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x585054c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestCollectItem", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<::GlobalNamespace::GameEntityId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.RequestDepositCollectible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(::GlobalNamespace::GameEntityId)>(&::GlobalNamespace::GhostReactorManager::RequestDepositCollectible)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x58506e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestDepositCollectible", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.RequestCollectItemRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(int32_t, int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GhostReactorManager::RequestCollectItemRPC)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x585090c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestCollectItemRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.ApplyCollectItemRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(int32_t, int32_t, int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GhostReactorManager::ApplyCollectItemRPC)> {
  constexpr static std::size_t size = 0x488;
  constexpr static std::size_t addrs = 0x5850b54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ApplyCollectItemRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.RequestApplySeedExtractorState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(int32_t, int32_t, int32_t, float_t, float_t)>(&::GlobalNamespace::GhostReactorManager::RequestApplySeedExtractorState)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x585137c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestApplySeedExtractorState", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.RequestApplySeedExtractorStateRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(int32_t, int32_t, int32_t, float_t, float_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GhostReactorManager::RequestApplySeedExtractorStateRPC)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x58515d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestApplySeedExtractorStateRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.ApplySeedExtractorStateRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(int32_t, int32_t, int32_t, int32_t, float_t, float_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GhostReactorManager::ApplySeedExtractorStateRPC)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x58518f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ApplySeedExtractorStateRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.RequestDistillCollectible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(::GlobalNamespace::GameEntityId, ::Photon::Realtime::Player*)>(&::GlobalNamespace::GhostReactorManager::RequestDistillCollectible)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x5851a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestDistillCollectible", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.DistillItemRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(int32_t, int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GhostReactorManager::DistillItemRPC)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x5851c58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"DistillItemRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.RequestChargeTool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(::GlobalNamespace::GameEntityId, ::GlobalNamespace::GameEntityId, int32_t, bool)>(&::GlobalNamespace::GhostReactorManager::RequestChargeTool)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x5851ee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestChargeTool", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.RequestChargeToolRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(int32_t, int32_t, int32_t, bool, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GhostReactorManager::RequestChargeToolRPC)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x5852124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestChargeToolRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.ApplyChargeToolRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(int32_t, int32_t, int32_t, bool, ::Photon::Realtime::Player*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GhostReactorManager::ApplyChargeToolRPC)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x5852448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ApplyChargeToolRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.RequestDepositCurrency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(::GlobalNamespace::GameEntityId)>(&::GlobalNamespace::GhostReactorManager::RequestDepositCurrency)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x58527bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestDepositCurrency", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.RequestDepositCurrencyRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GhostReactorManager::RequestDepositCurrencyRPC)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x58528e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestDepositCurrencyRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.ApplyDepositCurrencyRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(int32_t, int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GhostReactorManager::ApplyDepositCurrencyRPC)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x5852bb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ApplyDepositCurrencyRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.RequestEnemyHitPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(::GlobalNamespace::GhostReactor_EnemyType, ::GlobalNamespace::GameEntityId, ::GlobalNamespace::GRPlayer*, ::UnityEngine::Vector3)>(&::GlobalNamespace::GhostReactorManager::RequestEnemyHitPlayer)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x5852f48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestEnemyHitPlayer", {}, {::i2c::type_of<::GlobalNamespace::GhostReactor_EnemyType>(), ::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<::GlobalNamespace::GRPlayer*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.RequestEnemyHitPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(::GlobalNamespace::GhostReactor_EnemyType, ::GlobalNamespace::GameEntityId, ::GlobalNamespace::GRPlayer*, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::GhostReactorManager::RequestEnemyHitPlayer)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x58531b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestEnemyHitPlayer", {}, {::i2c::type_of<::GlobalNamespace::GhostReactor_EnemyType>(), ::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<::GlobalNamespace::GRPlayer*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.ApplyEnemyHitPlayerRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(::GlobalNamespace::GhostReactor_EnemyType, int32_t, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GhostReactorManager::ApplyEnemyHitPlayerRPC)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0x5853410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ApplyEnemyHitPlayerRPC", {}, {::i2c::type_of<::GlobalNamespace::GhostReactor_EnemyType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.OnEnemyHitPlayerInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(::GlobalNamespace::GhostReactor_EnemyType, ::GlobalNamespace::GameEntityId, ::GlobalNamespace::GRPlayer*, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::GhostReactorManager::OnEnemyHitPlayerInternal)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5853804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"OnEnemyHitPlayerInternal", {}, {::i2c::type_of<::GlobalNamespace::GhostReactor_EnemyType>(), ::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<::GlobalNamespace::GRPlayer*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.ReportLocalPlayerHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)()>(&::GlobalNamespace::GhostReactorManager::ReportLocalPlayerHit)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5853964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ReportLocalPlayerHit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.ReportLocalPlayerHitRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GhostReactorManager::ReportLocalPlayerHitRPC)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5853a2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ReportLocalPlayerHitRPC", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.RequestPlayerRevive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(::GlobalNamespace::GRReviveStation*, ::GlobalNamespace::GRPlayer*)>(&::GlobalNamespace::GhostReactorManager::RequestPlayerRevive)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x5853b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestPlayerRevive", {}, {::i2c::type_of<::GlobalNamespace::GRReviveStation*>(), ::i2c::type_of<::GlobalNamespace::GRPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.ApplyPlayerRevivedRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(int32_t, int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GhostReactorManager::ApplyPlayerRevivedRPC)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5853d34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ApplyPlayerRevivedRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.RequestPlayerStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(::GlobalNamespace::GRPlayer*, ::GlobalNamespace::GRPlayer_GRPlayerState)>(&::GlobalNamespace::GhostReactorManager::RequestPlayerStateChange)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x5853ecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestPlayerStateChange", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer*>(), ::i2c::type_of<::GlobalNamespace::GRPlayer_GRPlayerState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.PlayerStateChangeRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(int32_t, int32_t, int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GhostReactorManager::PlayerStateChangeRPC)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x585413c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"PlayerStateChangeRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.RequestGrantPlayerShield
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(::GlobalNamespace::GRPlayer*, int32_t, int32_t)>(&::GlobalNamespace::GhostReactorManager::RequestGrantPlayerShield)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x58543a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestGrantPlayerShield", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.RequestGrantPlayerShieldRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(int32_t, int32_t, int32_t, int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GhostReactorManager::RequestGrantPlayerShieldRPC)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x5854610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestGrantPlayerShieldRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.ApplyGrantPlayerShieldRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(int32_t, int32_t, int32_t, int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GhostReactorManager::ApplyGrantPlayerShieldRPC)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5854898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ApplyGrantPlayerShieldRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.RequestFireProjectile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(::GlobalNamespace::GameEntityId, ::UnityEngine::Vector3, ::UnityEngine::Vector3, double_t)>(&::GlobalNamespace::GhostReactorManager::RequestFireProjectile)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x5854a34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestFireProjectile", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.RequestFireProjectileRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(int32_t, ::UnityEngine::Vector3, ::UnityEngine::Vector3, double_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GhostReactorManager::RequestFireProjectileRPC)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5854d24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestFireProjectileRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.OnRequestFireProjectileInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(::GlobalNamespace::GameEntityId, ::UnityEngine::Vector3, ::UnityEngine::Vector3, double_t)>(&::GlobalNamespace::GhostReactorManager::OnRequestFireProjectileInternal)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5854e78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"OnRequestFireProjectileInternal", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.BroadcastHandprint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GhostReactorManager::BroadcastHandprint)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x5855020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"BroadcastHandprint", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.OnAbilityDie
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(::GlobalNamespace::GameEntity*, float_t)>(&::GlobalNamespace::GhostReactorManager::OnAbilityDie)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5855400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"OnAbilityDie", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.RequestShiftStartAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(bool)>(&::GlobalNamespace::GhostReactorManager::RequestShiftStartAuthority)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x58554ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestShiftStartAuthority", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.ApplyShiftStartRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(double_t, int32_t, ::StringW, bool, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GhostReactorManager::ApplyShiftStartRPC)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x5855884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ApplyShiftStartRPC", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.SpawnSectionEntitiesCoroutine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::GhostReactorManager::*)(float_t)>(&::GlobalNamespace::GhostReactorManager::SpawnSectionEntitiesCoroutine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5855bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"SpawnSectionEntitiesCoroutine", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.RequestShiftEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)()>(&::GlobalNamespace::GhostReactorManager::RequestShiftEnd)> {
  constexpr static std::size_t size = 0x42c;
  constexpr static std::size_t addrs = 0x58562f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestShiftEnd", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.SendRequestShiftEndRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)()>(&::GlobalNamespace::GhostReactorManager::SendRequestShiftEndRPC)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5857380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"SendRequestShiftEndRPC", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.ApplyShiftEndRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(double_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GhostReactorManager::ApplyShiftEndRPC)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x585745c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ApplyShiftEndRPC", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.ShouldEntitySurviveShift
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GhostReactorManager::*)(::GlobalNamespace::GameEntity*)>(&::GlobalNamespace::GhostReactorManager::ShouldEntitySurviveShift)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x585671c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ShouldEntitySurviveShift", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.IsEnemy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GhostReactorManager::*)(::GlobalNamespace::GameEntity*)>(&::GlobalNamespace::GhostReactorManager::IsEnemy)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x58575c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"IsEnemy", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.InstantDeathForCurrentEnemies
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)()>(&::GlobalNamespace::GhostReactorManager::InstantDeathForCurrentEnemies)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x5857828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"InstantDeathForCurrentEnemies", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.RequestRestoreBossHP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)()>(&::GlobalNamespace::GhostReactorManager::RequestRestoreBossHP)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5857be4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestRestoreBossHP", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.RequestHurtBossHP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)()>(&::GlobalNamespace::GhostReactorManager::RequestHurtBossHP)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5857be8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestHurtBossHP", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.RequestKillBossEyes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)()>(&::GlobalNamespace::GhostReactorManager::RequestKillBossEyes)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5857bec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestKillBossEyes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.RequestKillBossSummoned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)()>(&::GlobalNamespace::GhostReactorManager::RequestKillBossSummoned)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5857bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestKillBossSummoned", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.RequestGoBackBossPhase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)()>(&::GlobalNamespace::GhostReactorManager::RequestGoBackBossPhase)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5857bf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestGoBackBossPhase", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.RequestAdvanceBossPhase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)()>(&::GlobalNamespace::GhostReactorManager::RequestAdvanceBossPhase)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5857bf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestAdvanceBossPhase", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.RequestBossBehavior
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(::GlobalNamespace::GREnemyBossMoon_Behavior)>(&::GlobalNamespace::GhostReactorManager::RequestBossBehavior)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5857bfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestBossBehavior", {}, {::i2c::type_of<::GlobalNamespace::GREnemyBossMoon_Behavior>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.GetBossEntity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GameEntity> (::GlobalNamespace::GhostReactorManager::*)()>(&::GlobalNamespace::GhostReactorManager::GetBossEntity)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x5857c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"GetBossEntity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.ClearCachedBossEntity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)()>(&::GlobalNamespace::GhostReactorManager::ClearCachedBossEntity)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5857e04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ClearCachedBossEntity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.ReportEnemyDeath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)()>(&::GlobalNamespace::GhostReactorManager::ReportEnemyDeath)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5857e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ReportEnemyDeath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.ReportCoreCollection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(::GlobalNamespace::GRPlayer*, ::GlobalNamespace::ProgressionManager_CoreType)>(&::GlobalNamespace::GhostReactorManager::ReportCoreCollection)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x5850fdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ReportCoreCollection", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer*>(), ::i2c::type_of<::GlobalNamespace::ProgressionManager_CoreType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.ReportPlayerDeath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(::GlobalNamespace::GRPlayer*)>(&::GlobalNamespace::GhostReactorManager::ReportPlayerDeath)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5857ed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ReportPlayerDeath", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.PromotionBotActivePlayerRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(int32_t)>(&::GlobalNamespace::GhostReactorManager::PromotionBotActivePlayerRequest)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5857fcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"PromotionBotActivePlayerRequest", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.PromotionBotActivePlayerRequestRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GhostReactorManager::PromotionBotActivePlayerRequestRPC)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x58580d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"PromotionBotActivePlayerRequestRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.PromotionBotActivePlayerResponseRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(int32_t, int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GhostReactorManager::PromotionBotActivePlayerResponseRPC)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5858350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"PromotionBotActivePlayerResponseRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.BroadcastScoreboardPage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GhostReactorManager::BroadcastScoreboardPage)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x58584e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"BroadcastScoreboardPage", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.BroadcastStartingProgression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(int32_t, int32_t, double_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GhostReactorManager::BroadcastStartingProgression)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x585864c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"BroadcastStartingProgression", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.RequestPlayerAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(::GlobalNamespace::GhostReactorManager_GRPlayerAction)>(&::GlobalNamespace::GhostReactorManager::RequestPlayerAction)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5858814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestPlayerAction", {}, {::i2c::type_of<::GlobalNamespace::GhostReactorManager_GRPlayerAction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.RequestPlayerAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(::GlobalNamespace::GhostReactorManager_GRPlayerAction, int32_t)>(&::GlobalNamespace::GhostReactorManager::RequestPlayerAction)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x58589b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestPlayerAction", {}, {::i2c::type_of<::GlobalNamespace::GhostReactorManager_GRPlayerAction>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.RequestPlayerAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(::GlobalNamespace::GhostReactorManager_GRPlayerAction, int32_t, int32_t)>(&::GlobalNamespace::GhostReactorManager::RequestPlayerAction)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x5858b68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestPlayerAction", {}, {::i2c::type_of<::GlobalNamespace::GhostReactorManager_GRPlayerAction>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.VerifyShuttleInteractability
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GhostReactorManager::*)(::GlobalNamespace::GRPlayer*, int32_t, bool)>(&::GlobalNamespace::GhostReactorManager::VerifyShuttleInteractability)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5858d1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"VerifyShuttleInteractability", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.RequestPlayerActionRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(int32_t, int32_t, int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GhostReactorManager::RequestPlayerActionRPC)> {
  constexpr static std::size_t size = 0x58c;
  constexpr static std::size_t addrs = 0x5858e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestPlayerActionRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.ApplyPlayerActionRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(int32_t, int32_t, int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GhostReactorManager::ApplyPlayerActionRPC)> {
  constexpr static std::size_t size = 0x8f4;
  constexpr static std::size_t addrs = 0x58593bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ApplyPlayerActionRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.GetToolUpgradeStationFullForIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GRToolUpgradePurchaseStationFull> (::GlobalNamespace::GhostReactorManager::*)(int32_t)>(&::GlobalNamespace::GhostReactorManager::GetToolUpgradeStationFullForIndex)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x585a1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"GetToolUpgradeStationFullForIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.GetIndexForToolUpgradeStationFull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GhostReactorManager::*)(::GlobalNamespace::GRToolUpgradePurchaseStationFull*)>(&::GlobalNamespace::GhostReactorManager::GetIndexForToolUpgradeStationFull)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x585a284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"GetIndexForToolUpgradeStationFull", {}, {::i2c::type_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.RequestNetworkShelfAndItemChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(::GlobalNamespace::GRToolUpgradePurchaseStationFull*, int32_t, int32_t)>(&::GlobalNamespace::GhostReactorManager::RequestNetworkShelfAndItemChange)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x585a33c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestNetworkShelfAndItemChange", {}, {::i2c::type_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.SelectToolShelfAndItemRPCRouted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(int32_t, int32_t, int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GhostReactorManager::SelectToolShelfAndItemRPCRouted)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x585a5cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"SelectToolShelfAndItemRPCRouted", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.RequestPurchaseToolOrUpgrade
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(::GlobalNamespace::GRToolUpgradePurchaseStationFull*, int32_t, int32_t)>(&::GlobalNamespace::GhostReactorManager::RequestPurchaseToolOrUpgrade)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x585a6ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestPurchaseToolOrUpgrade", {}, {::i2c::type_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.RequestPurchaseRPCRoutedAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(int32_t, int32_t, int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GhostReactorManager::RequestPurchaseRPCRoutedAuthority)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x585a958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestPurchaseRPCRoutedAuthority", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.NotifyPurchaseToolOrUpgradeRPCRouted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(int32_t, int32_t, int32_t, int32_t, bool, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GhostReactorManager::NotifyPurchaseToolOrUpgradeRPCRouted)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x585ac78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"NotifyPurchaseToolOrUpgradeRPCRouted", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.RequestStationExclusivity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(::GlobalNamespace::GRToolUpgradePurchaseStationFull*)>(&::GlobalNamespace::GhostReactorManager::RequestStationExclusivity)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x585add4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestStationExclusivity", {}, {::i2c::type_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.SetActivePlayerAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(::GlobalNamespace::GRToolUpgradePurchaseStationFull*, int32_t)>(&::GlobalNamespace::GhostReactorManager::SetActivePlayerAuthority)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x585b074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"SetActivePlayerAuthority", {}, {::i2c::type_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.RequestStationExclusivityRPCRoutedAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GhostReactorManager::RequestStationExclusivityRPCRoutedAuthority)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x585b334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestStationExclusivityRPCRoutedAuthority", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.SetToolStationActivePlayerRPCRouted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(int32_t, int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GhostReactorManager::SetToolStationActivePlayerRPCRouted)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x585b40c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"SetToolStationActivePlayerRPCRouted", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.BroadcastHandleAndSelectionWheelPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(::GlobalNamespace::GRToolUpgradePurchaseStationFull*, int32_t, int32_t)>(&::GlobalNamespace::GhostReactorManager::BroadcastHandleAndSelectionWheelPosition)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x585b4dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"BroadcastHandleAndSelectionWheelPosition", {}, {::i2c::type_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.SetHandleAndSelectionWheelPositionRPCRouted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(int32_t, int32_t, int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GhostReactorManager::SetHandleAndSelectionWheelPositionRPCRouted)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x585b7c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"SetHandleAndSelectionWheelPositionRPCRouted", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.RequestHackToolStation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)()>(&::GlobalNamespace::GhostReactorManager::RequestHackToolStation)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x585b8a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestHackToolStation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.ToolPurchaseV2_RPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(::GlobalNamespace::GhostReactorManager_ToolPurchaseActionV2, int32_t, int32_t, int32_t, int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GhostReactorManager::ToolPurchaseV2_RPC)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x585b8a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ToolPurchaseV2_RPC", {}, {::i2c::type_of<::GlobalNamespace::GhostReactorManager_ToolPurchaseActionV2>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.ToolPurchaseStationRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(int32_t, ::GlobalNamespace::GhostReactorManager_ToolPurchaseStationAction)>(&::GlobalNamespace::GhostReactorManager::ToolPurchaseStationRequest)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x585bab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ToolPurchaseStationRequest", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GhostReactorManager_ToolPurchaseStationAction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.ToolPurchaseStationRequestRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(int32_t, ::GlobalNamespace::GhostReactorManager_ToolPurchaseStationAction, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GhostReactorManager::ToolPurchaseStationRequestRPC)> {
  constexpr static std::size_t size = 0x6f0;
  constexpr static std::size_t addrs = 0x585bc28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ToolPurchaseStationRequestRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GhostReactorManager_ToolPurchaseStationAction>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.ToolPurchaseStationResponseRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(int32_t, ::GlobalNamespace::GhostReactorManager_ToolPurchaseStationResponse, int32_t, int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GhostReactorManager::ToolPurchaseStationResponseRPC)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x585c530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ToolPurchaseStationResponseRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GhostReactorManager_ToolPurchaseStationResponse>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.ToolPurchaseResponseLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(int32_t, ::GlobalNamespace::GhostReactorManager_ToolPurchaseStationResponse, int32_t, int32_t)>(&::GlobalNamespace::GhostReactorManager::ToolPurchaseResponseLocal)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x585c318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ToolPurchaseResponseLocal", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GhostReactorManager_ToolPurchaseStationResponse>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.ToolUpgradeStationRequestUpgrade
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(::GlobalNamespace::GRToolProgressionManager_ToolParts, int32_t)>(&::GlobalNamespace::GhostReactorManager::ToolUpgradeStationRequestUpgrade)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x585c66c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ToolUpgradeStationRequestUpgrade", {}, {::i2c::type_of<::GlobalNamespace::GRToolProgressionManager_ToolParts>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.ToolSnapRequestUpgrade
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(int32_t, ::GlobalNamespace::GRToolProgressionManager_ToolParts, int32_t)>(&::GlobalNamespace::GhostReactorManager::ToolSnapRequestUpgrade)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x585c7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ToolSnapRequestUpgrade", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GRToolProgressionManager_ToolParts>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.ToolSnapRequestUpgradeRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(int32_t, ::GlobalNamespace::GRToolProgressionManager_ToolParts, int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GhostReactorManager::ToolSnapRequestUpgradeRPC)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0x585c9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ToolSnapRequestUpgradeRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GRToolProgressionManager_ToolParts>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.ToolUpgradeStationRequestUpgradeRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(::GlobalNamespace::GRToolProgressionManager_ToolParts, int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GhostReactorManager::ToolUpgradeStationRequestUpgradeRPC)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x585ce30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ToolUpgradeStationRequestUpgradeRPC", {}, {::i2c::type_of<::GlobalNamespace::GRToolProgressionManager_ToolParts>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.UpgradeToolRemoteRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(::GlobalNamespace::GRToolProgressionManager_ToolParts, int32_t, bool, int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GhostReactorManager::UpgradeToolRemoteRPC)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x585ce34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"UpgradeToolRemoteRPC", {}, {::i2c::type_of<::GlobalNamespace::GRToolProgressionManager_ToolParts>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.DoesUserHaveResearchUnlocked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GhostReactorManager::*)(int32_t, ::StringW)>(&::GlobalNamespace::GhostReactorManager::DoesUserHaveResearchUnlocked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x585d020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"DoesUserHaveResearchUnlocked", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.ToolPlacedInUpgradeStation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(::GlobalNamespace::GameEntity*)>(&::GlobalNamespace::GhostReactorManager::ToolPlacedInUpgradeStation)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x585d028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ToolPlacedInUpgradeStation", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.PlacedToolInUpgradeStationRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GhostReactorManager::PlacedToolInUpgradeStationRPC)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x585d138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"PlacedToolInUpgradeStationRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.UpgradeToolAtToolStation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)()>(&::GlobalNamespace::GhostReactorManager::UpgradeToolAtToolStation)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x585d13c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"UpgradeToolAtToolStation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.UpgradeToolAtToolStationRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GhostReactorManager::UpgradeToolAtToolStationRPC)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x585d204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"UpgradeToolAtToolStationRPC", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.LocalEjectToolInUpgradeStation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)()>(&::GlobalNamespace::GhostReactorManager::LocalEjectToolInUpgradeStation)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x585d208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"LocalEjectToolInUpgradeStation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.EntityEnteredDropZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(::GlobalNamespace::GameEntity*)>(&::GlobalNamespace::GhostReactorManager::EntityEnteredDropZone)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x585d20c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"EntityEnteredDropZone", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.EntityEnteredDropZoneRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(int32_t, int64_t, int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GhostReactorManager::EntityEnteredDropZoneRPC)> {
  constexpr static std::size_t size = 0x44c;
  constexpr static std::size_t addrs = 0x585d5ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"EntityEnteredDropZoneRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.LocalEntityEnteredDropZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(::GlobalNamespace::GameEntityId, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::GlobalNamespace::GhostReactorManager::LocalEntityEnteredDropZone)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x585da38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"LocalEntityEnteredDropZone", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.RequestRecycleScanItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(::GlobalNamespace::GameEntityId)>(&::GlobalNamespace::GhostReactorManager::RequestRecycleScanItem)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x585de48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestRecycleScanItem", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.ApplyRecycleScanItemRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GhostReactorManager::ApplyRecycleScanItemRPC)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x585df70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ApplyRecycleScanItemRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.RequestRecycleItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(int32_t, ::GlobalNamespace::GameEntityId, ::GlobalNamespace::GRTool_GRToolType)>(&::GlobalNamespace::GhostReactorManager::RequestRecycleItem)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x585e058;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestRecycleItem", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<::GlobalNamespace::GRTool_GRToolType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.ApplyRecycleItemRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(int32_t, int32_t, ::GlobalNamespace::GRTool_GRToolType, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GhostReactorManager::ApplyRecycleItemRPC)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x585e278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ApplyRecycleItemRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GRTool_GRToolType>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.RequestSentientCorePerformJump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(::GlobalNamespace::GameEntity*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::GhostReactorManager::RequestSentientCorePerformJump)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x585e488;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestSentientCorePerformJump", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.SentientCorePerformJumpRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(int32_t, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, double_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GhostReactorManager::SentientCorePerformJumpRPC)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0x585e774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"SentientCorePerformJumpRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.WriteDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)()>(&::GlobalNamespace::GhostReactorManager::WriteDataFusion)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x585ebe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.ReadDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)()>(&::GlobalNamespace::GhostReactorManager::ReadDataFusion)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x585ebe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.WriteDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GhostReactorManager::WriteDataPUN)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x585ebec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.ReadDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GhostReactorManager::ReadDataPUN)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x585ebf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.OnNewPlayerEnteredGhostReactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)()>(&::GlobalNamespace::GhostReactorManager::OnNewPlayerEnteredGhostReactor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x585ebf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"OnNewPlayerEnteredGhostReactor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.OnEntityZoneClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(::GlobalNamespace::GTZone)>(&::GlobalNamespace::GhostReactorManager::OnEntityZoneClear)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x585ec78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"OnEntityZoneClear", {}, {::i2c::type_of<::GlobalNamespace::GTZone>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.OnZoneCreate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)()>(&::GlobalNamespace::GhostReactorManager::OnZoneCreate)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x585ec7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"OnZoneCreate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.OnZoneInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)()>(&::GlobalNamespace::GhostReactorManager::OnZoneInit)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x585ee40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"OnZoneInit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.OnZoneClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(::GlobalNamespace::ZoneClearReason)>(&::GlobalNamespace::GhostReactorManager::OnZoneClear)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x585f018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"OnZoneClear", {}, {::i2c::type_of<::GlobalNamespace::ZoneClearReason>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.IsZoneReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GhostReactorManager::*)()>(&::GlobalNamespace::GhostReactorManager::IsZoneReady)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x585f2f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"IsZoneReady", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.ShouldClearZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GhostReactorManager::*)()>(&::GlobalNamespace::GhostReactorManager::ShouldClearZone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x585f358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ShouldClearZone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.OnCreateGameEntity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(::GlobalNamespace::GameEntity*)>(&::GlobalNamespace::GhostReactorManager::OnCreateGameEntity)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x585f360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"OnCreateGameEntity", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.SerializeZoneData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(::System::IO::BinaryWriter*)>(&::GlobalNamespace::GhostReactorManager::SerializeZoneData)> {
  constexpr static std::size_t size = 0x4e4;
  constexpr static std::size_t addrs = 0x585f364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"SerializeZoneData", {}, {::i2c::type_of<::System::IO::BinaryWriter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.DeserializeZoneData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(::System::IO::BinaryReader*)>(&::GlobalNamespace::GhostReactorManager::DeserializeZoneData)> {
  constexpr static std::size_t size = 0x68c;
  constexpr static std::size_t addrs = 0x585f850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"DeserializeZoneData", {}, {::i2c::type_of<::System::IO::BinaryReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.ProcessMigratedGameEntityCreateData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::GhostReactorManager::*)(::GlobalNamespace::GameEntity*, int64_t)>(&::GlobalNamespace::GhostReactorManager::ProcessMigratedGameEntityCreateData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x585fedc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ProcessMigratedGameEntityCreateData", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.ValidateMigratedGameEntity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GhostReactorManager::*)(int32_t, int32_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, int64_t, int32_t)>(&::GlobalNamespace::GhostReactorManager::ValidateMigratedGameEntity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x585fee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ValidateMigratedGameEntity", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.ValidateCreateMultipleItems
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GhostReactorManager::*)(int32_t, ::ArrayW<uint8_t>, int32_t)>(&::GlobalNamespace::GhostReactorManager::ValidateCreateMultipleItems)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x585feec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ValidateCreateMultipleItems", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.ValidateCreateItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GhostReactorManager::*)(int32_t, int32_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, int64_t, int32_t)>(&::GlobalNamespace::GhostReactorManager::ValidateCreateItem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x585fef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ValidateCreateItem", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.ValidateCreateItemBatchSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GhostReactorManager::*)(int32_t)>(&::GlobalNamespace::GhostReactorManager::ValidateCreateItemBatchSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x585ff00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ValidateCreateItemBatchSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.SerializeZoneEntityData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(::System::IO::BinaryWriter*, ::GlobalNamespace::GameEntity*)>(&::GlobalNamespace::GhostReactorManager::SerializeZoneEntityData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x585ff08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"SerializeZoneEntityData", {}, {::i2c::type_of<::System::IO::BinaryWriter*>(), ::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.DeserializeZoneEntityData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(::System::IO::BinaryReader*, ::GlobalNamespace::GameEntity*)>(&::GlobalNamespace::GhostReactorManager::DeserializeZoneEntityData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x585ff0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"DeserializeZoneEntityData", {}, {::i2c::type_of<::System::IO::BinaryReader*>(), ::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.OnTapLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(bool, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::GlobalNamespace::GorillaSurfaceOverride*, ::UnityEngine::Vector3)>(&::GlobalNamespace::GhostReactorManager::OnTapLocal)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x585ff10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"OnTapLocal", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::GlobalNamespace::GorillaSurfaceOverride*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.OnSharedTap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(::GlobalNamespace::VRRig*, ::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::GhostReactorManager::OnSharedTap)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x586014c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"OnSharedTap", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.SerializeZonePlayerData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(::System::IO::BinaryWriter*, int32_t)>(&::GlobalNamespace::GhostReactorManager::SerializeZonePlayerData)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5860280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"SerializeZonePlayerData", {}, {::i2c::type_of<::System::IO::BinaryWriter*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.DeserializeZonePlayerData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(::System::IO::BinaryReader*, int32_t)>(&::GlobalNamespace::GhostReactorManager::DeserializeZonePlayerData)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x586030c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"DeserializeZonePlayerData", {}, {::i2c::type_of<::System::IO::BinaryReader*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.DebugIsToolStationHacked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GhostReactorManager::*)()>(&::GlobalNamespace::GhostReactorManager::DebugIsToolStationHacked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5860388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"DebugIsToolStationHacked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.get_AggroDisabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::GhostReactorManager::get_AggroDisabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5860390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"get_AggroDisabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)()>(&::GlobalNamespace::GhostReactorManager::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5860398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.CopyBackingFieldsToState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)(bool)>(&::GlobalNamespace::GhostReactorManager::CopyBackingFieldsToState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x586050c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager.CopyStateToBackingFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager::*)()>(&::GlobalNamespace::GhostReactorManager::CopyStateToBackingFields)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5860514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(), 24}
                ));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameEntityManager>& GlobalNamespace::GhostReactorManager::__cordl_internal_get_gameEntityManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEntityManager;
}
constexpr ::UnityW<::GlobalNamespace::GameEntityManager> const& GlobalNamespace::GhostReactorManager::__cordl_internal_get_gameEntityManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEntityManager;
}
constexpr void GlobalNamespace::GhostReactorManager::__cordl_internal_set_gameEntityManager(::UnityW<::GlobalNamespace::GameEntityManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameEntityManager = value;
}
constexpr ::UnityW<::GlobalNamespace::GameAgentManager>& GlobalNamespace::GhostReactorManager::__cordl_internal_get_gameAgentManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameAgentManager;
}
constexpr ::UnityW<::GlobalNamespace::GameAgentManager> const& GlobalNamespace::GhostReactorManager::__cordl_internal_get_gameAgentManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameAgentManager;
}
constexpr void GlobalNamespace::GhostReactorManager::__cordl_internal_set_gameAgentManager(::UnityW<::GlobalNamespace::GameAgentManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameAgentManager = value;
}
constexpr ::UnityW<::GlobalNamespace::GRNoiseEventManager>& GlobalNamespace::GhostReactorManager::__cordl_internal_get_noiseEventManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noiseEventManager;
}
constexpr ::UnityW<::GlobalNamespace::GRNoiseEventManager> const& GlobalNamespace::GhostReactorManager::__cordl_internal_get_noiseEventManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noiseEventManager;
}
constexpr void GlobalNamespace::GhostReactorManager::__cordl_internal_set_noiseEventManager(::UnityW<::GlobalNamespace::GRNoiseEventManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noiseEventManager = value;
}
constexpr ::UnityW<::Photon::Pun::PhotonView>& GlobalNamespace::GhostReactorManager::__cordl_internal_get_photonView()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___photonView;
}
constexpr ::UnityW<::Photon::Pun::PhotonView> const& GlobalNamespace::GhostReactorManager::__cordl_internal_get_photonView() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___photonView;
}
constexpr void GlobalNamespace::GhostReactorManager::__cordl_internal_set_photonView(::UnityW<::Photon::Pun::PhotonView>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___photonView = value;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactor>& GlobalNamespace::GhostReactorManager::__cordl_internal_get_reactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reactor;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactor> const& GlobalNamespace::GhostReactorManager::__cordl_internal_get_reactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reactor;
}
constexpr void GlobalNamespace::GhostReactorManager::__cordl_internal_set_reactor(::UnityW<::GlobalNamespace::GhostReactor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reactor = value;
}
constexpr ::GlobalNamespace::CallLimitersList_2<::GlobalNamespace::CallLimiter*,::GlobalNamespace::GhostReactorManager_RPC>*& GlobalNamespace::GhostReactorManager::__cordl_internal_get_m_RpcSpamChecks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RpcSpamChecks;
}
constexpr ::GlobalNamespace::CallLimitersList_2<::GlobalNamespace::CallLimiter*,::GlobalNamespace::GhostReactorManager_RPC>* const& GlobalNamespace::GhostReactorManager::__cordl_internal_get_m_RpcSpamChecks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RpcSpamChecks;
}
constexpr void GlobalNamespace::GhostReactorManager::__cordl_internal_set_m_RpcSpamChecks(::GlobalNamespace::CallLimitersList_2<::GlobalNamespace::CallLimiter*,::GlobalNamespace::GhostReactorManager_RPC>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RpcSpamChecks = value;
}
constexpr float_t& GlobalNamespace::GhostReactorManager::__cordl_internal_get_LastHandprintTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LastHandprintTime;
}
constexpr float_t const& GlobalNamespace::GhostReactorManager::__cordl_internal_get_LastHandprintTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LastHandprintTime;
}
constexpr void GlobalNamespace::GhostReactorManager::__cordl_internal_set_LastHandprintTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LastHandprintTime = value;
}
constexpr ::UnityEngine::Coroutine*& GlobalNamespace::GhostReactorManager::__cordl_internal_get_activeSpawnSectionEntitiesCoroutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeSpawnSectionEntitiesCoroutine;
}
constexpr ::UnityEngine::Coroutine* const& GlobalNamespace::GhostReactorManager::__cordl_internal_get_activeSpawnSectionEntitiesCoroutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeSpawnSectionEntitiesCoroutine;
}
constexpr void GlobalNamespace::GhostReactorManager::__cordl_internal_set_activeSpawnSectionEntitiesCoroutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeSpawnSectionEntitiesCoroutine = value;
}
constexpr ::UnityEngine::WaitForSeconds*& GlobalNamespace::GhostReactorManager::__cordl_internal_get_spawnSectionEntitiesWait()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnSectionEntitiesWait;
}
constexpr ::UnityEngine::WaitForSeconds* const& GlobalNamespace::GhostReactorManager::__cordl_internal_get_spawnSectionEntitiesWait() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnSectionEntitiesWait;
}
constexpr void GlobalNamespace::GhostReactorManager::__cordl_internal_set_spawnSectionEntitiesWait(::UnityEngine::WaitForSeconds*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnSectionEntitiesWait = value;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::GhostReactorManager::__cordl_internal_get_cachedBossEntity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedBossEntity;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::GhostReactorManager::__cordl_internal_get_cachedBossEntity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedBossEntity;
}
constexpr void GlobalNamespace::GhostReactorManager::__cordl_internal_set_cachedBossEntity(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cachedBossEntity = value;
}
constexpr ::UnityW<::GlobalNamespace::GRToolUpgradeStation>& GlobalNamespace::GhostReactorManager::__cordl_internal_get_upgradeStation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgradeStation;
}
constexpr ::UnityW<::GlobalNamespace::GRToolUpgradeStation> const& GlobalNamespace::GhostReactorManager::__cordl_internal_get_upgradeStation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgradeStation;
}
constexpr void GlobalNamespace::GhostReactorManager::__cordl_internal_set_upgradeStation(::UnityW<::GlobalNamespace::GRToolUpgradeStation>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upgradeStation = value;
}
inline void GlobalNamespace::GhostReactorManager::setStaticF_tempEntitiesToDestroy(::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityId>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityId>*, "tempEntitiesToDestroy", ::GlobalNamespace::GhostReactorManager*>(std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityId>*>(value));
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityId>* GlobalNamespace::GhostReactorManager::getStaticF_tempEntitiesToDestroy()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityId>*, "tempEntitiesToDestroy", ::GlobalNamespace::GhostReactorManager*>();
}
inline void GlobalNamespace::GhostReactorManager::setStaticF_entityDebugEnabled(bool  value)  {
::cordl_internals::setStaticField<bool, "entityDebugEnabled", ::GlobalNamespace::GhostReactorManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::GhostReactorManager::getStaticF_entityDebugEnabled()  {
return ::cordl_internals::getStaticField<bool, "entityDebugEnabled", ::GlobalNamespace::GhostReactorManager*>();
}
inline void GlobalNamespace::GhostReactorManager::setStaticF_noiseDebugEnabled(bool  value)  {
::cordl_internals::setStaticField<bool, "noiseDebugEnabled", ::GlobalNamespace::GhostReactorManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::GhostReactorManager::getStaticF_noiseDebugEnabled()  {
return ::cordl_internals::getStaticField<bool, "noiseDebugEnabled", ::GlobalNamespace::GhostReactorManager*>();
}
inline void GlobalNamespace::GhostReactorManager::setStaticF_bayUnlockEnabled(bool  value)  {
::cordl_internals::setStaticField<bool, "bayUnlockEnabled", ::GlobalNamespace::GhostReactorManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::GhostReactorManager::getStaticF_bayUnlockEnabled()  {
return ::cordl_internals::getStaticField<bool, "bayUnlockEnabled", ::GlobalNamespace::GhostReactorManager*>();
}
inline void GlobalNamespace::GhostReactorManager::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorManager::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(), 46}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorManager::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(), 47}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GhostReactorManager::IsAuthority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"IsAuthority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::GhostReactorManager::IsAuthorityPlayer(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"IsAuthorityPlayer", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player);
}
inline bool GlobalNamespace::GhostReactorManager::IsAuthorityPlayer(::Photon::Realtime::Player*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"IsAuthorityPlayer", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player);
}
inline ::Photon::Realtime::Player* GlobalNamespace::GhostReactorManager::GetAuthorityPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"GetAuthorityPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Realtime::Player*>(this, ___internal_method);
}
inline bool GlobalNamespace::GhostReactorManager::IsZoneActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"IsZoneActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::GhostReactorManager::IsPositionInZone(::UnityEngine::Vector3  pos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"IsPositionInZone", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pos);
}
inline bool GlobalNamespace::GhostReactorManager::IsValidClientRPC(::Photon::Realtime::Player*  sender)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"IsValidClientRPC", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sender);
}
inline bool GlobalNamespace::GhostReactorManager::IsValidClientRPC(::Photon::Realtime::Player*  sender, int32_t  entityNetId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"IsValidClientRPC", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sender, entityNetId);
}
inline bool GlobalNamespace::GhostReactorManager::IsValidClientRPC(::Photon::Realtime::Player*  sender, int32_t  entityNetId, ::UnityEngine::Vector3  pos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"IsValidClientRPC", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sender, entityNetId, pos);
}
inline bool GlobalNamespace::GhostReactorManager::IsValidClientRPC(::Photon::Realtime::Player*  sender, ::UnityEngine::Vector3  pos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"IsValidClientRPC", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sender, pos);
}
inline bool GlobalNamespace::GhostReactorManager::IsValidAuthorityRPC(::Photon::Realtime::Player*  sender)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"IsValidAuthorityRPC", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sender);
}
inline bool GlobalNamespace::GhostReactorManager::IsValidAuthorityRPC(::Photon::Realtime::Player*  sender, int32_t  entityNetId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"IsValidAuthorityRPC", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sender, entityNetId);
}
inline bool GlobalNamespace::GhostReactorManager::IsValidAuthorityRPC(::Photon::Realtime::Player*  sender, int32_t  entityNetId, ::UnityEngine::Vector3  pos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"IsValidAuthorityRPC", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sender, entityNetId, pos);
}
inline bool GlobalNamespace::GhostReactorManager::IsValidAuthorityRPC(::Photon::Realtime::Player*  sender, ::UnityEngine::Vector3  pos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"IsValidAuthorityRPC", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sender, pos);
}
inline ::UnityW<::GlobalNamespace::GhostReactorManager> GlobalNamespace::GhostReactorManager::Get(::GlobalNamespace::GameEntity*  gameEntity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"Get", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GhostReactorManager>>(nullptr, ___internal_method, gameEntity);
}
inline void GlobalNamespace::GhostReactorManager::RefreshShiftCredit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RefreshShiftCredit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorManager::RefreshShiftCreditRPC(::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RefreshShiftCreditRPC", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void GlobalNamespace::GhostReactorManager::SendMothershipId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"SendMothershipId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorManager::SendMothershipIdRPC(::StringW  mothershipId, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"SendMothershipIdRPC", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mothershipId, info);
}
inline void GlobalNamespace::GhostReactorManager::RequestCollectItem(::GlobalNamespace::GameEntityId  collectibleEntityId, ::GlobalNamespace::GameEntityId  collectorEntityId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestCollectItem", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<::GlobalNamespace::GameEntityId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collectibleEntityId, collectorEntityId);
}
inline void GlobalNamespace::GhostReactorManager::RequestDepositCollectible(::GlobalNamespace::GameEntityId  collectibleEntityId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestDepositCollectible", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collectibleEntityId);
}
inline void GlobalNamespace::GhostReactorManager::RequestCollectItemRPC(int32_t  collectibleEntityNetId, int32_t  collectorEntityNetId, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestCollectItemRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collectibleEntityNetId, collectorEntityNetId, info);
}
inline void GlobalNamespace::GhostReactorManager::ApplyCollectItemRPC(int32_t  collectibleEntityNetId, int32_t  collectorEntityNetId, int32_t  collectingPlayerActorNumber, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ApplyCollectItemRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collectibleEntityNetId, collectorEntityNetId, collectingPlayerActorNumber, info);
}
inline void GlobalNamespace::GhostReactorManager::RequestApplySeedExtractorState(int32_t  coreCount, int32_t  coresProcessedByOverdrive, int32_t  researchPoints, float_t  coreProcessingPercentage, float_t  overdriveSupply)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestApplySeedExtractorState", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, coreCount, coresProcessedByOverdrive, researchPoints, coreProcessingPercentage, overdriveSupply);
}
inline void GlobalNamespace::GhostReactorManager::RequestApplySeedExtractorStateRPC(int32_t  coreCount, int32_t  coresProcessedByOverdrive, int32_t  researchPoints, float_t  coreProcessingPercentage, float_t  overdriveSupply, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestApplySeedExtractorStateRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, coreCount, coresProcessedByOverdrive, researchPoints, coreProcessingPercentage, overdriveSupply, info);
}
inline void GlobalNamespace::GhostReactorManager::ApplySeedExtractorStateRPC(int32_t  playerActorNumber, int32_t  coreCount, int32_t  coresProcessedByOverdrive, int32_t  researchPoints, float_t  coreProcessingPercentage, float_t  overdriveSupply, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ApplySeedExtractorStateRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerActorNumber, coreCount, coresProcessedByOverdrive, researchPoints, coreProcessingPercentage, overdriveSupply, info);
}
inline void GlobalNamespace::GhostReactorManager::RequestDistillCollectible(::GlobalNamespace::GameEntityId  collectibleEntityId, ::Photon::Realtime::Player*  sender)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestDistillCollectible", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collectibleEntityId, sender);
}
inline void GlobalNamespace::GhostReactorManager::DistillItemRPC(int32_t  collectibleEntityNetId, int32_t  collectingPlayerActorNumber, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"DistillItemRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collectibleEntityNetId, collectingPlayerActorNumber, info);
}
inline void GlobalNamespace::GhostReactorManager::RequestChargeTool(::GlobalNamespace::GameEntityId  collectorEntityId, ::GlobalNamespace::GameEntityId  targetToolId, int32_t  targetEnergyDelta, bool  useCollectorEnergy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestChargeTool", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collectorEntityId, targetToolId, targetEnergyDelta, useCollectorEnergy);
}
inline void GlobalNamespace::GhostReactorManager::RequestChargeToolRPC(int32_t  collectorEntityNetId, int32_t  targetToolNetId, int32_t  targetEnergyDelta, bool  useCollectorEnergy, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestChargeToolRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collectorEntityNetId, targetToolNetId, targetEnergyDelta, useCollectorEnergy, info);
}
inline void GlobalNamespace::GhostReactorManager::ApplyChargeToolRPC(int32_t  collectorEntityNetId, int32_t  targetToolNetId, int32_t  targetEnergyDelta, bool  useCollectorEnergy, ::Photon::Realtime::Player*  collectingPlayer, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ApplyChargeToolRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collectorEntityNetId, targetToolNetId, targetEnergyDelta, useCollectorEnergy, collectingPlayer, info);
}
inline void GlobalNamespace::GhostReactorManager::RequestDepositCurrency(::GlobalNamespace::GameEntityId  collectorEntityId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestDepositCurrency", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collectorEntityId);
}
inline void GlobalNamespace::GhostReactorManager::RequestDepositCurrencyRPC(int32_t  collectorEntityNetId, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestDepositCurrencyRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collectorEntityNetId, info);
}
inline void GlobalNamespace::GhostReactorManager::ApplyDepositCurrencyRPC(int32_t  collectorEntityNetId, int32_t  targetPlayerActorNumber, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ApplyDepositCurrencyRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collectorEntityNetId, targetPlayerActorNumber, info);
}
inline void GlobalNamespace::GhostReactorManager::RequestEnemyHitPlayer(::GlobalNamespace::GhostReactor_EnemyType  type, ::GlobalNamespace::GameEntityId  hitByEntityId, ::GlobalNamespace::GRPlayer*  player, ::UnityEngine::Vector3  hitPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestEnemyHitPlayer", {}, {::i2c::type_of<::GlobalNamespace::GhostReactor_EnemyType>(), ::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<::GlobalNamespace::GRPlayer*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, hitByEntityId, player, hitPosition);
}
inline void GlobalNamespace::GhostReactorManager::RequestEnemyHitPlayer(::GlobalNamespace::GhostReactor_EnemyType  type, ::GlobalNamespace::GameEntityId  hitByEntityId, ::GlobalNamespace::GRPlayer*  player, ::UnityEngine::Vector3  hitPosition, ::UnityEngine::Vector3  hitImpulse)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestEnemyHitPlayer", {}, {::i2c::type_of<::GlobalNamespace::GhostReactor_EnemyType>(), ::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<::GlobalNamespace::GRPlayer*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, hitByEntityId, player, hitPosition, hitImpulse);
}
inline void GlobalNamespace::GhostReactorManager::ApplyEnemyHitPlayerRPC(::GlobalNamespace::GhostReactor_EnemyType  type, int32_t  entityNetId, ::UnityEngine::Vector3  hitPosition, ::UnityEngine::Vector3  hitImpulse, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ApplyEnemyHitPlayerRPC", {}, {::i2c::type_of<::GlobalNamespace::GhostReactor_EnemyType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, entityNetId, hitPosition, hitImpulse, info);
}
inline void GlobalNamespace::GhostReactorManager::OnEnemyHitPlayerInternal(::GlobalNamespace::GhostReactor_EnemyType  type, ::GlobalNamespace::GameEntityId  entityId, ::GlobalNamespace::GRPlayer*  player, ::UnityEngine::Vector3  hitPosition, ::UnityEngine::Vector3  hitImpulse)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"OnEnemyHitPlayerInternal", {}, {::i2c::type_of<::GlobalNamespace::GhostReactor_EnemyType>(), ::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<::GlobalNamespace::GRPlayer*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, entityId, player, hitPosition, hitImpulse);
}
inline void GlobalNamespace::GhostReactorManager::ReportLocalPlayerHit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ReportLocalPlayerHit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorManager::ReportLocalPlayerHitRPC(::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ReportLocalPlayerHitRPC", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void GlobalNamespace::GhostReactorManager::RequestPlayerRevive(::GlobalNamespace::GRReviveStation*  reviveStation, ::GlobalNamespace::GRPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestPlayerRevive", {}, {::i2c::type_of<::GlobalNamespace::GRReviveStation*>(), ::i2c::type_of<::GlobalNamespace::GRPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reviveStation, player);
}
inline void GlobalNamespace::GhostReactorManager::ApplyPlayerRevivedRPC(int32_t  reviveStationIndex, int32_t  playerActorNumber, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ApplyPlayerRevivedRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reviveStationIndex, playerActorNumber, info);
}
inline void GlobalNamespace::GhostReactorManager::RequestPlayerStateChange(::GlobalNamespace::GRPlayer*  player, ::GlobalNamespace::GRPlayer_GRPlayerState  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestPlayerStateChange", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer*>(), ::i2c::type_of<::GlobalNamespace::GRPlayer_GRPlayerState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, newState);
}
inline void GlobalNamespace::GhostReactorManager::PlayerStateChangeRPC(int32_t  playerResponsibleNumber, int32_t  playerActorNumber, int32_t  newState, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"PlayerStateChangeRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerResponsibleNumber, playerActorNumber, newState, info);
}
inline void GlobalNamespace::GhostReactorManager::RequestGrantPlayerShield(::GlobalNamespace::GRPlayer*  player, int32_t  shieldHp, int32_t  shieldFlags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestGrantPlayerShield", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, shieldHp, shieldFlags);
}
inline void GlobalNamespace::GhostReactorManager::RequestGrantPlayerShieldRPC(int32_t  shieldingPlayer, int32_t  playerToGrantShieldActorNumber, int32_t  shieldHp, int32_t  shieldFlags, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestGrantPlayerShieldRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shieldingPlayer, playerToGrantShieldActorNumber, shieldHp, shieldFlags, info);
}
inline void GlobalNamespace::GhostReactorManager::ApplyGrantPlayerShieldRPC(int32_t  shieldingPlayer, int32_t  playerToGrantShieldActorNumber, int32_t  shieldHp, int32_t  shieldFlags, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ApplyGrantPlayerShieldRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shieldingPlayer, playerToGrantShieldActorNumber, shieldHp, shieldFlags, info);
}
inline void GlobalNamespace::GhostReactorManager::RequestFireProjectile(::GlobalNamespace::GameEntityId  entityId, ::UnityEngine::Vector3  firingPosition, ::UnityEngine::Vector3  targetPosition, double_t  networkTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestFireProjectile", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entityId, firingPosition, targetPosition, networkTime);
}
inline void GlobalNamespace::GhostReactorManager::RequestFireProjectileRPC(int32_t  entityNetId, ::UnityEngine::Vector3  firingPosition, ::UnityEngine::Vector3  targetPosition, double_t  networkTime, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestFireProjectileRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entityNetId, firingPosition, targetPosition, networkTime, info);
}
inline void GlobalNamespace::GhostReactorManager::OnRequestFireProjectileInternal(::GlobalNamespace::GameEntityId  entityId, ::UnityEngine::Vector3  firingPosition, ::UnityEngine::Vector3  targetPosition, double_t  networkTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"OnRequestFireProjectileInternal", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entityId, firingPosition, targetPosition, networkTime);
}
inline void GlobalNamespace::GhostReactorManager::BroadcastHandprint(::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  orient, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"BroadcastHandprint", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pos, orient, info);
}
inline void GlobalNamespace::GhostReactorManager::OnAbilityDie(::GlobalNamespace::GameEntity*  entity, float_t  forcedRespawn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"OnAbilityDie", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entity, forcedRespawn);
}
inline void GlobalNamespace::GhostReactorManager::RequestShiftStartAuthority(bool  isFirstShift)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestShiftStartAuthority", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isFirstShift);
}
inline void GlobalNamespace::GhostReactorManager::ApplyShiftStartRPC(double_t  shiftStartTime, int32_t  randomSeed, ::StringW  gameIdGuid, bool  isFirstShift, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ApplyShiftStartRPC", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shiftStartTime, randomSeed, gameIdGuid, isFirstShift, info);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::GhostReactorManager::SpawnSectionEntitiesCoroutine(float_t  respawnCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"SpawnSectionEntitiesCoroutine", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, respawnCount);
}
inline void GlobalNamespace::GhostReactorManager::RequestShiftEnd()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestShiftEnd", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorManager::SendRequestShiftEndRPC()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"SendRequestShiftEndRPC", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorManager::ApplyShiftEndRPC(double_t  networkedTime, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ApplyShiftEndRPC", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, networkedTime, info);
}
inline bool GlobalNamespace::GhostReactorManager::ShouldEntitySurviveShift(::GlobalNamespace::GameEntity*  gameEntity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ShouldEntitySurviveShift", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gameEntity);
}
inline bool GlobalNamespace::GhostReactorManager::IsEnemy(::GlobalNamespace::GameEntity*  gameEntity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"IsEnemy", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gameEntity);
}
inline void GlobalNamespace::GhostReactorManager::InstantDeathForCurrentEnemies()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"InstantDeathForCurrentEnemies", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorManager::RequestRestoreBossHP()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestRestoreBossHP", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorManager::RequestHurtBossHP()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestHurtBossHP", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorManager::RequestKillBossEyes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestKillBossEyes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorManager::RequestKillBossSummoned()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestKillBossSummoned", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorManager::RequestGoBackBossPhase()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestGoBackBossPhase", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorManager::RequestAdvanceBossPhase()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestAdvanceBossPhase", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorManager::RequestBossBehavior(::GlobalNamespace::GREnemyBossMoon_Behavior  bossBehavior)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestBossBehavior", {}, {::i2c::type_of<::GlobalNamespace::GREnemyBossMoon_Behavior>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bossBehavior);
}
inline ::UnityW<::GlobalNamespace::GameEntity> GlobalNamespace::GhostReactorManager::GetBossEntity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"GetBossEntity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GameEntity>>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorManager::ClearCachedBossEntity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ClearCachedBossEntity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorManager::ReportEnemyDeath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ReportEnemyDeath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorManager::ReportCoreCollection(::GlobalNamespace::GRPlayer*  player, ::GlobalNamespace::ProgressionManager_CoreType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ReportCoreCollection", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer*>(), ::i2c::type_of<::GlobalNamespace::ProgressionManager_CoreType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, type);
}
inline void GlobalNamespace::GhostReactorManager::ReportPlayerDeath(::GlobalNamespace::GRPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ReportPlayerDeath", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::GhostReactorManager::PromotionBotActivePlayerRequest(int32_t  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"PromotionBotActivePlayerRequest", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void GlobalNamespace::GhostReactorManager::PromotionBotActivePlayerRequestRPC(int32_t  state, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"PromotionBotActivePlayerRequestRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, info);
}
inline void GlobalNamespace::GhostReactorManager::PromotionBotActivePlayerResponseRPC(int32_t  actorNumber, int32_t  state, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"PromotionBotActivePlayerResponseRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, actorNumber, state, info);
}
inline void GlobalNamespace::GhostReactorManager::BroadcastScoreboardPage(int32_t  scoreboardPage, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"BroadcastScoreboardPage", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scoreboardPage, info);
}
inline void GlobalNamespace::GhostReactorManager::BroadcastStartingProgression(int32_t  points, int32_t  redeemedPoints, double_t  shiftJoinedTime, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"BroadcastStartingProgression", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, points, redeemedPoints, shiftJoinedTime, info);
}
inline void GlobalNamespace::GhostReactorManager::RequestPlayerAction(::GlobalNamespace::GhostReactorManager_GRPlayerAction  playerAction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestPlayerAction", {}, {::i2c::type_of<::GlobalNamespace::GhostReactorManager_GRPlayerAction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerAction);
}
inline void GlobalNamespace::GhostReactorManager::RequestPlayerAction(::GlobalNamespace::GhostReactorManager_GRPlayerAction  playerAction, int32_t  param0)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestPlayerAction", {}, {::i2c::type_of<::GlobalNamespace::GhostReactorManager_GRPlayerAction>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerAction, param0);
}
inline void GlobalNamespace::GhostReactorManager::RequestPlayerAction(::GlobalNamespace::GhostReactorManager_GRPlayerAction  playerAction, int32_t  param0, int32_t  param1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestPlayerAction", {}, {::i2c::type_of<::GlobalNamespace::GhostReactorManager_GRPlayerAction>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerAction, param0, param1);
}
inline bool GlobalNamespace::GhostReactorManager::VerifyShuttleInteractability(::GlobalNamespace::GRPlayer*  player, int32_t  shuttleIdx, bool  ignoreOwnership)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"VerifyShuttleInteractability", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player, shuttleIdx, ignoreOwnership);
}
inline void GlobalNamespace::GhostReactorManager::RequestPlayerActionRPC(int32_t  playerAction, int32_t  param0, int32_t  param1, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestPlayerActionRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerAction, param0, param1, info);
}
inline void GlobalNamespace::GhostReactorManager::ApplyPlayerActionRPC(int32_t  playerAction, int32_t  param0, int32_t  param1, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ApplyPlayerActionRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerAction, param0, param1, info);
}
inline ::UnityW<::GlobalNamespace::GRToolUpgradePurchaseStationFull> GlobalNamespace::GhostReactorManager::GetToolUpgradeStationFullForIndex(int32_t  idx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"GetToolUpgradeStationFullForIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GRToolUpgradePurchaseStationFull>>(this, ___internal_method, idx);
}
inline int32_t GlobalNamespace::GhostReactorManager::GetIndexForToolUpgradeStationFull(::GlobalNamespace::GRToolUpgradePurchaseStationFull*  station)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"GetIndexForToolUpgradeStationFull", {}, {::i2c::type_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, station);
}
inline void GlobalNamespace::GhostReactorManager::RequestNetworkShelfAndItemChange(::GlobalNamespace::GRToolUpgradePurchaseStationFull*  station, int32_t  shelf, int32_t  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestNetworkShelfAndItemChange", {}, {::i2c::type_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, station, shelf, item);
}
inline void GlobalNamespace::GhostReactorManager::SelectToolShelfAndItemRPCRouted(int32_t  stationIndex, int32_t  shelf, int32_t  item, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"SelectToolShelfAndItemRPCRouted", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stationIndex, shelf, item, info);
}
inline void GlobalNamespace::GhostReactorManager::RequestPurchaseToolOrUpgrade(::GlobalNamespace::GRToolUpgradePurchaseStationFull*  station, int32_t  shelf, int32_t  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestPurchaseToolOrUpgrade", {}, {::i2c::type_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, station, shelf, item);
}
inline void GlobalNamespace::GhostReactorManager::RequestPurchaseRPCRoutedAuthority(int32_t  stationIndex, int32_t  shelf, int32_t  item, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestPurchaseRPCRoutedAuthority", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stationIndex, shelf, item, info);
}
inline void GlobalNamespace::GhostReactorManager::NotifyPurchaseToolOrUpgradeRPCRouted(int32_t  actorNumber, int32_t  stationIndex, int32_t  shelf, int32_t  item, bool  success, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"NotifyPurchaseToolOrUpgradeRPCRouted", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, actorNumber, stationIndex, shelf, item, success, info);
}
inline void GlobalNamespace::GhostReactorManager::RequestStationExclusivity(::GlobalNamespace::GRToolUpgradePurchaseStationFull*  station)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestStationExclusivity", {}, {::i2c::type_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, station);
}
inline void GlobalNamespace::GhostReactorManager::SetActivePlayerAuthority(::GlobalNamespace::GRToolUpgradePurchaseStationFull*  station, int32_t  actorNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"SetActivePlayerAuthority", {}, {::i2c::type_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, station, actorNumber);
}
inline void GlobalNamespace::GhostReactorManager::RequestStationExclusivityRPCRoutedAuthority(int32_t  stationIndex, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestStationExclusivityRPCRoutedAuthority", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stationIndex, info);
}
inline void GlobalNamespace::GhostReactorManager::SetToolStationActivePlayerRPCRouted(int32_t  stationIndex, int32_t  activeOwner, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"SetToolStationActivePlayerRPCRouted", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stationIndex, activeOwner, info);
}
inline void GlobalNamespace::GhostReactorManager::BroadcastHandleAndSelectionWheelPosition(::GlobalNamespace::GRToolUpgradePurchaseStationFull*  station, int32_t  handlePos, int32_t  wheelPos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"BroadcastHandleAndSelectionWheelPosition", {}, {::i2c::type_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, station, handlePos, wheelPos);
}
inline void GlobalNamespace::GhostReactorManager::SetHandleAndSelectionWheelPositionRPCRouted(int32_t  stationIndex, int32_t  handlePos, int32_t  wheelPos, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"SetHandleAndSelectionWheelPositionRPCRouted", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stationIndex, handlePos, wheelPos, info);
}
inline void GlobalNamespace::GhostReactorManager::RequestHackToolStation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestHackToolStation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorManager::ToolPurchaseV2_RPC(::GlobalNamespace::GhostReactorManager_ToolPurchaseActionV2  command, int32_t  initiatorID, int32_t  stationIndex, int32_t  param1, int32_t  param2, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ToolPurchaseV2_RPC", {}, {::i2c::type_of<::GlobalNamespace::GhostReactorManager_ToolPurchaseActionV2>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, command, initiatorID, stationIndex, param1, param2, info);
}
inline void GlobalNamespace::GhostReactorManager::ToolPurchaseStationRequest(int32_t  stationIndex, ::GlobalNamespace::GhostReactorManager_ToolPurchaseStationAction  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ToolPurchaseStationRequest", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GhostReactorManager_ToolPurchaseStationAction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stationIndex, action);
}
inline void GlobalNamespace::GhostReactorManager::ToolPurchaseStationRequestRPC(int32_t  stationIndex, ::GlobalNamespace::GhostReactorManager_ToolPurchaseStationAction  action, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ToolPurchaseStationRequestRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GhostReactorManager_ToolPurchaseStationAction>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stationIndex, action, info);
}
inline void GlobalNamespace::GhostReactorManager::ToolPurchaseStationResponseRPC(int32_t  stationIndex, ::GlobalNamespace::GhostReactorManager_ToolPurchaseStationResponse  responseType, int32_t  dataA, int32_t  dataB, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ToolPurchaseStationResponseRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GhostReactorManager_ToolPurchaseStationResponse>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stationIndex, responseType, dataA, dataB, info);
}
inline void GlobalNamespace::GhostReactorManager::ToolPurchaseResponseLocal(int32_t  stationIndex, ::GlobalNamespace::GhostReactorManager_ToolPurchaseStationResponse  responseType, int32_t  dataA, int32_t  dataB)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ToolPurchaseResponseLocal", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GhostReactorManager_ToolPurchaseStationResponse>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stationIndex, responseType, dataA, dataB);
}
inline void GlobalNamespace::GhostReactorManager::ToolUpgradeStationRequestUpgrade(::GlobalNamespace::GRToolProgressionManager_ToolParts  UpgradeID, int32_t  entityNetId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ToolUpgradeStationRequestUpgrade", {}, {::i2c::type_of<::GlobalNamespace::GRToolProgressionManager_ToolParts>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, UpgradeID, entityNetId);
}
inline void GlobalNamespace::GhostReactorManager::ToolSnapRequestUpgrade(int32_t  upgradeNetID, ::GlobalNamespace::GRToolProgressionManager_ToolParts  UpgradeID, int32_t  entityNetId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ToolSnapRequestUpgrade", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GRToolProgressionManager_ToolParts>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, upgradeNetID, UpgradeID, entityNetId);
}
inline void GlobalNamespace::GhostReactorManager::ToolSnapRequestUpgradeRPC(int32_t  upgradeNetID, ::GlobalNamespace::GRToolProgressionManager_ToolParts  UpgradeID, int32_t  entityNetId, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ToolSnapRequestUpgradeRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GRToolProgressionManager_ToolParts>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, upgradeNetID, UpgradeID, entityNetId, info);
}
inline void GlobalNamespace::GhostReactorManager::ToolUpgradeStationRequestUpgradeRPC(::GlobalNamespace::GRToolProgressionManager_ToolParts  UpgradeID, int32_t  entityNetId, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ToolUpgradeStationRequestUpgradeRPC", {}, {::i2c::type_of<::GlobalNamespace::GRToolProgressionManager_ToolParts>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, UpgradeID, entityNetId, info);
}
inline void GlobalNamespace::GhostReactorManager::UpgradeToolRemoteRPC(::GlobalNamespace::GRToolProgressionManager_ToolParts  UpgradeID, int32_t  entityNetId, bool  applyCost, int32_t  playerNetId, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"UpgradeToolRemoteRPC", {}, {::i2c::type_of<::GlobalNamespace::GRToolProgressionManager_ToolParts>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, UpgradeID, entityNetId, applyCost, playerNetId, info);
}
inline bool GlobalNamespace::GhostReactorManager::DoesUserHaveResearchUnlocked(int32_t  UserID, ::StringW  ResearchID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"DoesUserHaveResearchUnlocked", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, UserID, ResearchID);
}
inline void GlobalNamespace::GhostReactorManager::ToolPlacedInUpgradeStation(::GlobalNamespace::GameEntity*  entity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ToolPlacedInUpgradeStation", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entity);
}
inline void GlobalNamespace::GhostReactorManager::PlacedToolInUpgradeStationRPC(int32_t  entityNetId, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"PlacedToolInUpgradeStationRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entityNetId, info);
}
inline void GlobalNamespace::GhostReactorManager::UpgradeToolAtToolStation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"UpgradeToolAtToolStation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorManager::UpgradeToolAtToolStationRPC(::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"UpgradeToolAtToolStationRPC", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void GlobalNamespace::GhostReactorManager::LocalEjectToolInUpgradeStation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"LocalEjectToolInUpgradeStation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorManager::EntityEnteredDropZone(::GlobalNamespace::GameEntity*  entity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"EntityEnteredDropZone", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entity);
}
inline void GlobalNamespace::GhostReactorManager::EntityEnteredDropZoneRPC(int32_t  entityNetId, int64_t  position, int32_t  rotation, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"EntityEnteredDropZoneRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entityNetId, position, rotation, info);
}
inline void GlobalNamespace::GhostReactorManager::LocalEntityEnteredDropZone(::GlobalNamespace::GameEntityId  entityId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"LocalEntityEnteredDropZone", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entityId, position, rotation);
}
inline void GlobalNamespace::GhostReactorManager::RequestRecycleScanItem(::GlobalNamespace::GameEntityId  gameEntityId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestRecycleScanItem", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameEntityId);
}
inline void GlobalNamespace::GhostReactorManager::ApplyRecycleScanItemRPC(int32_t  netId, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ApplyRecycleScanItemRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, netId, info);
}
inline void GlobalNamespace::GhostReactorManager::RequestRecycleItem(int32_t  lastHeldActorNumber, ::GlobalNamespace::GameEntityId  toolId, ::GlobalNamespace::GRTool_GRToolType  toolType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestRecycleItem", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<::GlobalNamespace::GRTool_GRToolType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lastHeldActorNumber, toolId, toolType);
}
inline void GlobalNamespace::GhostReactorManager::ApplyRecycleItemRPC(int32_t  lastHeldActorNumber, int32_t  toolNetId, ::GlobalNamespace::GRTool_GRToolType  toolType, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ApplyRecycleItemRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GRTool_GRToolType>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lastHeldActorNumber, toolNetId, toolType, info);
}
inline void GlobalNamespace::GhostReactorManager::RequestSentientCorePerformJump(::GlobalNamespace::GameEntity*  entity, ::UnityEngine::Vector3  startPos, ::UnityEngine::Vector3  normal, ::UnityEngine::Vector3  direction, float_t  waitTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"RequestSentientCorePerformJump", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entity, startPos, normal, direction, waitTime);
}
inline void GlobalNamespace::GhostReactorManager::SentientCorePerformJumpRPC(int32_t  entityNetId, ::UnityEngine::Vector3  startPosition, ::UnityEngine::Vector3  surfaceNormal, ::UnityEngine::Vector3  jumpDirection, double_t  jumpStartTime, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"SentientCorePerformJumpRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entityNetId, startPosition, surfaceNormal, jumpDirection, jumpStartTime, info);
}
inline void GlobalNamespace::GhostReactorManager::WriteDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorManager::ReadDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorManager::WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::GhostReactorManager::ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::GhostReactorManager::OnNewPlayerEnteredGhostReactor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"OnNewPlayerEnteredGhostReactor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorManager::OnEntityZoneClear(::GlobalNamespace::GTZone  zoneId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"OnEntityZoneClear", {}, {::i2c::type_of<::GlobalNamespace::GTZone>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, zoneId);
}
inline void GlobalNamespace::GhostReactorManager::OnZoneCreate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"OnZoneCreate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorManager::OnZoneInit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"OnZoneInit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorManager::OnZoneClear(::GlobalNamespace::ZoneClearReason  reason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"OnZoneClear", {}, {::i2c::type_of<::GlobalNamespace::ZoneClearReason>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reason);
}
inline bool GlobalNamespace::GhostReactorManager::IsZoneReady()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"IsZoneReady", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::GhostReactorManager::ShouldClearZone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ShouldClearZone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorManager::OnCreateGameEntity(::GlobalNamespace::GameEntity*  entity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"OnCreateGameEntity", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entity);
}
inline void GlobalNamespace::GhostReactorManager::SerializeZoneData(::System::IO::BinaryWriter*  writer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"SerializeZoneData", {}, {::i2c::type_of<::System::IO::BinaryWriter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline void GlobalNamespace::GhostReactorManager::DeserializeZoneData(::System::IO::BinaryReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"DeserializeZoneData", {}, {::i2c::type_of<::System::IO::BinaryReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline int64_t GlobalNamespace::GhostReactorManager::ProcessMigratedGameEntityCreateData(::GlobalNamespace::GameEntity*  entity, int64_t  createData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ProcessMigratedGameEntityCreateData", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, entity, createData);
}
inline bool GlobalNamespace::GhostReactorManager::ValidateMigratedGameEntity(int32_t  netId, int32_t  entityTypeId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, int64_t  createData, int32_t  actorNr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ValidateMigratedGameEntity", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, netId, entityTypeId, position, rotation, createData, actorNr);
}
inline bool GlobalNamespace::GhostReactorManager::ValidateCreateMultipleItems(int32_t  zoneId, ::ArrayW<uint8_t>  compressedStateData, int32_t  EntityCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ValidateCreateMultipleItems", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, zoneId, compressedStateData, EntityCount);
}
inline bool GlobalNamespace::GhostReactorManager::ValidateCreateItem(int32_t  nedId, int32_t  entityTypeId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, int64_t  createData, int32_t  createdByEntityNetId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ValidateCreateItem", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, nedId, entityTypeId, position, rotation, createData, createdByEntityNetId);
}
inline bool GlobalNamespace::GhostReactorManager::ValidateCreateItemBatchSize(int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"ValidateCreateItemBatchSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, size);
}
inline void GlobalNamespace::GhostReactorManager::SerializeZoneEntityData(::System::IO::BinaryWriter*  writer, ::GlobalNamespace::GameEntity*  entity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"SerializeZoneEntityData", {}, {::i2c::type_of<::System::IO::BinaryWriter*>(), ::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, entity);
}
inline void GlobalNamespace::GhostReactorManager::DeserializeZoneEntityData(::System::IO::BinaryReader*  reader, ::GlobalNamespace::GameEntity*  entity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"DeserializeZoneEntityData", {}, {::i2c::type_of<::System::IO::BinaryReader*>(), ::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, entity);
}
inline void GlobalNamespace::GhostReactorManager::OnTapLocal(bool  isLeftHand, ::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot, ::GlobalNamespace::GorillaSurfaceOverride*  surfaceOverride, ::UnityEngine::Vector3  handVelocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"OnTapLocal", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::GlobalNamespace::GorillaSurfaceOverride*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isLeftHand, pos, rot, surfaceOverride, handVelocity);
}
inline void GlobalNamespace::GhostReactorManager::OnSharedTap(::GlobalNamespace::VRRig*  rig, ::UnityEngine::Vector3  tapPos, float_t  handTapSpeed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"OnSharedTap", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig, tapPos, handTapSpeed);
}
inline void GlobalNamespace::GhostReactorManager::SerializeZonePlayerData(::System::IO::BinaryWriter*  writer, int32_t  actorNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"SerializeZonePlayerData", {}, {::i2c::type_of<::System::IO::BinaryWriter*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, actorNumber);
}
inline void GlobalNamespace::GhostReactorManager::DeserializeZonePlayerData(::System::IO::BinaryReader*  reader, int32_t  actorNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"DeserializeZonePlayerData", {}, {::i2c::type_of<::System::IO::BinaryReader*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, actorNumber);
}
inline bool GlobalNamespace::GhostReactorManager::DebugIsToolStationHacked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"DebugIsToolStationHacked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::GhostReactorManager::get_AggroDisabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {"get_AggroDisabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GlobalNamespace::GhostReactorManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorManager::CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void GlobalNamespace::GhostReactorManager::CopyStateToBackingFields()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GhostReactorManager*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GhostReactorManager* GlobalNamespace::GhostReactorManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GhostReactorManager*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGameEntityZoneComponent"
constexpr  GlobalNamespace::GhostReactorManager::operator ::GlobalNamespace::IGameEntityZoneComponent*() noexcept {
return static_cast<::GlobalNamespace::IGameEntityZoneComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameEntityZoneComponent"
constexpr ::GlobalNamespace::IGameEntityZoneComponent* GlobalNamespace::GhostReactorManager::i___GlobalNamespace__IGameEntityZoneComponent() noexcept {
return static_cast<::GlobalNamespace::IGameEntityZoneComponent*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GhostReactorManager::GhostReactorManager()   {
}
constexpr ::GlobalNamespace::GTZone  GlobalNamespace::GhostReactorManager::GT_ZONE_GHOSTREACTOR{static_cast<int32_t>(0x18)};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75::*)(int32_t)>(&::GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x58562c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75::*)()>(&::GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x586051c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75::*)()>(&::GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75::MoveNext)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5860520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75::*)()>(&::GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58605e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75::*)()>(&::GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x58605f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75::*)()>(&::GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5860628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactorManager>& GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactorManager> const& GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GhostReactorManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr float_t& GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75::__cordl_internal_get_respawnCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___respawnCount;
}
constexpr float_t const& GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75::__cordl_internal_get_respawnCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___respawnCount;
}
constexpr void GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75::__cordl_internal_set_respawnCount(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___respawnCount = value;
}
constexpr int32_t& GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75::__cordl_internal_get__initialFrameCount_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialFrameCount_5__2;
}
constexpr int32_t const& GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75::__cordl_internal_get__initialFrameCount_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialFrameCount_5__2;
}
constexpr void GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75::__cordl_internal_set__initialFrameCount_5__2(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initialFrameCount_5__2 = value;
}
inline void GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75* GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75()   {
}
