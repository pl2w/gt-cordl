#pragma once
// IWYU pragma private; include "GlobalNamespace/SuperInfectionManager.hpp"
#include "GlobalNamespace/zzzz__SnapJointType_impl.hpp"
#include "GlobalNamespace/zzzz__XSceneRef_impl.hpp"
#include "System/Collections/Generic/zzzz__Dictionary`2_Enumerator_impl.hpp"
#include "System/Collections/Generic/zzzz__List`1_Enumerator_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SuperInfectionManager_def.hpp"
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include "GlobalNamespace/zzzz__GameEntityManager_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__IFactoryItemProvider_def.hpp"
#include "GlobalNamespace/zzzz__IGameEntityZoneComponent_def.hpp"
#include "GlobalNamespace/zzzz__SIPlayer_def.hpp"
#include "GlobalNamespace/zzzz__SIProgression_def.hpp"
#include "GlobalNamespace/zzzz__SITechTreeSO_def.hpp"
#include "GlobalNamespace/zzzz__SIUpgradeType_def.hpp"
#include "GlobalNamespace/zzzz__SnapJointType_def.hpp"
#include "GlobalNamespace/zzzz__SuperInfectionManager_AuthorityToClientRPC_def.hpp"
#include "GlobalNamespace/zzzz__SuperInfectionManager_ClientToAuthorityRPC_def.hpp"
#include "GlobalNamespace/zzzz__SuperInfectionManager_ClientToClientRPC_def.hpp"
#include "GlobalNamespace/zzzz__SuperInfectionManager_RoomFXType_def.hpp"
#include "GlobalNamespace/zzzz__SuperInfectionManager_def.hpp"
#include "GlobalNamespace/zzzz__SuperInfectionSnapPoint_def.hpp"
#include "GlobalNamespace/zzzz__SuperInfection_def.hpp"
#include "GlobalNamespace/zzzz__TestSpawnGadget_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GlobalNamespace/zzzz__ZoneClearReason_def.hpp"
#include "GorillaGameModes/zzzz__GameModeType_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "Photon/Pun/zzzz__PhotonView_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/IO/zzzz__BinaryReader_def.hpp"
#include "System/IO/zzzz__BinaryWriter_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionManager.get_HasSIZonePlatform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SuperInfectionManager::*)()>(&::GlobalNamespace::SuperInfectionManager::get_HasSIZonePlatform)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5afcc70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"get_HasSIZonePlatform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionManager.get_HasActiveTryOnDispenser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SuperInfectionManager::*)()>(&::GlobalNamespace::SuperInfectionManager::get_HasActiveTryOnDispenser)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5afcc80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"get_HasActiveTryOnDispenser", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionManager.RegisterTryOnDispenser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionManager::*)()>(&::GlobalNamespace::SuperInfectionManager::RegisterTryOnDispenser)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5afa418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"RegisterTryOnDispenser", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionManager.UnregisterTryOnDispenser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionManager::*)()>(&::GlobalNamespace::SuperInfectionManager::UnregisterTryOnDispenser)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5afa428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"UnregisterTryOnDispenser", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionManager::*)()>(&::GlobalNamespace::SuperInfectionManager::Awake)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5afcc90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionManager.OnEnableZoneSuperInfection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionManager::*)(::GlobalNamespace::SuperInfection*)>(&::GlobalNamespace::SuperInfectionManager::OnEnableZoneSuperInfection)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5af90d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"OnEnableZoneSuperInfection", {}, {::i2c::type_of<::GlobalNamespace::SuperInfection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionManager.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionManager::*)()>(&::GlobalNamespace::SuperInfectionManager::OnEnable)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x5afd3ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionManager.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionManager::*)()>(&::GlobalNamespace::SuperInfectionManager::OnDisable)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5afd5e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionManager._OnStartGameMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionManager::*)(::GorillaGameModes::GameModeType)>(&::GlobalNamespace::SuperInfectionManager::_OnStartGameMode)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x5afd6ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"_OnStartGameMode", {}, {::i2c::type_of<::GorillaGameModes::GameModeType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionManager.GetSIManagerForZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::SuperInfectionManager> (*)(::GlobalNamespace::GTZone)>(&::GlobalNamespace::SuperInfectionManager::GetSIManagerForZone)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5af9030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"GetSIManagerForZone", {}, {::i2c::type_of<::GlobalNamespace::GTZone>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionManager.get_IsSupercharged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SuperInfectionManager::*)()>(&::GlobalNamespace::SuperInfectionManager::get_IsSupercharged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5afdac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"get_IsSupercharged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionManager.OnZoneCreate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionManager::*)()>(&::GlobalNamespace::SuperInfectionManager::OnZoneCreate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5afdad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"OnZoneCreate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionManager.WriteDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionManager::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::SuperInfectionManager::WriteDataPUN)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5afdad4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"WriteDataPUN", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionManager.ReadDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionManager::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::SuperInfectionManager::ReadDataPUN)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5afdc2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"ReadDataPUN", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionManager.IGameEntityZoneComponent_SerializeZoneData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionManager::*)(::System::IO::BinaryWriter*)>(&::GlobalNamespace::SuperInfectionManager::IGameEntityZoneComponent_SerializeZoneData)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5afdd80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"IGameEntityZoneComponent.SerializeZoneData", {}, {::i2c::type_of<::System::IO::BinaryWriter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionManager.IGameEntityZoneComponent_DeserializeZoneData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionManager::*)(::System::IO::BinaryReader*)>(&::GlobalNamespace::SuperInfectionManager::IGameEntityZoneComponent_DeserializeZoneData)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5afde48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"IGameEntityZoneComponent.DeserializeZoneData", {}, {::i2c::type_of<::System::IO::BinaryReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionManager.SerializeZoneEntityData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionManager::*)(::System::IO::BinaryWriter*, ::GlobalNamespace::GameEntity*)>(&::GlobalNamespace::SuperInfectionManager::SerializeZoneEntityData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5afdf10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"SerializeZoneEntityData", {}, {::i2c::type_of<::System::IO::BinaryWriter*>(), ::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionManager.DeserializeZoneEntityData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionManager::*)(::System::IO::BinaryReader*, ::GlobalNamespace::GameEntity*)>(&::GlobalNamespace::SuperInfectionManager::DeserializeZoneEntityData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5afdf14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"DeserializeZoneEntityData", {}, {::i2c::type_of<::System::IO::BinaryReader*>(), ::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionManager.IGameEntityZoneComponent_SerializeZonePlayerData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionManager::*)(::System::IO::BinaryWriter*, int32_t)>(&::GlobalNamespace::SuperInfectionManager::IGameEntityZoneComponent_SerializeZonePlayerData)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5afdf18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"IGameEntityZoneComponent.SerializeZonePlayerData", {}, {::i2c::type_of<::System::IO::BinaryWriter*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionManager.IGameEntityZoneComponent_DeserializeZonePlayerData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionManager::*)(::System::IO::BinaryReader*, int32_t)>(&::GlobalNamespace::SuperInfectionManager::IGameEntityZoneComponent_DeserializeZonePlayerData)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5afdfa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"IGameEntityZoneComponent.DeserializeZonePlayerData", {}, {::i2c::type_of<::System::IO::BinaryReader*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionManager.IsZoneReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SuperInfectionManager::*)()>(&::GlobalNamespace::SuperInfectionManager::IsZoneReady)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x5afe020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"IsZoneReady", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionManager.ShouldClearZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SuperInfectionManager::*)()>(&::GlobalNamespace::SuperInfectionManager::ShouldClearZone)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5afe2e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"ShouldClearZone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionManager.IsSuperGameMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::SuperInfectionManager::IsSuperGameMode)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5afb7d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"IsSuperGameMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionManager.OnCreateGameEntity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionManager::*)(::GlobalNamespace::GameEntity*)>(&::GlobalNamespace::SuperInfectionManager::OnCreateGameEntity)> {
  constexpr static std::size_t size = 0x5fc;
  constexpr static std::size_t addrs = 0x5afe428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"OnCreateGameEntity", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionManager.OnZoneClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionManager::*)(::GlobalNamespace::ZoneClearReason)>(&::GlobalNamespace::SuperInfectionManager::OnZoneClear)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5afeb84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"OnZoneClear", {}, {::i2c::type_of<::GlobalNamespace::ZoneClearReason>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionManager.OnZoneInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionManager::*)()>(&::GlobalNamespace::SuperInfectionManager::OnZoneInit)> {
  constexpr static std::size_t size = 0x638;
  constexpr static std::size_t addrs = 0x5afcd74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"OnZoneInit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionManager.RegisterSnapPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionManager::*)(::GlobalNamespace::SuperInfectionSnapPoint*)>(&::GlobalNamespace::SuperInfectionManager::RegisterSnapPoint)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5afea24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"RegisterSnapPoint", {}, {::i2c::type_of<::GlobalNamespace::SuperInfectionSnapPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionManager.UnregisterSnapPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionManager::*)(::GlobalNamespace::SuperInfectionSnapPoint*)>(&::GlobalNamespace::SuperInfectionManager::UnregisterSnapPoint)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5afec58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"UnregisterSnapPoint", {}, {::i2c::type_of<::GlobalNamespace::SuperInfectionSnapPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionManager.GetPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>* (::GlobalNamespace::SuperInfectionManager::*)(::GlobalNamespace::SnapJointType)>(&::GlobalNamespace::SuperInfectionManager::GetPoints)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5afed64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"GetPoints", {}, {::i2c::type_of<::GlobalNamespace::SnapJointType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionManager.FindNearestSnapPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint> (::GlobalNamespace::SuperInfectionManager::*)(::GlobalNamespace::SnapJointType, ::UnityEngine::Vector3, float_t, bool)>(&::GlobalNamespace::SuperInfectionManager::FindNearestSnapPoint)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x5afede8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"FindNearestSnapPoint", {}, {::i2c::type_of<::GlobalNamespace::SnapJointType>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionManager.CallRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionManager::*)(::GlobalNamespace::SuperInfectionManager_ClientToAuthorityRPC, ::ArrayW<::System::Object*>)>(&::GlobalNamespace::SuperInfectionManager::CallRPC)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5aecf20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"CallRPC", {}, {::i2c::type_of<::GlobalNamespace::SuperInfectionManager_ClientToAuthorityRPC>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionManager.CallRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionManager::*)(::GlobalNamespace::SuperInfectionManager_ClientToClientRPC, ::ArrayW<::System::Object*>)>(&::GlobalNamespace::SuperInfectionManager::CallRPC)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5aff1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"CallRPC", {}, {::i2c::type_of<::GlobalNamespace::SuperInfectionManager_ClientToClientRPC>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionManager.CallRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionManager::*)(::GlobalNamespace::SuperInfectionManager_AuthorityToClientRPC, ::ArrayW<::System::Object*>)>(&::GlobalNamespace::SuperInfectionManager::CallRPC)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5aff32c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"CallRPC", {}, {::i2c::type_of<::GlobalNamespace::SuperInfectionManager_AuthorityToClientRPC>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionManager.CallRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionManager::*)(::GlobalNamespace::SuperInfectionManager_AuthorityToClientRPC, int32_t, ::ArrayW<::System::Object*>)>(&::GlobalNamespace::SuperInfectionManager::CallRPC)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5aff4a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"CallRPC", {}, {::i2c::type_of<::GlobalNamespace::SuperInfectionManager_AuthorityToClientRPC>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionManager.SIClientToAuthorityRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionManager::*)(int32_t, ::ArrayW<::System::Object*>, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::SuperInfectionManager::SIClientToAuthorityRPC)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5aff668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"SIClientToAuthorityRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionManager.ProcessClientToAuthorityRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionManager::*)(int32_t, ::ArrayW<::System::Object*>, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::SuperInfectionManager::ProcessClientToAuthorityRPC)> {
  constexpr static std::size_t size = 0x9d4;
  constexpr static std::size_t addrs = 0x5aff794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"ProcessClientToAuthorityRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionManager.SIAuthorityToClientRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionManager::*)(int32_t, ::ArrayW<::System::Object*>, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::SuperInfectionManager::SIAuthorityToClientRPC)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5b00168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"SIAuthorityToClientRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionManager.ProcessAuthorityToClientRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionManager::*)(int32_t, ::ArrayW<::System::Object*>, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::SuperInfectionManager::ProcessAuthorityToClientRPC)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x5b0029c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"ProcessAuthorityToClientRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionManager.SIClientToClientRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionManager::*)(int32_t, ::ArrayW<::System::Object*>, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::SuperInfectionManager::SIClientToClientRPC)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5b006d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"SIClientToClientRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionManager.ProcessClientToClientRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionManager::*)(int32_t, ::ArrayW<::System::Object*>, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::SuperInfectionManager::ProcessClientToClientRPC)> {
  constexpr static std::size_t size = 0x9c0;
  constexpr static std::size_t addrs = 0x5b007f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"ProcessClientToClientRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionManager.TestSpawnGadget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionManager::*)()>(&::GlobalNamespace::SuperInfectionManager::TestSpawnGadget)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5afec38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"TestSpawnGadget", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionManager.GetFactoryItems
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::GameEntity>>* (::GlobalNamespace::SuperInfectionManager::*)()>(&::GlobalNamespace::SuperInfectionManager::GetFactoryItems)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5b011b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"GetFactoryItems", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionManager.OnEntityRemoved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionManager::*)(::GlobalNamespace::GameEntity*)>(&::GlobalNamespace::SuperInfectionManager::OnEntityRemoved)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x5b011dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"OnEntityRemoved", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionManager.ProcessMigratedGameEntityCreateData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::SuperInfectionManager::*)(::GlobalNamespace::GameEntity*, int64_t)>(&::GlobalNamespace::SuperInfectionManager::ProcessMigratedGameEntityCreateData)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5b013b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"ProcessMigratedGameEntityCreateData", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionManager.ValidateMigratedGameEntity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SuperInfectionManager::*)(int32_t, int32_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, int64_t, int32_t)>(&::GlobalNamespace::SuperInfectionManager::ValidateMigratedGameEntity)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x5b01498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"ValidateMigratedGameEntity", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionManager.ValidateCreateMultipleItems
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SuperInfectionManager::*)(int32_t, ::ArrayW<uint8_t>, int32_t)>(&::GlobalNamespace::SuperInfectionManager::ValidateCreateMultipleItems)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b01890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"ValidateCreateMultipleItems", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionManager.ValidateCreateItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SuperInfectionManager::*)(int32_t, int32_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, int64_t, int32_t)>(&::GlobalNamespace::SuperInfectionManager::ValidateCreateItem)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x5b01898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"ValidateCreateItem", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionManager._ValidatePlayerHasGadgetUpgrades
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int64_t, ::GlobalNamespace::SIPlayer*, ::GlobalNamespace::SIUpgradeType)>(&::GlobalNamespace::SuperInfectionManager::_ValidatePlayerHasGadgetUpgrades)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5b01840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"_ValidatePlayerHasGadgetUpgrades", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::GlobalNamespace::SIPlayer*>(), ::i2c::type_of<::GlobalNamespace::SIUpgradeType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionManager.ValidateCreateItemBatchSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SuperInfectionManager::*)(int32_t)>(&::GlobalNamespace::SuperInfectionManager::ValidateCreateItemBatchSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b01a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"ValidateCreateItemBatchSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionManager.ClearPlayerGadgets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionManager::*)(::GlobalNamespace::SIPlayer*)>(&::GlobalNamespace::SuperInfectionManager::ClearPlayerGadgets)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5b01a98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"ClearPlayerGadgets", {}, {::i2c::type_of<::GlobalNamespace::SIPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionManager::*)()>(&::GlobalNamespace::SuperInfectionManager::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5b01c34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionManager._OnZoneInit_g__WhenReady_51_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionManager::*)()>(&::GlobalNamespace::SuperInfectionManager::_OnZoneInit_g__WhenReady_51_0)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x5b01dd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"<OnZoneInit>g__WhenReady|51_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameEntityManager>& GlobalNamespace::SuperInfectionManager::__cordl_internal_get_gameEntityManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEntityManager;
}
constexpr ::UnityW<::GlobalNamespace::GameEntityManager> const& GlobalNamespace::SuperInfectionManager::__cordl_internal_get_gameEntityManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEntityManager;
}
constexpr void GlobalNamespace::SuperInfectionManager::__cordl_internal_set_gameEntityManager(::UnityW<::GlobalNamespace::GameEntityManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameEntityManager = value;
}
constexpr ::UnityW<::GlobalNamespace::TestSpawnGadget>& GlobalNamespace::SuperInfectionManager::__cordl_internal_get_testSpawner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testSpawner;
}
constexpr ::UnityW<::GlobalNamespace::TestSpawnGadget> const& GlobalNamespace::SuperInfectionManager::__cordl_internal_get_testSpawner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testSpawner;
}
constexpr void GlobalNamespace::SuperInfectionManager::__cordl_internal_set_testSpawner(::UnityW<::GlobalNamespace::TestSpawnGadget>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___testSpawner = value;
}
constexpr ::UnityW<::Photon::Pun::PhotonView>& GlobalNamespace::SuperInfectionManager::__cordl_internal_get_photonView()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___photonView;
}
constexpr ::UnityW<::Photon::Pun::PhotonView> const& GlobalNamespace::SuperInfectionManager::__cordl_internal_get_photonView() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___photonView;
}
constexpr void GlobalNamespace::SuperInfectionManager::__cordl_internal_set_photonView(::UnityW<::Photon::Pun::PhotonView>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___photonView = value;
}
constexpr ::GlobalNamespace::XSceneRef& GlobalNamespace::SuperInfectionManager::__cordl_internal_get_zoneSuperInfectionRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zoneSuperInfectionRef;
}
constexpr ::GlobalNamespace::XSceneRef const& GlobalNamespace::SuperInfectionManager::__cordl_internal_get_zoneSuperInfectionRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zoneSuperInfectionRef;
}
constexpr void GlobalNamespace::SuperInfectionManager::__cordl_internal_set_zoneSuperInfectionRef(::GlobalNamespace::XSceneRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zoneSuperInfectionRef = value;
}
constexpr ::UnityW<::GlobalNamespace::SuperInfection>& GlobalNamespace::SuperInfectionManager::__cordl_internal_get_zoneSuperInfection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zoneSuperInfection;
}
constexpr ::UnityW<::GlobalNamespace::SuperInfection> const& GlobalNamespace::SuperInfectionManager::__cordl_internal_get_zoneSuperInfection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zoneSuperInfection;
}
constexpr void GlobalNamespace::SuperInfectionManager::__cordl_internal_set_zoneSuperInfection(::UnityW<::GlobalNamespace::SuperInfection>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zoneSuperInfection = value;
}
constexpr ::UnityW<::GlobalNamespace::SITechTreeSO>& GlobalNamespace::SuperInfectionManager::__cordl_internal_get_techTreeSO()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___techTreeSO;
}
constexpr ::UnityW<::GlobalNamespace::SITechTreeSO> const& GlobalNamespace::SuperInfectionManager::__cordl_internal_get_techTreeSO() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___techTreeSO;
}
constexpr void GlobalNamespace::SuperInfectionManager::__cordl_internal_set_techTreeSO(::UnityW<::GlobalNamespace::SITechTreeSO>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___techTreeSO = value;
}
constexpr ::UnityW<::GlobalNamespace::SIProgression>& GlobalNamespace::SuperInfectionManager::__cordl_internal_get_progression()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progression;
}
constexpr ::UnityW<::GlobalNamespace::SIProgression> const& GlobalNamespace::SuperInfectionManager::__cordl_internal_get_progression() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progression;
}
constexpr void GlobalNamespace::SuperInfectionManager::__cordl_internal_set_progression(::UnityW<::GlobalNamespace::SIProgression>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___progression = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SnapJointType,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>*>*& GlobalNamespace::SuperInfectionManager::__cordl_internal_get_allSnapPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allSnapPoints;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SnapJointType,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>*>* const& GlobalNamespace::SuperInfectionManager::__cordl_internal_get_allSnapPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allSnapPoints;
}
constexpr void GlobalNamespace::SuperInfectionManager::__cordl_internal_set_allSnapPoints(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SnapJointType,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allSnapPoints = value;
}
constexpr bool& GlobalNamespace::SuperInfectionManager::__cordl_internal_get_PendingZoneInit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PendingZoneInit;
}
constexpr bool const& GlobalNamespace::SuperInfectionManager::__cordl_internal_get_PendingZoneInit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PendingZoneInit;
}
constexpr void GlobalNamespace::SuperInfectionManager::__cordl_internal_set_PendingZoneInit(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PendingZoneInit = value;
}
constexpr int32_t& GlobalNamespace::SuperInfectionManager::__cordl_internal_get_tryOnDispenserCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tryOnDispenserCount;
}
constexpr int32_t const& GlobalNamespace::SuperInfectionManager::__cordl_internal_get_tryOnDispenserCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tryOnDispenserCount;
}
constexpr void GlobalNamespace::SuperInfectionManager::__cordl_internal_set_tryOnDispenserCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tryOnDispenserCount = value;
}
constexpr bool& GlobalNamespace::SuperInfectionManager::__cordl_internal_get_hasInitialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasInitialized;
}
constexpr bool const& GlobalNamespace::SuperInfectionManager::__cordl_internal_get_hasInitialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasInitialized;
}
constexpr void GlobalNamespace::SuperInfectionManager::__cordl_internal_set_hasInitialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasInitialized = value;
}
inline void GlobalNamespace::SuperInfectionManager::setStaticF_activeSuperInfectionManager(::UnityW<::GlobalNamespace::SuperInfectionManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::SuperInfectionManager>, "activeSuperInfectionManager", ::GlobalNamespace::SuperInfectionManager*>(std::forward<::UnityW<::GlobalNamespace::SuperInfectionManager>>(value));
}
inline ::UnityW<::GlobalNamespace::SuperInfectionManager> GlobalNamespace::SuperInfectionManager::getStaticF_activeSuperInfectionManager()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::SuperInfectionManager>, "activeSuperInfectionManager", ::GlobalNamespace::SuperInfectionManager*>();
}
inline void GlobalNamespace::SuperInfectionManager::setStaticF_siManagerByZone(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTZone,::UnityW<::GlobalNamespace::SuperInfectionManager>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTZone,::UnityW<::GlobalNamespace::SuperInfectionManager>>*, "siManagerByZone", ::GlobalNamespace::SuperInfectionManager*>(std::forward<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTZone,::UnityW<::GlobalNamespace::SuperInfectionManager>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTZone,::UnityW<::GlobalNamespace::SuperInfectionManager>>* GlobalNamespace::SuperInfectionManager::getStaticF_siManagerByZone()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTZone,::UnityW<::GlobalNamespace::SuperInfectionManager>>*, "siManagerByZone", ::GlobalNamespace::SuperInfectionManager*>();
}
inline void GlobalNamespace::SuperInfectionManager::setStaticF_tempRigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*, "tempRigs", ::GlobalNamespace::SuperInfectionManager*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* GlobalNamespace::SuperInfectionManager::getStaticF_tempRigs()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*, "tempRigs", ::GlobalNamespace::SuperInfectionManager*>();
}
inline void GlobalNamespace::SuperInfectionManager::setStaticF_tempRigs2(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*, "tempRigs2", ::GlobalNamespace::SuperInfectionManager*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* GlobalNamespace::SuperInfectionManager::getStaticF_tempRigs2()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*, "tempRigs2", ::GlobalNamespace::SuperInfectionManager*>();
}
inline bool GlobalNamespace::SuperInfectionManager::get_HasSIZonePlatform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"get_HasSIZonePlatform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::SuperInfectionManager::get_HasActiveTryOnDispenser()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"get_HasActiveTryOnDispenser", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::SuperInfectionManager::RegisterTryOnDispenser()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"RegisterTryOnDispenser", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SuperInfectionManager::UnregisterTryOnDispenser()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"UnregisterTryOnDispenser", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SuperInfectionManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SuperInfectionManager::OnEnableZoneSuperInfection(::GlobalNamespace::SuperInfection*  zone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"OnEnableZoneSuperInfection", {}, {::i2c::type_of<::GlobalNamespace::SuperInfection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, zone);
}
inline void GlobalNamespace::SuperInfectionManager::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SuperInfectionManager::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SuperInfectionManager::_OnStartGameMode(::GorillaGameModes::GameModeType  newGameModeType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"_OnStartGameMode", {}, {::i2c::type_of<::GorillaGameModes::GameModeType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newGameModeType);
}
inline ::UnityW<::GlobalNamespace::SuperInfectionManager> GlobalNamespace::SuperInfectionManager::GetSIManagerForZone(::GlobalNamespace::GTZone  targetZone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"GetSIManagerForZone", {}, {::i2c::type_of<::GlobalNamespace::GTZone>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SuperInfectionManager>>(nullptr, ___internal_method, targetZone);
}
inline bool GlobalNamespace::SuperInfectionManager::get_IsSupercharged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"get_IsSupercharged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::SuperInfectionManager::OnZoneCreate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"OnZoneCreate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SuperInfectionManager::WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"WriteDataPUN", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::SuperInfectionManager::ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"ReadDataPUN", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::SuperInfectionManager::IGameEntityZoneComponent_SerializeZoneData(::System::IO::BinaryWriter*  writer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"IGameEntityZoneComponent.SerializeZoneData", {}, {::i2c::type_of<::System::IO::BinaryWriter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline void GlobalNamespace::SuperInfectionManager::IGameEntityZoneComponent_DeserializeZoneData(::System::IO::BinaryReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"IGameEntityZoneComponent.DeserializeZoneData", {}, {::i2c::type_of<::System::IO::BinaryReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline void GlobalNamespace::SuperInfectionManager::SerializeZoneEntityData(::System::IO::BinaryWriter*  writer, ::GlobalNamespace::GameEntity*  entity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"SerializeZoneEntityData", {}, {::i2c::type_of<::System::IO::BinaryWriter*>(), ::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, entity);
}
inline void GlobalNamespace::SuperInfectionManager::DeserializeZoneEntityData(::System::IO::BinaryReader*  reader, ::GlobalNamespace::GameEntity*  entity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"DeserializeZoneEntityData", {}, {::i2c::type_of<::System::IO::BinaryReader*>(), ::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, entity);
}
inline void GlobalNamespace::SuperInfectionManager::IGameEntityZoneComponent_SerializeZonePlayerData(::System::IO::BinaryWriter*  writer, int32_t  actorNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"IGameEntityZoneComponent.SerializeZonePlayerData", {}, {::i2c::type_of<::System::IO::BinaryWriter*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, actorNumber);
}
inline void GlobalNamespace::SuperInfectionManager::IGameEntityZoneComponent_DeserializeZonePlayerData(::System::IO::BinaryReader*  reader, int32_t  actorNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"IGameEntityZoneComponent.DeserializeZonePlayerData", {}, {::i2c::type_of<::System::IO::BinaryReader*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, actorNumber);
}
inline bool GlobalNamespace::SuperInfectionManager::IsZoneReady()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"IsZoneReady", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::SuperInfectionManager::ShouldClearZone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"ShouldClearZone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::SuperInfectionManager::IsSuperGameMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"IsSuperGameMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GlobalNamespace::SuperInfectionManager::OnCreateGameEntity(::GlobalNamespace::GameEntity*  entity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"OnCreateGameEntity", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entity);
}
inline void GlobalNamespace::SuperInfectionManager::OnZoneClear(::GlobalNamespace::ZoneClearReason  reason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"OnZoneClear", {}, {::i2c::type_of<::GlobalNamespace::ZoneClearReason>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reason);
}
inline void GlobalNamespace::SuperInfectionManager::OnZoneInit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"OnZoneInit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SuperInfectionManager::RegisterSnapPoint(::GlobalNamespace::SuperInfectionSnapPoint*  snapPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"RegisterSnapPoint", {}, {::i2c::type_of<::GlobalNamespace::SuperInfectionSnapPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, snapPoint);
}
inline void GlobalNamespace::SuperInfectionManager::UnregisterSnapPoint(::GlobalNamespace::SuperInfectionSnapPoint*  snapPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"UnregisterSnapPoint", {}, {::i2c::type_of<::GlobalNamespace::SuperInfectionSnapPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, snapPoint);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>* GlobalNamespace::SuperInfectionManager::GetPoints(::GlobalNamespace::SnapJointType  jointType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"GetPoints", {}, {::i2c::type_of<::GlobalNamespace::SnapJointType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>*>(this, ___internal_method, jointType);
}
inline ::UnityW<::GlobalNamespace::SuperInfectionSnapPoint> GlobalNamespace::SuperInfectionManager::FindNearestSnapPoint(::GlobalNamespace::SnapJointType  jointType, ::UnityEngine::Vector3  origin, float_t  maxDist, bool  includeOccupied)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"FindNearestSnapPoint", {}, {::i2c::type_of<::GlobalNamespace::SnapJointType>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>(this, ___internal_method, jointType, origin, maxDist, includeOccupied);
}
inline void GlobalNamespace::SuperInfectionManager::CallRPC(::GlobalNamespace::SuperInfectionManager_ClientToAuthorityRPC  clientToAuthorityRPC, ::ArrayW<::System::Object*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"CallRPC", {}, {::i2c::type_of<::GlobalNamespace::SuperInfectionManager_ClientToAuthorityRPC>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clientToAuthorityRPC, data);
}
inline void GlobalNamespace::SuperInfectionManager::CallRPC(::GlobalNamespace::SuperInfectionManager_ClientToClientRPC  clientToClientRPC, ::ArrayW<::System::Object*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"CallRPC", {}, {::i2c::type_of<::GlobalNamespace::SuperInfectionManager_ClientToClientRPC>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clientToClientRPC, data);
}
inline void GlobalNamespace::SuperInfectionManager::CallRPC(::GlobalNamespace::SuperInfectionManager_AuthorityToClientRPC  authorityToClientRPC, ::ArrayW<::System::Object*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"CallRPC", {}, {::i2c::type_of<::GlobalNamespace::SuperInfectionManager_AuthorityToClientRPC>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, authorityToClientRPC, data);
}
inline void GlobalNamespace::SuperInfectionManager::CallRPC(::GlobalNamespace::SuperInfectionManager_AuthorityToClientRPC  authorityToClientRPC, int32_t  actorNr, ::ArrayW<::System::Object*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"CallRPC", {}, {::i2c::type_of<::GlobalNamespace::SuperInfectionManager_AuthorityToClientRPC>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, authorityToClientRPC, actorNr, data);
}
inline void GlobalNamespace::SuperInfectionManager::SIClientToAuthorityRPC(int32_t  clientToAuthorityRPCEnum, ::ArrayW<::System::Object*>  data, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"SIClientToAuthorityRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clientToAuthorityRPCEnum, data, info);
}
inline void GlobalNamespace::SuperInfectionManager::ProcessClientToAuthorityRPC(int32_t  clientToAuthorityRPCEnum, ::ArrayW<::System::Object*>  data, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"ProcessClientToAuthorityRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clientToAuthorityRPCEnum, data, info);
}
inline void GlobalNamespace::SuperInfectionManager::SIAuthorityToClientRPC(int32_t  authorityToClientRPCEnum, ::ArrayW<::System::Object*>  data, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"SIAuthorityToClientRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, authorityToClientRPCEnum, data, info);
}
inline void GlobalNamespace::SuperInfectionManager::ProcessAuthorityToClientRPC(int32_t  authorityToClientRPCEnum, ::ArrayW<::System::Object*>  data, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"ProcessAuthorityToClientRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, authorityToClientRPCEnum, data, info);
}
inline void GlobalNamespace::SuperInfectionManager::SIClientToClientRPC(int32_t  clientToClientRPCEnum, ::ArrayW<::System::Object*>  data, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"SIClientToClientRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clientToClientRPCEnum, data, info);
}
inline void GlobalNamespace::SuperInfectionManager::ProcessClientToClientRPC(int32_t  clientToClientRPCEnum, ::ArrayW<::System::Object*>  data, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"ProcessClientToClientRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clientToClientRPCEnum, data, info);
}
inline void GlobalNamespace::SuperInfectionManager::TestSpawnGadget()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"TestSpawnGadget", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::GameEntity>>* GlobalNamespace::SuperInfectionManager::GetFactoryItems()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"GetFactoryItems", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::GameEntity>>*>(this, ___internal_method);
}
inline void GlobalNamespace::SuperInfectionManager::OnEntityRemoved(::GlobalNamespace::GameEntity*  entity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"OnEntityRemoved", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entity);
}
inline int64_t GlobalNamespace::SuperInfectionManager::ProcessMigratedGameEntityCreateData(::GlobalNamespace::GameEntity*  entity, int64_t  createData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"ProcessMigratedGameEntityCreateData", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, entity, createData);
}
inline bool GlobalNamespace::SuperInfectionManager::ValidateMigratedGameEntity(int32_t  netId, int32_t  entityTypeId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, int64_t  createData, int32_t  actorNr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"ValidateMigratedGameEntity", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, netId, entityTypeId, position, rotation, createData, actorNr);
}
inline bool GlobalNamespace::SuperInfectionManager::ValidateCreateMultipleItems(int32_t  zoneId, ::ArrayW<uint8_t>  compressedStateData, int32_t  EntityCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"ValidateCreateMultipleItems", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, zoneId, compressedStateData, EntityCount);
}
inline bool GlobalNamespace::SuperInfectionManager::ValidateCreateItem(int32_t  nedId, int32_t  entityTypeId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, int64_t  createData, int32_t  createdByEntityNetId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"ValidateCreateItem", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, nedId, entityTypeId, position, rotation, createData, createdByEntityNetId);
}
inline bool GlobalNamespace::SuperInfectionManager::_ValidatePlayerHasGadgetUpgrades(int64_t  createData, ::GlobalNamespace::SIPlayer*  siPlayer, ::GlobalNamespace::SIUpgradeType  upgradeType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"_ValidatePlayerHasGadgetUpgrades", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::GlobalNamespace::SIPlayer*>(), ::i2c::type_of<::GlobalNamespace::SIUpgradeType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, createData, siPlayer, upgradeType);
}
inline bool GlobalNamespace::SuperInfectionManager::ValidateCreateItemBatchSize(int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"ValidateCreateItemBatchSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, size);
}
inline void GlobalNamespace::SuperInfectionManager::ClearPlayerGadgets(::GlobalNamespace::SIPlayer*  siPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"ClearPlayerGadgets", {}, {::i2c::type_of<::GlobalNamespace::SIPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, siPlayer);
}
inline void GlobalNamespace::SuperInfectionManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SuperInfectionManager::_OnZoneInit_g__WhenReady_51_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager*>(),
                        {"<OnZoneInit>g__WhenReady|51_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SuperInfectionManager* GlobalNamespace::SuperInfectionManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SuperInfectionManager*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGameEntityZoneComponent"
constexpr  GlobalNamespace::SuperInfectionManager::operator ::GlobalNamespace::IGameEntityZoneComponent*() noexcept {
return static_cast<::GlobalNamespace::IGameEntityZoneComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameEntityZoneComponent"
constexpr ::GlobalNamespace::IGameEntityZoneComponent* GlobalNamespace::SuperInfectionManager::i___GlobalNamespace__IGameEntityZoneComponent() noexcept {
return static_cast<::GlobalNamespace::IGameEntityZoneComponent*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IFactoryItemProvider"
constexpr  GlobalNamespace::SuperInfectionManager::operator ::GlobalNamespace::IFactoryItemProvider*() noexcept {
return static_cast<::GlobalNamespace::IFactoryItemProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IFactoryItemProvider"
constexpr ::GlobalNamespace::IFactoryItemProvider* GlobalNamespace::SuperInfectionManager::i___GlobalNamespace__IFactoryItemProvider() noexcept {
return static_cast<::GlobalNamespace::IFactoryItemProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SuperInfectionManager::SuperInfectionManager()   {
}
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionManager__GetPoints_d__54._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionManager__GetPoints_d__54::*)(int32_t)>(&::GlobalNamespace::SuperInfectionManager__GetPoints_d__54::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5bf7c2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager__GetPoints_d__54*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionManager__GetPoints_d__54.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionManager__GetPoints_d__54::*)()>(&::GlobalNamespace::SuperInfectionManager__GetPoints_d__54::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5bf7c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager__GetPoints_d__54*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionManager__GetPoints_d__54.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SuperInfectionManager__GetPoints_d__54::*)()>(&::GlobalNamespace::SuperInfectionManager__GetPoints_d__54::MoveNext)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x5bf7d0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager__GetPoints_d__54*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionManager__GetPoints_d__54.__m__Finally1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionManager__GetPoints_d__54::*)()>(&::GlobalNamespace::SuperInfectionManager__GetPoints_d__54::__m__Finally1)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5bf8000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager__GetPoints_d__54*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionManager__GetPoints_d__54.__m__Finally2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionManager__GetPoints_d__54::*)()>(&::GlobalNamespace::SuperInfectionManager__GetPoints_d__54::__m__Finally2)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5bf7fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager__GetPoints_d__54*>(),
                        {"<>m__Finally2", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionManager__GetPoints_d__54.System_Collections_Generic_IEnumerator_SuperInfectionSnapPoint__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint> (::GlobalNamespace::SuperInfectionManager__GetPoints_d__54::*)()>(&::GlobalNamespace::SuperInfectionManager__GetPoints_d__54::System_Collections_Generic_IEnumerator_SuperInfectionSnapPoint__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bf8050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager__GetPoints_d__54*>(),
                        {"System.Collections.Generic.IEnumerator<SuperInfectionSnapPoint>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionManager__GetPoints_d__54.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionManager__GetPoints_d__54::*)()>(&::GlobalNamespace::SuperInfectionManager__GetPoints_d__54::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5bf8058;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager__GetPoints_d__54*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionManager__GetPoints_d__54.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::SuperInfectionManager__GetPoints_d__54::*)()>(&::GlobalNamespace::SuperInfectionManager__GetPoints_d__54::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bf8090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager__GetPoints_d__54*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionManager__GetPoints_d__54.System_Collections_Generic_IEnumerable_SuperInfectionSnapPoint__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>* (::GlobalNamespace::SuperInfectionManager__GetPoints_d__54::*)()>(&::GlobalNamespace::SuperInfectionManager__GetPoints_d__54::System_Collections_Generic_IEnumerable_SuperInfectionSnapPoint__GetEnumerator)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5bf8098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager__GetPoints_d__54*>(),
                        {"System.Collections.Generic.IEnumerable<SuperInfectionSnapPoint>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionManager__GetPoints_d__54.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::SuperInfectionManager__GetPoints_d__54::*)()>(&::GlobalNamespace::SuperInfectionManager__GetPoints_d__54::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5bf8144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager__GetPoints_d__54*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::SuperInfectionManager__GetPoints_d__54::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::SuperInfectionManager__GetPoints_d__54::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::SuperInfectionManager__GetPoints_d__54::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>& GlobalNamespace::SuperInfectionManager__GetPoints_d__54::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::UnityW<::GlobalNamespace::SuperInfectionSnapPoint> const& GlobalNamespace::SuperInfectionManager__GetPoints_d__54::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::SuperInfectionManager__GetPoints_d__54::__cordl_internal_set___2__current(::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr int32_t& GlobalNamespace::SuperInfectionManager__GetPoints_d__54::__cordl_internal_get___l__initialThreadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr int32_t const& GlobalNamespace::SuperInfectionManager__GetPoints_d__54::__cordl_internal_get___l__initialThreadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr void GlobalNamespace::SuperInfectionManager__GetPoints_d__54::__cordl_internal_set___l__initialThreadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____l__initialThreadId = value;
}
constexpr ::UnityW<::GlobalNamespace::SuperInfectionManager>& GlobalNamespace::SuperInfectionManager__GetPoints_d__54::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::SuperInfectionManager> const& GlobalNamespace::SuperInfectionManager__GetPoints_d__54::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::SuperInfectionManager__GetPoints_d__54::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::SuperInfectionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::SnapJointType& GlobalNamespace::SuperInfectionManager__GetPoints_d__54::__cordl_internal_get_jointType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jointType;
}
constexpr ::GlobalNamespace::SnapJointType const& GlobalNamespace::SuperInfectionManager__GetPoints_d__54::__cordl_internal_get_jointType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jointType;
}
constexpr void GlobalNamespace::SuperInfectionManager__GetPoints_d__54::__cordl_internal_set_jointType(::GlobalNamespace::SnapJointType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jointType = value;
}
constexpr ::GlobalNamespace::SnapJointType& GlobalNamespace::SuperInfectionManager__GetPoints_d__54::__cordl_internal_get___3__jointType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____3__jointType;
}
constexpr ::GlobalNamespace::SnapJointType const& GlobalNamespace::SuperInfectionManager__GetPoints_d__54::__cordl_internal_get___3__jointType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____3__jointType;
}
constexpr void GlobalNamespace::SuperInfectionManager__GetPoints_d__54::__cordl_internal_set___3__jointType(::GlobalNamespace::SnapJointType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____3__jointType = value;
}
constexpr ::GlobalNamespace::Dictionary_2_Enumerator<::GlobalNamespace::SnapJointType,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>*>& GlobalNamespace::SuperInfectionManager__GetPoints_d__54::__cordl_internal_get___7__wrap1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
constexpr ::GlobalNamespace::Dictionary_2_Enumerator<::GlobalNamespace::SnapJointType,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>*> const& GlobalNamespace::SuperInfectionManager__GetPoints_d__54::__cordl_internal_get___7__wrap1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
constexpr void GlobalNamespace::SuperInfectionManager__GetPoints_d__54::__cordl_internal_set___7__wrap1(::GlobalNamespace::Dictionary_2_Enumerator<::GlobalNamespace::SnapJointType,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____7__wrap1 = value;
}
constexpr ::GlobalNamespace::List_1_Enumerator<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>& GlobalNamespace::SuperInfectionManager__GetPoints_d__54::__cordl_internal_get___7__wrap2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap2;
}
constexpr ::GlobalNamespace::List_1_Enumerator<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>> const& GlobalNamespace::SuperInfectionManager__GetPoints_d__54::__cordl_internal_get___7__wrap2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap2;
}
constexpr void GlobalNamespace::SuperInfectionManager__GetPoints_d__54::__cordl_internal_set___7__wrap2(::GlobalNamespace::List_1_Enumerator<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____7__wrap2 = value;
}
inline void GlobalNamespace::SuperInfectionManager__GetPoints_d__54::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager__GetPoints_d__54*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::SuperInfectionManager__GetPoints_d__54::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager__GetPoints_d__54*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::SuperInfectionManager__GetPoints_d__54::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager__GetPoints_d__54*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::SuperInfectionManager__GetPoints_d__54::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager__GetPoints_d__54*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SuperInfectionManager__GetPoints_d__54::__m__Finally2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager__GetPoints_d__54*>(),
                        {"<>m__Finally2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::SuperInfectionSnapPoint> GlobalNamespace::SuperInfectionManager__GetPoints_d__54::System_Collections_Generic_IEnumerator_SuperInfectionSnapPoint__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager__GetPoints_d__54*>(),
                        {"System.Collections.Generic.IEnumerator<SuperInfectionSnapPoint>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>(this, ___internal_method);
}
inline void GlobalNamespace::SuperInfectionManager__GetPoints_d__54::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager__GetPoints_d__54*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::SuperInfectionManager__GetPoints_d__54::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager__GetPoints_d__54*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>* GlobalNamespace::SuperInfectionManager__GetPoints_d__54::System_Collections_Generic_IEnumerable_SuperInfectionSnapPoint__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager__GetPoints_d__54*>(),
                        {"System.Collections.Generic.IEnumerable<SuperInfectionSnapPoint>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::SuperInfectionManager__GetPoints_d__54::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionManager__GetPoints_d__54*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::SuperInfectionManager__GetPoints_d__54* GlobalNamespace::SuperInfectionManager__GetPoints_d__54::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SuperInfectionManager__GetPoints_d__54*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>"
constexpr  GlobalNamespace::SuperInfectionManager__GetPoints_d__54::operator ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>* GlobalNamespace::SuperInfectionManager__GetPoints_d__54::i___System__Collections__Generic__IEnumerable_1___UnityW___GlobalNamespace__SuperInfectionSnapPoint__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  GlobalNamespace::SuperInfectionManager__GetPoints_d__54::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* GlobalNamespace::SuperInfectionManager__GetPoints_d__54::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>"
constexpr  GlobalNamespace::SuperInfectionManager__GetPoints_d__54::operator ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>* GlobalNamespace::SuperInfectionManager__GetPoints_d__54::i___System__Collections__Generic__IEnumerator_1___UnityW___GlobalNamespace__SuperInfectionSnapPoint__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::SuperInfectionManager__GetPoints_d__54::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::SuperInfectionManager__GetPoints_d__54::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::SuperInfectionManager__GetPoints_d__54::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::SuperInfectionManager__GetPoints_d__54::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SuperInfectionManager__GetPoints_d__54::SuperInfectionManager__GetPoints_d__54()   {
}
