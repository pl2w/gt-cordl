#pragma once
// IWYU pragma private; include "GlobalNamespace/GameEntityManager.hpp"
#include "GlobalNamespace/zzzz__GTZone_impl.hpp"
#include "GlobalNamespace/zzzz__GameEntityManager_ZoneState_impl.hpp"
#include "GlobalNamespace/zzzz__NetworkComponent_impl.hpp"
#include "GlobalNamespace/zzzz__ZoneClearReason_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/zzzz__Component_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GameEntityManager_def.hpp"
#include "GlobalNamespace/zzzz__CallLimiter_def.hpp"
#include "GlobalNamespace/zzzz__CallLimitersList_2_def.hpp"
#include "GlobalNamespace/zzzz__CustomMapsGameManager_def.hpp"
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include "GlobalNamespace/zzzz__GameAgentManager_def.hpp"
#include "GlobalNamespace/zzzz__GameEntityCreateData_def.hpp"
#include "GlobalNamespace/zzzz__GameEntityData_def.hpp"
#include "GlobalNamespace/zzzz__GameEntityId_def.hpp"
#include "GlobalNamespace/zzzz__GameEntityManager_AttachmentData_def.hpp"
#include "GlobalNamespace/zzzz__GameEntityManager_RPC_def.hpp"
#include "GlobalNamespace/zzzz__GameEntityManager_ScenePlacedRecord_def.hpp"
#include "GlobalNamespace/zzzz__GameEntityManager_ZoneStateRequest_def.hpp"
#include "GlobalNamespace/zzzz__GameEntityManager_ZoneState_def.hpp"
#include "GlobalNamespace/zzzz__GameEntityManager_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__GameHitData_def.hpp"
#include "GlobalNamespace/zzzz__GamePlayer_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactorManager_def.hpp"
#include "GlobalNamespace/zzzz__IGameEntityZoneComponent_def.hpp"
#include "GlobalNamespace/zzzz__IRequestableOwnershipGuardCallbacks_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemTick_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__RequestableOwnershipGuard_def.hpp"
#include "GlobalNamespace/zzzz__RigContainer_def.hpp"
#include "GlobalNamespace/zzzz__SnapJointType_def.hpp"
#include "GlobalNamespace/zzzz__SuperInfectionManager_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "Photon/Pun/zzzz__PhotonView_def.hpp"
#include "Photon/Pun/zzzz__RpcTarget_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/IO/zzzz__BinaryReader_def.hpp"
#include "System/IO/zzzz__BinaryWriter_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__BoxCollider_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.add_onZoneStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(::GlobalNamespace::GameEntityManager_ZoneStartEvent*)>(&::GlobalNamespace::GameEntityManager::add_onZoneStart)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x58162bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"add_onZoneStart", {}, {::i2c::type_of<::GlobalNamespace::GameEntityManager_ZoneStartEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.remove_onZoneStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(::GlobalNamespace::GameEntityManager_ZoneStartEvent*)>(&::GlobalNamespace::GameEntityManager::remove_onZoneStart)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5816358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"remove_onZoneStart", {}, {::i2c::type_of<::GlobalNamespace::GameEntityManager_ZoneStartEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.add_onZoneClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(::GlobalNamespace::GameEntityManager_ZoneClearEvent*)>(&::GlobalNamespace::GameEntityManager::add_onZoneClear)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x58163f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"add_onZoneClear", {}, {::i2c::type_of<::GlobalNamespace::GameEntityManager_ZoneClearEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.remove_onZoneClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(::GlobalNamespace::GameEntityManager_ZoneClearEvent*)>(&::GlobalNamespace::GameEntityManager::remove_onZoneClear)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5816490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"remove_onZoneClear", {}, {::i2c::type_of<::GlobalNamespace::GameEntityManager_ZoneClearEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.add_OnAuthorityChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(::GlobalNamespace::GameEntityManager_AuthorityChangeEvent*)>(&::GlobalNamespace::GameEntityManager::add_OnAuthorityChanged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x581652c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"add_OnAuthorityChanged", {}, {::i2c::type_of<::GlobalNamespace::GameEntityManager_AuthorityChangeEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.remove_OnAuthorityChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(::GlobalNamespace::GameEntityManager_AuthorityChangeEvent*)>(&::GlobalNamespace::GameEntityManager::remove_OnAuthorityChanged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x58165c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"remove_OnAuthorityChanged", {}, {::i2c::type_of<::GlobalNamespace::GameEntityManager_AuthorityChangeEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.add_OnZoneActiveChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(::GlobalNamespace::GameEntityManager_ZoneActiveChangeEvent*)>(&::GlobalNamespace::GameEntityManager::add_OnZoneActiveChanged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5816664;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"add_OnZoneActiveChanged", {}, {::i2c::type_of<::GlobalNamespace::GameEntityManager_ZoneActiveChangeEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.remove_OnZoneActiveChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(::GlobalNamespace::GameEntityManager_ZoneActiveChangeEvent*)>(&::GlobalNamespace::GameEntityManager::remove_OnZoneActiveChanged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5816700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"remove_OnZoneActiveChanged", {}, {::i2c::type_of<::GlobalNamespace::GameEntityManager_ZoneActiveChangeEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.get_activeManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GameEntityManager> (*)()>(&::GlobalNamespace::GameEntityManager::get_activeManager)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x581679c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"get_activeManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.set_activeManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GameEntityManager*)>(&::GlobalNamespace::GameEntityManager::set_activeManager)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x58167f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"set_activeManager", {}, {::i2c::type_of<::GlobalNamespace::GameEntityManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.get_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameEntityManager::*)()>(&::GlobalNamespace::GameEntityManager::get_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5816854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"get_TickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.set_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(bool)>(&::GlobalNamespace::GameEntityManager::set_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x581685c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.get_PendingTableData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameEntityManager::*)()>(&::GlobalNamespace::GameEntityManager::get_PendingTableData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5816864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"get_PendingTableData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.set_PendingTableData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(bool)>(&::GlobalNamespace::GameEntityManager::set_PendingTableData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x581686c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"set_PendingTableData", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)()>(&::GlobalNamespace::GameEntityManager::Awake)> {
  constexpr static std::size_t size = 0x8bc;
  constexpr static std::size_t addrs = 0x5816874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GameEntityManager*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.RegisterScenePlacedEntities
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)()>(&::GlobalNamespace::GameEntityManager::RegisterScenePlacedEntities)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5817c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"RegisterScenePlacedEntities", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.RegisterSingleScenePlacedEntity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(::GlobalNamespace::GameEntity*)>(&::GlobalNamespace::GameEntityManager::RegisterSingleScenePlacedEntity)> {
  constexpr static std::size_t size = 0x63c;
  constexpr static std::size_t addrs = 0x5817eb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"RegisterSingleScenePlacedEntity", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.EnsureScenePlacedRecord
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(::GlobalNamespace::GameEntity*)>(&::GlobalNamespace::GameEntityManager::EnsureScenePlacedRecord)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x581866c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"EnsureScenePlacedRecord", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.ResetScenePlacedTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GameEntity*, ::by_ref<::GlobalNamespace::GameEntityManager_ScenePlacedRecord>)>(&::GlobalNamespace::GameEntityManager::ResetScenePlacedTransform)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x5818f0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"ResetScenePlacedTransform", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GameEntityManager_ScenePlacedRecord>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.ReleaseScenePlacedHold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(::GlobalNamespace::GameEntity*)>(&::GlobalNamespace::GameEntityManager::ReleaseScenePlacedHold)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x581919c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"ReleaseScenePlacedHold", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.DetachScenePlacedFromRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GameEntity*)>(&::GlobalNamespace::GameEntityManager::DetachScenePlacedFromRig)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x58193dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"DetachScenePlacedFromRig", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.MoveScenePlacedToHomeScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GameEntity*)>(&::GlobalNamespace::GameEntityManager::MoveScenePlacedToHomeScene)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x58194e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"MoveScenePlacedToHomeScene", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)()>(&::GlobalNamespace::GameEntityManager::OnEnable)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x58196b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GameEntityManager*>(), 46}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)()>(&::GlobalNamespace::GameEntityManager::OnDisable)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x5819c24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GameEntityManager*>(), 47}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)()>(&::GlobalNamespace::GameEntityManager::OnDestroy)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x5819fac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.GetManagerForZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GameEntityManager> (*)(::GlobalNamespace::GTZone)>(&::GlobalNamespace::GameEntityManager::GetManagerForZone)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x581a1ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"GetManagerForZone", {}, {::i2c::type_of<::GlobalNamespace::GTZone>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)()>(&::GlobalNamespace::GameEntityManager::Tick)> {
  constexpr static std::size_t size = 0x8ec;
  constexpr static std::size_t addrs = 0x581a2c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.AddGameEntity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameEntityId (::GlobalNamespace::GameEntityManager::*)(::GlobalNamespace::GameEntity*)>(&::GlobalNamespace::GameEntityManager::AddGameEntity)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x581b12c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"AddGameEntity", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.AddGameEntity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameEntityId (::GlobalNamespace::GameEntityManager::*)(int32_t, ::GlobalNamespace::GameEntity*)>(&::GlobalNamespace::GameEntityManager::AddGameEntity)> {
  constexpr static std::size_t size = 0x4f8;
  constexpr static std::size_t addrs = 0x5818840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"AddGameEntity", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.FindNewEntityIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GameEntityManager::*)()>(&::GlobalNamespace::GameEntityManager::FindNewEntityIndex)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x581b48c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"FindNewEntityIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.RemoveGameEntity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(::GlobalNamespace::GameEntity*)>(&::GlobalNamespace::GameEntityManager::RemoveGameEntity)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5818d38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"RemoveGameEntity", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.GetGameEntities
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>* (::GlobalNamespace::GameEntityManager::*)()>(&::GlobalNamespace::GameEntityManager::GetGameEntities)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x581b5dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"GetGameEntities", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.IsValidNetId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameEntityManager::*)(int32_t)>(&::GlobalNamespace::GameEntityManager::IsValidNetId)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x581b5e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"IsValidNetId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.FindOpenIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GameEntityManager::*)()>(&::GlobalNamespace::GameEntityManager::FindOpenIndex)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x581b684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"FindOpenIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.GetEntityIdFromNetId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameEntityId (::GlobalNamespace::GameEntityManager::*)(int32_t)>(&::GlobalNamespace::GameEntityManager::GetEntityIdFromNetId)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x581b6b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"GetEntityIdFromNetId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.GetNetIdFromEntityId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GameEntityManager::*)(::GlobalNamespace::GameEntityId)>(&::GlobalNamespace::GameEntityManager::GetNetIdFromEntityId)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x581b75c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"GetNetIdFromEntityId", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.ClearPendingRPCBatches
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)()>(&::GlobalNamespace::GameEntityManager::ClearPendingRPCBatches)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x581ad00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"ClearPendingRPCBatches", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.IsAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameEntityManager::*)()>(&::GlobalNamespace::GameEntityManager::IsAuthority)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x581b780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GameEntityManager*>(), 64}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.IsAuthorityPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameEntityManager::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GameEntityManager::IsAuthorityPlayer)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x581b814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"IsAuthorityPlayer", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.IsAuthorityPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameEntityManager::*)(::Photon::Realtime::Player*)>(&::GlobalNamespace::GameEntityManager::IsAuthorityPlayer)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x581b844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"IsAuthorityPlayer", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.IsZoneAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameEntityManager::*)()>(&::GlobalNamespace::GameEntityManager::IsZoneAuthority)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x581b908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"IsZoneAuthority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.HasAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameEntityManager::*)()>(&::GlobalNamespace::GameEntityManager::HasAuthority)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x581b918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"HasAuthority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.GetAuthorityPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Realtime::Player* (::GlobalNamespace::GameEntityManager::*)()>(&::GlobalNamespace::GameEntityManager::GetAuthorityPlayer)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x581b930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"GetAuthorityPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.IsZoneActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameEntityManager::*)()>(&::GlobalNamespace::GameEntityManager::IsZoneActive)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x581b954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GameEntityManager*>(), 65}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.IsSuppressZonesInVStumpEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::GameEntityManager::IsSuppressZonesInVStumpEnabled)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x581badc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"IsSuppressZonesInVStumpEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.IsPositionInManagerBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameEntityManager::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::GameEntityManager::IsPositionInManagerBounds)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x581bb80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GameEntityManager*>(), 66}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.IsValidClientRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameEntityManager::*)(::Photon::Realtime::Player*)>(&::GlobalNamespace::GameEntityManager::IsValidClientRPC)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x581bd30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GameEntityManager*>(), 67}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.IsValidClientRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameEntityManager::*)(::Photon::Realtime::Player*, int32_t)>(&::GlobalNamespace::GameEntityManager::IsValidClientRPC)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x581bde4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"IsValidClientRPC", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.IsValidClientRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameEntityManager::*)(::Photon::Realtime::Player*, int32_t, ::UnityEngine::Vector3)>(&::GlobalNamespace::GameEntityManager::IsValidClientRPC)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x581be2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"IsValidClientRPC", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.IsValidClientRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameEntityManager::*)(::Photon::Realtime::Player*, ::UnityEngine::Vector3)>(&::GlobalNamespace::GameEntityManager::IsValidClientRPC)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x581bebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"IsValidClientRPC", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.IsValidAuthorityRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameEntityManager::*)(::Photon::Realtime::Player*)>(&::GlobalNamespace::GameEntityManager::IsValidAuthorityRPC)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x581bf2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"IsValidAuthorityRPC", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.IsValidAuthorityRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameEntityManager::*)(::Photon::Realtime::Player*, int32_t)>(&::GlobalNamespace::GameEntityManager::IsValidAuthorityRPC)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x581bfe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"IsValidAuthorityRPC", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.IsValidAuthorityRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameEntityManager::*)(::Photon::Realtime::Player*, int32_t, ::UnityEngine::Vector3)>(&::GlobalNamespace::GameEntityManager::IsValidAuthorityRPC)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x581c020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"IsValidAuthorityRPC", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.IsValidAuthorityRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameEntityManager::*)(::Photon::Realtime::Player*, ::UnityEngine::Vector3)>(&::GlobalNamespace::GameEntityManager::IsValidAuthorityRPC)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x581c0a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"IsValidAuthorityRPC", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.IsValidEntity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameEntityManager::*)(::GlobalNamespace::GameEntityId)>(&::GlobalNamespace::GameEntityManager::IsValidEntity)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x581c108;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"IsValidEntity", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.GetGameEntity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GameEntity> (::GlobalNamespace::GameEntityManager::*)(::GlobalNamespace::GameEntityId)>(&::GlobalNamespace::GameEntityManager::GetGameEntity)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x581c184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"GetGameEntity", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.GetGameEntityFromNetId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GameEntity> (::GlobalNamespace::GameEntityManager::*)(int32_t)>(&::GlobalNamespace::GameEntityManager::GetGameEntityFromNetId)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x581c204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"GetGameEntityFromNetId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.GetGameEntity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GameEntity> (::GlobalNamespace::GameEntityManager::*)(int32_t)>(&::GlobalNamespace::GameEntityManager::GetGameEntity)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x581b1a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"GetGameEntity", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.LocalValidateMigrationRecoveryItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameEntityManager::*)(int32_t, ::by_ref<int64_t>)>(&::GlobalNamespace::GameEntityManager::LocalValidateMigrationRecoveryItem)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x581c288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"LocalValidateMigrationRecoveryItem", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.IsEntityValidToMigrate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameEntityManager::*)(::GlobalNamespace::GameEntity*)>(&::GlobalNamespace::GameEntityManager::IsEntityValidToMigrate)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x581c680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"IsEntityValidToMigrate", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.BuildFactory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)()>(&::GlobalNamespace::GameEntityManager::BuildFactory)> {
  constexpr static std::size_t size = 0xb50;
  constexpr static std::size_t addrs = 0x5817130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"BuildFactory", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.AddToFactory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::GameEntity>>*)>(&::GlobalNamespace::GameEntityManager::AddToFactory)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x581c954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"AddToFactory", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::GameEntity>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.CreateNetId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GameEntityManager::*)(int32_t)>(&::GlobalNamespace::GameEntityManager::CreateNetId)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x581b194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"CreateNetId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.RecalculateNextNetId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)()>(&::GlobalNamespace::GameEntityManager::RecalculateNextNetId)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x581cca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"RecalculateNextNetId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.RequestCreateItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameEntityId (::GlobalNamespace::GameEntityManager::*)(int32_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, int64_t)>(&::GlobalNamespace::GameEntityManager::RequestCreateItem)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x581cdc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"RequestCreateItem", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.RequestCreateItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameEntityId (::GlobalNamespace::GameEntityManager::*)(int32_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, int64_t, ::GlobalNamespace::GameEntityId)>(&::GlobalNamespace::GameEntityManager::RequestCreateItem)> {
  constexpr static std::size_t size = 0x590;
  constexpr static std::size_t addrs = 0x581ce90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"RequestCreateItem", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::GlobalNamespace::GameEntityId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.CreateItemRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(::ArrayW<int32_t>, ::ArrayW<int32_t>, ::ArrayW<int64_t>, ::ArrayW<int32_t>, ::ArrayW<int64_t>, ::ArrayW<int32_t>, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GameEntityManager::CreateItemRPC)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x581d614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"CreateItemRPC", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int64_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int64_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.RequestCreateItems
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityCreateData>*)>(&::GlobalNamespace::GameEntityManager::RequestCreateItems)> {
  constexpr static std::size_t size = 0x528;
  constexpr static std::size_t addrs = 0x581daec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"RequestCreateItems", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityCreateData>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.CreateItemsRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(int32_t, ::ArrayW<uint8_t>, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GameEntityManager::CreateItemsRPC)> {
  constexpr static std::size_t size = 0x964;
  constexpr static std::size_t addrs = 0x581e05c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"CreateItemsRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.RequestMigrationRecovery
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityCreateData>*)>(&::GlobalNamespace::GameEntityManager::RequestMigrationRecovery)> {
  constexpr static std::size_t size = 0x5e4;
  constexpr static std::size_t addrs = 0x581e9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"RequestMigrationRecovery", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityCreateData>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.JoinWithItems
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*)>(&::GlobalNamespace::GameEntityManager::JoinWithItems)> {
  constexpr static std::size_t size = 0x61c;
  constexpr static std::size_t addrs = 0x581f10c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"JoinWithItems", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.PlayerLeftZoneRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GameEntityManager::PlayerLeftZoneRPC)> {
  constexpr static std::size_t size = 0x678;
  constexpr static std::size_t addrs = 0x581f728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"PlayerLeftZoneRPC", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.TryGetScenePlacedRecord
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameEntityManager::*)(::GlobalNamespace::GameEntity*, ::by_ref<::GlobalNamespace::GameEntityManager_ScenePlacedRecord>)>(&::GlobalNamespace::GameEntityManager::TryGetScenePlacedRecord)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x581fda0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"TryGetScenePlacedRecord", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GameEntityManager_ScenePlacedRecord>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.JoinWithItemsRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(::ArrayW<uint8_t>, ::ArrayW<int32_t>, int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GameEntityManager::JoinWithItemsRPC)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x581fed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"JoinWithItemsRPC", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager._JoinWithItems_WriteOne
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::BinaryWriter*, int32_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, int64_t, int32_t, int32_t)>(&::GlobalNamespace::GameEntityManager::_JoinWithItems_WriteOne)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x581efa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"_JoinWithItems_WriteOne", {}, {::i2c::type_of<::System::IO::BinaryWriter*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager._JoinWithItems_ReadOne
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::BinaryReader*, ::by_ref<int32_t>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>, ::by_ref<int64_t>, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::GlobalNamespace::GameEntityManager::_JoinWithItems_ReadOne)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5820264;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"_JoinWithItems_ReadOne", {}, {::i2c::type_of<::System::IO::BinaryReader*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.FactoryHasEntity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameEntityManager::*)(int32_t)>(&::GlobalNamespace::GameEntityManager::FactoryHasEntity)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x581da7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"FactoryHasEntity", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.FactoryPrefabById
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::GameEntityManager::*)(int32_t)>(&::GlobalNamespace::GameEntityManager::FactoryPrefabById)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x581c608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"FactoryPrefabById", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.FactoryEntityById
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GameEntity> (::GlobalNamespace::GameEntityManager::*)(int32_t)>(&::GlobalNamespace::GameEntityManager::FactoryEntityById)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x58203a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"FactoryEntityById", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.FactoryGetBuiltInEntityCountById
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GameEntityManager::*)(int32_t)>(&::GlobalNamespace::GameEntityManager::FactoryGetBuiltInEntityCountById)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x581d420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"FactoryGetBuiltInEntityCountById", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.PriceLookup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameEntityManager::*)(int32_t, ::by_ref<int32_t>)>(&::GlobalNamespace::GameEntityManager::PriceLookup)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5820440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"PriceLookup", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.ValidateThatNetIdIsNotAlreadyUsed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(int32_t, int32_t)>(&::GlobalNamespace::GameEntityManager::ValidateThatNetIdIsNotAlreadyUsed)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x58204bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"ValidateThatNetIdIsNotAlreadyUsed", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.CreateAndInitItemLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameEntityId (::GlobalNamespace::GameEntityManager::*)(int32_t, int32_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, int64_t, int32_t)>(&::GlobalNamespace::GameEntityManager::CreateAndInitItemLocal)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x581d4cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"CreateAndInitItemLocal", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.CreateItemLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GameEntity> (::GlobalNamespace::GameEntityManager::*)(int32_t, int32_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::GlobalNamespace::GameEntityManager::CreateItemLocal)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x58205ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"CreateItemLocal", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.InitItemLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(::GlobalNamespace::GameEntity*, int64_t, int32_t)>(&::GlobalNamespace::GameEntityManager::InitItemLocal)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x58207f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"InitItemLocal", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.RequestDestroyItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(::GlobalNamespace::GameEntityId)>(&::GlobalNamespace::GameEntityManager::RequestDestroyItem)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x5820924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"RequestDestroyItem", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.RequestDestroyItems
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityId>*)>(&::GlobalNamespace::GameEntityManager::RequestDestroyItems)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x5820b24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"RequestDestroyItems", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityId>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.DestroyItemRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(::ArrayW<int32_t>, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GameEntityManager::DestroyItemRPC)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5820da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"DestroyItemRPC", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.DestroyItemLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(::GlobalNamespace::GameEntityId)>(&::GlobalNamespace::GameEntityManager::DestroyItemLocal)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x581b22c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"DestroyItemLocal", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.RequestState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(::GlobalNamespace::GameEntityId, int64_t)>(&::GlobalNamespace::GameEntityManager::RequestState)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x5820ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"RequestState", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.RequestStateAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(::GlobalNamespace::GameEntityId, int64_t)>(&::GlobalNamespace::GameEntityManager::RequestStateAuthority)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x58210ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"RequestStateAuthority", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.RequestStateRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(int32_t, int64_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GameEntityManager::RequestStateRPC)> {
  constexpr static std::size_t size = 0x6bc;
  constexpr static std::size_t addrs = 0x58212a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"RequestStateRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.ApplyStateRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(::ArrayW<int32_t>, ::ArrayW<int64_t>, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GameEntityManager::ApplyStateRPC)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5821960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"ApplyStateRPC", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int64_t>>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.RequestGrabEntity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(::GlobalNamespace::GameEntityId, bool, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::GlobalNamespace::GameEntityManager::RequestGrabEntity)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x5821b0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"RequestGrabEntity", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.RequestGrabEntityRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(int32_t, bool, int64_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GameEntityManager::RequestGrabEntityRPC)> {
  constexpr static std::size_t size = 0x544;
  constexpr static std::size_t addrs = 0x5822410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"RequestGrabEntityRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.GrabEntityRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(int32_t, bool, int64_t, ::Photon::Realtime::Player*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GameEntityManager::GrabEntityRPC)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x5822cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"GrabEntityRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.GrabEntityLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(::GlobalNamespace::GameEntityId, bool, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GameEntityManager::GrabEntityLocal)> {
  constexpr static std::size_t size = 0x608;
  constexpr static std::size_t addrs = 0x5821e08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"GrabEntityLocal", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.GrabEntityOnCreate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(::GlobalNamespace::GameEntityId, bool, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GameEntityManager::GrabEntityOnCreate)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5823060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"GrabEntityOnCreate", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.TryGrabLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameEntityId (::GlobalNamespace::GameEntityManager::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, bool, ::by_ref<::UnityEngine::Vector3>, ::by_ref<bool>)>(&::GlobalNamespace::GameEntityManager::TryGrabLocal)> {
  constexpr static std::size_t size = 0xbec;
  constexpr static std::size_t addrs = 0x58231b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"TryGrabLocal", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.IsThinAlongDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Transform*, ::UnityEngine::Bounds, ::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::GameEntityManager::IsThinAlongDirection)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5823da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"IsThinAlongDirection", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.GetBoundsThicknessAlongDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Bounds, ::UnityEngine::Vector3)>(&::GlobalNamespace::GameEntityManager::GetBoundsThicknessAlongDirection)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5823e84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"GetBoundsThicknessAlongDirection", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager._TryGrabLocal_TestBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Bounds, float_t, float_t, ::GlobalNamespace::GameEntity*, bool, ::by_ref<float_t>, ::by_ref<::GlobalNamespace::GameEntity*>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<bool>)>(&::GlobalNamespace::GameEntityManager::_TryGrabLocal_TestBounds)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x5823f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"_TryGrabLocal_TestBounds", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::GameEntity*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GameEntity*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.DrawDebugStar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::GameEntityManager::DrawDebugStar)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x58245a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"DrawDebugStar", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.SegmentHitsBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Bounds, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::Vector3>, ::by_ref<float_t>)>(&::GlobalNamespace::GameEntityManager::SegmentHitsBounds)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x582435c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"SegmentHitsBounds", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.LogGrabDiagnostics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(::UnityEngine::Vector3, bool, int32_t)>(&::GlobalNamespace::GameEntityManager::LogGrabDiagnostics)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x5824694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"LogGrabDiagnostics", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.WhyGrabRejected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameEntityManager::*)(::GlobalNamespace::GameEntity*, int32_t, bool)>(&::GlobalNamespace::GameEntityManager::WhyGrabRejected)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0x582487c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"WhyGrabRejected", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.ValidateGrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameEntityManager::*)(::GlobalNamespace::GameEntity*, int32_t, bool)>(&::GlobalNamespace::GameEntityManager::ValidateGrab)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x5822a98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"ValidateGrab", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.RequestThrowEntity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(::GlobalNamespace::GameEntityId, bool, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::GameEntityManager::RequestThrowEntity)> {
  constexpr static std::size_t size = 0xa10;
  constexpr static std::size_t addrs = 0x5824d4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"RequestThrowEntity", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.RequestThrowEntityRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(int32_t, bool, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GameEntityManager::RequestThrowEntityRPC)> {
  constexpr static std::size_t size = 0x704;
  constexpr static std::size_t addrs = 0x5825e28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"RequestThrowEntityRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.ThrowEntityRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(int32_t, bool, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Photon::Realtime::Player*, double_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GameEntityManager::ThrowEntityRPC)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0x58266a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"ThrowEntityRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.ThrowEntityLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(::GlobalNamespace::GameEntityId, bool, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GameEntityManager::ThrowEntityLocal)> {
  constexpr static std::size_t size = 0x6cc;
  constexpr static std::size_t addrs = 0x582575c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"ThrowEntityLocal", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.RequestSnapEntity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(::GlobalNamespace::GameEntityId, bool, ::GlobalNamespace::SnapJointType)>(&::GlobalNamespace::GameEntityManager::RequestSnapEntity)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x5826a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"RequestSnapEntity", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::SnapJointType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.RequestSnapEntityRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(int32_t, bool, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GameEntityManager::RequestSnapEntityRPC)> {
  constexpr static std::size_t size = 0x57c;
  constexpr static std::size_t addrs = 0x5827468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"RequestSnapEntityRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.SnapEntityRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(int32_t, bool, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, int32_t, ::Photon::Realtime::Player*, double_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GameEntityManager::SnapEntityRPC)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x58279e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"SnapEntityRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.SnapEntityLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(::GlobalNamespace::GameEntityId, bool, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, int32_t, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GameEntityManager::SnapEntityLocal)> {
  constexpr static std::size_t size = 0x600;
  constexpr static std::size_t addrs = 0x5826e68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"SnapEntityLocal", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.SnapEntityOnCreate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(::GlobalNamespace::GameEntityId, bool, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, int32_t, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GameEntityManager::SnapEntityOnCreate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5827d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"SnapEntityOnCreate", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.TryUnsnapLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GameEntity*)>(&::GlobalNamespace::GameEntityManager::TryUnsnapLocal)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5827d5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"TryUnsnapLocal", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.RequestAttachEntity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(::GlobalNamespace::GameEntityId, ::GlobalNamespace::GameEntityId, int32_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::GlobalNamespace::GameEntityManager::RequestAttachEntity)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x5827edc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"RequestAttachEntity", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.RequestAttachEntityAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(::GlobalNamespace::GameEntityId, ::GlobalNamespace::GameEntityId, int32_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::GlobalNamespace::GameEntityManager::RequestAttachEntityAuthority)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x582862c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"RequestAttachEntityAuthority", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.RequestAttachEntityRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(int32_t, int32_t, int32_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GameEntityManager::RequestAttachEntityRPC)> {
  constexpr static std::size_t size = 0x6a4;
  constexpr static std::size_t addrs = 0x58289e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"RequestAttachEntityRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.AttachEntityRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(int32_t, int32_t, int32_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::Photon::Realtime::Player*, double_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GameEntityManager::AttachEntityRPC)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x5829168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"AttachEntityRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.AttachEntityLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(::GlobalNamespace::GameEntityId, ::GlobalNamespace::GameEntityId, int32_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::GlobalNamespace::GameEntityManager::AttachEntityLocal)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x5828260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"AttachEntityLocal", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.TryDetachLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GameEntity*)>(&::GlobalNamespace::GameEntityManager::TryDetachLocal)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x5829400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"TryDetachLocal", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.TryDetachCompletely
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GameEntity*)>(&::GlobalNamespace::GameEntityManager::TryDetachCompletely)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5829624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"TryDetachCompletely", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.TryRemoveFromHandLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GameEntity*)>(&::GlobalNamespace::GameEntityManager::TryRemoveFromHandLocal)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x58296d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"TryRemoveFromHandLocal", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.AttachEntityOnCreate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(::GlobalNamespace::GameEntityId, bool, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, int32_t, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GameEntityManager::AttachEntityOnCreate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58297f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"AttachEntityOnCreate", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.RequestHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(::GlobalNamespace::GameHitData)>(&::GlobalNamespace::GameEntityManager::RequestHit)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x5829804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"RequestHit", {}, {::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.RequestHitRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(int32_t, int32_t, int32_t, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GameEntityManager::RequestHitRPC)> {
  constexpr static std::size_t size = 0x6ac;
  constexpr static std::size_t addrs = 0x5829c34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"RequestHitRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.ApplyHitRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(int32_t, int32_t, int32_t, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, int32_t, ::Photon::Realtime::Player*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GameEntityManager::ApplyHitRPC)> {
  constexpr static std::size_t size = 0x4e8;
  constexpr static std::size_t addrs = 0x582a2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"ApplyHitRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.IsPlayerHandNearEntity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameEntityManager::*)(::GlobalNamespace::GamePlayer*, int32_t, bool, bool, float_t)>(&::GlobalNamespace::GameEntityManager::IsPlayerHandNearEntity)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5822954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"IsPlayerHandNearEntity", {}, {::i2c::type_of<::GlobalNamespace::GamePlayer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.IsPlayerHandNearPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::GamePlayer*, ::UnityEngine::Vector3, bool, bool, float_t)>(&::GlobalNamespace::GameEntityManager::IsPlayerHandNearPosition)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x582652c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"IsPlayerHandNearPosition", {}, {::i2c::type_of<::GlobalNamespace::GamePlayer*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.IsEntityNearEntity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameEntityManager::*)(int32_t, int32_t, float_t)>(&::GlobalNamespace::GameEntityManager::IsEntityNearEntity)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5829084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"IsEntityNearEntity", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.IsEntityNearPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameEntityManager::*)(int32_t, ::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::GameEntityManager::IsEntityNearPosition)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x582a7c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"IsEntityNearPosition", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.ClearZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(bool)>(&::GlobalNamespace::GameEntityManager::ClearZone)> {
  constexpr static std::size_t size = 0xc24;
  constexpr static std::size_t addrs = 0x582a8cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"ClearZone", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.SerializeGameState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GameEntityManager::*)(int32_t, ::ArrayW<uint8_t>, int32_t)>(&::GlobalNamespace::GameEntityManager::SerializeGameState)> {
  constexpr static std::size_t size = 0xd30;
  constexpr static std::size_t addrs = 0x582b4f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"SerializeGameState", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.DeserializeTableState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(::ArrayW<uint8_t>, int32_t)>(&::GlobalNamespace::GameEntityManager::DeserializeTableState)> {
  constexpr static std::size_t size = 0x1348;
  constexpr static std::size_t addrs = 0x582c220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"DeserializeTableState", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.UpdateZoneState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)()>(&::GlobalNamespace::GameEntityManager::UpdateZoneState)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x581abb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"UpdateZoneState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.UpdateAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*)>(&::GlobalNamespace::GameEntityManager::UpdateAuthority)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x582d568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"UpdateAuthority", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.UpdateClientsFromAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*)>(&::GlobalNamespace::GameEntityManager::UpdateClientsFromAuthority)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x582d9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"UpdateClientsFromAuthority", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.TestSerializeTableState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)()>(&::GlobalNamespace::GameEntityManager::TestSerializeTableState)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x582e530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"TestSerializeTableState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.ClearByteBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>)>(&::GlobalNamespace::GameEntityManager::ClearByteBuffer)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x581e014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"ClearByteBuffer", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.SendZoneStateToPlayerOrTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(::GlobalNamespace::GTZone, ::Photon::Realtime::Player*, ::Photon::Pun::RpcTarget)>(&::GlobalNamespace::GameEntityManager::SendZoneStateToPlayerOrTarget)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x582e1a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"SendZoneStateToPlayerOrTarget", {}, {::i2c::type_of<::GlobalNamespace::GTZone>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::Photon::Pun::RpcTarget>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.SendTableDataRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(int32_t, int32_t, ::ArrayW<uint8_t>, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GameEntityManager::SendTableDataRPC)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x582e748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"SendTableDataRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.ResolveTableData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)()>(&::GlobalNamespace::GameEntityManager::ResolveTableData)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x581adfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"ResolveTableData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.UpdateZoneStateAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)()>(&::GlobalNamespace::GameEntityManager::UpdateZoneStateAuthority)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x582db1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"UpdateZoneStateAuthority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.UpdateZoneStateClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)()>(&::GlobalNamespace::GameEntityManager::UpdateZoneStateClient)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x582de64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"UpdateZoneStateClient", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.IsInZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameEntityManager::*)()>(&::GlobalNamespace::GameEntityManager::IsInZone)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x582f3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GameEntityManager*>(), 68}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.ShouldClearZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameEntityManager::*)()>(&::GlobalNamespace::GameEntityManager::ShouldClearZone)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x582f218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"ShouldClearZone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.SetZoneState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(::GlobalNamespace::GameEntityManager_ZoneState)>(&::GlobalNamespace::GameEntityManager::SetZoneState)> {
  constexpr static std::size_t size = 0x8fc;
  constexpr static std::size_t addrs = 0x582e91c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"SetZoneState", {}, {::i2c::type_of<::GlobalNamespace::GameEntityManager_ZoneState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.DebugSendState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)()>(&::GlobalNamespace::GameEntityManager::DebugSendState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x582f790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"DebugSendState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.RequestZoneStateRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GameEntityManager::RequestZoneStateRPC)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x582f798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"RequestZoneStateRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.WriteDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)()>(&::GlobalNamespace::GameEntityManager::WriteDataFusion)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x582f950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GameEntityManager*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.ReadDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)()>(&::GlobalNamespace::GameEntityManager::ReadDataFusion)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x582f954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GameEntityManager*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.WriteDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GameEntityManager::WriteDataPUN)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x582f958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GameEntityManager*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.ReadDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GameEntityManager::ReadDataPUN)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x582fa04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GameEntityManager*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.OnNetworkJoinedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)()>(&::GlobalNamespace::GameEntityManager::OnNetworkJoinedRoom)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x582fab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"OnNetworkJoinedRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.OnNetworkLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)()>(&::GlobalNamespace::GameEntityManager::OnNetworkLeftRoom)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x582fad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"OnNetworkLeftRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.OnNetworkPlayerLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GameEntityManager::OnNetworkPlayerLeft)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x582fc8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"OnNetworkPlayerLeft", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.OnRigDeactivated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(::GlobalNamespace::RigContainer*)>(&::GlobalNamespace::GameEntityManager::OnRigDeactivated)> {
  constexpr static std::size_t size = 0x4ac;
  constexpr static std::size_t addrs = 0x582fe58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"OnRigDeactivated", {}, {::i2c::type_of<::GlobalNamespace::RigContainer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.OnOwnershipTransferred
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GameEntityManager::OnOwnershipTransferred)> {
  constexpr static std::size_t size = 0x534;
  constexpr static std::size_t addrs = 0x5830304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"OnOwnershipTransferred", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.OnOwnershipRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameEntityManager::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GameEntityManager::OnOwnershipRequest)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5830838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"OnOwnershipRequest", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.OnMyOwnerLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)()>(&::GlobalNamespace::GameEntityManager::OnMyOwnerLeft)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5830840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"OnMyOwnerLeft", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.OnMasterClientAssistedTakeoverRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameEntityManager::*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GameEntityManager::OnMasterClientAssistedTakeoverRequest)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5830844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"OnMasterClientAssistedTakeoverRequest", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.OnMyCreatorLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)()>(&::GlobalNamespace::GameEntityManager::OnMyCreatorLeft)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x583084c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"OnMyCreatorLeft", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.RefreshRigList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)()>(&::GlobalNamespace::GameEntityManager::RefreshRigList)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x5819a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"RefreshRigList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.InitSceneUnloadHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::GameEntityManager::InitSceneUnloadHandler)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5830850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"InitSceneUnloadHandler", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.OnZoneSceneUnloaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::SceneManagement::Scene)>(&::GlobalNamespace::GameEntityManager::OnZoneSceneUnloaded)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x58308f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"OnZoneSceneUnloaded", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.GetZoneSceneName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameEntityManager::*)()>(&::GlobalNamespace::GameEntityManager::GetZoneSceneName)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5817d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"GetZoneSceneName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.HasAnyScenePlacedInScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::GlobalNamespace::GameEntityManager::HasAnyScenePlacedInScene)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x582f330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"HasAnyScenePlacedInScene", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.RegisterScenePlacedEntity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GameEntity*)>(&::GlobalNamespace::GameEntityManager::RegisterScenePlacedEntity)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x5830ab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"RegisterScenePlacedEntity", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.NotifyManagersOfLateScenePlacedEntity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GameEntity*, ::StringW)>(&::GlobalNamespace::GameEntityManager::NotifyManagersOfLateScenePlacedEntity)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x5830cd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"NotifyManagersOfLateScenePlacedEntity", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.UnregisterScenePlacedEntity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GameEntity*)>(&::GlobalNamespace::GameEntityManager::UnregisterScenePlacedEntity)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x5830ed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"UnregisterScenePlacedEntity", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.IsScenePlacedNetId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::GlobalNamespace::GameEntityManager::IsScenePlacedNetId)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x581da64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"IsScenePlacedNetId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.NetIdFromXSceneRefId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::GlobalNamespace::GameEntityManager::NetIdFromXSceneRefId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58184f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"NetIdFromXSceneRefId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.ComputeNetIdFromHierarchyForCustomMaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Transform*)>(&::GlobalNamespace::GameEntityManager::ComputeNetIdFromHierarchyForCustomMaps)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5818500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"ComputeNetIdFromHierarchyForCustomMaps", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)()>(&::GlobalNamespace::GameEntityManager::_ctor)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x5831114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.CopyBackingFieldsToState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)(bool)>(&::GlobalNamespace::GameEntityManager::CopyBackingFieldsToState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5831658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GameEntityManager*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager.CopyStateToBackingFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager::*)()>(&::GlobalNamespace::GameEntityManager::CopyStateToBackingFields)> {
  constexpr static std::size_t size = 0xb8c;
  constexpr static std::size_t addrs = 0x5831660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GameEntityManager*>(), 24}
                ));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GTZone& GlobalNamespace::GameEntityManager::__cordl_internal_get_zone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zone;
}
constexpr ::GlobalNamespace::GTZone const& GlobalNamespace::GameEntityManager::__cordl_internal_get_zone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zone;
}
constexpr void GlobalNamespace::GameEntityManager::__cordl_internal_set_zone(::GlobalNamespace::GTZone  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zone = value;
}
constexpr ::UnityW<::Photon::Pun::PhotonView>& GlobalNamespace::GameEntityManager::__cordl_internal_get_photonView()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___photonView;
}
constexpr ::UnityW<::Photon::Pun::PhotonView> const& GlobalNamespace::GameEntityManager::__cordl_internal_get_photonView() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___photonView;
}
constexpr void GlobalNamespace::GameEntityManager::__cordl_internal_set_photonView(::UnityW<::Photon::Pun::PhotonView>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___photonView = value;
}
constexpr ::UnityW<::GlobalNamespace::RequestableOwnershipGuard>& GlobalNamespace::GameEntityManager::__cordl_internal_get_guard()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___guard;
}
constexpr ::UnityW<::GlobalNamespace::RequestableOwnershipGuard> const& GlobalNamespace::GameEntityManager::__cordl_internal_get_guard() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___guard;
}
constexpr void GlobalNamespace::GameEntityManager::__cordl_internal_set_guard(::UnityW<::GlobalNamespace::RequestableOwnershipGuard>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___guard = value;
}
constexpr ::Photon::Realtime::Player*& GlobalNamespace::GameEntityManager::__cordl_internal_get_prevAuthorityPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevAuthorityPlayer;
}
constexpr ::Photon::Realtime::Player* const& GlobalNamespace::GameEntityManager::__cordl_internal_get_prevAuthorityPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevAuthorityPlayer;
}
constexpr void GlobalNamespace::GameEntityManager::__cordl_internal_set_prevAuthorityPlayer(::Photon::Realtime::Player*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prevAuthorityPlayer = value;
}
constexpr ::UnityW<::UnityEngine::BoxCollider>& GlobalNamespace::GameEntityManager::__cordl_internal_get_boundsBoxCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boundsBoxCollider;
}
constexpr ::UnityW<::UnityEngine::BoxCollider> const& GlobalNamespace::GameEntityManager::__cordl_internal_get_boundsBoxCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boundsBoxCollider;
}
constexpr void GlobalNamespace::GameEntityManager::__cordl_internal_set_boundsBoxCollider(::UnityW<::UnityEngine::BoxCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___boundsBoxCollider = value;
}
constexpr bool& GlobalNamespace::GameEntityManager::__cordl_internal_get_useRandomCheckForAuthority()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useRandomCheckForAuthority;
}
constexpr bool const& GlobalNamespace::GameEntityManager::__cordl_internal_get_useRandomCheckForAuthority() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useRandomCheckForAuthority;
}
constexpr void GlobalNamespace::GameEntityManager::__cordl_internal_set_useRandomCheckForAuthority(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useRandomCheckForAuthority = value;
}
constexpr ::UnityW<::GlobalNamespace::GameAgentManager>& GlobalNamespace::GameEntityManager::__cordl_internal_get_gameAgentManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameAgentManager;
}
constexpr ::UnityW<::GlobalNamespace::GameAgentManager> const& GlobalNamespace::GameEntityManager::__cordl_internal_get_gameAgentManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameAgentManager;
}
constexpr void GlobalNamespace::GameEntityManager::__cordl_internal_set_gameAgentManager(::UnityW<::GlobalNamespace::GameAgentManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameAgentManager = value;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactorManager>& GlobalNamespace::GameEntityManager::__cordl_internal_get_ghostReactorManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ghostReactorManager;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactorManager> const& GlobalNamespace::GameEntityManager::__cordl_internal_get_ghostReactorManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ghostReactorManager;
}
constexpr void GlobalNamespace::GameEntityManager::__cordl_internal_set_ghostReactorManager(::UnityW<::GlobalNamespace::GhostReactorManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ghostReactorManager = value;
}
constexpr ::UnityW<::GlobalNamespace::CustomMapsGameManager>& GlobalNamespace::GameEntityManager::__cordl_internal_get_customMapsManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customMapsManager;
}
constexpr ::UnityW<::GlobalNamespace::CustomMapsGameManager> const& GlobalNamespace::GameEntityManager::__cordl_internal_get_customMapsManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customMapsManager;
}
constexpr void GlobalNamespace::GameEntityManager::__cordl_internal_set_customMapsManager(::UnityW<::GlobalNamespace::CustomMapsGameManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customMapsManager = value;
}
constexpr ::UnityW<::GlobalNamespace::SuperInfectionManager>& GlobalNamespace::GameEntityManager::__cordl_internal_get_superInfectionManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___superInfectionManager;
}
constexpr ::UnityW<::GlobalNamespace::SuperInfectionManager> const& GlobalNamespace::GameEntityManager::__cordl_internal_get_superInfectionManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___superInfectionManager;
}
constexpr void GlobalNamespace::GameEntityManager::__cordl_internal_set_superInfectionManager(::UnityW<::GlobalNamespace::SuperInfectionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___superInfectionManager = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IGameEntityZoneComponent*>*& GlobalNamespace::GameEntityManager::__cordl_internal_get_zoneComponents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zoneComponents;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IGameEntityZoneComponent*>* const& GlobalNamespace::GameEntityManager::__cordl_internal_get_zoneComponents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zoneComponents;
}
constexpr void GlobalNamespace::GameEntityManager::__cordl_internal_set_zoneComponents(::System::Collections::Generic::List_1<::GlobalNamespace::IGameEntityZoneComponent*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zoneComponents = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*& GlobalNamespace::GameEntityManager::__cordl_internal_get_entities()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entities;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>* const& GlobalNamespace::GameEntityManager::__cordl_internal_get_entities() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entities;
}
constexpr void GlobalNamespace::GameEntityManager::__cordl_internal_set_entities(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entities = value;
}
constexpr int32_t& GlobalNamespace::GameEntityManager::__cordl_internal_get_entitiesActiveCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entitiesActiveCount;
}
constexpr int32_t const& GlobalNamespace::GameEntityManager::__cordl_internal_get_entitiesActiveCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entitiesActiveCount;
}
constexpr void GlobalNamespace::GameEntityManager::__cordl_internal_set_entitiesActiveCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entitiesActiveCount = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityData>*& GlobalNamespace::GameEntityManager::__cordl_internal_get_gameEntityData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEntityData;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityData>* const& GlobalNamespace::GameEntityManager::__cordl_internal_get_gameEntityData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEntityData;
}
constexpr void GlobalNamespace::GameEntityManager::__cordl_internal_set_gameEntityData(::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityData>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameEntityData = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*& GlobalNamespace::GameEntityManager::__cordl_internal_get_tempFactoryItems()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempFactoryItems;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>* const& GlobalNamespace::GameEntityManager::__cordl_internal_get_tempFactoryItems() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempFactoryItems;
}
constexpr void GlobalNamespace::GameEntityManager::__cordl_internal_set_tempFactoryItems(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tempFactoryItems = value;
}
constexpr ::GlobalNamespace::GameEntityManager_ZoneStartEvent*& GlobalNamespace::GameEntityManager::__cordl_internal_get_onZoneStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onZoneStart;
}
constexpr ::GlobalNamespace::GameEntityManager_ZoneStartEvent* const& GlobalNamespace::GameEntityManager::__cordl_internal_get_onZoneStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onZoneStart;
}
constexpr void GlobalNamespace::GameEntityManager::__cordl_internal_set_onZoneStart(::GlobalNamespace::GameEntityManager_ZoneStartEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onZoneStart = value;
}
constexpr ::GlobalNamespace::GameEntityManager_ZoneClearEvent*& GlobalNamespace::GameEntityManager::__cordl_internal_get_onZoneClear()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onZoneClear;
}
constexpr ::GlobalNamespace::GameEntityManager_ZoneClearEvent* const& GlobalNamespace::GameEntityManager::__cordl_internal_get_onZoneClear() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onZoneClear;
}
constexpr void GlobalNamespace::GameEntityManager::__cordl_internal_set_onZoneClear(::GlobalNamespace::GameEntityManager_ZoneClearEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onZoneClear = value;
}
constexpr ::GlobalNamespace::GameEntityManager_AuthorityChangeEvent*& GlobalNamespace::GameEntityManager::__cordl_internal_get_OnAuthorityChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnAuthorityChanged;
}
constexpr ::GlobalNamespace::GameEntityManager_AuthorityChangeEvent* const& GlobalNamespace::GameEntityManager::__cordl_internal_get_OnAuthorityChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnAuthorityChanged;
}
constexpr void GlobalNamespace::GameEntityManager::__cordl_internal_set_OnAuthorityChanged(::GlobalNamespace::GameEntityManager_AuthorityChangeEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnAuthorityChanged = value;
}
constexpr ::GlobalNamespace::GameEntityManager_ZoneActiveChangeEvent*& GlobalNamespace::GameEntityManager::__cordl_internal_get_OnZoneActiveChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnZoneActiveChanged;
}
constexpr ::GlobalNamespace::GameEntityManager_ZoneActiveChangeEvent* const& GlobalNamespace::GameEntityManager::__cordl_internal_get_OnZoneActiveChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnZoneActiveChanged;
}
constexpr void GlobalNamespace::GameEntityManager::__cordl_internal_set_OnZoneActiveChanged(::GlobalNamespace::GameEntityManager_ZoneActiveChangeEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnZoneActiveChanged = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::GameEntityManager::__cordl_internal_get_itemPrefabFactory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemPrefabFactory;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::GameEntityManager::__cordl_internal_get_itemPrefabFactory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemPrefabFactory;
}
constexpr void GlobalNamespace::GameEntityManager::__cordl_internal_set_itemPrefabFactory(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___itemPrefabFactory = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*& GlobalNamespace::GameEntityManager::__cordl_internal_get_priceLookupByEntityId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___priceLookupByEntityId;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* const& GlobalNamespace::GameEntityManager::__cordl_internal_get_priceLookupByEntityId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___priceLookupByEntityId;
}
constexpr void GlobalNamespace::GameEntityManager::__cordl_internal_set_priceLookupByEntityId(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___priceLookupByEntityId = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*& GlobalNamespace::GameEntityManager::__cordl_internal_get_tempEntities()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempEntities;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>* const& GlobalNamespace::GameEntityManager::__cordl_internal_get_tempEntities() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempEntities;
}
constexpr void GlobalNamespace::GameEntityManager::__cordl_internal_set_tempEntities(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tempEntities = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GlobalNamespace::GameEntityManager::__cordl_internal_get_netIdsForCreate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netIdsForCreate;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GlobalNamespace::GameEntityManager::__cordl_internal_get_netIdsForCreate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netIdsForCreate;
}
constexpr void GlobalNamespace::GameEntityManager::__cordl_internal_set_netIdsForCreate(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___netIdsForCreate = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GlobalNamespace::GameEntityManager::__cordl_internal_get_entityTypeIdsForCreate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entityTypeIdsForCreate;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GlobalNamespace::GameEntityManager::__cordl_internal_get_entityTypeIdsForCreate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entityTypeIdsForCreate;
}
constexpr void GlobalNamespace::GameEntityManager::__cordl_internal_set_entityTypeIdsForCreate(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entityTypeIdsForCreate = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GlobalNamespace::GameEntityManager::__cordl_internal_get_packedRotationsForCreate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___packedRotationsForCreate;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GlobalNamespace::GameEntityManager::__cordl_internal_get_packedRotationsForCreate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___packedRotationsForCreate;
}
constexpr void GlobalNamespace::GameEntityManager::__cordl_internal_set_packedRotationsForCreate(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___packedRotationsForCreate = value;
}
constexpr ::System::Collections::Generic::List_1<int64_t>*& GlobalNamespace::GameEntityManager::__cordl_internal_get_packedPositionsForCreate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___packedPositionsForCreate;
}
constexpr ::System::Collections::Generic::List_1<int64_t>* const& GlobalNamespace::GameEntityManager::__cordl_internal_get_packedPositionsForCreate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___packedPositionsForCreate;
}
constexpr void GlobalNamespace::GameEntityManager::__cordl_internal_set_packedPositionsForCreate(::System::Collections::Generic::List_1<int64_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___packedPositionsForCreate = value;
}
constexpr ::System::Collections::Generic::List_1<int64_t>*& GlobalNamespace::GameEntityManager::__cordl_internal_get_createDataForCreate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___createDataForCreate;
}
constexpr ::System::Collections::Generic::List_1<int64_t>* const& GlobalNamespace::GameEntityManager::__cordl_internal_get_createDataForCreate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___createDataForCreate;
}
constexpr void GlobalNamespace::GameEntityManager::__cordl_internal_set_createDataForCreate(::System::Collections::Generic::List_1<int64_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___createDataForCreate = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GlobalNamespace::GameEntityManager::__cordl_internal_get_createdByEntityNetIdForCreate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___createdByEntityNetIdForCreate;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GlobalNamespace::GameEntityManager::__cordl_internal_get_createdByEntityNetIdForCreate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___createdByEntityNetIdForCreate;
}
constexpr void GlobalNamespace::GameEntityManager::__cordl_internal_set_createdByEntityNetIdForCreate(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___createdByEntityNetIdForCreate = value;
}
constexpr float_t& GlobalNamespace::GameEntityManager::__cordl_internal_get_createCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___createCooldown;
}
constexpr float_t const& GlobalNamespace::GameEntityManager::__cordl_internal_get_createCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___createCooldown;
}
constexpr void GlobalNamespace::GameEntityManager::__cordl_internal_set_createCooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___createCooldown = value;
}
constexpr float_t& GlobalNamespace::GameEntityManager::__cordl_internal_get_lastCreateSent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastCreateSent;
}
constexpr float_t const& GlobalNamespace::GameEntityManager::__cordl_internal_get_lastCreateSent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastCreateSent;
}
constexpr void GlobalNamespace::GameEntityManager::__cordl_internal_set_lastCreateSent(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastCreateSent = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GlobalNamespace::GameEntityManager::__cordl_internal_get_netIdsForDelete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netIdsForDelete;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GlobalNamespace::GameEntityManager::__cordl_internal_get_netIdsForDelete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netIdsForDelete;
}
constexpr void GlobalNamespace::GameEntityManager::__cordl_internal_set_netIdsForDelete(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___netIdsForDelete = value;
}
constexpr float_t& GlobalNamespace::GameEntityManager::__cordl_internal_get_destroyCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destroyCooldown;
}
constexpr float_t const& GlobalNamespace::GameEntityManager::__cordl_internal_get_destroyCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destroyCooldown;
}
constexpr void GlobalNamespace::GameEntityManager::__cordl_internal_set_destroyCooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___destroyCooldown = value;
}
constexpr float_t& GlobalNamespace::GameEntityManager::__cordl_internal_get_lastDestroySent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastDestroySent;
}
constexpr float_t const& GlobalNamespace::GameEntityManager::__cordl_internal_get_lastDestroySent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastDestroySent;
}
constexpr void GlobalNamespace::GameEntityManager::__cordl_internal_set_lastDestroySent(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastDestroySent = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GlobalNamespace::GameEntityManager::__cordl_internal_get_netIdsForState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netIdsForState;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GlobalNamespace::GameEntityManager::__cordl_internal_get_netIdsForState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netIdsForState;
}
constexpr void GlobalNamespace::GameEntityManager::__cordl_internal_set_netIdsForState(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___netIdsForState = value;
}
constexpr ::System::Collections::Generic::List_1<int64_t>*& GlobalNamespace::GameEntityManager::__cordl_internal_get_statesForState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___statesForState;
}
constexpr ::System::Collections::Generic::List_1<int64_t>* const& GlobalNamespace::GameEntityManager::__cordl_internal_get_statesForState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___statesForState;
}
constexpr void GlobalNamespace::GameEntityManager::__cordl_internal_set_statesForState(::System::Collections::Generic::List_1<int64_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___statesForState = value;
}
constexpr float_t& GlobalNamespace::GameEntityManager::__cordl_internal_get_lastStateSent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastStateSent;
}
constexpr float_t const& GlobalNamespace::GameEntityManager::__cordl_internal_get_lastStateSent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastStateSent;
}
constexpr void GlobalNamespace::GameEntityManager::__cordl_internal_set_lastStateSent(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastStateSent = value;
}
constexpr float_t& GlobalNamespace::GameEntityManager::__cordl_internal_get_stateCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateCooldown;
}
constexpr float_t const& GlobalNamespace::GameEntityManager::__cordl_internal_get_stateCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateCooldown;
}
constexpr void GlobalNamespace::GameEntityManager::__cordl_internal_set_stateCooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stateCooldown = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*& GlobalNamespace::GameEntityManager::__cordl_internal_get_netIdToIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netIdToIndex;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* const& GlobalNamespace::GameEntityManager::__cordl_internal_get_netIdToIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netIdToIndex;
}
constexpr void GlobalNamespace::GameEntityManager::__cordl_internal_set_netIdToIndex(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___netIdToIndex = value;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t>& GlobalNamespace::GameEntityManager::__cordl_internal_get_netIds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netIds;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t> const& GlobalNamespace::GameEntityManager::__cordl_internal_get_netIds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netIds;
}
constexpr void GlobalNamespace::GameEntityManager::__cordl_internal_set_netIds(::Unity::Collections::NativeArray_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___netIds = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*& GlobalNamespace::GameEntityManager::__cordl_internal_get_createdItemTypeCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___createdItemTypeCount;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* const& GlobalNamespace::GameEntityManager::__cordl_internal_get_createdItemTypeCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___createdItemTypeCount;
}
constexpr void GlobalNamespace::GameEntityManager::__cordl_internal_set_createdItemTypeCount(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___createdItemTypeCount = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,float_t>*& GlobalNamespace::GameEntityManager::__cordl_internal_get_playerZoneJoinTimes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerZoneJoinTimes;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,float_t>* const& GlobalNamespace::GameEntityManager::__cordl_internal_get_playerZoneJoinTimes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerZoneJoinTimes;
}
constexpr void GlobalNamespace::GameEntityManager::__cordl_internal_set_playerZoneJoinTimes(::System::Collections::Generic::Dictionary_2<int32_t,float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerZoneJoinTimes = value;
}
constexpr ::GlobalNamespace::ZoneClearReason& GlobalNamespace::GameEntityManager::__cordl_internal_get_zoneClearReason()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zoneClearReason;
}
constexpr ::GlobalNamespace::ZoneClearReason const& GlobalNamespace::GameEntityManager::__cordl_internal_get_zoneClearReason() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zoneClearReason;
}
constexpr void GlobalNamespace::GameEntityManager::__cordl_internal_set_zoneClearReason(::GlobalNamespace::ZoneClearReason  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zoneClearReason = value;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::GameEntity>>*& GlobalNamespace::GameEntityManager::__cordl_internal_get_OnEntityRemoved()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnEntityRemoved;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::GameEntity>>* const& GlobalNamespace::GameEntityManager::__cordl_internal_get_OnEntityRemoved() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnEntityRemoved;
}
constexpr void GlobalNamespace::GameEntityManager::__cordl_internal_set_OnEntityRemoved(::System::Action_1<::UnityW<::GlobalNamespace::GameEntity>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnEntityRemoved = value;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::GameEntity>>*& GlobalNamespace::GameEntityManager::__cordl_internal_get_OnEntityAdded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnEntityAdded;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::GameEntity>>* const& GlobalNamespace::GameEntityManager::__cordl_internal_get_OnEntityAdded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnEntityAdded;
}
constexpr void GlobalNamespace::GameEntityManager::__cordl_internal_set_OnEntityAdded(::System::Action_1<::UnityW<::GlobalNamespace::GameEntity>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnEntityAdded = value;
}
constexpr bool& GlobalNamespace::GameEntityManager::__cordl_internal_get__TickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr bool const& GlobalNamespace::GameEntityManager::__cordl_internal_get__TickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr void GlobalNamespace::GameEntityManager::__cordl_internal_set__TickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TickRunning_k__BackingField = value;
}
constexpr bool& GlobalNamespace::GameEntityManager::__cordl_internal_get__PendingTableData_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PendingTableData_k__BackingField;
}
constexpr bool const& GlobalNamespace::GameEntityManager::__cordl_internal_get__PendingTableData_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PendingTableData_k__BackingField;
}
constexpr void GlobalNamespace::GameEntityManager::__cordl_internal_set__PendingTableData_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PendingTableData_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::GameEntityManager::__cordl_internal_get_pendingTableDataSetFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pendingTableDataSetFrame;
}
constexpr int32_t const& GlobalNamespace::GameEntityManager::__cordl_internal_get_pendingTableDataSetFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pendingTableDataSetFrame;
}
constexpr void GlobalNamespace::GameEntityManager::__cordl_internal_set_pendingTableDataSetFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pendingTableDataSetFrame = value;
}
constexpr ::GlobalNamespace::GameEntityManager_ZoneStateData*& GlobalNamespace::GameEntityManager::__cordl_internal_get_zoneStateData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zoneStateData;
}
constexpr ::GlobalNamespace::GameEntityManager_ZoneStateData* const& GlobalNamespace::GameEntityManager::__cordl_internal_get_zoneStateData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zoneStateData;
}
constexpr void GlobalNamespace::GameEntityManager::__cordl_internal_set_zoneStateData(::GlobalNamespace::GameEntityManager_ZoneStateData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zoneStateData = value;
}
constexpr int32_t& GlobalNamespace::GameEntityManager::__cordl_internal_get_nextNetId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextNetId;
}
constexpr int32_t const& GlobalNamespace::GameEntityManager::__cordl_internal_get_nextNetId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextNetId;
}
constexpr void GlobalNamespace::GameEntityManager::__cordl_internal_set_nextNetId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextNetId = value;
}
constexpr ::StringW& GlobalNamespace::GameEntityManager::__cordl_internal_get_cachedZoneSceneName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedZoneSceneName;
}
constexpr ::StringW const& GlobalNamespace::GameEntityManager::__cordl_internal_get_cachedZoneSceneName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedZoneSceneName;
}
constexpr void GlobalNamespace::GameEntityManager::__cordl_internal_set_cachedZoneSceneName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cachedZoneSceneName = value;
}
constexpr ::GlobalNamespace::CallLimitersList_2<::GlobalNamespace::CallLimiter*,::GlobalNamespace::GameEntityManager_RPC>*& GlobalNamespace::GameEntityManager::__cordl_internal_get_m_RpcSpamChecks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RpcSpamChecks;
}
constexpr ::GlobalNamespace::CallLimitersList_2<::GlobalNamespace::CallLimiter*,::GlobalNamespace::GameEntityManager_RPC>* const& GlobalNamespace::GameEntityManager::__cordl_internal_get_m_RpcSpamChecks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RpcSpamChecks;
}
constexpr void GlobalNamespace::GameEntityManager::__cordl_internal_set_m_RpcSpamChecks(::GlobalNamespace::CallLimitersList_2<::GlobalNamespace::CallLimiter*,::GlobalNamespace::GameEntityManager_RPC>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RpcSpamChecks = value;
}
constexpr bool& GlobalNamespace::GameEntityManager::__cordl_internal_get_scenePlacedEntitiesRegistered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scenePlacedEntitiesRegistered;
}
constexpr bool const& GlobalNamespace::GameEntityManager::__cordl_internal_get_scenePlacedEntitiesRegistered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scenePlacedEntitiesRegistered;
}
constexpr void GlobalNamespace::GameEntityManager::__cordl_internal_set_scenePlacedEntitiesRegistered(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scenePlacedEntitiesRegistered = value;
}
constexpr float_t& GlobalNamespace::GameEntityManager::__cordl_internal_get_scenePlacedBoundsCheckTimer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scenePlacedBoundsCheckTimer;
}
constexpr float_t const& GlobalNamespace::GameEntityManager::__cordl_internal_get_scenePlacedBoundsCheckTimer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scenePlacedBoundsCheckTimer;
}
constexpr void GlobalNamespace::GameEntityManager::__cordl_internal_set_scenePlacedBoundsCheckTimer(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scenePlacedBoundsCheckTimer = value;
}
constexpr int32_t& GlobalNamespace::GameEntityManager::__cordl_internal_get__lastUpdateZoneStateAuthLogSig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastUpdateZoneStateAuthLogSig;
}
constexpr int32_t const& GlobalNamespace::GameEntityManager::__cordl_internal_get__lastUpdateZoneStateAuthLogSig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastUpdateZoneStateAuthLogSig;
}
constexpr void GlobalNamespace::GameEntityManager::__cordl_internal_set__lastUpdateZoneStateAuthLogSig(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastUpdateZoneStateAuthLogSig = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityManager_ScenePlacedRecord>*& GlobalNamespace::GameEntityManager::__cordl_internal_get_scenePlacedEntities()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scenePlacedEntities;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityManager_ScenePlacedRecord>* const& GlobalNamespace::GameEntityManager::__cordl_internal_get_scenePlacedEntities() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scenePlacedEntities;
}
constexpr void GlobalNamespace::GameEntityManager::__cordl_internal_set_scenePlacedEntities(::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityManager_ScenePlacedRecord>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scenePlacedEntities = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityId>*& GlobalNamespace::GameEntityManager::__cordl_internal_get__leavingItemScratch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leavingItemScratch;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityId>* const& GlobalNamespace::GameEntityManager::__cordl_internal_get__leavingItemScratch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leavingItemScratch;
}
constexpr void GlobalNamespace::GameEntityManager::__cordl_internal_set__leavingItemScratch(::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityId>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____leavingItemScratch = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& GlobalNamespace::GameEntityManager::__cordl_internal_get__collidersList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____collidersList;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& GlobalNamespace::GameEntityManager::__cordl_internal_get__collidersList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____collidersList;
}
constexpr void GlobalNamespace::GameEntityManager::__cordl_internal_set__collidersList(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____collidersList = value;
}
constexpr ::ArrayW<uint8_t>& GlobalNamespace::GameEntityManager::__cordl_internal_get_tempSerializeGameState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempSerializeGameState;
}
constexpr ::ArrayW<uint8_t> const& GlobalNamespace::GameEntityManager::__cordl_internal_get_tempSerializeGameState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempSerializeGameState;
}
constexpr void GlobalNamespace::GameEntityManager::__cordl_internal_set_tempSerializeGameState(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tempSerializeGameState = value;
}
inline void GlobalNamespace::GameEntityManager::setStaticF_allManagers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntityManager>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntityManager>>*, "allManagers", ::GlobalNamespace::GameEntityManager*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntityManager>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntityManager>>* GlobalNamespace::GameEntityManager::getStaticF_allManagers()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntityManager>>*, "allManagers", ::GlobalNamespace::GameEntityManager*>();
}
inline void GlobalNamespace::GameEntityManager::setStaticF_managersByZone(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::GameEntityManager>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::GameEntityManager>>*, "managersByZone", ::GlobalNamespace::GameEntityManager*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::GameEntityManager>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::GameEntityManager>>* GlobalNamespace::GameEntityManager::getStaticF_managersByZone()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::GameEntityManager>>*, "managersByZone", ::GlobalNamespace::GameEntityManager*>();
}
inline void GlobalNamespace::GameEntityManager::setStaticF__activeManager_k__BackingField(::UnityW<::GlobalNamespace::GameEntityManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::GameEntityManager>, "<activeManager>k__BackingField", ::GlobalNamespace::GameEntityManager*>(std::forward<::UnityW<::GlobalNamespace::GameEntityManager>>(value));
}
inline ::UnityW<::GlobalNamespace::GameEntityManager> GlobalNamespace::GameEntityManager::getStaticF__activeManager_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::GameEntityManager>, "<activeManager>k__BackingField", ::GlobalNamespace::GameEntityManager*>();
}
inline void GlobalNamespace::GameEntityManager::setStaticF_tempRigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*, "tempRigs", ::GlobalNamespace::GameEntityManager*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* GlobalNamespace::GameEntityManager::getStaticF_tempRigs()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*, "tempRigs", ::GlobalNamespace::GameEntityManager*>();
}
inline void GlobalNamespace::GameEntityManager::setStaticF_tempEntitiesToSerialize(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*, "tempEntitiesToSerialize", ::GlobalNamespace::GameEntityManager*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>* GlobalNamespace::GameEntityManager::getStaticF_tempEntitiesToSerialize()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*, "tempEntitiesToSerialize", ::GlobalNamespace::GameEntityManager*>();
}
inline void GlobalNamespace::GameEntityManager::setStaticF_tempAttachments(::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityManager_AttachmentData>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityManager_AttachmentData>*, "tempAttachments", ::GlobalNamespace::GameEntityManager*>(std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityManager_AttachmentData>*>(value));
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityManager_AttachmentData>* GlobalNamespace::GameEntityManager::getStaticF_tempAttachments()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityManager_AttachmentData>*, "tempAttachments", ::GlobalNamespace::GameEntityManager*>();
}
inline void GlobalNamespace::GameEntityManager::setStaticF_s_scenePlacedEntities(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*>*, "s_scenePlacedEntities", ::GlobalNamespace::GameEntityManager*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*>* GlobalNamespace::GameEntityManager::getStaticF_s_scenePlacedEntities()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*>*, "s_scenePlacedEntities", ::GlobalNamespace::GameEntityManager*>();
}
inline void GlobalNamespace::GameEntityManager::setStaticF_s_scenePlacedHomeScenes(::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*, "s_scenePlacedHomeScenes", ::GlobalNamespace::GameEntityManager*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::StringW>* GlobalNamespace::GameEntityManager::getStaticF_s_scenePlacedHomeScenes()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*, "s_scenePlacedHomeScenes", ::GlobalNamespace::GameEntityManager*>();
}
inline void GlobalNamespace::GameEntityManager::add_onZoneStart(::GlobalNamespace::GameEntityManager_ZoneStartEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"add_onZoneStart", {}, {::i2c::type_of<::GlobalNamespace::GameEntityManager_ZoneStartEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameEntityManager::remove_onZoneStart(::GlobalNamespace::GameEntityManager_ZoneStartEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"remove_onZoneStart", {}, {::i2c::type_of<::GlobalNamespace::GameEntityManager_ZoneStartEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameEntityManager::add_onZoneClear(::GlobalNamespace::GameEntityManager_ZoneClearEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"add_onZoneClear", {}, {::i2c::type_of<::GlobalNamespace::GameEntityManager_ZoneClearEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameEntityManager::remove_onZoneClear(::GlobalNamespace::GameEntityManager_ZoneClearEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"remove_onZoneClear", {}, {::i2c::type_of<::GlobalNamespace::GameEntityManager_ZoneClearEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameEntityManager::add_OnAuthorityChanged(::GlobalNamespace::GameEntityManager_AuthorityChangeEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"add_OnAuthorityChanged", {}, {::i2c::type_of<::GlobalNamespace::GameEntityManager_AuthorityChangeEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameEntityManager::remove_OnAuthorityChanged(::GlobalNamespace::GameEntityManager_AuthorityChangeEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"remove_OnAuthorityChanged", {}, {::i2c::type_of<::GlobalNamespace::GameEntityManager_AuthorityChangeEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameEntityManager::add_OnZoneActiveChanged(::GlobalNamespace::GameEntityManager_ZoneActiveChangeEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"add_OnZoneActiveChanged", {}, {::i2c::type_of<::GlobalNamespace::GameEntityManager_ZoneActiveChangeEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameEntityManager::remove_OnZoneActiveChanged(::GlobalNamespace::GameEntityManager_ZoneActiveChangeEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"remove_OnZoneActiveChanged", {}, {::i2c::type_of<::GlobalNamespace::GameEntityManager_ZoneActiveChangeEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::GameEntityManager> GlobalNamespace::GameEntityManager::get_activeManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"get_activeManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GameEntityManager>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::GameEntityManager::set_activeManager(::GlobalNamespace::GameEntityManager*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"set_activeManager", {}, {::i2c::type_of<::GlobalNamespace::GameEntityManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool GlobalNamespace::GameEntityManager::get_TickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"get_TickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GameEntityManager::set_TickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameEntityManager::get_PendingTableData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"get_PendingTableData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GameEntityManager::set_PendingTableData(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"set_PendingTableData", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameEntityManager::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameEntityManager*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameEntityManager::RegisterScenePlacedEntities()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"RegisterScenePlacedEntities", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameEntityManager::RegisterSingleScenePlacedEntity(::GlobalNamespace::GameEntity*  entity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"RegisterSingleScenePlacedEntity", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entity);
}
inline void GlobalNamespace::GameEntityManager::EnsureScenePlacedRecord(::GlobalNamespace::GameEntity*  entity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"EnsureScenePlacedRecord", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entity);
}
inline void GlobalNamespace::GameEntityManager::ResetScenePlacedTransform(::GlobalNamespace::GameEntity*  entity, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::GameEntityManager_ScenePlacedRecord>  record)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"ResetScenePlacedTransform", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GameEntityManager_ScenePlacedRecord>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, entity, record);
}
inline void GlobalNamespace::GameEntityManager::ReleaseScenePlacedHold(::GlobalNamespace::GameEntity*  entity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"ReleaseScenePlacedHold", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entity);
}
inline void GlobalNamespace::GameEntityManager::DetachScenePlacedFromRig(::GlobalNamespace::GameEntity*  entity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"DetachScenePlacedFromRig", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, entity);
}
inline void GlobalNamespace::GameEntityManager::MoveScenePlacedToHomeScene(::GlobalNamespace::GameEntity*  entity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"MoveScenePlacedToHomeScene", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, entity);
}
inline void GlobalNamespace::GameEntityManager::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameEntityManager*>(), 46}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameEntityManager::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameEntityManager*>(), 47}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameEntityManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::GameEntityManager> GlobalNamespace::GameEntityManager::GetManagerForZone(::GlobalNamespace::GTZone  zone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"GetManagerForZone", {}, {::i2c::type_of<::GlobalNamespace::GTZone>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GameEntityManager>>(nullptr, ___internal_method, zone);
}
inline void GlobalNamespace::GameEntityManager::Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameEntityId GlobalNamespace::GameEntityManager::AddGameEntity(::GlobalNamespace::GameEntity*  gameEntity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"AddGameEntity", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameEntityId>(this, ___internal_method, gameEntity);
}
inline ::GlobalNamespace::GameEntityId GlobalNamespace::GameEntityManager::AddGameEntity(int32_t  netId, ::GlobalNamespace::GameEntity*  gameEntity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"AddGameEntity", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameEntityId>(this, ___internal_method, netId, gameEntity);
}
inline int32_t GlobalNamespace::GameEntityManager::FindNewEntityIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"FindNewEntityIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::GameEntityManager::RemoveGameEntity(::GlobalNamespace::GameEntity*  entity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"RemoveGameEntity", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entity);
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>* GlobalNamespace::GameEntityManager::GetGameEntities()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"GetGameEntities", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*>(this, ___internal_method);
}
inline bool GlobalNamespace::GameEntityManager::IsValidNetId(int32_t  netId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"IsValidNetId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, netId);
}
inline int32_t GlobalNamespace::GameEntityManager::FindOpenIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"FindOpenIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::GlobalNamespace::GameEntityId GlobalNamespace::GameEntityManager::GetEntityIdFromNetId(int32_t  netId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"GetEntityIdFromNetId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameEntityId>(this, ___internal_method, netId);
}
inline int32_t GlobalNamespace::GameEntityManager::GetNetIdFromEntityId(::GlobalNamespace::GameEntityId  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"GetNetIdFromEntityId", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, id);
}
inline void GlobalNamespace::GameEntityManager::ClearPendingRPCBatches()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"ClearPendingRPCBatches", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GameEntityManager::IsAuthority()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameEntityManager*>(), 64}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::GameEntityManager::IsAuthorityPlayer(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"IsAuthorityPlayer", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player);
}
inline bool GlobalNamespace::GameEntityManager::IsAuthorityPlayer(::Photon::Realtime::Player*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"IsAuthorityPlayer", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player);
}
inline bool GlobalNamespace::GameEntityManager::IsZoneAuthority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"IsZoneAuthority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::GameEntityManager::HasAuthority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"HasAuthority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Photon::Realtime::Player* GlobalNamespace::GameEntityManager::GetAuthorityPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"GetAuthorityPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Realtime::Player*>(this, ___internal_method);
}
inline bool GlobalNamespace::GameEntityManager::IsZoneActive()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameEntityManager*>(), 65}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::GameEntityManager::IsSuppressZonesInVStumpEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"IsSuppressZonesInVStumpEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::GameEntityManager::IsPositionInManagerBounds(::UnityEngine::Vector3  pos)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameEntityManager*>(), 66}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pos);
}
inline bool GlobalNamespace::GameEntityManager::IsValidClientRPC(::Photon::Realtime::Player*  sender)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameEntityManager*>(), 67}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sender);
}
inline bool GlobalNamespace::GameEntityManager::IsValidClientRPC(::Photon::Realtime::Player*  sender, int32_t  entityNetId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"IsValidClientRPC", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sender, entityNetId);
}
inline bool GlobalNamespace::GameEntityManager::IsValidClientRPC(::Photon::Realtime::Player*  sender, int32_t  entityNetId, ::UnityEngine::Vector3  pos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"IsValidClientRPC", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sender, entityNetId, pos);
}
inline bool GlobalNamespace::GameEntityManager::IsValidClientRPC(::Photon::Realtime::Player*  sender, ::UnityEngine::Vector3  pos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"IsValidClientRPC", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sender, pos);
}
inline bool GlobalNamespace::GameEntityManager::IsValidAuthorityRPC(::Photon::Realtime::Player*  sender)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"IsValidAuthorityRPC", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sender);
}
inline bool GlobalNamespace::GameEntityManager::IsValidAuthorityRPC(::Photon::Realtime::Player*  sender, int32_t  entityNetId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"IsValidAuthorityRPC", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sender, entityNetId);
}
inline bool GlobalNamespace::GameEntityManager::IsValidAuthorityRPC(::Photon::Realtime::Player*  sender, int32_t  entityNetId, ::UnityEngine::Vector3  pos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"IsValidAuthorityRPC", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sender, entityNetId, pos);
}
inline bool GlobalNamespace::GameEntityManager::IsValidAuthorityRPC(::Photon::Realtime::Player*  sender, ::UnityEngine::Vector3  pos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"IsValidAuthorityRPC", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sender, pos);
}
inline bool GlobalNamespace::GameEntityManager::IsValidEntity(::GlobalNamespace::GameEntityId  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"IsValidEntity", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id);
}
inline ::UnityW<::GlobalNamespace::GameEntity> GlobalNamespace::GameEntityManager::GetGameEntity(::GlobalNamespace::GameEntityId  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"GetGameEntity", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GameEntity>>(this, ___internal_method, id);
}
inline ::UnityW<::GlobalNamespace::GameEntity> GlobalNamespace::GameEntityManager::GetGameEntityFromNetId(int32_t  netId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"GetGameEntityFromNetId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GameEntity>>(this, ___internal_method, netId);
}
inline ::UnityW<::GlobalNamespace::GameEntity> GlobalNamespace::GameEntityManager::GetGameEntity(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"GetGameEntity", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GameEntity>>(this, ___internal_method, index);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline T GlobalNamespace::GameEntityManager::GetGameComponent(::GlobalNamespace::GameEntityId  id)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                    {"GetGameComponent", {::i2c::class_of<T>()}, {::i2c::type_of<::GlobalNamespace::GameEntityId>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, id);
}
inline bool GlobalNamespace::GameEntityManager::LocalValidateMigrationRecoveryItem(int32_t  entityTypeId, ::by_ref<int64_t>  createData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"LocalValidateMigrationRecoveryItem", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, entityTypeId, createData);
}
inline bool GlobalNamespace::GameEntityManager::IsEntityValidToMigrate(::GlobalNamespace::GameEntity*  entity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"IsEntityValidToMigrate", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, entity);
}
inline void GlobalNamespace::GameEntityManager::BuildFactory()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"BuildFactory", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameEntityManager::AddToFactory(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::GameEntity>>*  items)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"AddToFactory", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::GameEntity>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, items);
}
inline int32_t GlobalNamespace::GameEntityManager::CreateNetId(int32_t  numToCreate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"CreateNetId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, numToCreate);
}
inline void GlobalNamespace::GameEntityManager::RecalculateNextNetId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"RecalculateNextNetId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameEntityId GlobalNamespace::GameEntityManager::RequestCreateItem(int32_t  entityTypeId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, int64_t  createData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"RequestCreateItem", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameEntityId>(this, ___internal_method, entityTypeId, position, rotation, createData);
}
inline ::GlobalNamespace::GameEntityId GlobalNamespace::GameEntityManager::RequestCreateItem(int32_t  entityTypeId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, int64_t  createData, ::GlobalNamespace::GameEntityId  createdByEntityId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"RequestCreateItem", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::GlobalNamespace::GameEntityId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameEntityId>(this, ___internal_method, entityTypeId, position, rotation, createData, createdByEntityId);
}
inline void GlobalNamespace::GameEntityManager::CreateItemRPC(::ArrayW<int32_t>  netId, ::ArrayW<int32_t>  entityTypeId, ::ArrayW<int64_t>  packedPos, ::ArrayW<int32_t>  packedRot, ::ArrayW<int64_t>  createData, ::ArrayW<int32_t>  createdByEntityNetId, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"CreateItemRPC", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int64_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int64_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, netId, entityTypeId, packedPos, packedRot, createData, createdByEntityNetId, info);
}
inline void GlobalNamespace::GameEntityManager::RequestCreateItems(::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityCreateData>*  entityData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"RequestCreateItems", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityCreateData>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entityData);
}
inline void GlobalNamespace::GameEntityManager::CreateItemsRPC(int32_t  zoneId, ::ArrayW<uint8_t>  stateData, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"CreateItemsRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, zoneId, stateData, info);
}
inline void GlobalNamespace::GameEntityManager::RequestMigrationRecovery(::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityCreateData>*  entityData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"RequestMigrationRecovery", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityCreateData>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entityData);
}
inline void GlobalNamespace::GameEntityManager::JoinWithItems(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*  entities)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"JoinWithItems", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entities);
}
inline void GlobalNamespace::GameEntityManager::PlayerLeftZoneRPC(::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"PlayerLeftZoneRPC", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline bool GlobalNamespace::GameEntityManager::TryGetScenePlacedRecord(::GlobalNamespace::GameEntity*  entity, ::by_ref<::GlobalNamespace::GameEntityManager_ScenePlacedRecord>  record)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"TryGetScenePlacedRecord", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GameEntityManager_ScenePlacedRecord>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, entity, record);
}
inline void GlobalNamespace::GameEntityManager::JoinWithItemsRPC(::ArrayW<uint8_t>  stateData, ::ArrayW<int32_t>  netIds, int32_t  joiningActorNum, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"JoinWithItemsRPC", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateData, netIds, joiningActorNum, info);
}
inline void GlobalNamespace::GameEntityManager::_JoinWithItems_WriteOne(::System::IO::BinaryWriter*  writer, int32_t  typeId, ::UnityEngine::Vector3  localPos, ::UnityEngine::Quaternion  localRot, int64_t  createData, int32_t  createdByEntityId, int32_t  slotIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"_JoinWithItems_WriteOne", {}, {::i2c::type_of<::System::IO::BinaryWriter*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, typeId, localPos, localRot, createData, createdByEntityId, slotIndex);
}
inline void GlobalNamespace::GameEntityManager::_JoinWithItems_ReadOne(::System::IO::BinaryReader*  reader, ::by_ref<int32_t>  entityTypeId, ::by_ref<::UnityEngine::Vector3>  localPos, ::by_ref<::UnityEngine::Quaternion>  localRot, ::by_ref<int64_t>  createData, ::by_ref<int32_t>  createdByEntityNetId, ::by_ref<int32_t>  slotIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"_JoinWithItems_ReadOne", {}, {::i2c::type_of<::System::IO::BinaryReader*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, reader, entityTypeId, localPos, localRot, createData, createdByEntityNetId, slotIndex);
}
inline bool GlobalNamespace::GameEntityManager::FactoryHasEntity(int32_t  entityTypeId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"FactoryHasEntity", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, entityTypeId);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::GameEntityManager::FactoryPrefabById(int32_t  entityTypeId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"FactoryPrefabById", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, entityTypeId);
}
inline ::UnityW<::GlobalNamespace::GameEntity> GlobalNamespace::GameEntityManager::FactoryEntityById(int32_t  entityTypeId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"FactoryEntityById", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GameEntity>>(this, ___internal_method, entityTypeId);
}
inline int32_t GlobalNamespace::GameEntityManager::FactoryGetBuiltInEntityCountById(int32_t  entityTypeId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"FactoryGetBuiltInEntityCountById", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, entityTypeId);
}
inline bool GlobalNamespace::GameEntityManager::PriceLookup(int32_t  entityTypeId, ::by_ref<int32_t>  price)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"PriceLookup", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, entityTypeId, price);
}
inline void GlobalNamespace::GameEntityManager::ValidateThatNetIdIsNotAlreadyUsed(int32_t  netId, int32_t  newTypeId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"ValidateThatNetIdIsNotAlreadyUsed", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, netId, newTypeId);
}
inline ::GlobalNamespace::GameEntityId GlobalNamespace::GameEntityManager::CreateAndInitItemLocal(int32_t  netId, int32_t  entityTypeId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, int64_t  createData, int32_t  createdByEntityNetId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"CreateAndInitItemLocal", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameEntityId>(this, ___internal_method, netId, entityTypeId, position, rotation, createData, createdByEntityNetId);
}
inline ::UnityW<::GlobalNamespace::GameEntity> GlobalNamespace::GameEntityManager::CreateItemLocal(int32_t  netId, int32_t  entityTypeId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"CreateItemLocal", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GameEntity>>(this, ___internal_method, netId, entityTypeId, position, rotation);
}
inline void GlobalNamespace::GameEntityManager::InitItemLocal(::GlobalNamespace::GameEntity*  entity, int64_t  createData, int32_t  createdByEntityNetId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"InitItemLocal", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entity, createData, createdByEntityNetId);
}
inline void GlobalNamespace::GameEntityManager::RequestDestroyItem(::GlobalNamespace::GameEntityId  entityId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"RequestDestroyItem", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entityId);
}
inline void GlobalNamespace::GameEntityManager::RequestDestroyItems(::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityId>*  entityIds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"RequestDestroyItems", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityId>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entityIds);
}
inline void GlobalNamespace::GameEntityManager::DestroyItemRPC(::ArrayW<int32_t>  entityNetId, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"DestroyItemRPC", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entityNetId, info);
}
inline void GlobalNamespace::GameEntityManager::DestroyItemLocal(::GlobalNamespace::GameEntityId  entityId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"DestroyItemLocal", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entityId);
}
inline void GlobalNamespace::GameEntityManager::RequestState(::GlobalNamespace::GameEntityId  entityId, int64_t  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"RequestState", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entityId, newState);
}
inline void GlobalNamespace::GameEntityManager::RequestStateAuthority(::GlobalNamespace::GameEntityId  entityId, int64_t  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"RequestStateAuthority", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entityId, newState);
}
inline void GlobalNamespace::GameEntityManager::RequestStateRPC(int32_t  entityNetId, int64_t  newState, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"RequestStateRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entityNetId, newState, info);
}
inline void GlobalNamespace::GameEntityManager::ApplyStateRPC(::ArrayW<int32_t>  netId, ::ArrayW<int64_t>  newState, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"ApplyStateRPC", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int64_t>>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, netId, newState, info);
}
inline void GlobalNamespace::GameEntityManager::RequestGrabEntity(::GlobalNamespace::GameEntityId  gameEntityId, bool  isLeftHand, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"RequestGrabEntity", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameEntityId, isLeftHand, localPosition, localRotation);
}
inline void GlobalNamespace::GameEntityManager::RequestGrabEntityRPC(int32_t  entityNetId, bool  isLeftHand, int64_t  packedPosRot, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"RequestGrabEntityRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entityNetId, isLeftHand, packedPosRot, info);
}
inline void GlobalNamespace::GameEntityManager::GrabEntityRPC(int32_t  entityNetId, bool  isLeftHand, int64_t  packedPosRot, ::Photon::Realtime::Player*  grabbedByPlayer, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"GrabEntityRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entityNetId, isLeftHand, packedPosRot, grabbedByPlayer, info);
}
inline void GlobalNamespace::GameEntityManager::GrabEntityLocal(::GlobalNamespace::GameEntityId  gameEntityId, bool  isLeftHand, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation, ::GlobalNamespace::NetPlayer*  grabbedByPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"GrabEntityLocal", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameEntityId, isLeftHand, localPosition, localRotation, grabbedByPlayer);
}
inline void GlobalNamespace::GameEntityManager::GrabEntityOnCreate(::GlobalNamespace::GameEntityId  gameEntityId, bool  isLeftHand, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation, ::GlobalNamespace::NetPlayer*  grabbedByPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"GrabEntityOnCreate", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameEntityId, isLeftHand, localPosition, localRotation, grabbedByPlayer);
}
inline ::GlobalNamespace::GameEntityId GlobalNamespace::GameEntityManager::TryGrabLocal(::UnityEngine::Vector3  handPosition, ::UnityEngine::Vector3  fingerPosition, bool  isLeftHand, ::by_ref<::UnityEngine::Vector3>  closestPointOnBoundingBox, ::by_ref<bool>  fingerPositionUsed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"TryGrabLocal", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameEntityId>(this, ___internal_method, handPosition, fingerPosition, isLeftHand, closestPointOnBoundingBox, fingerPositionUsed);
}
inline bool GlobalNamespace::GameEntityManager::IsThinAlongDirection(::UnityEngine::Transform*  transform, ::UnityEngine::Bounds  bounds, ::UnityEngine::Vector3  direction, float_t  thinThreshold)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"IsThinAlongDirection", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, transform, bounds, direction, thinThreshold);
}
inline float_t GlobalNamespace::GameEntityManager::GetBoundsThicknessAlongDirection(::UnityEngine::Bounds  bounds, ::UnityEngine::Vector3  localDirection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"GetBoundsThicknessAlongDirection", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, bounds, localDirection);
}
inline void GlobalNamespace::GameEntityManager::_TryGrabLocal_TestBounds(::UnityEngine::Vector3  handPosition, ::UnityEngine::Transform*  t, ::UnityEngine::Vector3  slopProjection, ::UnityEngine::Bounds  bounds, float_t  slopForSpeed, float_t  maxAdjustedGrabDistance, ::GlobalNamespace::GameEntity*  entity, bool  isTestingAltPosition, ::by_ref<float_t>  bestDist, ::by_ref<::GlobalNamespace::GameEntity*>  bestEntity, ::by_ref<::UnityEngine::Vector3>  closestPoint, ::by_ref<bool>  usedAltPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"_TryGrabLocal_TestBounds", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::GameEntity*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GameEntity*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handPosition, t, slopProjection, bounds, slopForSpeed, maxAdjustedGrabDistance, entity, isTestingAltPosition, bestDist, bestEntity, closestPoint, usedAltPosition);
}
inline void GlobalNamespace::GameEntityManager::DrawDebugStar(::UnityEngine::Vector3  position, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"DrawDebugStar", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, radius);
}
inline bool GlobalNamespace::GameEntityManager::SegmentHitsBounds(::UnityEngine::Bounds  bounds, ::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, ::by_ref<::UnityEngine::Vector3>  hitPoint, ::by_ref<float_t>  distance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"SegmentHitsBounds", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, bounds, a, b, hitPoint, distance);
}
template<typename T>
inline bool GlobalNamespace::GameEntityManager::GetEntitiesWithComponentInRadius(::UnityEngine::Vector3  center, float_t  radius, bool  checkRootOnly, ::System::Collections::Generic::List_1<T>*  nearbyEntities)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                    {"GetEntitiesWithComponentInRadius", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, center, radius, checkRootOnly, nearbyEntities);
}
inline void GlobalNamespace::GameEntityManager::LogGrabDiagnostics(::UnityEngine::Vector3  handPosition, bool  isLeftHand, int32_t  handIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"LogGrabDiagnostics", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handPosition, isLeftHand, handIndex);
}
inline ::StringW GlobalNamespace::GameEntityManager::WhyGrabRejected(::GlobalNamespace::GameEntity*  gameEntity, int32_t  playerActorNumber, bool  isLeftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"WhyGrabRejected", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, gameEntity, playerActorNumber, isLeftHand);
}
inline bool GlobalNamespace::GameEntityManager::ValidateGrab(::GlobalNamespace::GameEntity*  gameEntity, int32_t  playerActorNumber, bool  isLeftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"ValidateGrab", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gameEntity, playerActorNumber, isLeftHand);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::MonoBehaviour*>)
inline T GlobalNamespace::GameEntityManager::GetParentEntity(::UnityEngine::Transform*  transform)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                    {"GetParentEntity", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, transform);
}
inline void GlobalNamespace::GameEntityManager::RequestThrowEntity(::GlobalNamespace::GameEntityId  entityId, bool  isLeftHand, ::UnityEngine::Vector3  headPosition, ::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angVelocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"RequestThrowEntity", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entityId, isLeftHand, headPosition, velocity, angVelocity);
}
inline void GlobalNamespace::GameEntityManager::RequestThrowEntityRPC(int32_t  entityNetId, bool  isLeftHand, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angVelocity, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"RequestThrowEntityRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entityNetId, isLeftHand, position, rotation, velocity, angVelocity, info);
}
inline void GlobalNamespace::GameEntityManager::ThrowEntityRPC(int32_t  entityNetId, bool  isLeftHand, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angVelocity, ::Photon::Realtime::Player*  thrownByPlayer, double_t  throwTime, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"ThrowEntityRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entityNetId, isLeftHand, position, rotation, velocity, angVelocity, thrownByPlayer, throwTime, info);
}
inline void GlobalNamespace::GameEntityManager::ThrowEntityLocal(::GlobalNamespace::GameEntityId  entityId, bool  isLeftHand, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angVelocity, ::GlobalNamespace::NetPlayer*  thrownByPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"ThrowEntityLocal", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entityId, isLeftHand, position, rotation, velocity, angVelocity, thrownByPlayer);
}
inline void GlobalNamespace::GameEntityManager::RequestSnapEntity(::GlobalNamespace::GameEntityId  entityId, bool  isLeftHand, ::GlobalNamespace::SnapJointType  jointType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"RequestSnapEntity", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::SnapJointType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entityId, isLeftHand, jointType);
}
inline void GlobalNamespace::GameEntityManager::RequestSnapEntityRPC(int32_t  entityNetId, bool  isLeftHand, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, int32_t  jointType, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"RequestSnapEntityRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entityNetId, isLeftHand, position, rotation, jointType, info);
}
inline void GlobalNamespace::GameEntityManager::SnapEntityRPC(int32_t  entityNetId, bool  isLeftHand, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, int32_t  jointType, ::Photon::Realtime::Player*  thrownByPlayer, double_t  snapTime, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"SnapEntityRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entityNetId, isLeftHand, position, rotation, jointType, thrownByPlayer, snapTime, info);
}
inline void GlobalNamespace::GameEntityManager::SnapEntityLocal(::GlobalNamespace::GameEntityId  gameEntityId, bool  isLeftHand, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, int32_t  jointType, ::GlobalNamespace::NetPlayer*  snappedByPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"SnapEntityLocal", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameEntityId, isLeftHand, position, rotation, jointType, snappedByPlayer);
}
inline void GlobalNamespace::GameEntityManager::SnapEntityOnCreate(::GlobalNamespace::GameEntityId  gameEntityId, bool  isLeftHand, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation, int32_t  jointType, ::GlobalNamespace::NetPlayer*  grabbedByPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"SnapEntityOnCreate", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameEntityId, isLeftHand, localPosition, localRotation, jointType, grabbedByPlayer);
}
inline void GlobalNamespace::GameEntityManager::TryUnsnapLocal(::GlobalNamespace::GameEntity*  gameEntity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"TryUnsnapLocal", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, gameEntity);
}
inline void GlobalNamespace::GameEntityManager::RequestAttachEntity(::GlobalNamespace::GameEntityId  entityId, ::GlobalNamespace::GameEntityId  attachToEntityId, int32_t  slotId, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"RequestAttachEntity", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entityId, attachToEntityId, slotId, localPosition, localRotation);
}
inline void GlobalNamespace::GameEntityManager::RequestAttachEntityAuthority(::GlobalNamespace::GameEntityId  entityId, ::GlobalNamespace::GameEntityId  attachToEntityId, int32_t  slotId, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"RequestAttachEntityAuthority", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entityId, attachToEntityId, slotId, localPosition, localRotation);
}
inline void GlobalNamespace::GameEntityManager::RequestAttachEntityRPC(int32_t  entityNetId, int32_t  attachToEntityNetId, int32_t  slotId, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"RequestAttachEntityRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entityNetId, attachToEntityNetId, slotId, localPosition, localRotation, info);
}
inline void GlobalNamespace::GameEntityManager::AttachEntityRPC(int32_t  entityNetId, int32_t  attachToEntityNetId, int32_t  slotId, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation, ::Photon::Realtime::Player*  attachedByPlayer, double_t  snapTime, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"AttachEntityRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entityNetId, attachToEntityNetId, slotId, localPosition, localRotation, attachedByPlayer, snapTime, info);
}
inline void GlobalNamespace::GameEntityManager::AttachEntityLocal(::GlobalNamespace::GameEntityId  gameEntityId, ::GlobalNamespace::GameEntityId  attachToEntityId, int32_t  slotId, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"AttachEntityLocal", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameEntityId, attachToEntityId, slotId, localPosition, localRotation);
}
inline void GlobalNamespace::GameEntityManager::TryDetachLocal(::GlobalNamespace::GameEntity*  gameEntity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"TryDetachLocal", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, gameEntity);
}
inline void GlobalNamespace::GameEntityManager::TryDetachCompletely(::GlobalNamespace::GameEntity*  gameEntity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"TryDetachCompletely", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, gameEntity);
}
inline void GlobalNamespace::GameEntityManager::TryRemoveFromHandLocal(::GlobalNamespace::GameEntity*  gameEntity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"TryRemoveFromHandLocal", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, gameEntity);
}
inline void GlobalNamespace::GameEntityManager::AttachEntityOnCreate(::GlobalNamespace::GameEntityId  gameEntityId, bool  isLeftHand, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation, int32_t  jointType, ::GlobalNamespace::NetPlayer*  grabbedByPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"AttachEntityOnCreate", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameEntityId, isLeftHand, localPosition, localRotation, jointType, grabbedByPlayer);
}
inline void GlobalNamespace::GameEntityManager::RequestHit(::GlobalNamespace::GameHitData  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"RequestHit", {}, {::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hit);
}
inline void GlobalNamespace::GameEntityManager::RequestHitRPC(int32_t  hittableNetId, int32_t  hitByNetId, int32_t  hitTypeId, ::UnityEngine::Vector3  entityPosition, ::UnityEngine::Vector3  hitPosition, ::UnityEngine::Vector3  hitImpulse, int32_t  hittablePoint, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"RequestHitRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hittableNetId, hitByNetId, hitTypeId, entityPosition, hitPosition, hitImpulse, hittablePoint, info);
}
inline void GlobalNamespace::GameEntityManager::ApplyHitRPC(int32_t  hittableNetId, int32_t  hitByNetId, int32_t  hitTypeId, ::UnityEngine::Vector3  entityPosition, ::UnityEngine::Vector3  hitPosition, ::UnityEngine::Vector3  hitImpulse, int32_t  hittablePoint, ::Photon::Realtime::Player*  player, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"ApplyHitRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hittableNetId, hitByNetId, hitTypeId, entityPosition, hitPosition, hitImpulse, hittablePoint, player, info);
}
inline bool GlobalNamespace::GameEntityManager::IsPlayerHandNearEntity(::GlobalNamespace::GamePlayer*  player, int32_t  entityNetId, bool  isLeftHand, bool  checkBothHands, float_t  acceptableRadius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"IsPlayerHandNearEntity", {}, {::i2c::type_of<::GlobalNamespace::GamePlayer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player, entityNetId, isLeftHand, checkBothHands, acceptableRadius);
}
inline bool GlobalNamespace::GameEntityManager::IsPlayerHandNearPosition(::GlobalNamespace::GamePlayer*  player, ::UnityEngine::Vector3  worldPosition, bool  isLeftHand, bool  checkBothHands, float_t  acceptableRadius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"IsPlayerHandNearPosition", {}, {::i2c::type_of<::GlobalNamespace::GamePlayer*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, player, worldPosition, isLeftHand, checkBothHands, acceptableRadius);
}
inline bool GlobalNamespace::GameEntityManager::IsEntityNearEntity(int32_t  entityNetId, int32_t  otherEntityNetId, float_t  acceptableRadius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"IsEntityNearEntity", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, entityNetId, otherEntityNetId, acceptableRadius);
}
inline bool GlobalNamespace::GameEntityManager::IsEntityNearPosition(int32_t  entityNetId, ::UnityEngine::Vector3  position, float_t  acceptableRadius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"IsEntityNearPosition", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, entityNetId, position, acceptableRadius);
}
template<typename T>
inline bool GlobalNamespace::GameEntityManager::ValidateDataType(::System::Object*  obj, ::by_ref<T>  dataAsType)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                    {"ValidateDataType", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, obj, dataAsType);
}
inline void GlobalNamespace::GameEntityManager::ClearZone(bool  ignoreHeldGadgets)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"ClearZone", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ignoreHeldGadgets);
}
inline int32_t GlobalNamespace::GameEntityManager::SerializeGameState(int32_t  zoneId, ::ArrayW<uint8_t>  bytes, int32_t  maxBytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"SerializeGameState", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, zoneId, bytes, maxBytes);
}
inline void GlobalNamespace::GameEntityManager::DeserializeTableState(::ArrayW<uint8_t>  bytes, int32_t  numBytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"DeserializeTableState", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bytes, numBytes);
}
inline void GlobalNamespace::GameEntityManager::UpdateZoneState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"UpdateZoneState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameEntityManager::UpdateAuthority(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  allRigs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"UpdateAuthority", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, allRigs);
}
inline void GlobalNamespace::GameEntityManager::UpdateClientsFromAuthority(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  allRigs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"UpdateClientsFromAuthority", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, allRigs);
}
inline void GlobalNamespace::GameEntityManager::TestSerializeTableState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"TestSerializeTableState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameEntityManager::ClearByteBuffer(::ArrayW<uint8_t>  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"ClearByteBuffer", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer);
}
inline void GlobalNamespace::GameEntityManager::SendZoneStateToPlayerOrTarget(::GlobalNamespace::GTZone  zone, ::Photon::Realtime::Player*  player, ::Photon::Pun::RpcTarget  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"SendZoneStateToPlayerOrTarget", {}, {::i2c::type_of<::GlobalNamespace::GTZone>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::Photon::Pun::RpcTarget>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, zone, player, target);
}
inline void GlobalNamespace::GameEntityManager::SendTableDataRPC(int32_t  packetNum, int32_t  totalBytes, ::ArrayW<uint8_t>  bytes, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"SendTableDataRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, packetNum, totalBytes, bytes, info);
}
inline void GlobalNamespace::GameEntityManager::ResolveTableData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"ResolveTableData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameEntityManager::UpdateZoneStateAuthority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"UpdateZoneStateAuthority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameEntityManager::UpdateZoneStateClient()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"UpdateZoneStateClient", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GameEntityManager::IsInZone()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameEntityManager*>(), 68}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::GameEntityManager::ShouldClearZone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"ShouldClearZone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GameEntityManager::SetZoneState(::GlobalNamespace::GameEntityManager_ZoneState  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"SetZoneState", {}, {::i2c::type_of<::GlobalNamespace::GameEntityManager_ZoneState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GlobalNamespace::GameEntityManager::DebugSendState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"DebugSendState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameEntityManager::RequestZoneStateRPC(int32_t  zoneId, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"RequestZoneStateRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, zoneId, info);
}
inline void GlobalNamespace::GameEntityManager::WriteDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameEntityManager*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameEntityManager::ReadDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameEntityManager*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameEntityManager::WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameEntityManager*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::GameEntityManager::ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameEntityManager*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::GameEntityManager::OnNetworkJoinedRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"OnNetworkJoinedRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameEntityManager::OnNetworkLeftRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"OnNetworkLeftRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameEntityManager::OnNetworkPlayerLeft(::GlobalNamespace::NetPlayer*  leavingPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"OnNetworkPlayerLeft", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, leavingPlayer);
}
inline void GlobalNamespace::GameEntityManager::OnRigDeactivated(::GlobalNamespace::RigContainer*  container)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"OnRigDeactivated", {}, {::i2c::type_of<::GlobalNamespace::RigContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container);
}
inline void GlobalNamespace::GameEntityManager::OnOwnershipTransferred(::GlobalNamespace::NetPlayer*  toPlayer, ::GlobalNamespace::NetPlayer*  fromPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"OnOwnershipTransferred", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, toPlayer, fromPlayer);
}
inline bool GlobalNamespace::GameEntityManager::OnOwnershipRequest(::GlobalNamespace::NetPlayer*  fromPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"OnOwnershipRequest", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fromPlayer);
}
inline void GlobalNamespace::GameEntityManager::OnMyOwnerLeft()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"OnMyOwnerLeft", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GameEntityManager::OnMasterClientAssistedTakeoverRequest(::GlobalNamespace::NetPlayer*  fromPlayer, ::GlobalNamespace::NetPlayer*  toPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"OnMasterClientAssistedTakeoverRequest", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fromPlayer, toPlayer);
}
inline void GlobalNamespace::GameEntityManager::OnMyCreatorLeft()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"OnMyCreatorLeft", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameEntityManager::RefreshRigList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"RefreshRigList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameEntityManager::InitSceneUnloadHandler()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"InitSceneUnloadHandler", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::GameEntityManager::OnZoneSceneUnloaded(::UnityEngine::SceneManagement::Scene  scene)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"OnZoneSceneUnloaded", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, scene);
}
inline ::StringW GlobalNamespace::GameEntityManager::GetZoneSceneName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"GetZoneSceneName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GlobalNamespace::GameEntityManager::HasAnyScenePlacedInScene(::StringW  sceneName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"HasAnyScenePlacedInScene", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, sceneName);
}
inline void GlobalNamespace::GameEntityManager::RegisterScenePlacedEntity(::GlobalNamespace::GameEntity*  entity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"RegisterScenePlacedEntity", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, entity);
}
inline void GlobalNamespace::GameEntityManager::NotifyManagersOfLateScenePlacedEntity(::GlobalNamespace::GameEntity*  entity, ::StringW  sceneName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"NotifyManagersOfLateScenePlacedEntity", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, entity, sceneName);
}
inline void GlobalNamespace::GameEntityManager::UnregisterScenePlacedEntity(::GlobalNamespace::GameEntity*  entity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"UnregisterScenePlacedEntity", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, entity);
}
inline bool GlobalNamespace::GameEntityManager::IsScenePlacedNetId(int32_t  netId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"IsScenePlacedNetId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, netId);
}
inline int32_t GlobalNamespace::GameEntityManager::NetIdFromXSceneRefId(int32_t  uniqueId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"NetIdFromXSceneRefId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, uniqueId);
}
inline int32_t GlobalNamespace::GameEntityManager::ComputeNetIdFromHierarchyForCustomMaps(::UnityEngine::Transform*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {"ComputeNetIdFromHierarchyForCustomMaps", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, t);
}
inline void GlobalNamespace::GameEntityManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameEntityManager::CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameEntityManager*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void GlobalNamespace::GameEntityManager::CopyStateToBackingFields()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameEntityManager*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameEntityManager* GlobalNamespace::GameEntityManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameEntityManager*>());
}
/// @brief Convert operator to "::GlobalNamespace::IRequestableOwnershipGuardCallbacks"
constexpr  GlobalNamespace::GameEntityManager::operator ::GlobalNamespace::IRequestableOwnershipGuardCallbacks*() noexcept {
return static_cast<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IRequestableOwnershipGuardCallbacks"
constexpr ::GlobalNamespace::IRequestableOwnershipGuardCallbacks* GlobalNamespace::GameEntityManager::i___GlobalNamespace__IRequestableOwnershipGuardCallbacks() noexcept {
return static_cast<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr  GlobalNamespace::GameEntityManager::operator ::GlobalNamespace::ITickSystemTick*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* GlobalNamespace::GameEntityManager::i___GlobalNamespace__ITickSystemTick() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameEntityManager::GameEntityManager()   {
}
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager___c__DisplayClass159_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager___c__DisplayClass159_0::*)()>(&::GlobalNamespace::GameEntityManager___c__DisplayClass159_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58327f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager___c__DisplayClass159_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager___c__DisplayClass159_0._JoinWithItemsRPC_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager___c__DisplayClass159_0::*)()>(&::GlobalNamespace::GameEntityManager___c__DisplayClass159_0::_JoinWithItemsRPC_b__0)> {
  constexpr static std::size_t size = 0xe2c;
  constexpr static std::size_t addrs = 0x58327f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager___c__DisplayClass159_0*>(),
                        {"<JoinWithItemsRPC>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GamePlayer>& GlobalNamespace::GameEntityManager___c__DisplayClass159_0::__cordl_internal_get_joiningPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joiningPlayer;
}
constexpr ::UnityW<::GlobalNamespace::GamePlayer> const& GlobalNamespace::GameEntityManager___c__DisplayClass159_0::__cordl_internal_get_joiningPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joiningPlayer;
}
constexpr void GlobalNamespace::GameEntityManager___c__DisplayClass159_0::__cordl_internal_set_joiningPlayer(::UnityW<::GlobalNamespace::GamePlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___joiningPlayer = value;
}
constexpr ::System::Action*& GlobalNamespace::GameEntityManager___c__DisplayClass159_0::__cordl_internal_get_createItemsCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___createItemsCallback;
}
constexpr ::System::Action* const& GlobalNamespace::GameEntityManager___c__DisplayClass159_0::__cordl_internal_get_createItemsCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___createItemsCallback;
}
constexpr void GlobalNamespace::GameEntityManager___c__DisplayClass159_0::__cordl_internal_set_createItemsCallback(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___createItemsCallback = value;
}
constexpr ::ArrayW<uint8_t>& GlobalNamespace::GameEntityManager___c__DisplayClass159_0::__cordl_internal_get_stateData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateData;
}
constexpr ::ArrayW<uint8_t> const& GlobalNamespace::GameEntityManager___c__DisplayClass159_0::__cordl_internal_get_stateData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateData;
}
constexpr void GlobalNamespace::GameEntityManager___c__DisplayClass159_0::__cordl_internal_set_stateData(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stateData = value;
}
constexpr bool& GlobalNamespace::GameEntityManager___c__DisplayClass159_0::__cordl_internal_get_isAuthority()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isAuthority;
}
constexpr bool const& GlobalNamespace::GameEntityManager___c__DisplayClass159_0::__cordl_internal_get_isAuthority() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isAuthority;
}
constexpr void GlobalNamespace::GameEntityManager___c__DisplayClass159_0::__cordl_internal_set_isAuthority(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isAuthority = value;
}
constexpr ::ArrayW<int32_t>& GlobalNamespace::GameEntityManager___c__DisplayClass159_0::__cordl_internal_get_netIds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netIds;
}
constexpr ::ArrayW<int32_t> const& GlobalNamespace::GameEntityManager___c__DisplayClass159_0::__cordl_internal_get_netIds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netIds;
}
constexpr void GlobalNamespace::GameEntityManager___c__DisplayClass159_0::__cordl_internal_set_netIds(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___netIds = value;
}
constexpr ::UnityW<::GlobalNamespace::GameEntityManager>& GlobalNamespace::GameEntityManager___c__DisplayClass159_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GameEntityManager> const& GlobalNamespace::GameEntityManager___c__DisplayClass159_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::GameEntityManager___c__DisplayClass159_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GameEntityManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr int32_t& GlobalNamespace::GameEntityManager___c__DisplayClass159_0::__cordl_internal_get_joiningActorNum()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joiningActorNum;
}
constexpr int32_t const& GlobalNamespace::GameEntityManager___c__DisplayClass159_0::__cordl_internal_get_joiningActorNum() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joiningActorNum;
}
constexpr void GlobalNamespace::GameEntityManager___c__DisplayClass159_0::__cordl_internal_set_joiningActorNum(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___joiningActorNum = value;
}
inline void GlobalNamespace::GameEntityManager___c__DisplayClass159_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager___c__DisplayClass159_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameEntityManager___c__DisplayClass159_0::_JoinWithItemsRPC_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager___c__DisplayClass159_0*>(),
                        {"<JoinWithItemsRPC>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameEntityManager___c__DisplayClass159_0* GlobalNamespace::GameEntityManager___c__DisplayClass159_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameEntityManager___c__DisplayClass159_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameEntityManager___c__DisplayClass159_0::GameEntityManager___c__DisplayClass159_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager_ZoneStateData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager_ZoneStateData::*)()>(&::GlobalNamespace::GameEntityManager_ZoneStateData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58327e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager_ZoneStateData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GameEntityManager_ZoneState& GlobalNamespace::GameEntityManager_ZoneStateData::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr ::GlobalNamespace::GameEntityManager_ZoneState const& GlobalNamespace::GameEntityManager_ZoneStateData::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void GlobalNamespace::GameEntityManager_ZoneStateData::__cordl_internal_set_state(::GlobalNamespace::GameEntityManager_ZoneState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
constexpr double_t& GlobalNamespace::GameEntityManager_ZoneStateData::__cordl_internal_get_stateStartTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateStartTime;
}
constexpr double_t const& GlobalNamespace::GameEntityManager_ZoneStateData::__cordl_internal_get_stateStartTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateStartTime;
}
constexpr void GlobalNamespace::GameEntityManager_ZoneStateData::__cordl_internal_set_stateStartTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stateStartTime = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityManager_ZoneStateRequest>*& GlobalNamespace::GameEntityManager_ZoneStateData::__cordl_internal_get_zoneStateRequests()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zoneStateRequests;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityManager_ZoneStateRequest>* const& GlobalNamespace::GameEntityManager_ZoneStateData::__cordl_internal_get_zoneStateRequests() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zoneStateRequests;
}
constexpr void GlobalNamespace::GameEntityManager_ZoneStateData::__cordl_internal_set_zoneStateRequests(::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityManager_ZoneStateRequest>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zoneStateRequests = value;
}
constexpr ::System::Collections::Generic::List_1<::Photon::Realtime::Player*>*& GlobalNamespace::GameEntityManager_ZoneStateData::__cordl_internal_get_zonePlayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zonePlayers;
}
constexpr ::System::Collections::Generic::List_1<::Photon::Realtime::Player*>* const& GlobalNamespace::GameEntityManager_ZoneStateData::__cordl_internal_get_zonePlayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zonePlayers;
}
constexpr void GlobalNamespace::GameEntityManager_ZoneStateData::__cordl_internal_set_zonePlayers(::System::Collections::Generic::List_1<::Photon::Realtime::Player*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zonePlayers = value;
}
constexpr ::ArrayW<uint8_t>& GlobalNamespace::GameEntityManager_ZoneStateData::__cordl_internal_get_recievedStateBytes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recievedStateBytes;
}
constexpr ::ArrayW<uint8_t> const& GlobalNamespace::GameEntityManager_ZoneStateData::__cordl_internal_get_recievedStateBytes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recievedStateBytes;
}
constexpr void GlobalNamespace::GameEntityManager_ZoneStateData::__cordl_internal_set_recievedStateBytes(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___recievedStateBytes = value;
}
constexpr int32_t& GlobalNamespace::GameEntityManager_ZoneStateData::__cordl_internal_get_numRecievedStateBytes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numRecievedStateBytes;
}
constexpr int32_t const& GlobalNamespace::GameEntityManager_ZoneStateData::__cordl_internal_get_numRecievedStateBytes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numRecievedStateBytes;
}
constexpr void GlobalNamespace::GameEntityManager_ZoneStateData::__cordl_internal_set_numRecievedStateBytes(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___numRecievedStateBytes = value;
}
inline void GlobalNamespace::GameEntityManager_ZoneStateData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager_ZoneStateData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameEntityManager_ZoneStateData* GlobalNamespace::GameEntityManager_ZoneStateData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameEntityManager_ZoneStateData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameEntityManager_ZoneStateData::GameEntityManager_ZoneStateData()   {
}
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager_ZoneActiveChangeEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager_ZoneActiveChangeEvent::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::GameEntityManager_ZoneActiveChangeEvent::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x58326cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager_ZoneActiveChangeEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager_ZoneActiveChangeEvent.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager_ZoneActiveChangeEvent::*)(bool)>(&::GlobalNamespace::GameEntityManager_ZoneActiveChangeEvent::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x583276c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameEntityManager_ZoneActiveChangeEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::GameEntityManager_ZoneActiveChangeEvent*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager_ZoneActiveChangeEvent.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::GameEntityManager_ZoneActiveChangeEvent::*)(bool, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::GameEntityManager_ZoneActiveChangeEvent::BeginInvoke)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5832780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameEntityManager_ZoneActiveChangeEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::GameEntityManager_ZoneActiveChangeEvent*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager_ZoneActiveChangeEvent.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager_ZoneActiveChangeEvent::*)(::System::IAsyncResult*)>(&::GlobalNamespace::GameEntityManager_ZoneActiveChangeEvent::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58327dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameEntityManager_ZoneActiveChangeEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::GameEntityManager_ZoneActiveChangeEvent*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GameEntityManager_ZoneActiveChangeEvent::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager_ZoneActiveChangeEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::GameEntityManager_ZoneActiveChangeEvent::Invoke(bool  active)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameEntityManager_ZoneActiveChangeEvent*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, active);
}
inline ::System::IAsyncResult* GlobalNamespace::GameEntityManager_ZoneActiveChangeEvent::BeginInvoke(bool  active, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameEntityManager_ZoneActiveChangeEvent*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, active, callback, object);
}
inline void GlobalNamespace::GameEntityManager_ZoneActiveChangeEvent::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameEntityManager_ZoneActiveChangeEvent*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::GameEntityManager_ZoneActiveChangeEvent* GlobalNamespace::GameEntityManager_ZoneActiveChangeEvent::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameEntityManager_ZoneActiveChangeEvent*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameEntityManager_ZoneActiveChangeEvent::GameEntityManager_ZoneActiveChangeEvent()   {
}
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager_AuthorityChangeEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager_AuthorityChangeEvent::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::GameEntityManager_AuthorityChangeEvent::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5832578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager_AuthorityChangeEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager_AuthorityChangeEvent.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager_AuthorityChangeEvent::*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GameEntityManager_AuthorityChangeEvent::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5832684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameEntityManager_AuthorityChangeEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::GameEntityManager_AuthorityChangeEvent*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager_AuthorityChangeEvent.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::GameEntityManager_AuthorityChangeEvent::*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::GameEntityManager_AuthorityChangeEvent::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5832698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameEntityManager_AuthorityChangeEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::GameEntityManager_AuthorityChangeEvent*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager_AuthorityChangeEvent.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager_AuthorityChangeEvent::*)(::System::IAsyncResult*)>(&::GlobalNamespace::GameEntityManager_AuthorityChangeEvent::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58326c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameEntityManager_AuthorityChangeEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::GameEntityManager_AuthorityChangeEvent*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GameEntityManager_AuthorityChangeEvent::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager_AuthorityChangeEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::GameEntityManager_AuthorityChangeEvent::Invoke(::GlobalNamespace::NetPlayer*  fromPlayer, ::GlobalNamespace::NetPlayer*  toPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameEntityManager_AuthorityChangeEvent*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fromPlayer, toPlayer);
}
inline ::System::IAsyncResult* GlobalNamespace::GameEntityManager_AuthorityChangeEvent::BeginInvoke(::GlobalNamespace::NetPlayer*  fromPlayer, ::GlobalNamespace::NetPlayer*  toPlayer, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameEntityManager_AuthorityChangeEvent*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, fromPlayer, toPlayer, callback, object);
}
inline void GlobalNamespace::GameEntityManager_AuthorityChangeEvent::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameEntityManager_AuthorityChangeEvent*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::GameEntityManager_AuthorityChangeEvent* GlobalNamespace::GameEntityManager_AuthorityChangeEvent::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameEntityManager_AuthorityChangeEvent*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameEntityManager_AuthorityChangeEvent::GameEntityManager_AuthorityChangeEvent()   {
}
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager_ZoneClearEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager_ZoneClearEvent::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::GameEntityManager_ZoneClearEvent::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5832434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager_ZoneClearEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager_ZoneClearEvent.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager_ZoneClearEvent::*)(::GlobalNamespace::GTZone)>(&::GlobalNamespace::GameEntityManager_ZoneClearEvent::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x58324d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameEntityManager_ZoneClearEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::GameEntityManager_ZoneClearEvent*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager_ZoneClearEvent.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::GameEntityManager_ZoneClearEvent::*)(::GlobalNamespace::GTZone, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::GameEntityManager_ZoneClearEvent::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x58324e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameEntityManager_ZoneClearEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::GameEntityManager_ZoneClearEvent*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager_ZoneClearEvent.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager_ZoneClearEvent::*)(::System::IAsyncResult*)>(&::GlobalNamespace::GameEntityManager_ZoneClearEvent::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x583256c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameEntityManager_ZoneClearEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::GameEntityManager_ZoneClearEvent*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GameEntityManager_ZoneClearEvent::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager_ZoneClearEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::GameEntityManager_ZoneClearEvent::Invoke(::GlobalNamespace::GTZone  zoneId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameEntityManager_ZoneClearEvent*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, zoneId);
}
inline ::System::IAsyncResult* GlobalNamespace::GameEntityManager_ZoneClearEvent::BeginInvoke(::GlobalNamespace::GTZone  zoneId, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameEntityManager_ZoneClearEvent*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, zoneId, callback, object);
}
inline void GlobalNamespace::GameEntityManager_ZoneClearEvent::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameEntityManager_ZoneClearEvent*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::GameEntityManager_ZoneClearEvent* GlobalNamespace::GameEntityManager_ZoneClearEvent::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameEntityManager_ZoneClearEvent*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameEntityManager_ZoneClearEvent::GameEntityManager_ZoneClearEvent()   {
}
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager_ZoneStartEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager_ZoneStartEvent::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::GameEntityManager_ZoneStartEvent::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x58322f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager_ZoneStartEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager_ZoneStartEvent.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager_ZoneStartEvent::*)(::GlobalNamespace::GTZone)>(&::GlobalNamespace::GameEntityManager_ZoneStartEvent::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5832390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameEntityManager_ZoneStartEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::GameEntityManager_ZoneStartEvent*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager_ZoneStartEvent.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::GameEntityManager_ZoneStartEvent::*)(::GlobalNamespace::GTZone, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::GameEntityManager_ZoneStartEvent::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x58323a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameEntityManager_ZoneStartEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::GameEntityManager_ZoneStartEvent*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityManager_ZoneStartEvent.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityManager_ZoneStartEvent::*)(::System::IAsyncResult*)>(&::GlobalNamespace::GameEntityManager_ZoneStartEvent::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5832428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameEntityManager_ZoneStartEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::GameEntityManager_ZoneStartEvent*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GameEntityManager_ZoneStartEvent::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityManager_ZoneStartEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::GameEntityManager_ZoneStartEvent::Invoke(::GlobalNamespace::GTZone  zoneId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameEntityManager_ZoneStartEvent*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, zoneId);
}
inline ::System::IAsyncResult* GlobalNamespace::GameEntityManager_ZoneStartEvent::BeginInvoke(::GlobalNamespace::GTZone  zoneId, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameEntityManager_ZoneStartEvent*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, zoneId, callback, object);
}
inline void GlobalNamespace::GameEntityManager_ZoneStartEvent::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameEntityManager_ZoneStartEvent*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::GameEntityManager_ZoneStartEvent* GlobalNamespace::GameEntityManager_ZoneStartEvent::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameEntityManager_ZoneStartEvent*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameEntityManager_ZoneStartEvent::GameEntityManager_ZoneStartEvent()   {
}
