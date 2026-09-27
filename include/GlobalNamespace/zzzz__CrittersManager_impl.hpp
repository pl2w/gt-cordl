#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersManager.hpp"
#include "GlobalNamespace/zzzz__CrittersActor_CrittersActorType_impl.hpp"
#include "GlobalNamespace/zzzz__CrittersActor_impl.hpp"
#include "GlobalNamespace/zzzz__CrittersManager_AllowGrabbingFlags_impl.hpp"
#include "GlobalNamespace/zzzz__NetworkComponent_impl.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "GlobalNamespace/zzzz__CrittersManager_def.hpp"
#include "Critters/Scripts/zzzz__CrittersActorSpawner_def.hpp"
#include "GlobalNamespace/zzzz__CallLimiter_def.hpp"
#include "GlobalNamespace/zzzz__CritterIndex_def.hpp"
#include "GlobalNamespace/zzzz__CrittersActorGrabber_def.hpp"
#include "GlobalNamespace/zzzz__CrittersActor_CrittersActorType_def.hpp"
#include "GlobalNamespace/zzzz__CrittersActor_def.hpp"
#include "GlobalNamespace/zzzz__CrittersFood_def.hpp"
#include "GlobalNamespace/zzzz__CrittersManager_AllowGrabbingFlags_def.hpp"
#include "GlobalNamespace/zzzz__CrittersManager_CritterEvent_def.hpp"
#include "GlobalNamespace/zzzz__CrittersManager_def.hpp"
#include "GlobalNamespace/zzzz__CrittersPawn_def.hpp"
#include "GlobalNamespace/zzzz__CrittersPool_def.hpp"
#include "GlobalNamespace/zzzz__CrittersRegion_def.hpp"
#include "GlobalNamespace/zzzz__CrittersRigActorSetup_def.hpp"
#include "GlobalNamespace/zzzz__IBuildValidation_def.hpp"
#include "GlobalNamespace/zzzz__IRequestableOwnershipGuardCallbacks_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemTick_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__RequestableOwnershipGuard_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "PlayFab/zzzz__PlayFabError_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_4_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__CapsuleCollider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.get_hasInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::CrittersManager::get_hasInstance)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x560019c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"get_hasInstance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.set_hasInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GlobalNamespace::CrittersManager::set_hasInstance)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x56001e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"set_hasInstance", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.get_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CrittersManager::*)()>(&::GlobalNamespace::CrittersManager::get_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5600234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"get_TickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.set_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersManager::*)(bool)>(&::GlobalNamespace::CrittersManager::set_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x560023c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.get_allowGrabbingEntireBag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CrittersManager::*)()>(&::GlobalNamespace::CrittersManager::get_allowGrabbingEntireBag)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5600244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"get_allowGrabbingEntireBag", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.get_allowGrabbingOutOfHands
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CrittersManager::*)()>(&::GlobalNamespace::CrittersManager::get_allowGrabbingOutOfHands)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x56002d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"get_allowGrabbingOutOfHands", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.get_allowGrabbingFromBags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CrittersManager::*)()>(&::GlobalNamespace::CrittersManager::get_allowGrabbingFromBags)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x560035c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"get_allowGrabbingFromBags", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.LoadGrabSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersManager::*)()>(&::GlobalNamespace::CrittersManager::LoadGrabSettings)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x56003e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"LoadGrabSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.get_LocalInZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CrittersManager::*)()>(&::GlobalNamespace::CrittersManager::get_LocalInZone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x560069c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"get_LocalInZone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.add_OnCritterEventReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersManager::*)(::System::Action_4<::GlobalNamespace::CrittersManager_CritterEvent,int32_t,::UnityEngine::Vector3,::UnityEngine::Quaternion>*)>(&::GlobalNamespace::CrittersManager::add_OnCritterEventReceived)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x55fe580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"add_OnCritterEventReceived", {}, {::i2c::type_of<::System::Action_4<::GlobalNamespace::CrittersManager_CritterEvent,int32_t,::UnityEngine::Vector3,::UnityEngine::Quaternion>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.remove_OnCritterEventReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersManager::*)(::System::Action_4<::GlobalNamespace::CrittersManager_CritterEvent,int32_t,::UnityEngine::Vector3,::UnityEngine::Quaternion>*)>(&::GlobalNamespace::CrittersManager::remove_OnCritterEventReceived)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x56006a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"remove_OnCritterEventReceived", {}, {::i2c::type_of<::System::Action_4<::GlobalNamespace::CrittersManager_CritterEvent,int32_t,::UnityEngine::Vector3,::UnityEngine::Quaternion>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.BuildValidationCheck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CrittersManager::*)()>(&::GlobalNamespace::CrittersManager::BuildValidationCheck)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5600754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"BuildValidationCheck", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersManager::*)()>(&::GlobalNamespace::CrittersManager::Start)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5600880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersManager*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.InitializeCrittersManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::CrittersManager::InitializeCrittersManager)> {
  constexpr static std::size_t size = 0xb80;
  constexpr static std::size_t addrs = 0x5600938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"InitializeCrittersManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersManager::*)()>(&::GlobalNamespace::CrittersManager::OnEnable)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x560221c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersManager::*)()>(&::GlobalNamespace::CrittersManager::OnDisable)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5602334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.ResetRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersManager::*)()>(&::GlobalNamespace::CrittersManager::ResetRoom)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x560244c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"ResetRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersManager::*)()>(&::GlobalNamespace::CrittersManager::Tick)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x56025e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.ProcessRigSetups
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersManager::*)()>(&::GlobalNamespace::CrittersManager::ProcessRigSetups)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x5603188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"ProcessRigSetups", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.ProcessCritterAwareness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersManager::*)()>(&::GlobalNamespace::CrittersManager::ProcessCritterAwareness)> {
  constexpr static std::size_t size = 0x56c;
  constexpr static std::size_t addrs = 0x56033b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"ProcessCritterAwareness", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.ProcessSpawning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersManager::*)()>(&::GlobalNamespace::CrittersManager::ProcessSpawning)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5602880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"ProcessSpawning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.GetNextSpawnRegion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::CrittersManager::*)()>(&::GlobalNamespace::CrittersManager::GetNextSpawnRegion)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x56042fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"GetNextSpawnRegion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.ProcessActorBinLocations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersManager::*)()>(&::GlobalNamespace::CrittersManager::ProcessActorBinLocations)> {
  constexpr static std::size_t size = 0x748;
  constexpr static std::size_t addrs = 0x5602a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"ProcessActorBinLocations", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.ProcessDespawningIdles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersManager::*)()>(&::GlobalNamespace::CrittersManager::ProcessDespawningIdles)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x5603924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"ProcessDespawningIdles", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.DespawnActor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersManager::*)(::GlobalNamespace::CrittersActor*)>(&::GlobalNamespace::CrittersManager::DespawnActor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x56045f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"DespawnActor", {}, {::i2c::type_of<::GlobalNamespace::CrittersActor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.IncrementPoolCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersManager::*)(::GlobalNamespace::CrittersActor_CrittersActorType)>(&::GlobalNamespace::CrittersManager::IncrementPoolCount)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x56046dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"IncrementPoolCount", {}, {::i2c::type_of<::GlobalNamespace::CrittersActor_CrittersActorType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.DecrementPoolCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersManager::*)(::GlobalNamespace::CrittersActor_CrittersActorType)>(&::GlobalNamespace::CrittersManager::DecrementPoolCount)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5604840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"DecrementPoolCount", {}, {::i2c::type_of<::GlobalNamespace::CrittersActor_CrittersActorType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.ProcessActors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersManager::*)()>(&::GlobalNamespace::CrittersManager::ProcessActors)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x5603b34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"ProcessActors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.ProcessNewlyDisabledActors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersManager::*)()>(&::GlobalNamespace::CrittersManager::ProcessNewlyDisabledActors)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x5603db4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"ProcessNewlyDisabledActors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.RegisterCritter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::CrittersPawn*)>(&::GlobalNamespace::CrittersManager::RegisterCritter)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x56048f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"RegisterCritter", {}, {::i2c::type_of<::GlobalNamespace::CrittersPawn*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.RegisterRigActorSetup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::CrittersRigActorSetup*)>(&::GlobalNamespace::CrittersManager::RegisterRigActorSetup)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x56020a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"RegisterRigActorSetup", {}, {::i2c::type_of<::GlobalNamespace::CrittersRigActorSetup*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.DeregisterCritter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::CrittersPawn*)>(&::GlobalNamespace::CrittersManager::DeregisterCritter)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5604a14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"DeregisterCritter", {}, {::i2c::type_of<::GlobalNamespace::CrittersPawn*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.RegisterActor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::CrittersActor*)>(&::GlobalNamespace::CrittersManager::RegisterActor)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x5604b98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"RegisterActor", {}, {::i2c::type_of<::GlobalNamespace::CrittersActor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.DeregisterActor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::CrittersActor*)>(&::GlobalNamespace::CrittersManager::DeregisterActor)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5604df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"DeregisterActor", {}, {::i2c::type_of<::GlobalNamespace::CrittersActor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.CheckInitialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::CrittersManager::CheckInitialize)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x56008ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"CheckInitialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.CritterAwareOfAny
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::CrittersPawn*)>(&::GlobalNamespace::CrittersManager::CritterAwareOfAny)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5604f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"CritterAwareOfAny", {}, {::i2c::type_of<::GlobalNamespace::CrittersPawn*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.AnyFoodNearby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::CrittersPawn*)>(&::GlobalNamespace::CrittersManager::AnyFoodNearby)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5604fac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"AnyFoodNearby", {}, {::i2c::type_of<::GlobalNamespace::CrittersPawn*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.ClosestFood
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::CrittersFood> (*)(::GlobalNamespace::CrittersPawn*)>(&::GlobalNamespace::CrittersManager::ClosestFood)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x56050ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"ClosestFood", {}, {::i2c::type_of<::GlobalNamespace::CrittersPawn*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.PlayHaptics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::AudioClip*, float_t, bool)>(&::GlobalNamespace::CrittersManager::PlayHaptics)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x560528c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"PlayHaptics", {}, {::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.StopHaptics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GlobalNamespace::CrittersManager::StopHaptics)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5605314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"StopHaptics", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.SpawnCritter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::CrittersPawn> (::GlobalNamespace::CrittersManager::*)(int32_t)>(&::GlobalNamespace::CrittersManager::SpawnCritter)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x56043c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"SpawnCritter", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.SpawnCritter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::CrittersPawn> (::GlobalNamespace::CrittersManager::*)(int32_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::GlobalNamespace::CrittersManager::SpawnCritter)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x560537c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"SpawnCritter", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.DespawnCritter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersManager::*)(::GlobalNamespace::CrittersPawn*)>(&::GlobalNamespace::CrittersManager::DespawnCritter)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5605e74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"DespawnCritter", {}, {::i2c::type_of<::GlobalNamespace::CrittersPawn*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.QueueDespawnAllCritters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersManager::*)()>(&::GlobalNamespace::CrittersManager::QueueDespawnAllCritters)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5605ea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"QueueDespawnAllCritters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.SetCritterRegion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersManager::*)(::GlobalNamespace::CrittersPawn*, ::GlobalNamespace::CrittersRegion*)>(&::GlobalNamespace::CrittersManager::SetCritterRegion)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x56056cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"SetCritterRegion", {}, {::i2c::type_of<::GlobalNamespace::CrittersPawn*>(), ::i2c::type_of<::GlobalNamespace::CrittersRegion*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.SetCritterRegion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersManager::*)(::GlobalNamespace::CrittersPawn*, int32_t)>(&::GlobalNamespace::CrittersManager::SetCritterRegion)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5604b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"SetCritterRegion", {}, {::i2c::type_of<::GlobalNamespace::CrittersPawn*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.DeactivateActor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersManager::*)(::GlobalNamespace::CrittersActor*)>(&::GlobalNamespace::CrittersManager::DeactivateActor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5605e78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"DeactivateActor", {}, {::i2c::type_of<::GlobalNamespace::CrittersActor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.CamCapture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersManager::*)()>(&::GlobalNamespace::CrittersManager::CamCapture)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x5605fe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"CamCapture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.RemoteDataInitialization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::CrittersManager::*)(::GlobalNamespace::NetPlayer*, int32_t)>(&::GlobalNamespace::CrittersManager::RemoteDataInitialization)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x560619c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"RemoteDataInitialization", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.DelayedInitialization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::CrittersManager::*)(::GlobalNamespace::NetPlayer*, ::System::Collections::Generic::List_1<::System::Object*>*)>(&::GlobalNamespace::CrittersManager::DelayedInitialization)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5606254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"DelayedInitialization", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Object*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.RemoveInitializingPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersManager::*)(int32_t)>(&::GlobalNamespace::CrittersManager::RemoveInitializingPlayer)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5606318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"RemoveInitializingPlayer", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.JoinedRoomEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersManager::*)()>(&::GlobalNamespace::CrittersManager::JoinedRoomEvent)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x56063a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"JoinedRoomEvent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.LeftRoomEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersManager::*)()>(&::GlobalNamespace::CrittersManager::LeftRoomEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x56063d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"LeftRoomEvent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.RequestDataInitialization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersManager::*)(::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::CrittersManager::RequestDataInitialization)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x560648c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"RequestDataInitialization", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.ReadDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersManager::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::CrittersManager::ReadDataPUN)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x560665c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersManager*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.UpdateActorByType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CrittersManager::*)(::Photon::Pun::PhotonStream*)>(&::GlobalNamespace::CrittersManager::UpdateActorByType)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5606838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"UpdateActorByType", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.WriteDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersManager::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::CrittersManager::WriteDataPUN)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x5606918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersManager*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.RemoteCritterActorReleased
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersManager::*)(int32_t, bool, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::CrittersManager::RemoteCritterActorReleased)> {
  constexpr static std::size_t size = 0x47c;
  constexpr static std::size_t addrs = 0x5606ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"RemoteCritterActorReleased", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.RemoteSpawnCreature
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersManager::*)(int32_t, int32_t, ::ArrayW<::System::Object*>, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::CrittersManager::RemoteSpawnCreature)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5607484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"RemoteSpawnCreature", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.RemoteCrittersActorGrabbedby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersManager::*)(int32_t, int32_t, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, bool, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::CrittersManager::RemoteCrittersActorGrabbedby)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x5607694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"RemoteCrittersActorGrabbedby", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.RemoteUpdatePlayerCrittersActorData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersManager::*)(::ArrayW<::System::Object*>, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::CrittersManager::RemoteUpdatePlayerCrittersActorData)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5607d3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"RemoteUpdatePlayerCrittersActorData", {}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.RemoteUpdateCritterData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersManager::*)(::ArrayW<::System::Object*>, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::CrittersManager::RemoteUpdateCritterData)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5607e74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"RemoteUpdateCritterData", {}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.SpawnActor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::CrittersActor> (::GlobalNamespace::CrittersManager::*)(::GlobalNamespace::CrittersActor_CrittersActorType, int32_t)>(&::GlobalNamespace::CrittersManager::SpawnActor)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x5605758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"SpawnActor", {}, {::i2c::type_of<::GlobalNamespace::CrittersActor_CrittersActorType>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.WriteDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersManager::*)()>(&::GlobalNamespace::CrittersManager::WriteDataFusion)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x560802c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersManager*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.ReadDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersManager::*)()>(&::GlobalNamespace::CrittersManager::ReadDataFusion)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5608030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersManager*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.PopulatePools
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersManager::*)()>(&::GlobalNamespace::CrittersManager::PopulatePools)> {
  constexpr static std::size_t size = 0xbe8;
  constexpr static std::size_t addrs = 0x56014b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"PopulatePools", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.TriggerEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersManager::*)(::GlobalNamespace::CrittersManager_CritterEvent, int32_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::GlobalNamespace::CrittersManager::TriggerEvent)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x5608034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"TriggerEvent", {}, {::i2c::type_of<::GlobalNamespace::CrittersManager_CritterEvent>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.TriggerEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersManager::*)(::GlobalNamespace::CrittersManager_CritterEvent, int32_t, ::UnityEngine::Vector3)>(&::GlobalNamespace::CrittersManager::TriggerEvent)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5608314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"TriggerEvent", {}, {::i2c::type_of<::GlobalNamespace::CrittersManager_CritterEvent>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.RemoteReceivedCritterEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersManager::*)(::GlobalNamespace::CrittersManager_CritterEvent, int32_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::CrittersManager::RemoteReceivedCritterEvent)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x56083a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"RemoteReceivedCritterEvent", {}, {::i2c::type_of<::GlobalNamespace::CrittersManager_CritterEvent>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.CheckValidRemoteActorRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersManager::*)(int32_t, bool, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::CrittersManager::CheckValidRemoteActorRelease)> {
  constexpr static std::size_t size = 0x468;
  constexpr static std::size_t addrs = 0x560701c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"CheckValidRemoteActorRelease", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.CheckValidRemoteActorGrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersManager::*)(int32_t, int32_t, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, bool, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::CrittersManager::CheckValidRemoteActorGrab)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x56079b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"CheckValidRemoteActorGrab", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.TopLevelCritterGrabber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::CrittersActor> (::GlobalNamespace::CrittersManager::*)(::GlobalNamespace::CrittersActor*)>(&::GlobalNamespace::CrittersManager::TopLevelCritterGrabber)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5608730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"TopLevelCritterGrabber", {}, {::i2c::type_of<::GlobalNamespace::CrittersActor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.DuplicateCapsuleCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::CapsuleCollider> (*)(::UnityEngine::Transform*, ::UnityEngine::CapsuleCollider*)>(&::GlobalNamespace::CrittersManager::DuplicateCapsuleCollider)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x55fc29c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"DuplicateCapsuleCollider", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::CapsuleCollider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.HandleZonesAndOwnership
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersManager::*)()>(&::GlobalNamespace::CrittersManager::HandleZonesAndOwnership)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x5602638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"HandleZonesAndOwnership", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.CheckOwnership
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersManager::*)()>(&::GlobalNamespace::CrittersManager::CheckOwnership)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x56087fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"CheckOwnership", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.LocalAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CrittersManager::*)()>(&::GlobalNamespace::CrittersManager::LocalAuthority)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5603fb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"LocalAuthority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.SenderIsOwner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CrittersManager::*)(::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::CrittersManager::SenderIsOwner)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x560675c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"SenderIsOwner", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.OwnerSentError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersManager::*)(::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::CrittersManager::OwnerSentError)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5606830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"OwnerSentError", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.OnOwnershipTransferred
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersManager::*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::CrittersManager::OnOwnershipTransferred)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5608b74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"OnOwnershipTransferred", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.OnOwnershipRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CrittersManager::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::CrittersManager::OnOwnershipRequest)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5608bd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"OnOwnershipRequest", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.OnMyOwnerLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersManager::*)()>(&::GlobalNamespace::CrittersManager::OnMyOwnerLeft)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5608be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"OnMyOwnerLeft", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.OnMasterClientAssistedTakeoverRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CrittersManager::*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::CrittersManager::OnMasterClientAssistedTakeoverRequest)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5608be4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"OnMasterClientAssistedTakeoverRequest", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.OnMyCreatorLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersManager::*)()>(&::GlobalNamespace::CrittersManager::OnMyCreatorLeft)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5608bec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"OnMyCreatorLeft", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersManager::*)()>(&::GlobalNamespace::CrittersManager::_ctor)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5608bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager._LoadGrabSettings_b__58_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersManager::*)(::StringW)>(&::GlobalNamespace::CrittersManager::_LoadGrabSettings_b__58_0)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5608d4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"<LoadGrabSettings>b__58_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager._LoadGrabSettings_b__58_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersManager::*)(::StringW)>(&::GlobalNamespace::CrittersManager::_LoadGrabSettings_b__58_2)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5608d88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"<LoadGrabSettings>b__58_2", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.CopyBackingFieldsToState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersManager::*)(bool)>(&::GlobalNamespace::CrittersManager::CopyBackingFieldsToState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5608dc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersManager*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager.CopyStateToBackingFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersManager::*)()>(&::GlobalNamespace::CrittersManager::CopyStateToBackingFields)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5608dcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersManager*>(), 24}
                ));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::CritterIndex>& GlobalNamespace::CrittersManager::__cordl_internal_get_creatureIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___creatureIndex;
}
constexpr ::UnityW<::GlobalNamespace::CritterIndex> const& GlobalNamespace::CrittersManager::__cordl_internal_get_creatureIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___creatureIndex;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_creatureIndex(::UnityW<::GlobalNamespace::CritterIndex>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___creatureIndex = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::CrittersManager::__cordl_internal_get_movementLayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___movementLayers;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::CrittersManager::__cordl_internal_get_movementLayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___movementLayers;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_movementLayers(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___movementLayers = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::CrittersManager::__cordl_internal_get_objectLayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectLayers;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::CrittersManager::__cordl_internal_get_objectLayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectLayers;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_objectLayers(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___objectLayers = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::CrittersManager::__cordl_internal_get_containerLayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___containerLayer;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::CrittersManager::__cordl_internal_get_containerLayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___containerLayer;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_containerLayer(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___containerLayer = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*& GlobalNamespace::CrittersManager::__cordl_internal_get_crittersActors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crittersActors;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>* const& GlobalNamespace::CrittersManager::__cordl_internal_get_crittersActors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crittersActors;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_crittersActors(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crittersActors = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*& GlobalNamespace::CrittersManager::__cordl_internal_get_allActors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allActors;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>* const& GlobalNamespace::CrittersManager::__cordl_internal_get_allActors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allActors;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_allActors(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allActors = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersPawn>>*& GlobalNamespace::CrittersManager::__cordl_internal_get_crittersPawns()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crittersPawns;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersPawn>>* const& GlobalNamespace::CrittersManager::__cordl_internal_get_crittersPawns() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crittersPawns;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_crittersPawns(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersPawn>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crittersPawns = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*& GlobalNamespace::CrittersManager::__cordl_internal_get_despawnableActors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___despawnableActors;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>* const& GlobalNamespace::CrittersManager::__cordl_internal_get_despawnableActors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___despawnableActors;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_despawnableActors(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___despawnableActors = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*& GlobalNamespace::CrittersManager::__cordl_internal_get_newlyDisabledActors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newlyDisabledActors;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>* const& GlobalNamespace::CrittersManager::__cordl_internal_get_newlyDisabledActors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newlyDisabledActors;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_newlyDisabledActors(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___newlyDisabledActors = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersRigActorSetup>>*& GlobalNamespace::CrittersManager::__cordl_internal_get_rigActorSetups()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigActorSetups;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersRigActorSetup>>* const& GlobalNamespace::CrittersManager::__cordl_internal_get_rigActorSetups() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigActorSetups;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_rigActorSetups(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersRigActorSetup>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rigActorSetups = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Critters::Scripts::CrittersActorSpawner>>*& GlobalNamespace::CrittersManager::__cordl_internal_get_actorSpawners()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actorSpawners;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Critters::Scripts::CrittersActorSpawner>>* const& GlobalNamespace::CrittersManager::__cordl_internal_get_actorSpawners() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actorSpawners;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_actorSpawners(::System::Collections::Generic::List_1<::UnityW<::Critters::Scripts::CrittersActorSpawner>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___actorSpawners = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*& GlobalNamespace::CrittersManager::__cordl_internal_get_persistentActors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___persistentActors;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>* const& GlobalNamespace::CrittersManager::__cordl_internal_get_persistentActors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___persistentActors;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_persistentActors(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___persistentActors = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::CrittersActor>>*& GlobalNamespace::CrittersManager::__cordl_internal_get_actorById()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actorById;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::CrittersActor>>* const& GlobalNamespace::CrittersManager::__cordl_internal_get_actorById() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actorById;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_actorById(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::CrittersActor>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___actorById = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::CrittersPawn>,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*>*& GlobalNamespace::CrittersManager::__cordl_internal_get_awareOfActors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___awareOfActors;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::CrittersPawn>,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*>* const& GlobalNamespace::CrittersManager::__cordl_internal_get_awareOfActors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___awareOfActors;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_awareOfActors(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::CrittersPawn>,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___awareOfActors = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::VRRig>,::UnityW<::GlobalNamespace::CrittersRigActorSetup>>*& GlobalNamespace::CrittersManager::__cordl_internal_get_rigSetupByRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigSetupByRig;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::VRRig>,::UnityW<::GlobalNamespace::CrittersRigActorSetup>>* const& GlobalNamespace::CrittersManager::__cordl_internal_get_rigSetupByRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigSetupByRig;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_rigSetupByRig(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::VRRig>,::UnityW<::GlobalNamespace::CrittersRigActorSetup>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rigSetupByRig = value;
}
constexpr int32_t& GlobalNamespace::CrittersManager::__cordl_internal_get_allActorsCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allActorsCount;
}
constexpr int32_t const& GlobalNamespace::CrittersManager::__cordl_internal_get_allActorsCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allActorsCount;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_allActorsCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allActorsCount = value;
}
constexpr bool& GlobalNamespace::CrittersManager::__cordl_internal_get_intialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intialized;
}
constexpr bool const& GlobalNamespace::CrittersManager::__cordl_internal_get_intialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intialized;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_intialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___intialized = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GlobalNamespace::CrittersManager::__cordl_internal_get_updatesToSend()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updatesToSend;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GlobalNamespace::CrittersManager::__cordl_internal_get_updatesToSend() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updatesToSend;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_updatesToSend(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___updatesToSend = value;
}
constexpr int32_t& GlobalNamespace::CrittersManager::__cordl_internal_get_actorsPerInitializationCall()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actorsPerInitializationCall;
}
constexpr int32_t const& GlobalNamespace::CrittersManager::__cordl_internal_get_actorsPerInitializationCall() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actorsPerInitializationCall;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_actorsPerInitializationCall(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___actorsPerInitializationCall = value;
}
constexpr float_t& GlobalNamespace::CrittersManager::__cordl_internal_get_actorsInitializationCallCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actorsInitializationCallCooldown;
}
constexpr float_t const& GlobalNamespace::CrittersManager::__cordl_internal_get_actorsInitializationCallCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actorsInitializationCallCooldown;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_actorsInitializationCallCooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___actorsInitializationCallCooldown = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::CrittersManager::__cordl_internal_get_poolParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poolParent;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::CrittersManager::__cordl_internal_get_poolParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poolParent;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_poolParent(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___poolParent = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Object*>*& GlobalNamespace::CrittersManager::__cordl_internal_get_objList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objList;
}
constexpr ::System::Collections::Generic::List_1<::System::Object*>* const& GlobalNamespace::CrittersManager::__cordl_internal_get_objList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objList;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_objList(::System::Collections::Generic::List_1<::System::Object*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___objList = value;
}
constexpr double_t& GlobalNamespace::CrittersManager::__cordl_internal_get_spawnDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnDelay;
}
constexpr double_t const& GlobalNamespace::CrittersManager::__cordl_internal_get_spawnDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnDelay;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_spawnDelay(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnDelay = value;
}
constexpr double_t& GlobalNamespace::CrittersManager::__cordl_internal_get_lastSpawnTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSpawnTime;
}
constexpr double_t const& GlobalNamespace::CrittersManager::__cordl_internal_get_lastSpawnTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSpawnTime;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_lastSpawnTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastSpawnTime = value;
}
constexpr float_t& GlobalNamespace::CrittersManager::__cordl_internal_get_softJointGracePeriod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___softJointGracePeriod;
}
constexpr float_t const& GlobalNamespace::CrittersManager::__cordl_internal_get_softJointGracePeriod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___softJointGracePeriod;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_softJointGracePeriod(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___softJointGracePeriod = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersRegion>>*& GlobalNamespace::CrittersManager::__cordl_internal_get__spawnRegions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spawnRegions;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersRegion>>* const& GlobalNamespace::CrittersManager::__cordl_internal_get__spawnRegions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spawnRegions;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set__spawnRegions(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersRegion>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____spawnRegions = value;
}
constexpr int32_t& GlobalNamespace::CrittersManager::__cordl_internal_get__currentRegionIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentRegionIndex;
}
constexpr int32_t const& GlobalNamespace::CrittersManager::__cordl_internal_get__currentRegionIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentRegionIndex;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set__currentRegionIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentRegionIndex = value;
}
constexpr float_t& GlobalNamespace::CrittersManager::__cordl_internal_get_springForce()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___springForce;
}
constexpr float_t const& GlobalNamespace::CrittersManager::__cordl_internal_get_springForce() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___springForce;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_springForce(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___springForce = value;
}
constexpr float_t& GlobalNamespace::CrittersManager::__cordl_internal_get_springAngularForce()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___springAngularForce;
}
constexpr float_t const& GlobalNamespace::CrittersManager::__cordl_internal_get_springAngularForce() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___springAngularForce;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_springAngularForce(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___springAngularForce = value;
}
constexpr float_t& GlobalNamespace::CrittersManager::__cordl_internal_get_damperForce()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damperForce;
}
constexpr float_t const& GlobalNamespace::CrittersManager::__cordl_internal_get_damperForce() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damperForce;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_damperForce(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___damperForce = value;
}
constexpr float_t& GlobalNamespace::CrittersManager::__cordl_internal_get_damperAngularForce()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damperAngularForce;
}
constexpr float_t const& GlobalNamespace::CrittersManager::__cordl_internal_get_damperAngularForce() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damperAngularForce;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_damperAngularForce(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___damperAngularForce = value;
}
constexpr float_t& GlobalNamespace::CrittersManager::__cordl_internal_get_lightMass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightMass;
}
constexpr float_t const& GlobalNamespace::CrittersManager::__cordl_internal_get_lightMass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightMass;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_lightMass(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lightMass = value;
}
constexpr float_t& GlobalNamespace::CrittersManager::__cordl_internal_get_heavyMass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heavyMass;
}
constexpr float_t const& GlobalNamespace::CrittersManager::__cordl_internal_get_heavyMass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heavyMass;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_heavyMass(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heavyMass = value;
}
constexpr float_t& GlobalNamespace::CrittersManager::__cordl_internal_get_overlapDistanceMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlapDistanceMax;
}
constexpr float_t const& GlobalNamespace::CrittersManager::__cordl_internal_get_overlapDistanceMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlapDistanceMax;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_overlapDistanceMax(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overlapDistanceMax = value;
}
constexpr float_t& GlobalNamespace::CrittersManager::__cordl_internal_get_fastThrowThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fastThrowThreshold;
}
constexpr float_t const& GlobalNamespace::CrittersManager::__cordl_internal_get_fastThrowThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fastThrowThreshold;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_fastThrowThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fastThrowThreshold = value;
}
constexpr float_t& GlobalNamespace::CrittersManager::__cordl_internal_get_fastThrowMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fastThrowMultiplier;
}
constexpr float_t const& GlobalNamespace::CrittersManager::__cordl_internal_get_fastThrowMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fastThrowMultiplier;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_fastThrowMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fastThrowMultiplier = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersActor_CrittersActorType,int32_t>*& GlobalNamespace::CrittersManager::__cordl_internal_get_poolIndexDict()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poolIndexDict;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersActor_CrittersActorType,int32_t>* const& GlobalNamespace::CrittersManager::__cordl_internal_get_poolIndexDict() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poolIndexDict;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_poolIndexDict(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersActor_CrittersActorType,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___poolIndexDict = value;
}
constexpr bool& GlobalNamespace::CrittersManager::__cordl_internal_get__TickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr bool const& GlobalNamespace::CrittersManager::__cordl_internal_get__TickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set__TickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TickRunning_k__BackingField = value;
}
constexpr ::GlobalNamespace::CrittersManager_AllowGrabbingFlags& GlobalNamespace::CrittersManager::__cordl_internal_get_privateRoomGrabbingFlags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___privateRoomGrabbingFlags;
}
constexpr ::GlobalNamespace::CrittersManager_AllowGrabbingFlags const& GlobalNamespace::CrittersManager::__cordl_internal_get_privateRoomGrabbingFlags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___privateRoomGrabbingFlags;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_privateRoomGrabbingFlags(::GlobalNamespace::CrittersManager_AllowGrabbingFlags  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___privateRoomGrabbingFlags = value;
}
constexpr ::GlobalNamespace::CrittersManager_AllowGrabbingFlags& GlobalNamespace::CrittersManager::__cordl_internal_get_publicRoomGrabbingFlags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___publicRoomGrabbingFlags;
}
constexpr ::GlobalNamespace::CrittersManager_AllowGrabbingFlags const& GlobalNamespace::CrittersManager::__cordl_internal_get_publicRoomGrabbingFlags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___publicRoomGrabbingFlags;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_publicRoomGrabbingFlags(::GlobalNamespace::CrittersManager_AllowGrabbingFlags  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___publicRoomGrabbingFlags = value;
}
constexpr float_t& GlobalNamespace::CrittersManager::__cordl_internal_get_MaxAttachSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxAttachSpeed;
}
constexpr float_t const& GlobalNamespace::CrittersManager::__cordl_internal_get_MaxAttachSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxAttachSpeed;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_MaxAttachSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxAttachSpeed = value;
}
constexpr float_t& GlobalNamespace::CrittersManager::__cordl_internal_get_binDimensionXMin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___binDimensionXMin;
}
constexpr float_t const& GlobalNamespace::CrittersManager::__cordl_internal_get_binDimensionXMin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___binDimensionXMin;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_binDimensionXMin(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___binDimensionXMin = value;
}
constexpr float_t& GlobalNamespace::CrittersManager::__cordl_internal_get_binDimensionZMin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___binDimensionZMin;
}
constexpr float_t const& GlobalNamespace::CrittersManager::__cordl_internal_get_binDimensionZMin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___binDimensionZMin;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_binDimensionZMin(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___binDimensionZMin = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::CrittersManager::__cordl_internal_get_crittersRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crittersRange;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::CrittersManager::__cordl_internal_get_crittersRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crittersRange;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_crittersRange(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crittersRange = value;
}
constexpr int32_t& GlobalNamespace::CrittersManager::__cordl_internal_get_totalBinsApproximate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalBinsApproximate;
}
constexpr int32_t const& GlobalNamespace::CrittersManager::__cordl_internal_get_totalBinsApproximate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalBinsApproximate;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_totalBinsApproximate(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___totalBinsApproximate = value;
}
constexpr float_t& GlobalNamespace::CrittersManager::__cordl_internal_get_xLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xLength;
}
constexpr float_t const& GlobalNamespace::CrittersManager::__cordl_internal_get_xLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xLength;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_xLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___xLength = value;
}
constexpr float_t& GlobalNamespace::CrittersManager::__cordl_internal_get_zLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zLength;
}
constexpr float_t const& GlobalNamespace::CrittersManager::__cordl_internal_get_zLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zLength;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_zLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zLength = value;
}
constexpr int32_t& GlobalNamespace::CrittersManager::__cordl_internal_get_binXCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___binXCount;
}
constexpr int32_t const& GlobalNamespace::CrittersManager::__cordl_internal_get_binXCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___binXCount;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_binXCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___binXCount = value;
}
constexpr int32_t& GlobalNamespace::CrittersManager::__cordl_internal_get_binZCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___binZCount;
}
constexpr int32_t const& GlobalNamespace::CrittersManager::__cordl_internal_get_binZCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___binZCount;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_binZCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___binZCount = value;
}
constexpr float_t& GlobalNamespace::CrittersManager::__cordl_internal_get_individualBinSide()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___individualBinSide;
}
constexpr float_t const& GlobalNamespace::CrittersManager::__cordl_internal_get_individualBinSide() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___individualBinSide;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_individualBinSide(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___individualBinSide = value;
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*>& GlobalNamespace::CrittersManager::__cordl_internal_get_actorBins()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actorBins;
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*> const& GlobalNamespace::CrittersManager::__cordl_internal_get_actorBins() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actorBins;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_actorBins(::ArrayW<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___actorBins = value;
}
constexpr ::ArrayW<bool>& GlobalNamespace::CrittersManager::__cordl_internal_get_priorityBins()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___priorityBins;
}
constexpr ::ArrayW<bool> const& GlobalNamespace::CrittersManager::__cordl_internal_get_priorityBins() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___priorityBins;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_priorityBins(::ArrayW<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___priorityBins = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::CrittersActor>,int32_t>*& GlobalNamespace::CrittersManager::__cordl_internal_get_actorBinIndices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actorBinIndices;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::CrittersActor>,int32_t>* const& GlobalNamespace::CrittersManager::__cordl_internal_get_actorBinIndices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actorBinIndices;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_actorBinIndices(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::CrittersActor>,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___actorBinIndices = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*& GlobalNamespace::CrittersManager::__cordl_internal_get_nearbyActors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nearbyActors;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>* const& GlobalNamespace::CrittersManager::__cordl_internal_get_nearbyActors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nearbyActors;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_nearbyActors(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nearbyActors = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*& GlobalNamespace::CrittersManager::__cordl_internal_get_playersToUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playersToUpdate;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>* const& GlobalNamespace::CrittersManager::__cordl_internal_get_playersToUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playersToUpdate;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_playersToUpdate(::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playersToUpdate = value;
}
constexpr ::UnityW<::GlobalNamespace::CrittersPool>& GlobalNamespace::CrittersManager::__cordl_internal_get_crittersPool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crittersPool;
}
constexpr ::UnityW<::GlobalNamespace::CrittersPool> const& GlobalNamespace::CrittersManager::__cordl_internal_get_crittersPool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crittersPool;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_crittersPool(::UnityW<::GlobalNamespace::CrittersPool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crittersPool = value;
}
constexpr int32_t& GlobalNamespace::CrittersManager::__cordl_internal_get_lowPriorityActorsPerFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lowPriorityActorsPerFrame;
}
constexpr int32_t const& GlobalNamespace::CrittersManager::__cordl_internal_get_lowPriorityActorsPerFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lowPriorityActorsPerFrame;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_lowPriorityActorsPerFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lowPriorityActorsPerFrame = value;
}
constexpr int32_t& GlobalNamespace::CrittersManager::__cordl_internal_get_lowPriorityIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lowPriorityIndex;
}
constexpr int32_t const& GlobalNamespace::CrittersManager::__cordl_internal_get_lowPriorityIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lowPriorityIndex;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_lowPriorityIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lowPriorityIndex = value;
}
constexpr int32_t& GlobalNamespace::CrittersManager::__cordl_internal_get_spawnerIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnerIndex;
}
constexpr int32_t const& GlobalNamespace::CrittersManager::__cordl_internal_get_spawnerIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnerIndex;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_spawnerIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnerIndex = value;
}
constexpr int32_t& GlobalNamespace::CrittersManager::__cordl_internal_get_despawnIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___despawnIndex;
}
constexpr int32_t const& GlobalNamespace::CrittersManager::__cordl_internal_get_despawnIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___despawnIndex;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_despawnIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___despawnIndex = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*& GlobalNamespace::CrittersManager::__cordl_internal_get_lowPriorityPawnsToProcess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lowPriorityPawnsToProcess;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>* const& GlobalNamespace::CrittersManager::__cordl_internal_get_lowPriorityPawnsToProcess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lowPriorityPawnsToProcess;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_lowPriorityPawnsToProcess(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lowPriorityPawnsToProcess = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersActor_CrittersActorType,float_t>*& GlobalNamespace::CrittersManager::__cordl_internal_get_despawnDecayValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___despawnDecayValue;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersActor_CrittersActorType,float_t>* const& GlobalNamespace::CrittersManager::__cordl_internal_get_despawnDecayValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___despawnDecayValue;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_despawnDecayValue(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersActor_CrittersActorType,float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___despawnDecayValue = value;
}
constexpr float_t& GlobalNamespace::CrittersManager::__cordl_internal_get_decayRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___decayRate;
}
constexpr float_t const& GlobalNamespace::CrittersManager::__cordl_internal_get_decayRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___decayRate;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_decayRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___decayRate = value;
}
constexpr ::ArrayW<::GlobalNamespace::CrittersActor_CrittersActorType>& GlobalNamespace::CrittersManager::__cordl_internal_get_actorTypes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actorTypes;
}
constexpr ::ArrayW<::GlobalNamespace::CrittersActor_CrittersActorType> const& GlobalNamespace::CrittersManager::__cordl_internal_get_actorTypes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actorTypes;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_actorTypes(::ArrayW<::GlobalNamespace::CrittersActor_CrittersActorType>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___actorTypes = value;
}
constexpr float_t& GlobalNamespace::CrittersManager::__cordl_internal_get_maxGrabDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxGrabDistance;
}
constexpr float_t const& GlobalNamespace::CrittersManager::__cordl_internal_get_maxGrabDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxGrabDistance;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_maxGrabDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxGrabDistance = value;
}
constexpr ::UnityW<::GlobalNamespace::RequestableOwnershipGuard>& GlobalNamespace::CrittersManager::__cordl_internal_get_guard()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___guard;
}
constexpr ::UnityW<::GlobalNamespace::RequestableOwnershipGuard> const& GlobalNamespace::CrittersManager::__cordl_internal_get_guard() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___guard;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_guard(::UnityW<::GlobalNamespace::RequestableOwnershipGuard>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___guard = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*& GlobalNamespace::CrittersManager::__cordl_internal_get_allRigs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allRigs;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* const& GlobalNamespace::CrittersManager::__cordl_internal_get_allRigs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allRigs;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_allRigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allRigs = value;
}
constexpr bool& GlobalNamespace::CrittersManager::__cordl_internal_get_localInZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localInZone;
}
constexpr bool const& GlobalNamespace::CrittersManager::__cordl_internal_get_localInZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localInZone;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_localInZone(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localInZone = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GlobalNamespace::CrittersManager::__cordl_internal_get_updatingPlayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updatingPlayers;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GlobalNamespace::CrittersManager::__cordl_internal_get_updatingPlayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updatingPlayers;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_updatingPlayers(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___updatingPlayers = value;
}
constexpr bool& GlobalNamespace::CrittersManager::__cordl_internal_get_hasNewlyInitialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasNewlyInitialized;
}
constexpr bool const& GlobalNamespace::CrittersManager::__cordl_internal_get_hasNewlyInitialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasNewlyInitialized;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_hasNewlyInitialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasNewlyInitialized = value;
}
constexpr float_t& GlobalNamespace::CrittersManager::__cordl_internal_get_initRequestCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initRequestCooldown;
}
constexpr float_t const& GlobalNamespace::CrittersManager::__cordl_internal_get_initRequestCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initRequestCooldown;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_initRequestCooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initRequestCooldown = value;
}
constexpr float_t& GlobalNamespace::CrittersManager::__cordl_internal_get_lastRequest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRequest;
}
constexpr float_t const& GlobalNamespace::CrittersManager::__cordl_internal_get_lastRequest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRequest;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_lastRequest(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastRequest = value;
}
constexpr int32_t& GlobalNamespace::CrittersManager::__cordl_internal_get_poolCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poolCount;
}
constexpr int32_t const& GlobalNamespace::CrittersManager::__cordl_internal_get_poolCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poolCount;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_poolCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___poolCount = value;
}
constexpr int32_t& GlobalNamespace::CrittersManager::__cordl_internal_get_despawnThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___despawnThreshold;
}
constexpr int32_t const& GlobalNamespace::CrittersManager::__cordl_internal_get_despawnThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___despawnThreshold;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_despawnThreshold(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___despawnThreshold = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersActor_CrittersActorType,int32_t>*& GlobalNamespace::CrittersManager::__cordl_internal_get_poolCounts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poolCounts;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersActor_CrittersActorType,int32_t>* const& GlobalNamespace::CrittersManager::__cordl_internal_get_poolCounts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poolCounts;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_poolCounts(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersActor_CrittersActorType,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___poolCounts = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersActor_CrittersActorType,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*>*& GlobalNamespace::CrittersManager::__cordl_internal_get_actorPools()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actorPools;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersActor_CrittersActorType,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*>* const& GlobalNamespace::CrittersManager::__cordl_internal_get_actorPools() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actorPools;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_actorPools(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersActor_CrittersActorType,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___actorPools = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CrittersManager::__cordl_internal_get_foodPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___foodPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CrittersManager::__cordl_internal_get_foodPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___foodPrefab;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_foodPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___foodPrefab = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CrittersManager::__cordl_internal_get_creaturePrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___creaturePrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CrittersManager::__cordl_internal_get_creaturePrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___creaturePrefab;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_creaturePrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___creaturePrefab = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CrittersManager::__cordl_internal_get_noisePrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noisePrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CrittersManager::__cordl_internal_get_noisePrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noisePrefab;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_noisePrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noisePrefab = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CrittersManager::__cordl_internal_get_grabberPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabberPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CrittersManager::__cordl_internal_get_grabberPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabberPrefab;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_grabberPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabberPrefab = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CrittersManager::__cordl_internal_get_cagePrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cagePrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CrittersManager::__cordl_internal_get_cagePrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cagePrefab;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_cagePrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cagePrefab = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CrittersManager::__cordl_internal_get_foodSpawnerPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___foodSpawnerPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CrittersManager::__cordl_internal_get_foodSpawnerPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___foodSpawnerPrefab;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_foodSpawnerPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___foodSpawnerPrefab = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CrittersManager::__cordl_internal_get_stunBombPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stunBombPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CrittersManager::__cordl_internal_get_stunBombPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stunBombPrefab;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_stunBombPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stunBombPrefab = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CrittersManager::__cordl_internal_get_bodyAttachPointPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyAttachPointPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CrittersManager::__cordl_internal_get_bodyAttachPointPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyAttachPointPrefab;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_bodyAttachPointPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bodyAttachPointPrefab = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CrittersManager::__cordl_internal_get_bagPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bagPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CrittersManager::__cordl_internal_get_bagPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bagPrefab;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_bagPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bagPrefab = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CrittersManager::__cordl_internal_get_noiseMakerPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noiseMakerPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CrittersManager::__cordl_internal_get_noiseMakerPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noiseMakerPrefab;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_noiseMakerPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noiseMakerPrefab = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CrittersManager::__cordl_internal_get_stickyTrapPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stickyTrapPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CrittersManager::__cordl_internal_get_stickyTrapPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stickyTrapPrefab;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_stickyTrapPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stickyTrapPrefab = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CrittersManager::__cordl_internal_get_stickyGooPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stickyGooPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CrittersManager::__cordl_internal_get_stickyGooPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stickyGooPrefab;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_stickyGooPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stickyGooPrefab = value;
}
constexpr int32_t& GlobalNamespace::CrittersManager::__cordl_internal_get_universalActorId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___universalActorId;
}
constexpr int32_t const& GlobalNamespace::CrittersManager::__cordl_internal_get_universalActorId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___universalActorId;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_universalActorId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___universalActorId = value;
}
constexpr int32_t& GlobalNamespace::CrittersManager::__cordl_internal_get_rigActorId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigActorId;
}
constexpr int32_t const& GlobalNamespace::CrittersManager::__cordl_internal_get_rigActorId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigActorId;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_rigActorId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rigActorId = value;
}
constexpr ::System::Action_4<::GlobalNamespace::CrittersManager_CritterEvent,int32_t,::UnityEngine::Vector3,::UnityEngine::Quaternion>*& GlobalNamespace::CrittersManager::__cordl_internal_get_OnCritterEventReceived()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnCritterEventReceived;
}
constexpr ::System::Action_4<::GlobalNamespace::CrittersManager_CritterEvent,int32_t,::UnityEngine::Vector3,::UnityEngine::Quaternion>* const& GlobalNamespace::CrittersManager::__cordl_internal_get_OnCritterEventReceived() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnCritterEventReceived;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_OnCritterEventReceived(::System::Action_4<::GlobalNamespace::CrittersManager_CritterEvent,int32_t,::UnityEngine::Vector3,::UnityEngine::Quaternion>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnCritterEventReceived = value;
}
constexpr ::GlobalNamespace::CallLimiter*& GlobalNamespace::CrittersManager::__cordl_internal_get_critterEventCallLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___critterEventCallLimit;
}
constexpr ::GlobalNamespace::CallLimiter* const& GlobalNamespace::CrittersManager::__cordl_internal_get_critterEventCallLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___critterEventCallLimit;
}
constexpr void GlobalNamespace::CrittersManager::__cordl_internal_set_critterEventCallLimit(::GlobalNamespace::CallLimiter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___critterEventCallLimit = value;
}
inline void GlobalNamespace::CrittersManager::setStaticF_instance(::UnityW<::GlobalNamespace::CrittersManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::CrittersManager>, "instance", ::GlobalNamespace::CrittersManager*>(std::forward<::UnityW<::GlobalNamespace::CrittersManager>>(value));
}
inline ::UnityW<::GlobalNamespace::CrittersManager> GlobalNamespace::CrittersManager::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::CrittersManager>, "instance", ::GlobalNamespace::CrittersManager*>();
}
inline void GlobalNamespace::CrittersManager::setStaticF__hasInstance_k__BackingField(bool  value)  {
::cordl_internals::setStaticField<bool, "<hasInstance>k__BackingField", ::GlobalNamespace::CrittersManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::CrittersManager::getStaticF__hasInstance_k__BackingField()  {
return ::cordl_internals::getStaticField<bool, "<hasInstance>k__BackingField", ::GlobalNamespace::CrittersManager*>();
}
inline void GlobalNamespace::CrittersManager::setStaticF__rightGrabber(::UnityW<::GlobalNamespace::CrittersActorGrabber>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::CrittersActorGrabber>, "_rightGrabber", ::GlobalNamespace::CrittersManager*>(std::forward<::UnityW<::GlobalNamespace::CrittersActorGrabber>>(value));
}
inline ::UnityW<::GlobalNamespace::CrittersActorGrabber> GlobalNamespace::CrittersManager::getStaticF__rightGrabber()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::CrittersActorGrabber>, "_rightGrabber", ::GlobalNamespace::CrittersManager*>();
}
inline void GlobalNamespace::CrittersManager::setStaticF__leftGrabber(::UnityW<::GlobalNamespace::CrittersActorGrabber>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::CrittersActorGrabber>, "_leftGrabber", ::GlobalNamespace::CrittersManager*>(std::forward<::UnityW<::GlobalNamespace::CrittersActorGrabber>>(value));
}
inline ::UnityW<::GlobalNamespace::CrittersActorGrabber> GlobalNamespace::CrittersManager::getStaticF__leftGrabber()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::CrittersActorGrabber>, "_leftGrabber", ::GlobalNamespace::CrittersManager*>();
}
inline bool GlobalNamespace::CrittersManager::get_hasInstance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"get_hasInstance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GlobalNamespace::CrittersManager::set_hasInstance(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"set_hasInstance", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool GlobalNamespace::CrittersManager::get_TickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"get_TickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersManager::set_TickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::CrittersManager::get_allowGrabbingEntireBag()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"get_allowGrabbingEntireBag", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::CrittersManager::get_allowGrabbingOutOfHands()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"get_allowGrabbingOutOfHands", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::CrittersManager::get_allowGrabbingFromBags()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"get_allowGrabbingFromBags", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersManager::LoadGrabSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"LoadGrabSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::CrittersManager::get_LocalInZone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"get_LocalInZone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersManager::add_OnCritterEventReceived(::System::Action_4<::GlobalNamespace::CrittersManager_CritterEvent,int32_t,::UnityEngine::Vector3,::UnityEngine::Quaternion>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"add_OnCritterEventReceived", {}, {::i2c::type_of<::System::Action_4<::GlobalNamespace::CrittersManager_CritterEvent,int32_t,::UnityEngine::Vector3,::UnityEngine::Quaternion>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::CrittersManager::remove_OnCritterEventReceived(::System::Action_4<::GlobalNamespace::CrittersManager_CritterEvent,int32_t,::UnityEngine::Vector3,::UnityEngine::Quaternion>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"remove_OnCritterEventReceived", {}, {::i2c::type_of<::System::Action_4<::GlobalNamespace::CrittersManager_CritterEvent,int32_t,::UnityEngine::Vector3,::UnityEngine::Quaternion>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::CrittersManager::BuildValidationCheck()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"BuildValidationCheck", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersManager::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersManager*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersManager::InitializeCrittersManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"InitializeCrittersManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::CrittersManager::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersManager::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersManager::ResetRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"ResetRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersManager::Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersManager::ProcessRigSetups()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"ProcessRigSetups", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersManager::ProcessCritterAwareness()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"ProcessCritterAwareness", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersManager::ProcessSpawning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"ProcessSpawning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::CrittersManager::GetNextSpawnRegion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"GetNextSpawnRegion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersManager::ProcessActorBinLocations()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"ProcessActorBinLocations", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersManager::ProcessDespawningIdles()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"ProcessDespawningIdles", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersManager::DespawnActor(::GlobalNamespace::CrittersActor*  actor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"DespawnActor", {}, {::i2c::type_of<::GlobalNamespace::CrittersActor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, actor);
}
inline void GlobalNamespace::CrittersManager::IncrementPoolCount(::GlobalNamespace::CrittersActor_CrittersActorType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"IncrementPoolCount", {}, {::i2c::type_of<::GlobalNamespace::CrittersActor_CrittersActorType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void GlobalNamespace::CrittersManager::DecrementPoolCount(::GlobalNamespace::CrittersActor_CrittersActorType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"DecrementPoolCount", {}, {::i2c::type_of<::GlobalNamespace::CrittersActor_CrittersActorType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void GlobalNamespace::CrittersManager::ProcessActors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"ProcessActors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersManager::ProcessNewlyDisabledActors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"ProcessNewlyDisabledActors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersManager::RegisterCritter(::GlobalNamespace::CrittersPawn*  crittersPawn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"RegisterCritter", {}, {::i2c::type_of<::GlobalNamespace::CrittersPawn*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, crittersPawn);
}
inline void GlobalNamespace::CrittersManager::RegisterRigActorSetup(::GlobalNamespace::CrittersRigActorSetup*  setup)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"RegisterRigActorSetup", {}, {::i2c::type_of<::GlobalNamespace::CrittersRigActorSetup*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, setup);
}
inline void GlobalNamespace::CrittersManager::DeregisterCritter(::GlobalNamespace::CrittersPawn*  crittersPawn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"DeregisterCritter", {}, {::i2c::type_of<::GlobalNamespace::CrittersPawn*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, crittersPawn);
}
inline void GlobalNamespace::CrittersManager::RegisterActor(::GlobalNamespace::CrittersActor*  actor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"RegisterActor", {}, {::i2c::type_of<::GlobalNamespace::CrittersActor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, actor);
}
inline void GlobalNamespace::CrittersManager::DeregisterActor(::GlobalNamespace::CrittersActor*  actor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"DeregisterActor", {}, {::i2c::type_of<::GlobalNamespace::CrittersActor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, actor);
}
inline void GlobalNamespace::CrittersManager::CheckInitialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"CheckInitialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::CrittersManager::CritterAwareOfAny(::GlobalNamespace::CrittersPawn*  creature)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"CritterAwareOfAny", {}, {::i2c::type_of<::GlobalNamespace::CrittersPawn*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, creature);
}
inline bool GlobalNamespace::CrittersManager::AnyFoodNearby(::GlobalNamespace::CrittersPawn*  creature)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"AnyFoodNearby", {}, {::i2c::type_of<::GlobalNamespace::CrittersPawn*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, creature);
}
inline ::UnityW<::GlobalNamespace::CrittersFood> GlobalNamespace::CrittersManager::ClosestFood(::GlobalNamespace::CrittersPawn*  creature)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"ClosestFood", {}, {::i2c::type_of<::GlobalNamespace::CrittersPawn*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::CrittersFood>>(nullptr, ___internal_method, creature);
}
inline void GlobalNamespace::CrittersManager::PlayHaptics(::UnityEngine::AudioClip*  clip, float_t  strength, bool  isLeftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"PlayHaptics", {}, {::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, clip, strength, isLeftHand);
}
inline void GlobalNamespace::CrittersManager::StopHaptics(bool  isLeftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"StopHaptics", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, isLeftHand);
}
inline ::UnityW<::GlobalNamespace::CrittersPawn> GlobalNamespace::CrittersManager::SpawnCritter(int32_t  regionIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"SpawnCritter", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::CrittersPawn>>(this, ___internal_method, regionIndex);
}
inline ::UnityW<::GlobalNamespace::CrittersPawn> GlobalNamespace::CrittersManager::SpawnCritter(int32_t  critterType, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"SpawnCritter", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::CrittersPawn>>(this, ___internal_method, critterType, position, rotation);
}
inline void GlobalNamespace::CrittersManager::DespawnCritter(::GlobalNamespace::CrittersPawn*  crittersPawn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"DespawnCritter", {}, {::i2c::type_of<::GlobalNamespace::CrittersPawn*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, crittersPawn);
}
inline void GlobalNamespace::CrittersManager::QueueDespawnAllCritters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"QueueDespawnAllCritters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersManager::SetCritterRegion(::GlobalNamespace::CrittersPawn*  critter, ::GlobalNamespace::CrittersRegion*  region)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"SetCritterRegion", {}, {::i2c::type_of<::GlobalNamespace::CrittersPawn*>(), ::i2c::type_of<::GlobalNamespace::CrittersRegion*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, critter, region);
}
inline void GlobalNamespace::CrittersManager::SetCritterRegion(::GlobalNamespace::CrittersPawn*  critter, int32_t  regionId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"SetCritterRegion", {}, {::i2c::type_of<::GlobalNamespace::CrittersPawn*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, critter, regionId);
}
inline void GlobalNamespace::CrittersManager::DeactivateActor(::GlobalNamespace::CrittersActor*  actor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"DeactivateActor", {}, {::i2c::type_of<::GlobalNamespace::CrittersActor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, actor);
}
inline void GlobalNamespace::CrittersManager::CamCapture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"CamCapture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::CrittersManager::RemoteDataInitialization(::GlobalNamespace::NetPlayer*  player, int32_t  actorNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"RemoteDataInitialization", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, player, actorNumber);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::CrittersManager::DelayedInitialization(::GlobalNamespace::NetPlayer*  player, ::System::Collections::Generic::List_1<::System::Object*>*  nonPlayerActorObjList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"DelayedInitialization", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Object*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, player, nonPlayerActorObjList);
}
inline void GlobalNamespace::CrittersManager::RemoveInitializingPlayer(int32_t  actorNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"RemoveInitializingPlayer", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, actorNumber);
}
inline void GlobalNamespace::CrittersManager::JoinedRoomEvent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"JoinedRoomEvent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersManager::LeftRoomEvent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"LeftRoomEvent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersManager::RequestDataInitialization(::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"RequestDataInitialization", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void GlobalNamespace::CrittersManager::ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersManager*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline bool GlobalNamespace::CrittersManager::UpdateActorByType(::Photon::Pun::PhotonStream*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"UpdateActorByType", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, stream);
}
inline void GlobalNamespace::CrittersManager::WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersManager*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::CrittersManager::RemoteCritterActorReleased(int32_t  releasedActorID, bool  keepWorldPosition, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  position, ::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angularVelocity, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"RemoteCritterActorReleased", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, releasedActorID, keepWorldPosition, rotation, position, velocity, angularVelocity, info);
}
inline void GlobalNamespace::CrittersManager::RemoteSpawnCreature(int32_t  actorID, int32_t  regionId, ::ArrayW<::System::Object*>  spawnData, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"RemoteSpawnCreature", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, actorID, regionId, spawnData, info);
}
inline void GlobalNamespace::CrittersManager::RemoteCrittersActorGrabbedby(int32_t  grabbedActorID, int32_t  grabberActorID, ::UnityEngine::Quaternion  offsetRotation, ::UnityEngine::Vector3  offsetPosition, bool  isGrabDisabled, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"RemoteCrittersActorGrabbedby", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabbedActorID, grabberActorID, offsetRotation, offsetPosition, isGrabDisabled, info);
}
inline void GlobalNamespace::CrittersManager::RemoteUpdatePlayerCrittersActorData(::ArrayW<::System::Object*>  data, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"RemoteUpdatePlayerCrittersActorData", {}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, info);
}
inline void GlobalNamespace::CrittersManager::RemoteUpdateCritterData(::ArrayW<::System::Object*>  data, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"RemoteUpdateCritterData", {}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, info);
}
inline ::UnityW<::GlobalNamespace::CrittersActor> GlobalNamespace::CrittersManager::SpawnActor(::GlobalNamespace::CrittersActor_CrittersActorType  type, int32_t  subObjectIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"SpawnActor", {}, {::i2c::type_of<::GlobalNamespace::CrittersActor_CrittersActorType>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::CrittersActor>>(this, ___internal_method, type, subObjectIndex);
}
inline void GlobalNamespace::CrittersManager::WriteDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersManager*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersManager::ReadDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersManager*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersManager::PopulatePools()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"PopulatePools", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::GlobalNamespace::CrittersActor*>)
inline void GlobalNamespace::CrittersManager::UpdatePool(::by_ref<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersActor_CrittersActorType,::System::Collections::Generic::List_1<T>*>*>  dict, ::UnityEngine::GameObject*  prefab, ::GlobalNamespace::CrittersActor_CrittersActorType  crittersActorType, ::UnityEngine::Transform*  parent, int32_t  poolAmount, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*  sceneActors)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                    {"UpdatePool", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersActor_CrittersActorType,::System::Collections::Generic::List_1<T>*>*>>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::GlobalNamespace::CrittersActor_CrittersActorType>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dict, prefab, crittersActorType, parent, poolAmount, sceneActors);
}
inline void GlobalNamespace::CrittersManager::TriggerEvent(::GlobalNamespace::CrittersManager_CritterEvent  eventType, int32_t  sourceActor, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"TriggerEvent", {}, {::i2c::type_of<::GlobalNamespace::CrittersManager_CritterEvent>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventType, sourceActor, position, rotation);
}
inline void GlobalNamespace::CrittersManager::TriggerEvent(::GlobalNamespace::CrittersManager_CritterEvent  eventType, int32_t  sourceActor, ::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"TriggerEvent", {}, {::i2c::type_of<::GlobalNamespace::CrittersManager_CritterEvent>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventType, sourceActor, position);
}
inline void GlobalNamespace::CrittersManager::RemoteReceivedCritterEvent(::GlobalNamespace::CrittersManager_CritterEvent  eventType, int32_t  sourceActor, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"RemoteReceivedCritterEvent", {}, {::i2c::type_of<::GlobalNamespace::CrittersManager_CritterEvent>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventType, sourceActor, position, rotation, info);
}
template<typename T>
inline bool GlobalNamespace::CrittersManager::ValidateDataType(::System::Object*  obj, ::by_ref<T>  dataAsType)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                    {"ValidateDataType", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, obj, dataAsType);
}
inline void GlobalNamespace::CrittersManager::CheckValidRemoteActorRelease(int32_t  releasedActorID, bool  keepWorldPosition, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  position, ::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angularVelocity, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"CheckValidRemoteActorRelease", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, releasedActorID, keepWorldPosition, rotation, position, velocity, angularVelocity, info);
}
inline void GlobalNamespace::CrittersManager::CheckValidRemoteActorGrab(int32_t  actorBeingGrabbedActorID, int32_t  grabbingActorID, ::UnityEngine::Quaternion  offsetRotation, ::UnityEngine::Vector3  offsetPosition, bool  isGrabDisabled, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"CheckValidRemoteActorGrab", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, actorBeingGrabbedActorID, grabbingActorID, offsetRotation, offsetPosition, isGrabDisabled, info);
}
inline ::UnityW<::GlobalNamespace::CrittersActor> GlobalNamespace::CrittersManager::TopLevelCritterGrabber(::GlobalNamespace::CrittersActor*  baseActor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"TopLevelCritterGrabber", {}, {::i2c::type_of<::GlobalNamespace::CrittersActor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::CrittersActor>>(this, ___internal_method, baseActor);
}
inline ::UnityW<::UnityEngine::CapsuleCollider> GlobalNamespace::CrittersManager::DuplicateCapsuleCollider(::UnityEngine::Transform*  targetTransform, ::UnityEngine::CapsuleCollider*  sourceCollider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"DuplicateCapsuleCollider", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::CapsuleCollider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::CapsuleCollider>>(nullptr, ___internal_method, targetTransform, sourceCollider);
}
inline void GlobalNamespace::CrittersManager::HandleZonesAndOwnership()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"HandleZonesAndOwnership", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersManager::CheckOwnership()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"CheckOwnership", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::CrittersManager::LocalAuthority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"LocalAuthority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::CrittersManager::SenderIsOwner(::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"SenderIsOwner", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, info);
}
inline void GlobalNamespace::CrittersManager::OwnerSentError(::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"OwnerSentError", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void GlobalNamespace::CrittersManager::OnOwnershipTransferred(::GlobalNamespace::NetPlayer*  toPlayer, ::GlobalNamespace::NetPlayer*  fromPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"OnOwnershipTransferred", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, toPlayer, fromPlayer);
}
inline bool GlobalNamespace::CrittersManager::OnOwnershipRequest(::GlobalNamespace::NetPlayer*  fromPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"OnOwnershipRequest", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fromPlayer);
}
inline void GlobalNamespace::CrittersManager::OnMyOwnerLeft()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"OnMyOwnerLeft", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::CrittersManager::OnMasterClientAssistedTakeoverRequest(::GlobalNamespace::NetPlayer*  fromPlayer, ::GlobalNamespace::NetPlayer*  toPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"OnMasterClientAssistedTakeoverRequest", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fromPlayer, toPlayer);
}
inline void GlobalNamespace::CrittersManager::OnMyCreatorLeft()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"OnMyCreatorLeft", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersManager::_LoadGrabSettings_b__58_0(::StringW  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"<LoadGrabSettings>b__58_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void GlobalNamespace::CrittersManager::_LoadGrabSettings_b__58_2(::StringW  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager*>(),
                        {"<LoadGrabSettings>b__58_2", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void GlobalNamespace::CrittersManager::CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersManager*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void GlobalNamespace::CrittersManager::CopyStateToBackingFields()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersManager*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CrittersManager* GlobalNamespace::CrittersManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CrittersManager*>());
}
/// @brief Convert operator to "::GlobalNamespace::IRequestableOwnershipGuardCallbacks"
constexpr  GlobalNamespace::CrittersManager::operator ::GlobalNamespace::IRequestableOwnershipGuardCallbacks*() noexcept {
return static_cast<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IRequestableOwnershipGuardCallbacks"
constexpr ::GlobalNamespace::IRequestableOwnershipGuardCallbacks* GlobalNamespace::CrittersManager::i___GlobalNamespace__IRequestableOwnershipGuardCallbacks() noexcept {
return static_cast<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IBuildValidation"
constexpr  GlobalNamespace::CrittersManager::operator ::GlobalNamespace::IBuildValidation*() noexcept {
return static_cast<::GlobalNamespace::IBuildValidation*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBuildValidation"
constexpr ::GlobalNamespace::IBuildValidation* GlobalNamespace::CrittersManager::i___GlobalNamespace__IBuildValidation() noexcept {
return static_cast<::GlobalNamespace::IBuildValidation*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr  GlobalNamespace::CrittersManager::operator ::GlobalNamespace::ITickSystemTick*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* GlobalNamespace::CrittersManager::i___GlobalNamespace__ITickSystemTick() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CrittersManager::CrittersManager()   {
}
//  Writing Method size for method: ::GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151::*)(int32_t)>(&::GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x560622c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151::*)()>(&::GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5609194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151::*)()>(&::GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151::MoveNext)> {
  constexpr static std::size_t size = 0x84c;
  constexpr static std::size_t addrs = 0x5609198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151::*)()>(&::GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56099e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151::*)()>(&::GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x56099ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151::*)()>(&::GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5609a24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::CrittersManager>& GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::CrittersManager> const& GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::CrittersManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr int32_t& GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151::__cordl_internal_get_actorNumber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actorNumber;
}
constexpr int32_t const& GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151::__cordl_internal_get_actorNumber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actorNumber;
}
constexpr void GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151::__cordl_internal_set_actorNumber(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___actorNumber = value;
}
constexpr ::GlobalNamespace::NetPlayer*& GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151::__cordl_internal_get_player()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___player;
}
constexpr ::GlobalNamespace::NetPlayer* const& GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151::__cordl_internal_get_player() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___player;
}
constexpr void GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151::__cordl_internal_set_player(::GlobalNamespace::NetPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___player = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Object*>*& GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151::__cordl_internal_get__nonPlayerActorObjList_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nonPlayerActorObjList_5__2;
}
constexpr ::System::Collections::Generic::List_1<::System::Object*>* const& GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151::__cordl_internal_get__nonPlayerActorObjList_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nonPlayerActorObjList_5__2;
}
constexpr void GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151::__cordl_internal_set__nonPlayerActorObjList_5__2(::System::Collections::Generic::List_1<::System::Object*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nonPlayerActorObjList_5__2 = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Object*>*& GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151::__cordl_internal_get__playerActorObjList_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerActorObjList_5__3;
}
constexpr ::System::Collections::Generic::List_1<::System::Object*>* const& GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151::__cordl_internal_get__playerActorObjList_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerActorObjList_5__3;
}
constexpr void GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151::__cordl_internal_set__playerActorObjList_5__3(::System::Collections::Generic::List_1<::System::Object*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playerActorObjList_5__3 = value;
}
constexpr int32_t& GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151::__cordl_internal_get__worldActorDataCount_5__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____worldActorDataCount_5__4;
}
constexpr int32_t const& GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151::__cordl_internal_get__worldActorDataCount_5__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____worldActorDataCount_5__4;
}
constexpr void GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151::__cordl_internal_set__worldActorDataCount_5__4(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____worldActorDataCount_5__4 = value;
}
constexpr int32_t& GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151::__cordl_internal_get__playerActorDataCount_5__5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerActorDataCount_5__5;
}
constexpr int32_t const& GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151::__cordl_internal_get__playerActorDataCount_5__5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerActorDataCount_5__5;
}
constexpr void GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151::__cordl_internal_set__playerActorDataCount_5__5(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playerActorDataCount_5__5 = value;
}
constexpr int32_t& GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151::__cordl_internal_get__i_5__6()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__6;
}
constexpr int32_t const& GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151::__cordl_internal_get__i_5__6() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__6;
}
constexpr void GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151::__cordl_internal_set__i_5__6(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____i_5__6 = value;
}
inline void GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151* GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151::CrittersManager__RemoteDataInitialization_d__151()   {
}
//  Writing Method size for method: ::GlobalNamespace::CrittersManager__DelayedInitialization_d__152._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersManager__DelayedInitialization_d__152::*)(int32_t)>(&::GlobalNamespace::CrittersManager__DelayedInitialization_d__152::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x56062f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager__DelayedInitialization_d__152*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager__DelayedInitialization_d__152.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersManager__DelayedInitialization_d__152::*)()>(&::GlobalNamespace::CrittersManager__DelayedInitialization_d__152::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5608fd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager__DelayedInitialization_d__152*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager__DelayedInitialization_d__152.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CrittersManager__DelayedInitialization_d__152::*)()>(&::GlobalNamespace::CrittersManager__DelayedInitialization_d__152::MoveNext)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5608fdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager__DelayedInitialization_d__152*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager__DelayedInitialization_d__152.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::CrittersManager__DelayedInitialization_d__152::*)()>(&::GlobalNamespace::CrittersManager__DelayedInitialization_d__152::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x560914c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager__DelayedInitialization_d__152*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager__DelayedInitialization_d__152.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersManager__DelayedInitialization_d__152::*)()>(&::GlobalNamespace::CrittersManager__DelayedInitialization_d__152::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5609154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager__DelayedInitialization_d__152*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager__DelayedInitialization_d__152.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::CrittersManager__DelayedInitialization_d__152::*)()>(&::GlobalNamespace::CrittersManager__DelayedInitialization_d__152::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x560918c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager__DelayedInitialization_d__152*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::CrittersManager__DelayedInitialization_d__152::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::CrittersManager__DelayedInitialization_d__152::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::CrittersManager__DelayedInitialization_d__152::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::CrittersManager__DelayedInitialization_d__152::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::CrittersManager__DelayedInitialization_d__152::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::CrittersManager__DelayedInitialization_d__152::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::CrittersManager>& GlobalNamespace::CrittersManager__DelayedInitialization_d__152::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::CrittersManager> const& GlobalNamespace::CrittersManager__DelayedInitialization_d__152::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::CrittersManager__DelayedInitialization_d__152::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::CrittersManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::NetPlayer*& GlobalNamespace::CrittersManager__DelayedInitialization_d__152::__cordl_internal_get_player()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___player;
}
constexpr ::GlobalNamespace::NetPlayer* const& GlobalNamespace::CrittersManager__DelayedInitialization_d__152::__cordl_internal_get_player() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___player;
}
constexpr void GlobalNamespace::CrittersManager__DelayedInitialization_d__152::__cordl_internal_set_player(::GlobalNamespace::NetPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___player = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Object*>*& GlobalNamespace::CrittersManager__DelayedInitialization_d__152::__cordl_internal_get_nonPlayerActorObjList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nonPlayerActorObjList;
}
constexpr ::System::Collections::Generic::List_1<::System::Object*>* const& GlobalNamespace::CrittersManager__DelayedInitialization_d__152::__cordl_internal_get_nonPlayerActorObjList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nonPlayerActorObjList;
}
constexpr void GlobalNamespace::CrittersManager__DelayedInitialization_d__152::__cordl_internal_set_nonPlayerActorObjList(::System::Collections::Generic::List_1<::System::Object*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nonPlayerActorObjList = value;
}
inline void GlobalNamespace::CrittersManager__DelayedInitialization_d__152::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager__DelayedInitialization_d__152*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::CrittersManager__DelayedInitialization_d__152::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager__DelayedInitialization_d__152*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::CrittersManager__DelayedInitialization_d__152::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager__DelayedInitialization_d__152*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::CrittersManager__DelayedInitialization_d__152::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager__DelayedInitialization_d__152*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersManager__DelayedInitialization_d__152::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager__DelayedInitialization_d__152*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::CrittersManager__DelayedInitialization_d__152::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager__DelayedInitialization_d__152*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::CrittersManager__DelayedInitialization_d__152* GlobalNamespace::CrittersManager__DelayedInitialization_d__152::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CrittersManager__DelayedInitialization_d__152*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::CrittersManager__DelayedInitialization_d__152::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::CrittersManager__DelayedInitialization_d__152::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::CrittersManager__DelayedInitialization_d__152::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::CrittersManager__DelayedInitialization_d__152::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::CrittersManager__DelayedInitialization_d__152::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::CrittersManager__DelayedInitialization_d__152::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CrittersManager__DelayedInitialization_d__152::CrittersManager__DelayedInitialization_d__152()   {
}
//  Writing Method size for method: ::GlobalNamespace::CrittersManager___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersManager___c::*)()>(&::GlobalNamespace::CrittersManager___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5608e3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager___c._LoadGrabSettings_b__58_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersManager___c::*)(::PlayFab::PlayFabError*)>(&::GlobalNamespace::CrittersManager___c::_LoadGrabSettings_b__58_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5608e44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager___c*>(),
                        {"<LoadGrabSettings>b__58_1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager___c._LoadGrabSettings_b__58_3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersManager___c::*)(::PlayFab::PlayFabError*)>(&::GlobalNamespace::CrittersManager___c::_LoadGrabSettings_b__58_3)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5608e48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager___c*>(),
                        {"<LoadGrabSettings>b__58_3", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager___c._PopulatePools_b__168_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::CrittersManager___c::*)(::GlobalNamespace::CrittersActor*, ::GlobalNamespace::CrittersActor*)>(&::GlobalNamespace::CrittersManager___c::_PopulatePools_b__168_0)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5608e4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager___c*>(),
                        {"<PopulatePools>b__168_0", {}, {::i2c::type_of<::GlobalNamespace::CrittersActor*>(), ::i2c::type_of<::GlobalNamespace::CrittersActor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersManager___c._PopulatePools_b__168_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::CrittersManager___c::*)(::GlobalNamespace::CrittersActor*, ::GlobalNamespace::CrittersActor*)>(&::GlobalNamespace::CrittersManager___c::_PopulatePools_b__168_1)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5608f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager___c*>(),
                        {"<PopulatePools>b__168_1", {}, {::i2c::type_of<::GlobalNamespace::CrittersActor*>(), ::i2c::type_of<::GlobalNamespace::CrittersActor*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CrittersManager___c::setStaticF___9(::GlobalNamespace::CrittersManager___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::CrittersManager___c*, "<>9", ::GlobalNamespace::CrittersManager___c*>(std::forward<::GlobalNamespace::CrittersManager___c*>(value));
}
inline ::GlobalNamespace::CrittersManager___c* GlobalNamespace::CrittersManager___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::CrittersManager___c*, "<>9", ::GlobalNamespace::CrittersManager___c*>();
}
inline void GlobalNamespace::CrittersManager___c::setStaticF___9__58_1(::System::Action_1<::PlayFab::PlayFabError*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::PlayFab::PlayFabError*>*, "<>9__58_1", ::GlobalNamespace::CrittersManager___c*>(std::forward<::System::Action_1<::PlayFab::PlayFabError*>*>(value));
}
inline ::System::Action_1<::PlayFab::PlayFabError*>* GlobalNamespace::CrittersManager___c::getStaticF___9__58_1()  {
return ::cordl_internals::getStaticField<::System::Action_1<::PlayFab::PlayFabError*>*, "<>9__58_1", ::GlobalNamespace::CrittersManager___c*>();
}
inline void GlobalNamespace::CrittersManager___c::setStaticF___9__58_3(::System::Action_1<::PlayFab::PlayFabError*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::PlayFab::PlayFabError*>*, "<>9__58_3", ::GlobalNamespace::CrittersManager___c*>(std::forward<::System::Action_1<::PlayFab::PlayFabError*>*>(value));
}
inline ::System::Action_1<::PlayFab::PlayFabError*>* GlobalNamespace::CrittersManager___c::getStaticF___9__58_3()  {
return ::cordl_internals::getStaticField<::System::Action_1<::PlayFab::PlayFabError*>*, "<>9__58_3", ::GlobalNamespace::CrittersManager___c*>();
}
inline void GlobalNamespace::CrittersManager___c::setStaticF___9__168_0(::System::Comparison_1<::UnityW<::GlobalNamespace::CrittersActor>>*  value)  {
::cordl_internals::setStaticField<::System::Comparison_1<::UnityW<::GlobalNamespace::CrittersActor>>*, "<>9__168_0", ::GlobalNamespace::CrittersManager___c*>(std::forward<::System::Comparison_1<::UnityW<::GlobalNamespace::CrittersActor>>*>(value));
}
inline ::System::Comparison_1<::UnityW<::GlobalNamespace::CrittersActor>>* GlobalNamespace::CrittersManager___c::getStaticF___9__168_0()  {
return ::cordl_internals::getStaticField<::System::Comparison_1<::UnityW<::GlobalNamespace::CrittersActor>>*, "<>9__168_0", ::GlobalNamespace::CrittersManager___c*>();
}
inline void GlobalNamespace::CrittersManager___c::setStaticF___9__168_1(::System::Comparison_1<::UnityW<::GlobalNamespace::CrittersActor>>*  value)  {
::cordl_internals::setStaticField<::System::Comparison_1<::UnityW<::GlobalNamespace::CrittersActor>>*, "<>9__168_1", ::GlobalNamespace::CrittersManager___c*>(std::forward<::System::Comparison_1<::UnityW<::GlobalNamespace::CrittersActor>>*>(value));
}
inline ::System::Comparison_1<::UnityW<::GlobalNamespace::CrittersActor>>* GlobalNamespace::CrittersManager___c::getStaticF___9__168_1()  {
return ::cordl_internals::getStaticField<::System::Comparison_1<::UnityW<::GlobalNamespace::CrittersActor>>*, "<>9__168_1", ::GlobalNamespace::CrittersManager___c*>();
}
inline void GlobalNamespace::CrittersManager___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersManager___c::_LoadGrabSettings_b__58_1(::PlayFab::PlayFabError*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager___c*>(),
                        {"<LoadGrabSettings>b__58_1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void GlobalNamespace::CrittersManager___c::_LoadGrabSettings_b__58_3(::PlayFab::PlayFabError*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager___c*>(),
                        {"<LoadGrabSettings>b__58_3", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline int32_t GlobalNamespace::CrittersManager___c::_PopulatePools_b__168_0(::GlobalNamespace::CrittersActor*  x, ::GlobalNamespace::CrittersActor*  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager___c*>(),
                        {"<PopulatePools>b__168_0", {}, {::i2c::type_of<::GlobalNamespace::CrittersActor*>(), ::i2c::type_of<::GlobalNamespace::CrittersActor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x, y);
}
inline int32_t GlobalNamespace::CrittersManager___c::_PopulatePools_b__168_1(::GlobalNamespace::CrittersActor*  x, ::GlobalNamespace::CrittersActor*  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersManager___c*>(),
                        {"<PopulatePools>b__168_1", {}, {::i2c::type_of<::GlobalNamespace::CrittersActor*>(), ::i2c::type_of<::GlobalNamespace::CrittersActor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x, y);
}
inline ::GlobalNamespace::CrittersManager___c* GlobalNamespace::CrittersManager___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CrittersManager___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CrittersManager___c::CrittersManager___c()   {
}
