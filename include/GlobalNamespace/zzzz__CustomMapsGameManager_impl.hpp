#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomMapsGameManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CustomMapsGameManager_def.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__AIAgent_def.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__MapEntity_def.hpp"
#include "GlobalNamespace/zzzz__CustomMapsAIBehaviourController_def.hpp"
#include "GlobalNamespace/zzzz__CustomMapsGameManager_def.hpp"
#include "GlobalNamespace/zzzz__GRPlayer_def.hpp"
#include "GlobalNamespace/zzzz__GameAgentManager_def.hpp"
#include "GlobalNamespace/zzzz__GameEntityCreateData_def.hpp"
#include "GlobalNamespace/zzzz__GameEntityId_def.hpp"
#include "GlobalNamespace/zzzz__GameEntityManager_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactorManager_def.hpp"
#include "GlobalNamespace/zzzz__IGameEntityZoneComponent_def.hpp"
#include "GlobalNamespace/zzzz__ZoneClearReason_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/IO/zzzz__BinaryReader_def.hpp"
#include "System/IO/zzzz__BinaryWriter_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CustomMapsGameManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsGameManager::*)()>(&::GlobalNamespace::CustomMapsGameManager::Awake)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x59c4aec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsGameManager.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsGameManager::*)()>(&::GlobalNamespace::CustomMapsGameManager::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59c4ce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsGameManager.CreatePlacedEntities
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsGameManager::*)(::System::Collections::Generic::List_1<::UnityW<::GT_CustomMapSupportRuntime::MapEntity>>*)>(&::GlobalNamespace::CustomMapsGameManager::CreatePlacedEntities)> {
  constexpr static std::size_t size = 0x8bc;
  constexpr static std::size_t addrs = 0x59c4ce8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"CreatePlacedEntities", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GT_CustomMapSupportRuntime::MapEntity>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsGameManager.TEST_Spawning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsGameManager::*)()>(&::GlobalNamespace::CustomMapsGameManager::TEST_Spawning)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x59c55a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"TEST_Spawning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsGameManager.TEST_Spawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::CustomMapsGameManager::*)()>(&::GlobalNamespace::CustomMapsGameManager::TEST_Spawn)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x59c5640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"TEST_Spawn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsGameManager.SpawnEnemyFromPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameEntityId (::GlobalNamespace::CustomMapsGameManager::*)(::StringW, int32_t)>(&::GlobalNamespace::CustomMapsGameManager::SpawnEnemyFromPoint)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x59c56d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"SpawnEnemyFromPoint", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsGameManager.SpawnEnemyAtLocation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameEntityId (::GlobalNamespace::CustomMapsGameManager::*)(int32_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::GlobalNamespace::CustomMapsGameManager::SpawnEnemyAtLocation)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x59c586c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"SpawnEnemyAtLocation", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsGameManager.SpawnEnemyClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsGameManager::*)(int32_t, int32_t)>(&::GlobalNamespace::CustomMapsGameManager::SpawnEnemyClient)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x59c5b3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"SpawnEnemyClient", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsGameManager.SpawnGrabbableAtLocation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameEntityId (::GlobalNamespace::CustomMapsGameManager::*)(int32_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::GlobalNamespace::CustomMapsGameManager::SpawnGrabbableAtLocation)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x59c5d14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"SpawnGrabbableAtLocation", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsGameManager.ProcessMigratedGameEntityCreateData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::CustomMapsGameManager::*)(::GlobalNamespace::GameEntity*, int64_t)>(&::GlobalNamespace::CustomMapsGameManager::ProcessMigratedGameEntityCreateData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59c5fe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"ProcessMigratedGameEntityCreateData", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsGameManager.ValidateMigratedGameEntity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CustomMapsGameManager::*)(int32_t, int32_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, int64_t, int32_t)>(&::GlobalNamespace::CustomMapsGameManager::ValidateMigratedGameEntity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59c5fec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"ValidateMigratedGameEntity", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsGameManager.ValidateCreateMultipleItems
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CustomMapsGameManager::*)(int32_t, ::ArrayW<uint8_t>, int32_t)>(&::GlobalNamespace::CustomMapsGameManager::ValidateCreateMultipleItems)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x59c5ff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"ValidateCreateMultipleItems", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsGameManager.ValidateCreateItemBatchSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CustomMapsGameManager::*)(int32_t)>(&::GlobalNamespace::CustomMapsGameManager::ValidateCreateItemBatchSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59c6058;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"ValidateCreateItemBatchSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsGameManager.ValidateCreateItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CustomMapsGameManager::*)(int32_t, int32_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, int64_t, int32_t)>(&::GlobalNamespace::CustomMapsGameManager::ValidateCreateItem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59c6060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"ValidateCreateItem", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsGameManager.IsAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CustomMapsGameManager::*)()>(&::GlobalNamespace::CustomMapsGameManager::IsAuthority)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x59c6068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"IsAuthority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsGameManager.IsDriver
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CustomMapsGameManager::*)()>(&::GlobalNamespace::CustomMapsGameManager::IsDriver)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x59c6088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"IsDriver", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsGameManager.OnZoneCreate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsGameManager::*)()>(&::GlobalNamespace::CustomMapsGameManager::OnZoneCreate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59c60d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"OnZoneCreate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsGameManager.OnZoneInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsGameManager::*)()>(&::GlobalNamespace::CustomMapsGameManager::OnZoneInit)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x59c60dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"OnZoneInit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsGameManager.OnZoneClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsGameManager::*)(::GlobalNamespace::ZoneClearReason)>(&::GlobalNamespace::CustomMapsGameManager::OnZoneClear)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59c61c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"OnZoneClear", {}, {::i2c::type_of<::GlobalNamespace::ZoneClearReason>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsGameManager.ShouldClearZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CustomMapsGameManager::*)()>(&::GlobalNamespace::CustomMapsGameManager::ShouldClearZone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59c61d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"ShouldClearZone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsGameManager.IsZoneReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CustomMapsGameManager::*)()>(&::GlobalNamespace::CustomMapsGameManager::IsZoneReady)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x59c61d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"IsZoneReady", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsGameManager.OnCreateGameEntity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsGameManager::*)(::GlobalNamespace::GameEntity*)>(&::GlobalNamespace::CustomMapsGameManager::OnCreateGameEntity)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59c62b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"OnCreateGameEntity", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsGameManager.SetupCollisions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsGameManager::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::CustomMapsGameManager::SetupCollisions)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59c62bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"SetupCollisions", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsGameManager.SerializeZoneData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsGameManager::*)(::System::IO::BinaryWriter*)>(&::GlobalNamespace::CustomMapsGameManager::SerializeZoneData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59c62c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"SerializeZoneData", {}, {::i2c::type_of<::System::IO::BinaryWriter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsGameManager.DeserializeZoneData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsGameManager::*)(::System::IO::BinaryReader*)>(&::GlobalNamespace::CustomMapsGameManager::DeserializeZoneData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59c62c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"DeserializeZoneData", {}, {::i2c::type_of<::System::IO::BinaryReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsGameManager.SerializeZoneEntityData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsGameManager::*)(::System::IO::BinaryWriter*, ::GlobalNamespace::GameEntity*)>(&::GlobalNamespace::CustomMapsGameManager::SerializeZoneEntityData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59c62c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"SerializeZoneEntityData", {}, {::i2c::type_of<::System::IO::BinaryWriter*>(), ::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsGameManager.DeserializeZoneEntityData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsGameManager::*)(::System::IO::BinaryReader*, ::GlobalNamespace::GameEntity*)>(&::GlobalNamespace::CustomMapsGameManager::DeserializeZoneEntityData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59c62cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"DeserializeZoneEntityData", {}, {::i2c::type_of<::System::IO::BinaryReader*>(), ::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsGameManager.SerializeZonePlayerData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsGameManager::*)(::System::IO::BinaryWriter*, int32_t)>(&::GlobalNamespace::CustomMapsGameManager::SerializeZonePlayerData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59c62d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"SerializeZonePlayerData", {}, {::i2c::type_of<::System::IO::BinaryWriter*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsGameManager.DeserializeZonePlayerData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsGameManager::*)(::System::IO::BinaryReader*, int32_t)>(&::GlobalNamespace::CustomMapsGameManager::DeserializeZonePlayerData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59c62d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"DeserializeZonePlayerData", {}, {::i2c::type_of<::System::IO::BinaryReader*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsGameManager.GetEntityManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GameEntityManager> (*)()>(&::GlobalNamespace::CustomMapsGameManager::GetEntityManager)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59c62d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"GetEntityManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsGameManager.GetAgentManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GameAgentManager> (*)()>(&::GlobalNamespace::CustomMapsGameManager::GetAgentManager)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59c6398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"GetAgentManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsGameManager.GetBehaviorControllerForEntity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::CustomMapsAIBehaviourController> (*)(::GlobalNamespace::GameEntityId)>(&::GlobalNamespace::CustomMapsGameManager::GetBehaviorControllerForEntity)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x59c6458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"GetBehaviorControllerForEntity", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsGameManager.AddAgentsToCreate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityW<::GT_CustomMapSupportRuntime::MapEntity>>*)>(&::GlobalNamespace::CustomMapsGameManager::AddAgentsToCreate)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x59c6564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"AddAgentsToCreate", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GT_CustomMapSupportRuntime::MapEntity>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsGameManager.ClearAgentsToCreate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::CustomMapsGameManager::ClearAgentsToCreate)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x59be794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"ClearAgentsToCreate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsGameManager.OnPlayerHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsGameManager::*)(::GlobalNamespace::GameEntityId, ::GlobalNamespace::GRPlayer*, ::UnityEngine::Vector3)>(&::GlobalNamespace::CustomMapsGameManager::OnPlayerHit)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x59c2dcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"OnPlayerHit", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<::GlobalNamespace::GRPlayer*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsGameManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsGameManager::*)()>(&::GlobalNamespace::CustomMapsGameManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59c667c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameEntityManager>& GlobalNamespace::CustomMapsGameManager::__cordl_internal_get_gameEntityManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEntityManager;
}
constexpr ::UnityW<::GlobalNamespace::GameEntityManager> const& GlobalNamespace::CustomMapsGameManager::__cordl_internal_get_gameEntityManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEntityManager;
}
constexpr void GlobalNamespace::CustomMapsGameManager::__cordl_internal_set_gameEntityManager(::UnityW<::GlobalNamespace::GameEntityManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameEntityManager = value;
}
constexpr ::UnityW<::GlobalNamespace::GameAgentManager>& GlobalNamespace::CustomMapsGameManager::__cordl_internal_get_gameAgentManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameAgentManager;
}
constexpr ::UnityW<::GlobalNamespace::GameAgentManager> const& GlobalNamespace::CustomMapsGameManager::__cordl_internal_get_gameAgentManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameAgentManager;
}
constexpr void GlobalNamespace::CustomMapsGameManager::__cordl_internal_set_gameAgentManager(::UnityW<::GlobalNamespace::GameAgentManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameAgentManager = value;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactorManager>& GlobalNamespace::CustomMapsGameManager::__cordl_internal_get_ghostReactorManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ghostReactorManager;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactorManager> const& GlobalNamespace::CustomMapsGameManager::__cordl_internal_get_ghostReactorManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ghostReactorManager;
}
constexpr void GlobalNamespace::CustomMapsGameManager::__cordl_internal_set_ghostReactorManager(::UnityW<::GlobalNamespace::GhostReactorManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ghostReactorManager = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GT_CustomMapSupportRuntime::AIAgent>>*& GlobalNamespace::CustomMapsGameManager::__cordl_internal_get_customMapsAgents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customMapsAgents;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GT_CustomMapSupportRuntime::AIAgent>>* const& GlobalNamespace::CustomMapsGameManager::__cordl_internal_get_customMapsAgents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customMapsAgents;
}
constexpr void GlobalNamespace::CustomMapsGameManager::__cordl_internal_set_customMapsAgents(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GT_CustomMapSupportRuntime::AIAgent>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customMapsAgents = value;
}
constexpr bool& GlobalNamespace::CustomMapsGameManager::__cordl_internal_get_hasCreatedPlacedEntitiesForZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasCreatedPlacedEntitiesForZone;
}
constexpr bool const& GlobalNamespace::CustomMapsGameManager::__cordl_internal_get_hasCreatedPlacedEntitiesForZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasCreatedPlacedEntitiesForZone;
}
constexpr void GlobalNamespace::CustomMapsGameManager::__cordl_internal_set_hasCreatedPlacedEntitiesForZone(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasCreatedPlacedEntitiesForZone = value;
}
constexpr int32_t& GlobalNamespace::CustomMapsGameManager::__cordl_internal_get_TEST_index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TEST_index;
}
constexpr int32_t const& GlobalNamespace::CustomMapsGameManager::__cordl_internal_get_TEST_index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TEST_index;
}
constexpr void GlobalNamespace::CustomMapsGameManager::__cordl_internal_set_TEST_index(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TEST_index = value;
}
constexpr int32_t& GlobalNamespace::CustomMapsGameManager::__cordl_internal_get_spawnCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnCount;
}
constexpr int32_t const& GlobalNamespace::CustomMapsGameManager::__cordl_internal_get_spawnCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnCount;
}
constexpr void GlobalNamespace::CustomMapsGameManager::__cordl_internal_set_spawnCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnCount = value;
}
inline void GlobalNamespace::CustomMapsGameManager::setStaticF_instance(::UnityW<::GlobalNamespace::CustomMapsGameManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::CustomMapsGameManager>, "instance", ::GlobalNamespace::CustomMapsGameManager*>(std::forward<::UnityW<::GlobalNamespace::CustomMapsGameManager>>(value));
}
inline ::UnityW<::GlobalNamespace::CustomMapsGameManager> GlobalNamespace::CustomMapsGameManager::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::CustomMapsGameManager>, "instance", ::GlobalNamespace::CustomMapsGameManager*>();
}
inline void GlobalNamespace::CustomMapsGameManager::setStaticF_tempCreateEntitiesList(::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityCreateData>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityCreateData>*, "tempCreateEntitiesList", ::GlobalNamespace::CustomMapsGameManager*>(std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityCreateData>*>(value));
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityCreateData>* GlobalNamespace::CustomMapsGameManager::getStaticF_tempCreateEntitiesList()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityCreateData>*, "tempCreateEntitiesList", ::GlobalNamespace::CustomMapsGameManager*>();
}
inline void GlobalNamespace::CustomMapsGameManager::setStaticF_agentsToCreateOnZoneInit(::System::Collections::Generic::List_1<::UnityW<::GT_CustomMapSupportRuntime::MapEntity>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GT_CustomMapSupportRuntime::MapEntity>>*, "agentsToCreateOnZoneInit", ::GlobalNamespace::CustomMapsGameManager*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GT_CustomMapSupportRuntime::MapEntity>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GT_CustomMapSupportRuntime::MapEntity>>* GlobalNamespace::CustomMapsGameManager::getStaticF_agentsToCreateOnZoneInit()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GT_CustomMapSupportRuntime::MapEntity>>*, "agentsToCreateOnZoneInit", ::GlobalNamespace::CustomMapsGameManager*>();
}
inline void GlobalNamespace::CustomMapsGameManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsGameManager::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsGameManager::CreatePlacedEntities(::System::Collections::Generic::List_1<::UnityW<::GT_CustomMapSupportRuntime::MapEntity>>*  entities)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"CreatePlacedEntities", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GT_CustomMapSupportRuntime::MapEntity>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entities);
}
inline void GlobalNamespace::CustomMapsGameManager::TEST_Spawning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"TEST_Spawning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::CustomMapsGameManager::TEST_Spawn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"TEST_Spawn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::GlobalNamespace::GameEntityId GlobalNamespace::CustomMapsGameManager::SpawnEnemyFromPoint(::StringW  spawnPointId, int32_t  enemyTypeId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"SpawnEnemyFromPoint", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameEntityId>(this, ___internal_method, spawnPointId, enemyTypeId);
}
inline ::GlobalNamespace::GameEntityId GlobalNamespace::CustomMapsGameManager::SpawnEnemyAtLocation(int32_t  enemyTypeId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"SpawnEnemyAtLocation", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameEntityId>(this, ___internal_method, enemyTypeId, position, rotation);
}
inline void GlobalNamespace::CustomMapsGameManager::SpawnEnemyClient(int32_t  enemyTypeId, int32_t  agentId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"SpawnEnemyClient", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enemyTypeId, agentId);
}
inline ::GlobalNamespace::GameEntityId GlobalNamespace::CustomMapsGameManager::SpawnGrabbableAtLocation(int32_t  enemyTypeId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"SpawnGrabbableAtLocation", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameEntityId>(this, ___internal_method, enemyTypeId, position, rotation);
}
inline int64_t GlobalNamespace::CustomMapsGameManager::ProcessMigratedGameEntityCreateData(::GlobalNamespace::GameEntity*  entity, int64_t  createData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"ProcessMigratedGameEntityCreateData", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, entity, createData);
}
inline bool GlobalNamespace::CustomMapsGameManager::ValidateMigratedGameEntity(int32_t  netId, int32_t  entityTypeId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, int64_t  createData, int32_t  actorNr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"ValidateMigratedGameEntity", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, netId, entityTypeId, position, rotation, createData, actorNr);
}
inline bool GlobalNamespace::CustomMapsGameManager::ValidateCreateMultipleItems(int32_t  zoneId, ::ArrayW<uint8_t>  compressedStateData, int32_t  EntityCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"ValidateCreateMultipleItems", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, zoneId, compressedStateData, EntityCount);
}
inline bool GlobalNamespace::CustomMapsGameManager::ValidateCreateItemBatchSize(int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"ValidateCreateItemBatchSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, size);
}
inline bool GlobalNamespace::CustomMapsGameManager::ValidateCreateItem(int32_t  nedId, int32_t  entityTypeId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, int64_t  createData, int32_t  createdByEntityNetId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"ValidateCreateItem", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, nedId, entityTypeId, position, rotation, createData, createdByEntityNetId);
}
inline bool GlobalNamespace::CustomMapsGameManager::IsAuthority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"IsAuthority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::CustomMapsGameManager::IsDriver()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"IsDriver", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsGameManager::OnZoneCreate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"OnZoneCreate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsGameManager::OnZoneInit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"OnZoneInit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsGameManager::OnZoneClear(::GlobalNamespace::ZoneClearReason  reason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"OnZoneClear", {}, {::i2c::type_of<::GlobalNamespace::ZoneClearReason>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reason);
}
inline bool GlobalNamespace::CustomMapsGameManager::ShouldClearZone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"ShouldClearZone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::CustomMapsGameManager::IsZoneReady()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"IsZoneReady", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsGameManager::OnCreateGameEntity(::GlobalNamespace::GameEntity*  entity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"OnCreateGameEntity", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entity);
}
inline void GlobalNamespace::CustomMapsGameManager::SetupCollisions(::UnityEngine::GameObject*  go)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"SetupCollisions", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, go);
}
inline void GlobalNamespace::CustomMapsGameManager::SerializeZoneData(::System::IO::BinaryWriter*  writer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"SerializeZoneData", {}, {::i2c::type_of<::System::IO::BinaryWriter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline void GlobalNamespace::CustomMapsGameManager::DeserializeZoneData(::System::IO::BinaryReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"DeserializeZoneData", {}, {::i2c::type_of<::System::IO::BinaryReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline void GlobalNamespace::CustomMapsGameManager::SerializeZoneEntityData(::System::IO::BinaryWriter*  writer, ::GlobalNamespace::GameEntity*  entity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"SerializeZoneEntityData", {}, {::i2c::type_of<::System::IO::BinaryWriter*>(), ::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, entity);
}
inline void GlobalNamespace::CustomMapsGameManager::DeserializeZoneEntityData(::System::IO::BinaryReader*  reader, ::GlobalNamespace::GameEntity*  entity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"DeserializeZoneEntityData", {}, {::i2c::type_of<::System::IO::BinaryReader*>(), ::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, entity);
}
inline void GlobalNamespace::CustomMapsGameManager::SerializeZonePlayerData(::System::IO::BinaryWriter*  writer, int32_t  actorNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"SerializeZonePlayerData", {}, {::i2c::type_of<::System::IO::BinaryWriter*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, actorNumber);
}
inline void GlobalNamespace::CustomMapsGameManager::DeserializeZonePlayerData(::System::IO::BinaryReader*  reader, int32_t  actorNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"DeserializeZonePlayerData", {}, {::i2c::type_of<::System::IO::BinaryReader*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, actorNumber);
}
inline ::UnityW<::GlobalNamespace::GameEntityManager> GlobalNamespace::CustomMapsGameManager::GetEntityManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"GetEntityManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GameEntityManager>>(nullptr, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::GameAgentManager> GlobalNamespace::CustomMapsGameManager::GetAgentManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"GetAgentManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GameAgentManager>>(nullptr, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::CustomMapsAIBehaviourController> GlobalNamespace::CustomMapsGameManager::GetBehaviorControllerForEntity(::GlobalNamespace::GameEntityId  entityId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"GetBehaviorControllerForEntity", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::CustomMapsAIBehaviourController>>(nullptr, ___internal_method, entityId);
}
inline void GlobalNamespace::CustomMapsGameManager::AddAgentsToCreate(::System::Collections::Generic::List_1<::UnityW<::GT_CustomMapSupportRuntime::MapEntity>>*  entitiesToCreate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"AddAgentsToCreate", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GT_CustomMapSupportRuntime::MapEntity>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, entitiesToCreate);
}
inline void GlobalNamespace::CustomMapsGameManager::ClearAgentsToCreate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"ClearAgentsToCreate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::CustomMapsGameManager::OnPlayerHit(::GlobalNamespace::GameEntityId  hitByEntityId, ::GlobalNamespace::GRPlayer*  player, ::UnityEngine::Vector3  hitPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {"OnPlayerHit", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<::GlobalNamespace::GRPlayer*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hitByEntityId, player, hitPosition);
}
inline void GlobalNamespace::CustomMapsGameManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CustomMapsGameManager* GlobalNamespace::CustomMapsGameManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CustomMapsGameManager*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGameEntityZoneComponent"
constexpr  GlobalNamespace::CustomMapsGameManager::operator ::GlobalNamespace::IGameEntityZoneComponent*() noexcept {
return static_cast<::GlobalNamespace::IGameEntityZoneComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameEntityZoneComponent"
constexpr ::GlobalNamespace::IGameEntityZoneComponent* GlobalNamespace::CustomMapsGameManager::i___GlobalNamespace__IGameEntityZoneComponent() noexcept {
return static_cast<::GlobalNamespace::IGameEntityZoneComponent*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomMapsGameManager::CustomMapsGameManager()   {
}
//  Writing Method size for method: ::GlobalNamespace::CustomMapsGameManager__TEST_Spawn_d__16._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsGameManager__TEST_Spawn_d__16::*)(int32_t)>(&::GlobalNamespace::CustomMapsGameManager__TEST_Spawn_d__16::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x59c56ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager__TEST_Spawn_d__16*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsGameManager__TEST_Spawn_d__16.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsGameManager__TEST_Spawn_d__16::*)()>(&::GlobalNamespace::CustomMapsGameManager__TEST_Spawn_d__16::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59c6774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager__TEST_Spawn_d__16*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsGameManager__TEST_Spawn_d__16.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CustomMapsGameManager__TEST_Spawn_d__16::*)()>(&::GlobalNamespace::CustomMapsGameManager__TEST_Spawn_d__16::MoveNext)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x59c6778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager__TEST_Spawn_d__16*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsGameManager__TEST_Spawn_d__16.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::CustomMapsGameManager__TEST_Spawn_d__16::*)()>(&::GlobalNamespace::CustomMapsGameManager__TEST_Spawn_d__16::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59c68d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager__TEST_Spawn_d__16*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsGameManager__TEST_Spawn_d__16.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsGameManager__TEST_Spawn_d__16::*)()>(&::GlobalNamespace::CustomMapsGameManager__TEST_Spawn_d__16::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x59c68d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager__TEST_Spawn_d__16*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsGameManager__TEST_Spawn_d__16.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::CustomMapsGameManager__TEST_Spawn_d__16::*)()>(&::GlobalNamespace::CustomMapsGameManager__TEST_Spawn_d__16::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59c6910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager__TEST_Spawn_d__16*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::CustomMapsGameManager__TEST_Spawn_d__16::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::CustomMapsGameManager__TEST_Spawn_d__16::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::CustomMapsGameManager__TEST_Spawn_d__16::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::CustomMapsGameManager__TEST_Spawn_d__16::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::CustomMapsGameManager__TEST_Spawn_d__16::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::CustomMapsGameManager__TEST_Spawn_d__16::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::CustomMapsGameManager>& GlobalNamespace::CustomMapsGameManager__TEST_Spawn_d__16::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::CustomMapsGameManager> const& GlobalNamespace::CustomMapsGameManager__TEST_Spawn_d__16::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::CustomMapsGameManager__TEST_Spawn_d__16::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::CustomMapsGameManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::CustomMapsGameManager__TEST_Spawn_d__16::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager__TEST_Spawn_d__16*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::CustomMapsGameManager__TEST_Spawn_d__16::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager__TEST_Spawn_d__16*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::CustomMapsGameManager__TEST_Spawn_d__16::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager__TEST_Spawn_d__16*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::CustomMapsGameManager__TEST_Spawn_d__16::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager__TEST_Spawn_d__16*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsGameManager__TEST_Spawn_d__16::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager__TEST_Spawn_d__16*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::CustomMapsGameManager__TEST_Spawn_d__16::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGameManager__TEST_Spawn_d__16*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::CustomMapsGameManager__TEST_Spawn_d__16* GlobalNamespace::CustomMapsGameManager__TEST_Spawn_d__16::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CustomMapsGameManager__TEST_Spawn_d__16*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::CustomMapsGameManager__TEST_Spawn_d__16::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::CustomMapsGameManager__TEST_Spawn_d__16::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::CustomMapsGameManager__TEST_Spawn_d__16::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::CustomMapsGameManager__TEST_Spawn_d__16::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::CustomMapsGameManager__TEST_Spawn_d__16::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::CustomMapsGameManager__TEST_Spawn_d__16::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomMapsGameManager__TEST_Spawn_d__16::CustomMapsGameManager__TEST_Spawn_d__16()   {
}
