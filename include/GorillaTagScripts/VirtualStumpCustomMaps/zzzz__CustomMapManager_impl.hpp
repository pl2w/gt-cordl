#pragma once
// IWYU pragma private; include "GorillaTagScripts/VirtualStumpCustomMaps/CustomMapManager.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__CMSZoneShaderSettings_CMSZoneShaderProperties_impl.hpp"
#include "GlobalNamespace/zzzz__GTMapLoadSource_impl.hpp"
#include "GorillaTagScripts/VirtualStumpCustomMaps/zzzz__MapLoadStatus_impl.hpp"
#include "GorillaTagScripts/VirtualStumpCustomMaps/zzzz__VirtualStumpActivateMode_impl.hpp"
#include "Modio/Mods/zzzz__ModChangeType_impl.hpp"
#include "Modio/Mods/zzzz__ModId_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTagScripts/VirtualStumpCustomMaps/zzzz__CustomMapManager_def.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__CMSZoneShaderSettings_CMSZoneShaderProperties_def.hpp"
#include "GlobalNamespace/zzzz__BetterDayNightManager_def.hpp"
#include "GlobalNamespace/zzzz__GRReviveStation_def.hpp"
#include "GlobalNamespace/zzzz__GTMapLoadSource_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactorManager_def.hpp"
#include "GlobalNamespace/zzzz__GorillaFriendCollider_def.hpp"
#include "GlobalNamespace/zzzz__IBuildValidation_def.hpp"
#include "GlobalNamespace/zzzz__NetJoinResult_def.hpp"
#include "GlobalNamespace/zzzz__VirtualStumpTeleporter_def.hpp"
#include "GorillaTag/Rendering/zzzz__ZoneShaderSettings_def.hpp"
#include "GorillaTagScripts/UI/ModIO/zzzz__VirtualStumpTeleportingHUD_def.hpp"
#include "GorillaTagScripts/VirtualStumpCustomMaps/zzzz__CustomMapManager__Activate_d__102_def.hpp"
#include "GorillaTagScripts/VirtualStumpCustomMaps/zzzz__CustomMapManager__AttemptAutoLogin_d__128_def.hpp"
#include "GorillaTagScripts/VirtualStumpCustomMaps/zzzz__CustomMapManager__LoadInstalledMap_d__139_def.hpp"
#include "GorillaTagScripts/VirtualStumpCustomMaps/zzzz__CustomMapManager__LoadMap_d__138_def.hpp"
#include "GorillaTagScripts/VirtualStumpCustomMaps/zzzz__CustomMapManager_def.hpp"
#include "GorillaTagScripts/VirtualStumpCustomMaps/zzzz__MapLoadStatus_def.hpp"
#include "GorillaTagScripts/VirtualStumpCustomMaps/zzzz__VirtualStumpActivateMode_def.hpp"
#include "Modio/Mods/zzzz__ModChangeType_def.hpp"
#include "Modio/Mods/zzzz__ModId_def.hpp"
#include "Modio/Mods/zzzz__Mod_def.hpp"
#include "Modio/Mods/zzzz__Modfile_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "Modio/zzzz__ModInstallationManagement_OperationPhase_def.hpp"
#include "Modio/zzzz__ModInstallationManagement_OperationType_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_3_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.get_WaitingForRoomJoin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::get_WaitingForRoomJoin)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5bdfcf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"get_WaitingForRoomJoin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.get_WaitingForDisconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::get_WaitingForDisconnect)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5bdfd4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"get_WaitingForDisconnect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.get_LoadingMapId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::get_LoadingMapId)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5bdfda4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"get_LoadingMapId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.get_UnloadingMapId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::get_UnloadingMapId)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5bdfdfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"get_UnloadingMapId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.get_CurrentLoadStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus (*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::get_CurrentLoadStatus)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5bdfe54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"get_CurrentLoadStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.get_CurrentLoadProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::get_CurrentLoadProgress)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5bdfeac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"get_CurrentLoadProgress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.get_CurrentLoadMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::get_CurrentLoadMessage)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5bdff04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"get_CurrentLoadMessage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.BuildValidationCheck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::BuildValidationCheck)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5bdff5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"BuildValidationCheck", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::Awake)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5be0010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::OnEnable)> {
  constexpr static std::size_t size = 0x57c;
  constexpr static std::size_t addrs = 0x5be0170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::OnDisable)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x5be06ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.OnUGCEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::OnUGCEnabled)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5be0a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"OnUGCEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.OnUGCDisabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::OnUGCDisabled)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5be0a94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"OnUGCDisabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::Start)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x5be0a98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::OnDestroy)> {
  constexpr static std::size_t size = 0x44c;
  constexpr static std::size_t addrs = 0x5be0d9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.TrackMapDownload
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Modio::Mods::ModId)>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::TrackMapDownload)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5be11e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"TrackMapDownload", {}, {::i2c::type_of<::Modio::Mods::ModId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.StopTrackingMapDownload
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::StopTrackingMapDownload)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5be13e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"StopTrackingMapDownload", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.IsPlayerWaitingOnMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Modio::Mods::ModId)>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::IsPlayerWaitingOnMap)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5be1494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"IsPlayerWaitingOnMap", {}, {::i2c::type_of<::Modio::Mods::ModId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.HandleModFileProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Modio::Mods::Mod*, ::Modio::Mods::ModChangeType)>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::HandleModFileProgress)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5be1590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"HandleModFileProgress", {}, {::i2c::type_of<::Modio::Mods::Mod*>(), ::i2c::type_of<::Modio::Mods::ModChangeType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.BroadcastModFileState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Modio::Mods::Mod*)>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::BroadcastModFileState)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x5be161c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"BroadcastModFileState", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.GetFileStatePercent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Modio::Mods::Mod*)>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::GetFileStatePercent)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5be198c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"GetFileStatePercent", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.ResetModFileProgressTracking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::ResetModFileProgressTracking)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5be1268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"ResetModFileProgressTracking", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.BroadcastModFileProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus, int32_t, ::StringW)>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::BroadcastModFileProgress)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5be18c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"BroadcastModFileProgress", {}, {::i2c::type_of<::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.HandleModManagementEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::*)(::Modio::Mods::Mod*, ::Modio::Mods::Modfile*, ::GlobalNamespace::ModInstallationManagement_OperationType, ::GlobalNamespace::ModInstallationManagement_OperationPhase)>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::HandleModManagementEvent)> {
  constexpr static std::size_t size = 0x534;
  constexpr static std::size_t addrs = 0x5be1a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"HandleModManagementEvent", {}, {::i2c::type_of<::Modio::Mods::Mod*>(), ::i2c::type_of<::Modio::Mods::Modfile*>(), ::i2c::type_of<::GlobalNamespace::ModInstallationManagement_OperationType>(), ::i2c::type_of<::GlobalNamespace::ModInstallationManagement_OperationPhase>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.TeleportToVirtualStump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::VirtualStumpTeleporter*, ::System::Action_1<bool>*)>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::TeleportToVirtualStump)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5be21dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"TeleportToVirtualStump", {}, {::i2c::type_of<::GlobalNamespace::VirtualStumpTeleporter*>(), ::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.Activate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpActivateMode, bool)>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::Activate)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5be23c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"Activate", {}, {::i2c::type_of<::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpActivateMode>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.Deactivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::Deactivate)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5be2474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"Deactivate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.DisconnectFromRoomAndDisableTeleport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::DisconnectFromRoomAndDisableTeleport)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5be2920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"DisconnectFromRoomAndDisableTeleport", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.get_CurrentActivateMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpActivateMode (*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::get_CurrentActivateMode)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5be29cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"get_CurrentActivateMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.IsInFeaturedMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::IsInFeaturedMode)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5be2a24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"IsInFeaturedMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.IsFeaturedMapLocked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::IsFeaturedMapLocked)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5be2aac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"IsFeaturedMapLocked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.get_FeaturedLockedMapId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::ModId (*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::get_FeaturedLockedMapId)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5be2b5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"get_FeaturedLockedMapId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.SetFeaturedMapObjectsHidden
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::SetFeaturedMapObjectsHidden)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x5be2bb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"SetFeaturedMapObjectsHidden", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.PrepareFeaturedMapReloadOnRoomChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::PrepareFeaturedMapReloadOnRoomChange)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5be2f54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"PrepareFeaturedMapReloadOnRoomChange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.EnterVirtualStumpZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::EnterVirtualStumpZone)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x5be3210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"EnterVirtualStumpZone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.OnEnteredVirtualStumpZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::OnEnteredVirtualStumpZone)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5be35c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"OnEnteredVirtualStumpZone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.GetActivateRoomModePrefix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::GetActivateRoomModePrefix)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5be360c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"GetActivateRoomModePrefix", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.GetEffectiveAutoLoadModId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::ModId (*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::GetEffectiveAutoLoadModId)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5be36bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"GetEffectiveAutoLoadModId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.Internal_TeleportToVirtualStump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (*)(::GlobalNamespace::VirtualStumpTeleporter*, ::System::Action_1<bool>*)>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::Internal_TeleportToVirtualStump)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5be233c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"Internal_TeleportToVirtualStump", {}, {::i2c::type_of<::GlobalNamespace::VirtualStumpTeleporter*>(), ::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.OnAutoLoginComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Modio::Error*)>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::OnAutoLoginComplete)> {
  constexpr static std::size_t size = 0x504;
  constexpr static std::size_t addrs = 0x5be37e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"OnAutoLoginComplete", {}, {::i2c::type_of<::Modio::Error*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.DelayedJoinVStumpPrivateRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::DelayedJoinVStumpPrivateRoom)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5be3cec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"DelayedJoinVStumpPrivateRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.ExitVirtualStump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<bool>*)>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::ExitVirtualStump)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x5be2568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"ExitVirtualStump", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.FinalizeExitVirtualStump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::FinalizeExitVirtualStump)> {
  constexpr static std::size_t size = 0xeb8;
  constexpr static std::size_t addrs = 0x5be4930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"FinalizeExitVirtualStump", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.OnJoinSpecificRoomResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::NetJoinResult)>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::OnJoinSpecificRoomResult)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x5be5840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"OnJoinSpecificRoomResult", {}, {::i2c::type_of<::GlobalNamespace::NetJoinResult>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.OnJoinSpecificRoomResultFailureAllowed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::NetJoinResult)>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::OnJoinSpecificRoomResultFailureAllowed)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5be5dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"OnJoinSpecificRoomResultFailureAllowed", {}, {::i2c::type_of<::GlobalNamespace::NetJoinResult>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.AreAllPlayersInVirtualStump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::AreAllPlayersInVirtualStump)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0x5be5f5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"AreAllPlayersInVirtualStump", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.IsRemotePlayerInVirtualStump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::IsRemotePlayerInVirtualStump)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5be6340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"IsRemotePlayerInVirtualStump", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.IsLocalPlayerInVirtualStump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::IsLocalPlayerInVirtualStump)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x5be645c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"IsLocalPlayerInVirtualStump", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.OnDisconnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::OnDisconnected)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x5be6668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"OnDisconnected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.AttemptAutoLogin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::AttemptAutoLogin)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5be6ab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"AttemptAutoLogin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.OnJoinRoomFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::OnJoinRoomFailed)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5be5cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"OnJoinRoomFailed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.EndTeleport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::EndTeleport)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x5be3d44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"EndTeleport", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.TryAutoLoadMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::TryAutoLoadMap)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x5be6c54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"TryAutoLoadMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.GetAutoLoadSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GTMapLoadSource (*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::GetAutoLoadSource)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5be7010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"GetAutoLoadSource", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.DelayedEndTeleport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::DelayedEndTeleport)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5be57e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"DelayedEndTeleport", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.DelayedTryAutoLoad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::DelayedTryAutoLoad)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5be6fb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"DelayedTryAutoLoad", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.OnJoinedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::OnJoinedRoom)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x5be5a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"OnJoinedRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.UnloadMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(bool)>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::UnloadMap)> {
  constexpr static std::size_t size = 0x604;
  constexpr static std::size_t addrs = 0x5be432c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"UnloadMap", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.OnMapUnloadCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::OnMapUnloadCompleted)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5be7494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"OnMapUnloadCompleted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.LoadMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)(::Modio::Mods::ModId, ::GlobalNamespace::GTMapLoadSource)>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::LoadMap)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5be72fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"LoadMap", {}, {::i2c::type_of<::Modio::Mods::ModId>(), ::i2c::type_of<::GlobalNamespace::GTMapLoadSource>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.LoadInstalledMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::*)(::Modio::Mods::Mod*)>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::LoadInstalledMap)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5be2104;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"LoadInstalledMap", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.OnMapLoadProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus, int32_t, ::StringW)>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::OnMapLoadProgress)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5be7428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"OnMapLoadProgress", {}, {::i2c::type_of<::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.BroadcastMapLoadProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus, int32_t, ::StringW)>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::BroadcastMapLoadProgress)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5be12d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"BroadcastMapLoadProgress", {}, {::i2c::type_of<::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.OnMapLoadFinished
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::OnMapLoadFinished)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x5be75a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"OnMapLoadFinished", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.HandleMapLoadFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::HandleMapLoadFailed)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5be1fc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"HandleMapLoadFailed", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.IsUnloading
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::IsUnloading)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5be77dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"IsUnloading", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.IsLoading
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::IsLoading)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5be7834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"IsLoading", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.IsLoading
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Modio::Mods::ModId)>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::IsLoading)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5be7894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"IsLoading", {}, {::i2c::type_of<::Modio::Mods::ModId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.GetRoomMapId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::ModId (*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::GetRoomMapId)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x5be2fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"GetRoomMapId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.SetRoomMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int64_t)>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::SetRoomMap)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x5be7074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"SetRoomMap", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.ClearRoomMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::ClearRoomMap)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5be6980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"ClearRoomMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.CanLoadRoomMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::CanLoadRoomMap)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5be79c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"CanLoadRoomMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.ApproveAndLoadRoomMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::ApproveAndLoadRoomMap)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5be7a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"ApproveAndLoadRoomMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.RequestEnableTeleportHUD
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::RequestEnableTeleportHUD)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5be7acc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"RequestEnableTeleportHUD", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.EnableTeleportHUD
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::*)(bool)>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::EnableTeleportHUD)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x5be40c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"EnableTeleportHUD", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.DisableTeleportHUD
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::DisableTeleportHUD)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5be6b7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"DisableTeleportHUD", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.LoadZoneTriggered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<int32_t>, ::ArrayW<int32_t>)>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::LoadZoneTriggered)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5be7db4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"LoadZoneTriggered", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.OnSceneLoaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::OnSceneLoaded)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5be7ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"OnSceneLoaded", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.OnSceneUnloaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::OnSceneUnloaded)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5be83a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"OnSceneUnloaded", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.OnSceneTriggerHistoryProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::OnSceneTriggerHistoryProcessed)> {
  constexpr static std::size_t size = 0x670;
  constexpr static std::size_t addrs = 0x5be8528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"OnSceneTriggerHistoryProcessed", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.SetDefaultZoneShaderSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GorillaTag::Rendering::ZoneShaderSettings*, ::GlobalNamespace::CMSZoneShaderSettings_CMSZoneShaderProperties)>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::SetDefaultZoneShaderSettings)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5be8b98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"SetDefaultZoneShaderSettings", {}, {::i2c::type_of<::GorillaTag::Rendering::ZoneShaderSettings*>(), ::i2c::type_of<::GlobalNamespace::CMSZoneShaderSettings_CMSZoneShaderProperties>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.ProcessZoneShaderSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::ProcessZoneShaderSettings)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0x5be7f24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"ProcessZoneShaderSettings", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.AddZoneShaderSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GorillaTag::Rendering::ZoneShaderSettings*)>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::AddZoneShaderSettings)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5be8c8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"AddZoneShaderSettings", {}, {::i2c::type_of<::GorillaTag::Rendering::ZoneShaderSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.ActivateDefaultZoneShaderSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::ActivateDefaultZoneShaderSettings)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5be8d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"ActivateDefaultZoneShaderSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.ReturnToVirtualStump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::ReturnToVirtualStump)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x5bdf90c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"ReturnToVirtualStump", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager.WantsHoldingHandsDisabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::WantsHoldingHandsDisabled)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5be8e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"WantsHoldingHandsDisabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5be8ef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::__cordl_internal_get_virtualStumpToggleableRoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___virtualStumpToggleableRoot;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::__cordl_internal_get_virtualStumpToggleableRoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___virtualStumpToggleableRoot;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::__cordl_internal_set_virtualStumpToggleableRoot(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___virtualStumpToggleableRoot = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::__cordl_internal_get_returnToVirtualStumpTeleportLocation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___returnToVirtualStumpTeleportLocation;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::__cordl_internal_get_returnToVirtualStumpTeleportLocation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___returnToVirtualStumpTeleportLocation;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::__cordl_internal_set_returnToVirtualStumpTeleportLocation(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___returnToVirtualStumpTeleportLocation = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::__cordl_internal_get_virtualStumpTeleportLocations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___virtualStumpTeleportLocations;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::__cordl_internal_get_virtualStumpTeleportLocations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___virtualStumpTeleportLocations;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::__cordl_internal_set_virtualStumpTeleportLocations(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___virtualStumpTeleportLocations = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::__cordl_internal_get_rootObjectsToDeactivateAfterTeleport()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rootObjectsToDeactivateAfterTeleport;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::__cordl_internal_get_rootObjectsToDeactivateAfterTeleport() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rootObjectsToDeactivateAfterTeleport;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::__cordl_internal_set_rootObjectsToDeactivateAfterTeleport(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rootObjectsToDeactivateAfterTeleport = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::__cordl_internal_get_featuredMapDisabledObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___featuredMapDisabledObjects;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::__cordl_internal_get_featuredMapDisabledObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___featuredMapDisabledObjects;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::__cordl_internal_set_featuredMapDisabledObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___featuredMapDisabledObjects = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaFriendCollider>& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::__cordl_internal_get_virtualStumpPlayerDetector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___virtualStumpPlayerDetector;
}
constexpr ::UnityW<::GlobalNamespace::GorillaFriendCollider> const& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::__cordl_internal_get_virtualStumpPlayerDetector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___virtualStumpPlayerDetector;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::__cordl_internal_set_virtualStumpPlayerDetector(::UnityW<::GlobalNamespace::GorillaFriendCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___virtualStumpPlayerDetector = value;
}
constexpr ::UnityW<::GorillaTag::Rendering::ZoneShaderSettings>& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::__cordl_internal_get_virtualStumpZoneShaderSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___virtualStumpZoneShaderSettings;
}
constexpr ::UnityW<::GorillaTag::Rendering::ZoneShaderSettings> const& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::__cordl_internal_get_virtualStumpZoneShaderSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___virtualStumpZoneShaderSettings;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::__cordl_internal_set_virtualStumpZoneShaderSettings(::UnityW<::GorillaTag::Rendering::ZoneShaderSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___virtualStumpZoneShaderSettings = value;
}
constexpr ::UnityW<::GlobalNamespace::BetterDayNightManager>& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::__cordl_internal_get_dayNightManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dayNightManager;
}
constexpr ::UnityW<::GlobalNamespace::BetterDayNightManager> const& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::__cordl_internal_get_dayNightManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dayNightManager;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::__cordl_internal_set_dayNightManager(::UnityW<::GlobalNamespace::BetterDayNightManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dayNightManager = value;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactorManager>& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::__cordl_internal_get_ghostReactorManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ghostReactorManager;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactorManager> const& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::__cordl_internal_get_ghostReactorManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ghostReactorManager;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::__cordl_internal_set_ghostReactorManager(::UnityW<::GlobalNamespace::GhostReactorManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ghostReactorManager = value;
}
constexpr ::UnityW<::GlobalNamespace::GRReviveStation>& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::__cordl_internal_get_defaultReviveStation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultReviveStation;
}
constexpr ::UnityW<::GlobalNamespace::GRReviveStation> const& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::__cordl_internal_get_defaultReviveStation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultReviveStation;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::__cordl_internal_set_defaultReviveStation(::UnityW<::GlobalNamespace::GRReviveStation>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultReviveStation = value;
}
constexpr ::UnityW<::GorillaTag::Rendering::ZoneShaderSettings>& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::__cordl_internal_get_customMapDefaultZoneShaderSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customMapDefaultZoneShaderSettings;
}
constexpr ::UnityW<::GorillaTag::Rendering::ZoneShaderSettings> const& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::__cordl_internal_get_customMapDefaultZoneShaderSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customMapDefaultZoneShaderSettings;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::__cordl_internal_set_customMapDefaultZoneShaderSettings(::UnityW<::GorillaTag::Rendering::ZoneShaderSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customMapDefaultZoneShaderSettings = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::__cordl_internal_get_teleportingHUDPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teleportingHUDPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::__cordl_internal_get_teleportingHUDPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teleportingHUDPrefab;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::__cordl_internal_set_teleportingHUDPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___teleportingHUDPrefab = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::__cordl_internal_get_localTeleportSFXSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localTeleportSFXSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::__cordl_internal_get_localTeleportSFXSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localTeleportSFXSource;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::__cordl_internal_set_localTeleportSFXSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localTeleportSFXSource = value;
}
constexpr ::UnityW<::GlobalNamespace::VirtualStumpTeleporter>& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::__cordl_internal_get_defaultTeleporter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultTeleporter;
}
constexpr ::UnityW<::GlobalNamespace::VirtualStumpTeleporter> const& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::__cordl_internal_get_defaultTeleporter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultTeleporter;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::__cordl_internal_set_defaultTeleporter(::UnityW<::GlobalNamespace::VirtualStumpTeleporter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultTeleporter = value;
}
constexpr float_t& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::__cordl_internal_get_maxPostTeleportRoomProcessingTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxPostTeleportRoomProcessingTime;
}
constexpr float_t const& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::__cordl_internal_get_maxPostTeleportRoomProcessingTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxPostTeleportRoomProcessingTime;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::__cordl_internal_set_maxPostTeleportRoomProcessingTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxPostTeleportRoomProcessingTime = value;
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::setStaticF_instance(::UnityW<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager>, "instance", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(std::forward<::UnityW<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager>>(value));
}
inline ::UnityW<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager> GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager>, "instance", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>();
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::setStaticF_hasInstance(bool  value)  {
::cordl_internals::setStaticField<bool, "hasInstance", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(std::forward<bool>(value));
}
inline bool GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::getStaticF_hasInstance()  {
return ::cordl_internals::getStaticField<bool, "hasInstance", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>();
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::setStaticF_lastUsedTeleporter(::UnityW<::GlobalNamespace::VirtualStumpTeleporter>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::VirtualStumpTeleporter>, "lastUsedTeleporter", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(std::forward<::UnityW<::GlobalNamespace::VirtualStumpTeleporter>>(value));
}
inline ::UnityW<::GlobalNamespace::VirtualStumpTeleporter> GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::getStaticF_lastUsedTeleporter()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::VirtualStumpTeleporter>, "lastUsedTeleporter", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>();
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::setStaticF_preVStumpGamemode(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "preVStumpGamemode", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(std::forward<::StringW>(value));
}
inline ::StringW GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::getStaticF_preVStumpGamemode()  {
return ::cordl_internals::getStaticField<::StringW, "preVStumpGamemode", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>();
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::setStaticF_activateSkipTeleport(bool  value)  {
::cordl_internals::setStaticField<bool, "activateSkipTeleport", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(std::forward<bool>(value));
}
inline bool GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::getStaticF_activateSkipTeleport()  {
return ::cordl_internals::getStaticField<bool, "activateSkipTeleport", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>();
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::setStaticF_activateDeferZoneToNode(bool  value)  {
::cordl_internals::setStaticField<bool, "activateDeferZoneToNode", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(std::forward<bool>(value));
}
inline bool GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::getStaticF_activateDeferZoneToNode()  {
return ::cordl_internals::getStaticField<bool, "activateDeferZoneToNode", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>();
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::setStaticF_activateHasAutoLoadOverride(bool  value)  {
::cordl_internals::setStaticField<bool, "activateHasAutoLoadOverride", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(std::forward<bool>(value));
}
inline bool GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::getStaticF_activateHasAutoLoadOverride()  {
return ::cordl_internals::getStaticField<bool, "activateHasAutoLoadOverride", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>();
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::setStaticF_activateAutoLoadModIdOverride(::Modio::Mods::ModId  value)  {
::cordl_internals::setStaticField<::Modio::Mods::ModId, "activateAutoLoadModIdOverride", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(std::forward<::Modio::Mods::ModId>(value));
}
inline ::Modio::Mods::ModId GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::getStaticF_activateAutoLoadModIdOverride()  {
return ::cordl_internals::getStaticField<::Modio::Mods::ModId, "activateAutoLoadModIdOverride", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>();
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::setStaticF_activateIsActive(bool  value)  {
::cordl_internals::setStaticField<bool, "activateIsActive", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(std::forward<bool>(value));
}
inline bool GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::getStaticF_activateIsActive()  {
return ::cordl_internals::getStaticField<bool, "activateIsActive", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>();
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::setStaticF_activateCurrentMode(::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpActivateMode  value)  {
::cordl_internals::setStaticField<::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpActivateMode, "activateCurrentMode", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(std::forward<::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpActivateMode>(value));
}
inline ::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpActivateMode GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::getStaticF_activateCurrentMode()  {
return ::cordl_internals::getStaticField<::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpActivateMode, "activateCurrentMode", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>();
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::setStaticF_pendingRoomChangeReloadModId(::Modio::Mods::ModId  value)  {
::cordl_internals::setStaticField<::Modio::Mods::ModId, "pendingRoomChangeReloadModId", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(std::forward<::Modio::Mods::ModId>(value));
}
inline ::Modio::Mods::ModId GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::getStaticF_pendingRoomChangeReloadModId()  {
return ::cordl_internals::getStaticField<::Modio::Mods::ModId, "pendingRoomChangeReloadModId", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>();
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::setStaticF_customMapDefaultZoneShaderSettingsInitialized(bool  value)  {
::cordl_internals::setStaticField<bool, "customMapDefaultZoneShaderSettingsInitialized", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(std::forward<bool>(value));
}
inline bool GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::getStaticF_customMapDefaultZoneShaderSettingsInitialized()  {
return ::cordl_internals::getStaticField<bool, "customMapDefaultZoneShaderSettingsInitialized", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>();
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::setStaticF_loadedCustomMapDefaultZoneShaderSettings(::UnityW<::GorillaTag::Rendering::ZoneShaderSettings>  value)  {
::cordl_internals::setStaticField<::UnityW<::GorillaTag::Rendering::ZoneShaderSettings>, "loadedCustomMapDefaultZoneShaderSettings", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(std::forward<::UnityW<::GorillaTag::Rendering::ZoneShaderSettings>>(value));
}
inline ::UnityW<::GorillaTag::Rendering::ZoneShaderSettings> GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::getStaticF_loadedCustomMapDefaultZoneShaderSettings()  {
return ::cordl_internals::getStaticField<::UnityW<::GorillaTag::Rendering::ZoneShaderSettings>, "loadedCustomMapDefaultZoneShaderSettings", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>();
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::setStaticF_customMapDefaultZoneShaderProperties(::GlobalNamespace::CMSZoneShaderSettings_CMSZoneShaderProperties  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::CMSZoneShaderSettings_CMSZoneShaderProperties, "customMapDefaultZoneShaderProperties", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(std::forward<::GlobalNamespace::CMSZoneShaderSettings_CMSZoneShaderProperties>(value));
}
inline ::GlobalNamespace::CMSZoneShaderSettings_CMSZoneShaderProperties GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::getStaticF_customMapDefaultZoneShaderProperties()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::CMSZoneShaderSettings_CMSZoneShaderProperties, "customMapDefaultZoneShaderProperties", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>();
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::setStaticF_allCustomMapZoneShaderSettings(::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Rendering::ZoneShaderSettings>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Rendering::ZoneShaderSettings>>*, "allCustomMapZoneShaderSettings", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Rendering::ZoneShaderSettings>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Rendering::ZoneShaderSettings>>* GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::getStaticF_allCustomMapZoneShaderSettings()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Rendering::ZoneShaderSettings>>*, "allCustomMapZoneShaderSettings", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>();
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::setStaticF_loadInProgress(bool  value)  {
::cordl_internals::setStaticField<bool, "loadInProgress", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(std::forward<bool>(value));
}
inline bool GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::getStaticF_loadInProgress()  {
return ::cordl_internals::getStaticField<bool, "loadInProgress", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>();
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::setStaticF_loadingMapId(::Modio::Mods::ModId  value)  {
::cordl_internals::setStaticField<::Modio::Mods::ModId, "loadingMapId", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(std::forward<::Modio::Mods::ModId>(value));
}
inline ::Modio::Mods::ModId GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::getStaticF_loadingMapId()  {
return ::cordl_internals::getStaticField<::Modio::Mods::ModId, "loadingMapId", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>();
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::setStaticF_pendingMapLoadSource(::GlobalNamespace::GTMapLoadSource  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::GTMapLoadSource, "pendingMapLoadSource", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(std::forward<::GlobalNamespace::GTMapLoadSource>(value));
}
inline ::GlobalNamespace::GTMapLoadSource GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::getStaticF_pendingMapLoadSource()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::GTMapLoadSource, "pendingMapLoadSource", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>();
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::setStaticF_unloadInProgress(bool  value)  {
::cordl_internals::setStaticField<bool, "unloadInProgress", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(std::forward<bool>(value));
}
inline bool GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::getStaticF_unloadInProgress()  {
return ::cordl_internals::getStaticField<bool, "unloadInProgress", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>();
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::setStaticF_unloadingMapId(::Modio::Mods::ModId  value)  {
::cordl_internals::setStaticField<::Modio::Mods::ModId, "unloadingMapId", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(std::forward<::Modio::Mods::ModId>(value));
}
inline ::Modio::Mods::ModId GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::getStaticF_unloadingMapId()  {
return ::cordl_internals::getStaticField<::Modio::Mods::ModId, "unloadingMapId", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>();
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::setStaticF_abortModLoadIds(::System::Collections::Generic::List_1<::Modio::Mods::ModId>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::Modio::Mods::ModId>*, "abortModLoadIds", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(std::forward<::System::Collections::Generic::List_1<::Modio::Mods::ModId>*>(value));
}
inline ::System::Collections::Generic::List_1<::Modio::Mods::ModId>* GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::getStaticF_abortModLoadIds()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::Modio::Mods::ModId>*, "abortModLoadIds", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>();
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::setStaticF_waitingForModDownload(bool  value)  {
::cordl_internals::setStaticField<bool, "waitingForModDownload", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(std::forward<bool>(value));
}
inline bool GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::getStaticF_waitingForModDownload()  {
return ::cordl_internals::getStaticField<bool, "waitingForModDownload", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>();
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::setStaticF_waitingForModInstall(bool  value)  {
::cordl_internals::setStaticField<bool, "waitingForModInstall", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(std::forward<bool>(value));
}
inline bool GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::getStaticF_waitingForModInstall()  {
return ::cordl_internals::getStaticField<bool, "waitingForModInstall", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>();
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::setStaticF_waitingForModInstallId(::Modio::Mods::ModId  value)  {
::cordl_internals::setStaticField<::Modio::Mods::ModId, "waitingForModInstallId", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(std::forward<::Modio::Mods::ModId>(value));
}
inline ::Modio::Mods::ModId GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::getStaticF_waitingForModInstallId()  {
return ::cordl_internals::getStaticField<::Modio::Mods::ModId, "waitingForModInstallId", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>();
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::setStaticF_currentLoadStatus(::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus  value)  {
::cordl_internals::setStaticField<::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus, "currentLoadStatus", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(std::forward<::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus>(value));
}
inline ::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::getStaticF_currentLoadStatus()  {
return ::cordl_internals::getStaticField<::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus, "currentLoadStatus", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>();
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::setStaticF_currentLoadProgress(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "currentLoadProgress", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(std::forward<int32_t>(value));
}
inline int32_t GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::getStaticF_currentLoadProgress()  {
return ::cordl_internals::getStaticField<int32_t, "currentLoadProgress", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>();
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::setStaticF_currentLoadMessage(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "currentLoadMessage", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(std::forward<::StringW>(value));
}
inline ::StringW GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::getStaticF_currentLoadMessage()  {
return ::cordl_internals::getStaticField<::StringW, "currentLoadMessage", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>();
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::setStaticF_lastBroadcastFileStatus(::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus  value)  {
::cordl_internals::setStaticField<::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus, "lastBroadcastFileStatus", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(std::forward<::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus>(value));
}
inline ::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::getStaticF_lastBroadcastFileStatus()  {
return ::cordl_internals::getStaticField<::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus, "lastBroadcastFileStatus", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>();
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::setStaticF_lastBroadcastFilePercent(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "lastBroadcastFilePercent", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(std::forward<int32_t>(value));
}
inline int32_t GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::getStaticF_lastBroadcastFilePercent()  {
return ::cordl_internals::getStaticField<int32_t, "lastBroadcastFilePercent", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>();
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::setStaticF_trackedDownloadMapId(::Modio::Mods::ModId  value)  {
::cordl_internals::setStaticField<::Modio::Mods::ModId, "trackedDownloadMapId", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(std::forward<::Modio::Mods::ModId>(value));
}
inline ::Modio::Mods::ModId GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::getStaticF_trackedDownloadMapId()  {
return ::cordl_internals::getStaticField<::Modio::Mods::ModId, "trackedDownloadMapId", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>();
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::setStaticF_preTeleportInPrivateRoom(bool  value)  {
::cordl_internals::setStaticField<bool, "preTeleportInPrivateRoom", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(std::forward<bool>(value));
}
inline bool GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::getStaticF_preTeleportInPrivateRoom()  {
return ::cordl_internals::getStaticField<bool, "preTeleportInPrivateRoom", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>();
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::setStaticF_pendingNewPrivateRoomName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "pendingNewPrivateRoomName", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(std::forward<::StringW>(value));
}
inline ::StringW GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::getStaticF_pendingNewPrivateRoomName()  {
return ::cordl_internals::getStaticField<::StringW, "pendingNewPrivateRoomName", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>();
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::setStaticF_currentTeleportCallback(::System::Action_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<bool>*, "currentTeleportCallback", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(std::forward<::System::Action_1<bool>*>(value));
}
inline ::System::Action_1<bool>* GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::getStaticF_currentTeleportCallback()  {
return ::cordl_internals::getStaticField<::System::Action_1<bool>*, "currentTeleportCallback", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>();
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::setStaticF_waitingForLoginDisconnect(bool  value)  {
::cordl_internals::setStaticField<bool, "waitingForLoginDisconnect", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(std::forward<bool>(value));
}
inline bool GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::getStaticF_waitingForLoginDisconnect()  {
return ::cordl_internals::getStaticField<bool, "waitingForLoginDisconnect", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>();
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::setStaticF_waitingForDisconnect(bool  value)  {
::cordl_internals::setStaticField<bool, "waitingForDisconnect", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(std::forward<bool>(value));
}
inline bool GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::getStaticF_waitingForDisconnect()  {
return ::cordl_internals::getStaticField<bool, "waitingForDisconnect", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>();
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::setStaticF_waitingForRoomJoin(bool  value)  {
::cordl_internals::setStaticField<bool, "waitingForRoomJoin", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(std::forward<bool>(value));
}
inline bool GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::getStaticF_waitingForRoomJoin()  {
return ::cordl_internals::getStaticField<bool, "waitingForRoomJoin", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>();
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::setStaticF_shouldRetryJoin(bool  value)  {
::cordl_internals::setStaticField<bool, "shouldRetryJoin", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(std::forward<bool>(value));
}
inline bool GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::getStaticF_shouldRetryJoin()  {
return ::cordl_internals::getStaticField<bool, "shouldRetryJoin", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>();
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::setStaticF_pendingTeleportVFXIdx(int16_t  value)  {
::cordl_internals::setStaticField<int16_t, "pendingTeleportVFXIdx", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(std::forward<int16_t>(value));
}
inline int16_t GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::getStaticF_pendingTeleportVFXIdx()  {
return ::cordl_internals::getStaticField<int16_t, "pendingTeleportVFXIdx", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>();
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::setStaticF_exitVirtualStumpPending(bool  value)  {
::cordl_internals::setStaticField<bool, "exitVirtualStumpPending", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(std::forward<bool>(value));
}
inline bool GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::getStaticF_exitVirtualStumpPending()  {
return ::cordl_internals::getStaticField<bool, "exitVirtualStumpPending", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>();
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::setStaticF_currentRoomMapModId(::Modio::Mods::ModId  value)  {
::cordl_internals::setStaticField<::Modio::Mods::ModId, "currentRoomMapModId", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(std::forward<::Modio::Mods::ModId>(value));
}
inline ::Modio::Mods::ModId GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::getStaticF_currentRoomMapModId()  {
return ::cordl_internals::getStaticField<::Modio::Mods::ModId, "currentRoomMapModId", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>();
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::setStaticF_currentRoomMapApproved(bool  value)  {
::cordl_internals::setStaticField<bool, "currentRoomMapApproved", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(std::forward<bool>(value));
}
inline bool GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::getStaticF_currentRoomMapApproved()  {
return ::cordl_internals::getStaticField<bool, "currentRoomMapApproved", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>();
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::setStaticF_teleportingHUD(::UnityW<::GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD>  value)  {
::cordl_internals::setStaticField<::UnityW<::GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD>, "teleportingHUD", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(std::forward<::UnityW<::GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD>>(value));
}
inline ::UnityW<::GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD> GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::getStaticF_teleportingHUD()  {
return ::cordl_internals::getStaticField<::UnityW<::GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD>, "teleportingHUD", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>();
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::setStaticF_delayedEndTeleportCoroutine(::UnityEngine::Coroutine*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Coroutine*, "delayedEndTeleportCoroutine", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(std::forward<::UnityEngine::Coroutine*>(value));
}
inline ::UnityEngine::Coroutine* GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::getStaticF_delayedEndTeleportCoroutine()  {
return ::cordl_internals::getStaticField<::UnityEngine::Coroutine*, "delayedEndTeleportCoroutine", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>();
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::setStaticF_delayedJoinCoroutine(::UnityEngine::Coroutine*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Coroutine*, "delayedJoinCoroutine", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(std::forward<::UnityEngine::Coroutine*>(value));
}
inline ::UnityEngine::Coroutine* GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::getStaticF_delayedJoinCoroutine()  {
return ::cordl_internals::getStaticField<::UnityEngine::Coroutine*, "delayedJoinCoroutine", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>();
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::setStaticF_delayedTryAutoLoadCoroutine(::UnityEngine::Coroutine*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Coroutine*, "delayedTryAutoLoadCoroutine", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(std::forward<::UnityEngine::Coroutine*>(value));
}
inline ::UnityEngine::Coroutine* GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::getStaticF_delayedTryAutoLoadCoroutine()  {
return ::cordl_internals::getStaticField<::UnityEngine::Coroutine*, "delayedTryAutoLoadCoroutine", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>();
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::setStaticF_OnRoomMapChanged(::UnityEngine::Events::UnityEvent_1<::Modio::Mods::ModId>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Events::UnityEvent_1<::Modio::Mods::ModId>*, "OnRoomMapChanged", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(std::forward<::UnityEngine::Events::UnityEvent_1<::Modio::Mods::ModId>*>(value));
}
inline ::UnityEngine::Events::UnityEvent_1<::Modio::Mods::ModId>* GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::getStaticF_OnRoomMapChanged()  {
return ::cordl_internals::getStaticField<::UnityEngine::Events::UnityEvent_1<::Modio::Mods::ModId>*, "OnRoomMapChanged", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>();
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::setStaticF_OnMapLoadStatusChanged(::UnityEngine::Events::UnityEvent_3<::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus,int32_t,::StringW>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Events::UnityEvent_3<::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus,int32_t,::StringW>*, "OnMapLoadStatusChanged", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(std::forward<::UnityEngine::Events::UnityEvent_3<::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus,int32_t,::StringW>*>(value));
}
inline ::UnityEngine::Events::UnityEvent_3<::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus,int32_t,::StringW>* GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::getStaticF_OnMapLoadStatusChanged()  {
return ::cordl_internals::getStaticField<::UnityEngine::Events::UnityEvent_3<::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus,int32_t,::StringW>*, "OnMapLoadStatusChanged", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>();
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::setStaticF_OnMapLoadComplete(::UnityEngine::Events::UnityEvent_1<bool>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Events::UnityEvent_1<bool>*, "OnMapLoadComplete", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(std::forward<::UnityEngine::Events::UnityEvent_1<bool>*>(value));
}
inline ::UnityEngine::Events::UnityEvent_1<bool>* GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::getStaticF_OnMapLoadComplete()  {
return ::cordl_internals::getStaticField<::UnityEngine::Events::UnityEvent_1<bool>*, "OnMapLoadComplete", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>();
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::setStaticF_OnMapUnloadComplete(::UnityEngine::Events::UnityEvent*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Events::UnityEvent*, "OnMapUnloadComplete", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(std::forward<::UnityEngine::Events::UnityEvent*>(value));
}
inline ::UnityEngine::Events::UnityEvent* GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::getStaticF_OnMapUnloadComplete()  {
return ::cordl_internals::getStaticField<::UnityEngine::Events::UnityEvent*, "OnMapUnloadComplete", ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>();
}
inline bool GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::get_WaitingForRoomJoin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"get_WaitingForRoomJoin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::get_WaitingForDisconnect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"get_WaitingForDisconnect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline int64_t GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::get_LoadingMapId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"get_LoadingMapId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method);
}
inline int64_t GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::get_UnloadingMapId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"get_UnloadingMapId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method);
}
inline ::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::get_CurrentLoadStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"get_CurrentLoadStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus>(nullptr, ___internal_method);
}
inline int32_t GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::get_CurrentLoadProgress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"get_CurrentLoadProgress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline ::StringW GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::get_CurrentLoadMessage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"get_CurrentLoadMessage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline bool GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::BuildValidationCheck()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"BuildValidationCheck", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::OnUGCEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"OnUGCEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::OnUGCDisabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"OnUGCDisabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::TrackMapDownload(::Modio::Mods::ModId  modId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"TrackMapDownload", {}, {::i2c::type_of<::Modio::Mods::ModId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, modId);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::StopTrackingMapDownload()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"StopTrackingMapDownload", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::IsPlayerWaitingOnMap(::Modio::Mods::ModId  modId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"IsPlayerWaitingOnMap", {}, {::i2c::type_of<::Modio::Mods::ModId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, modId);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::HandleModFileProgress(::Modio::Mods::Mod*  mod, ::Modio::Mods::ModChangeType  changeType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"HandleModFileProgress", {}, {::i2c::type_of<::Modio::Mods::Mod*>(), ::i2c::type_of<::Modio::Mods::ModChangeType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mod, changeType);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::BroadcastModFileState(::Modio::Mods::Mod*  mod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"BroadcastModFileState", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mod);
}
inline int32_t GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::GetFileStatePercent(::Modio::Mods::Mod*  mod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"GetFileStatePercent", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, mod);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::ResetModFileProgressTracking()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"ResetModFileProgressTracking", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::BroadcastModFileProgress(::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus  status, int32_t  percent, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"BroadcastModFileProgress", {}, {::i2c::type_of<::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, status, percent, message);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::HandleModManagementEvent(::Modio::Mods::Mod*  mod, ::Modio::Mods::Modfile*  modfile, ::GlobalNamespace::ModInstallationManagement_OperationType  jobType, ::GlobalNamespace::ModInstallationManagement_OperationPhase  jobPhase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"HandleModManagementEvent", {}, {::i2c::type_of<::Modio::Mods::Mod*>(), ::i2c::type_of<::Modio::Mods::Modfile*>(), ::i2c::type_of<::GlobalNamespace::ModInstallationManagement_OperationType>(), ::i2c::type_of<::GlobalNamespace::ModInstallationManagement_OperationPhase>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mod, modfile, jobType, jobPhase);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::TeleportToVirtualStump(::GlobalNamespace::VirtualStumpTeleporter*  fromTeleporter, ::System::Action_1<bool>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"TeleportToVirtualStump", {}, {::i2c::type_of<::GlobalNamespace::VirtualStumpTeleporter*>(), ::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, fromTeleporter, callback);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::Activate(::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpActivateMode  mode, bool  hasEntryTeleportNode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"Activate", {}, {::i2c::type_of<::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpActivateMode>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mode, hasEntryTeleportNode);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::Deactivate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"Deactivate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::DisconnectFromRoomAndDisableTeleport()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"DisconnectFromRoomAndDisableTeleport", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpActivateMode GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::get_CurrentActivateMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"get_CurrentActivateMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpActivateMode>(nullptr, ___internal_method);
}
inline bool GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::IsInFeaturedMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"IsInFeaturedMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::IsFeaturedMapLocked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"IsFeaturedMapLocked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::Modio::Mods::ModId GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::get_FeaturedLockedMapId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"get_FeaturedLockedMapId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::ModId>(nullptr, ___internal_method);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::SetFeaturedMapObjectsHidden(bool  hidden)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"SetFeaturedMapObjectsHidden", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hidden);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::PrepareFeaturedMapReloadOnRoomChange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"PrepareFeaturedMapReloadOnRoomChange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::EnterVirtualStumpZone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"EnterVirtualStumpZone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::OnEnteredVirtualStumpZone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"OnEnteredVirtualStumpZone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::GetActivateRoomModePrefix()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"GetActivateRoomModePrefix", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::Modio::Mods::ModId GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::GetEffectiveAutoLoadModId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"GetEffectiveAutoLoadModId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::ModId>(nullptr, ___internal_method);
}
inline ::System::Collections::IEnumerator* GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::Internal_TeleportToVirtualStump(::GlobalNamespace::VirtualStumpTeleporter*  fromTeleporter, ::System::Action_1<bool>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"Internal_TeleportToVirtualStump", {}, {::i2c::type_of<::GlobalNamespace::VirtualStumpTeleporter*>(), ::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(nullptr, ___internal_method, fromTeleporter, callback);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::OnAutoLoginComplete(::Modio::Error*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"OnAutoLoginComplete", {}, {::i2c::type_of<::Modio::Error*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, error);
}
inline ::System::Collections::IEnumerator* GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::DelayedJoinVStumpPrivateRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"DelayedJoinVStumpPrivateRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(nullptr, ___internal_method);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::ExitVirtualStump(::System::Action_1<bool>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"ExitVirtualStump", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::FinalizeExitVirtualStump()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"FinalizeExitVirtualStump", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::OnJoinSpecificRoomResult(::GlobalNamespace::NetJoinResult  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"OnJoinSpecificRoomResult", {}, {::i2c::type_of<::GlobalNamespace::NetJoinResult>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, result);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::OnJoinSpecificRoomResultFailureAllowed(::GlobalNamespace::NetJoinResult  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"OnJoinSpecificRoomResultFailureAllowed", {}, {::i2c::type_of<::GlobalNamespace::NetJoinResult>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, result);
}
inline bool GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::AreAllPlayersInVirtualStump()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"AreAllPlayersInVirtualStump", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::IsRemotePlayerInVirtualStump(::StringW  playerID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"IsRemotePlayerInVirtualStump", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, playerID);
}
inline bool GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::IsLocalPlayerInVirtualStump()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"IsLocalPlayerInVirtualStump", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::OnDisconnected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"OnDisconnected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::AttemptAutoLogin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"AttemptAutoLogin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::OnJoinRoomFailed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"OnJoinRoomFailed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::EndTeleport(bool  teleportSuccessful)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"EndTeleport", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, teleportSuccessful);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::TryAutoLoadMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"TryAutoLoadMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::GTMapLoadSource GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::GetAutoLoadSource()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"GetAutoLoadSource", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GTMapLoadSource>(nullptr, ___internal_method);
}
inline ::System::Collections::IEnumerator* GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::DelayedEndTeleport()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"DelayedEndTeleport", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(nullptr, ___internal_method);
}
inline ::System::Collections::IEnumerator* GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::DelayedTryAutoLoad()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"DelayedTryAutoLoad", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(nullptr, ___internal_method);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::OnJoinedRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"OnJoinedRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::UnloadMap(bool  returnToSinglePlayerIfInPublic)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"UnloadMap", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, returnToSinglePlayerIfInPublic);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::OnMapUnloadCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"OnMapUnloadCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::LoadMap(::Modio::Mods::ModId  modId, ::GlobalNamespace::GTMapLoadSource  loadSource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"LoadMap", {}, {::i2c::type_of<::Modio::Mods::ModId>(), ::i2c::type_of<::GlobalNamespace::GTMapLoadSource>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, modId, loadSource);
}
inline ::System::Threading::Tasks::Task* GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::LoadInstalledMap(::Modio::Mods::Mod*  installedMod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"LoadInstalledMap", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, installedMod);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::OnMapLoadProgress(::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus  loadStatus, int32_t  progress, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"OnMapLoadProgress", {}, {::i2c::type_of<::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, loadStatus, progress, message);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::BroadcastMapLoadProgress(::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus  loadStatus, int32_t  progress, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"BroadcastMapLoadProgress", {}, {::i2c::type_of<::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, loadStatus, progress, message);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::OnMapLoadFinished(bool  success)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"OnMapLoadFinished", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, success);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::HandleMapLoadFailed(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"HandleMapLoadFailed", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
inline bool GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::IsUnloading()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"IsUnloading", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::IsLoading()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"IsLoading", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::IsLoading(::Modio::Mods::ModId  modId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"IsLoading", {}, {::i2c::type_of<::Modio::Mods::ModId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, modId);
}
inline ::Modio::Mods::ModId GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::GetRoomMapId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"GetRoomMapId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::ModId>(nullptr, ___internal_method);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::SetRoomMap(int64_t  modId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"SetRoomMap", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, modId);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::ClearRoomMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"ClearRoomMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::CanLoadRoomMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"CanLoadRoomMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::ApproveAndLoadRoomMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"ApproveAndLoadRoomMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::RequestEnableTeleportHUD(bool  enteringVirtualStump)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"RequestEnableTeleportHUD", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, enteringVirtualStump);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::EnableTeleportHUD(bool  enteringVirtualStump)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"EnableTeleportHUD", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enteringVirtualStump);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::DisableTeleportHUD()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"DisableTeleportHUD", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::LoadZoneTriggered(::ArrayW<int32_t>  scenesToLoad, ::ArrayW<int32_t>  scenesToUnload)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"LoadZoneTriggered", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, scenesToLoad, scenesToUnload);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::OnSceneLoaded(::StringW  sceneName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"OnSceneLoaded", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sceneName);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::OnSceneUnloaded(::StringW  sceneName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"OnSceneUnloaded", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sceneName);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::OnSceneTriggerHistoryProcessed(::StringW  sceneName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"OnSceneTriggerHistoryProcessed", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sceneName);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::SetDefaultZoneShaderSettings(::GorillaTag::Rendering::ZoneShaderSettings*  defaultCustomMapShaderSettings, ::GlobalNamespace::CMSZoneShaderSettings_CMSZoneShaderProperties  defaultZoneShaderProperties)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"SetDefaultZoneShaderSettings", {}, {::i2c::type_of<::GorillaTag::Rendering::ZoneShaderSettings*>(), ::i2c::type_of<::GlobalNamespace::CMSZoneShaderSettings_CMSZoneShaderProperties>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, defaultCustomMapShaderSettings, defaultZoneShaderProperties);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::ProcessZoneShaderSettings(::StringW  loadedSceneName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"ProcessZoneShaderSettings", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, loadedSceneName);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::AddZoneShaderSettings(::GorillaTag::Rendering::ZoneShaderSettings*  zoneShaderSettings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"AddZoneShaderSettings", {}, {::i2c::type_of<::GorillaTag::Rendering::ZoneShaderSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, zoneShaderSettings);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::ActivateDefaultZoneShaderSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"ActivateDefaultZoneShaderSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::ReturnToVirtualStump()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"ReturnToVirtualStump", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::WantsHoldingHandsDisabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {"WantsHoldingHandsDisabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager* GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*>());
}
/// @brief Convert operator to "::GlobalNamespace::IBuildValidation"
constexpr  GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::operator ::GlobalNamespace::IBuildValidation*() noexcept {
return static_cast<::GlobalNamespace::IBuildValidation*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBuildValidation"
constexpr ::GlobalNamespace::IBuildValidation* GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::i___GlobalNamespace__IBuildValidation() noexcept {
return static_cast<::GlobalNamespace::IBuildValidation*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::CustomMapManager()   {
}
constexpr ::Modio::Mods::ModChangeType  GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager::ModFileProgressChanges{static_cast<int32_t>(0x30)};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117::*)(int32_t)>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5be37c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5bea5b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117::MoveNext)> {
  constexpr static std::size_t size = 0x99c;
  constexpr static std::size_t addrs = 0x5bea5b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5beaf54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5beaf5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5beaf94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::VirtualStumpTeleporter>& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117::__cordl_internal_get_fromTeleporter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fromTeleporter;
}
constexpr ::UnityW<::GlobalNamespace::VirtualStumpTeleporter> const& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117::__cordl_internal_get_fromTeleporter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fromTeleporter;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117::__cordl_internal_set_fromTeleporter(::UnityW<::GlobalNamespace::VirtualStumpTeleporter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fromTeleporter = value;
}
constexpr ::System::Action_1<bool>*& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117::__cordl_internal_get_callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr ::System::Action_1<bool>* const& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117::__cordl_internal_get_callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117::__cordl_internal_set_callback(::System::Action_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callback = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117::__cordl_internal_get__randTeleportTarget_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____randTeleportTarget_5__2;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117::__cordl_internal_get__randTeleportTarget_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____randTeleportTarget_5__2;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117::__cordl_internal_set__randTeleportTarget_5__2(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____randTeleportTarget_5__2 = value;
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117* GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117::CustomMapManager__Internal_TeleportToVirtualStump_d__117()   {
}
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedTryAutoLoad_d__134._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedTryAutoLoad_d__134::*)(int32_t)>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedTryAutoLoad_d__134::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5be7400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedTryAutoLoad_d__134*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedTryAutoLoad_d__134.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedTryAutoLoad_d__134::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedTryAutoLoad_d__134::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5bea304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedTryAutoLoad_d__134*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedTryAutoLoad_d__134.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedTryAutoLoad_d__134::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedTryAutoLoad_d__134::MoveNext)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x5bea308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedTryAutoLoad_d__134*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedTryAutoLoad_d__134.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedTryAutoLoad_d__134::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedTryAutoLoad_d__134::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bea56c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedTryAutoLoad_d__134*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedTryAutoLoad_d__134.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedTryAutoLoad_d__134::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedTryAutoLoad_d__134::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5bea574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedTryAutoLoad_d__134*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedTryAutoLoad_d__134.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedTryAutoLoad_d__134::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedTryAutoLoad_d__134::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bea5ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedTryAutoLoad_d__134*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedTryAutoLoad_d__134::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedTryAutoLoad_d__134::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedTryAutoLoad_d__134::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedTryAutoLoad_d__134::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedTryAutoLoad_d__134::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedTryAutoLoad_d__134::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedTryAutoLoad_d__134::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedTryAutoLoad_d__134*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedTryAutoLoad_d__134::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedTryAutoLoad_d__134*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedTryAutoLoad_d__134::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedTryAutoLoad_d__134*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedTryAutoLoad_d__134::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedTryAutoLoad_d__134*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedTryAutoLoad_d__134::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedTryAutoLoad_d__134*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedTryAutoLoad_d__134::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedTryAutoLoad_d__134*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedTryAutoLoad_d__134* GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedTryAutoLoad_d__134::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedTryAutoLoad_d__134*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedTryAutoLoad_d__134::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedTryAutoLoad_d__134::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedTryAutoLoad_d__134::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedTryAutoLoad_d__134::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedTryAutoLoad_d__134::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedTryAutoLoad_d__134::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedTryAutoLoad_d__134::CustomMapManager__DelayedTryAutoLoad_d__134()   {
}
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119::*)(int32_t)>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5be40a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5bea090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119::MoveNext)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x5bea094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bea2bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5bea2c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bea2fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119* GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119::CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119()   {
}
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedEndTeleport_d__133._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedEndTeleport_d__133::*)(int32_t)>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedEndTeleport_d__133::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5be73d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedEndTeleport_d__133*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedEndTeleport_d__133.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedEndTeleport_d__133::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedEndTeleport_d__133::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5be9ee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedEndTeleport_d__133*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedEndTeleport_d__133.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedEndTeleport_d__133::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedEndTeleport_d__133::MoveNext)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5be9ee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedEndTeleport_d__133*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedEndTeleport_d__133.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedEndTeleport_d__133::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedEndTeleport_d__133::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bea048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedEndTeleport_d__133*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedEndTeleport_d__133.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedEndTeleport_d__133::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedEndTeleport_d__133::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5bea050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedEndTeleport_d__133*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedEndTeleport_d__133.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedEndTeleport_d__133::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedEndTeleport_d__133::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bea088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedEndTeleport_d__133*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedEndTeleport_d__133::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedEndTeleport_d__133::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedEndTeleport_d__133::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedEndTeleport_d__133::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedEndTeleport_d__133::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedEndTeleport_d__133::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedEndTeleport_d__133::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedEndTeleport_d__133*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedEndTeleport_d__133::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedEndTeleport_d__133*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedEndTeleport_d__133::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedEndTeleport_d__133*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedEndTeleport_d__133::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedEndTeleport_d__133*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedEndTeleport_d__133::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedEndTeleport_d__133*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedEndTeleport_d__133::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedEndTeleport_d__133*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedEndTeleport_d__133* GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedEndTeleport_d__133::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedEndTeleport_d__133*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedEndTeleport_d__133::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedEndTeleport_d__133::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedEndTeleport_d__133::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedEndTeleport_d__133::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedEndTeleport_d__133::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedEndTeleport_d__133::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedEndTeleport_d__133::CustomMapManager__DelayedEndTeleport_d__133()   {
}
