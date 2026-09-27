#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/EnvironmentProximityReactorManager.hpp"
#include "GlobalNamespace/zzzz__NetworkSceneObject_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__EnvironmentProximityReactorManager_def.hpp"
#include "Fusion/zzzz__NetworkRunner_def.hpp"
#include "Fusion/zzzz__RpcInfo_def.hpp"
#include "Fusion/zzzz__SimulationMessage_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__CosmeticsProximityReactor_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__EnvironmentProximityReactorManager_PendingProximityEvent_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__EnvironmentProximityReactorManager_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__EnvironmentProximityReactor_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GorillaTag::Cosmetics::EnvironmentProximityReactorManager.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager> (*)()>(&::GorillaTag::Cosmetics::EnvironmentProximityReactorManager::get_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d91790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EnvironmentProximityReactorManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::EnvironmentProximityReactorManager::*)()>(&::GorillaTag::Cosmetics::EnvironmentProximityReactorManager::Awake)> {
  constexpr static std::size_t size = 0x53c;
  constexpr static std::size_t addrs = 0x5d917e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EnvironmentProximityReactorManager.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::EnvironmentProximityReactorManager::*)()>(&::GorillaTag::Cosmetics::EnvironmentProximityReactorManager::OnDestroy)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x5d91e54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EnvironmentProximityReactorManager.OnPlayerLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::EnvironmentProximityReactorManager::*)(::GlobalNamespace::NetPlayer*)>(&::GorillaTag::Cosmetics::EnvironmentProximityReactorManager::OnPlayerLeft)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5d92234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager*>(),
                        {"OnPlayerLeft", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EnvironmentProximityReactorManager.OnLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::EnvironmentProximityReactorManager::*)()>(&::GorillaTag::Cosmetics::EnvironmentProximityReactorManager::OnLeftRoom)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5d92324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager*>(),
                        {"OnLeftRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EnvironmentProximityReactorManager.OnPlayerJoined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::EnvironmentProximityReactorManager::*)(::GlobalNamespace::NetPlayer*)>(&::GorillaTag::Cosmetics::EnvironmentProximityReactorManager::OnPlayerJoined)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5d923d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager*>(),
                        {"OnPlayerJoined", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EnvironmentProximityReactorManager.BroadcastProximityStateTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::EnvironmentProximityReactorManager::*)(::GlobalNamespace::NetPlayer*, int32_t, int32_t, bool)>(&::GorillaTag::Cosmetics::EnvironmentProximityReactorManager::BroadcastProximityStateTo)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x5d90ef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager*>(),
                        {"BroadcastProximityStateTo", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EnvironmentProximityReactorManager.CheckPlayerRateLimit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::EnvironmentProximityReactorManager::*)(::GlobalNamespace::NetPlayer*)>(&::GorillaTag::Cosmetics::EnvironmentProximityReactorManager::CheckPlayerRateLimit)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5d92528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager*>(),
                        {"CheckPlayerRateLimit", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EnvironmentProximityReactorManager.SenderHasValidCosmetic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::EnvironmentProximityReactorManager::*)(int32_t, int32_t, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GorillaTag::Cosmetics::EnvironmentProximityReactorManager::SenderHasValidCosmetic)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x5d92640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager*>(),
                        {"SenderHasValidCosmetic", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EnvironmentProximityReactorManager.SenderIsInRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::EnvironmentProximityReactorManager::*)(int32_t, int32_t, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GorillaTag::Cosmetics::EnvironmentProximityReactorManager::SenderIsInRange)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x5d92a48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager*>(),
                        {"SenderIsInRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EnvironmentProximityReactorManager.OnCosmeticRegistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::EnvironmentProximityReactorManager::*)(::GorillaTag::Cosmetics::CosmeticsProximityReactor*)>(&::GorillaTag::Cosmetics::EnvironmentProximityReactorManager::OnCosmeticRegistered)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x5d92cac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager*>(),
                        {"OnCosmeticRegistered", {}, {::i2c::type_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EnvironmentProximityReactorManager.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::EnvironmentProximityReactorManager::*)()>(&::GorillaTag::Cosmetics::EnvironmentProximityReactorManager::Update)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x5d930a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EnvironmentProximityReactorManager.TryCacheProximityEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::EnvironmentProximityReactorManager::*)(int32_t, int32_t, bool, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GorillaTag::Cosmetics::EnvironmentProximityReactorManager::TryCacheProximityEvent)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x5d933a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager*>(),
                        {"TryCacheProximityEvent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EnvironmentProximityReactorManager.ApplyProximityEventToReactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::EnvironmentProximityReactorManager::*)(int32_t, int32_t, bool, int32_t)>(&::GorillaTag::Cosmetics::EnvironmentProximityReactorManager::ApplyProximityEventToReactor)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5d92f84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager*>(),
                        {"ApplyProximityEventToReactor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EnvironmentProximityReactorManager.RegisterInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::EnvironmentProximityReactorManager::*)(::GorillaTag::Cosmetics::EnvironmentProximityReactor*)>(&::GorillaTag::Cosmetics::EnvironmentProximityReactorManager::RegisterInstance)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5d91d24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager*>(),
                        {"RegisterInstance", {}, {::i2c::type_of<::GorillaTag::Cosmetics::EnvironmentProximityReactor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EnvironmentProximityReactorManager.UnregisterInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::EnvironmentProximityReactorManager::*)(::GorillaTag::Cosmetics::EnvironmentProximityReactor*)>(&::GorillaTag::Cosmetics::EnvironmentProximityReactorManager::UnregisterInstance)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5d93690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager*>(),
                        {"UnregisterInstance", {}, {::i2c::type_of<::GorillaTag::Cosmetics::EnvironmentProximityReactor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EnvironmentProximityReactorManager.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GorillaTag::Cosmetics::EnvironmentProximityReactor*)>(&::GorillaTag::Cosmetics::EnvironmentProximityReactorManager::Register)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5d8fbac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager*>(),
                        {"Register", {}, {::i2c::type_of<::GorillaTag::Cosmetics::EnvironmentProximityReactor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EnvironmentProximityReactorManager.Unregister
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GorillaTag::Cosmetics::EnvironmentProximityReactor*)>(&::GorillaTag::Cosmetics::EnvironmentProximityReactorManager::Unregister)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5d8fd0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager*>(),
                        {"Unregister", {}, {::i2c::type_of<::GorillaTag::Cosmetics::EnvironmentProximityReactor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EnvironmentProximityReactorManager.BroadcastProximityState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::EnvironmentProximityReactorManager::*)(int32_t, int32_t, bool)>(&::GorillaTag::Cosmetics::EnvironmentProximityReactorManager::BroadcastProximityState)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x5d90c54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager*>(),
                        {"BroadcastProximityState", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EnvironmentProximityReactorManager.ProximityStateRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::EnvironmentProximityReactorManager::*)(int32_t, int32_t, bool, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaTag::Cosmetics::EnvironmentProximityReactorManager::ProximityStateRPC)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5d93768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager*>(),
                        {"ProximityStateRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EnvironmentProximityReactorManager.RPC_ProximityState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::NetworkRunner*, int32_t, int32_t, bool, ::Fusion::RpcInfo)>(&::GorillaTag::Cosmetics::EnvironmentProximityReactorManager::RPC_ProximityState)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x5d93bac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager*>(),
                        {"RPC_ProximityState", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Fusion::RpcInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EnvironmentProximityReactorManager.ApplyProximityStateShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::EnvironmentProximityReactorManager::*)(int32_t, int32_t, bool, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GorillaTag::Cosmetics::EnvironmentProximityReactorManager::ApplyProximityStateShared)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x5d937f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager*>(),
                        {"ApplyProximityStateShared", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EnvironmentProximityReactorManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::EnvironmentProximityReactorManager::*)()>(&::GorillaTag::Cosmetics::EnvironmentProximityReactorManager::_ctor)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5d93e54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EnvironmentProximityReactorManager.RPC_ProximityState@Invoker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::NetworkRunner*, ::Fusion::SimulationMessage*)>(&::GorillaTag::Cosmetics::EnvironmentProximityReactorManager::RPC_ProximityState@Invoker)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5d94020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager*>(),
                        {"RPC_ProximityState@Invoker", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Cosmetics::EnvironmentProximityReactor>>*& GorillaTag::Cosmetics::EnvironmentProximityReactorManager::__cordl_internal_get_reactors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reactors;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Cosmetics::EnvironmentProximityReactor>>* const& GorillaTag::Cosmetics::EnvironmentProximityReactorManager::__cordl_internal_get_reactors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reactors;
}
constexpr void GorillaTag::Cosmetics::EnvironmentProximityReactorManager::__cordl_internal_set_reactors(::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Cosmetics::EnvironmentProximityReactor>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reactors = value;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& GorillaTag::Cosmetics::EnvironmentProximityReactorManager::__cordl_internal_get_idSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idSet;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& GorillaTag::Cosmetics::EnvironmentProximityReactorManager::__cordl_internal_get_idSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idSet;
}
constexpr void GorillaTag::Cosmetics::EnvironmentProximityReactorManager::__cordl_internal_set_idSet(::System::Collections::Generic::HashSet_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___idSet = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::GlobalNamespace::EnvironmentProximityReactorManager_PendingProximityEvent>*>*& GorillaTag::Cosmetics::EnvironmentProximityReactorManager::__cordl_internal_get_pendingEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pendingEvents;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::GlobalNamespace::EnvironmentProximityReactorManager_PendingProximityEvent>*>* const& GorillaTag::Cosmetics::EnvironmentProximityReactorManager::__cordl_internal_get_pendingEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pendingEvents;
}
constexpr void GorillaTag::Cosmetics::EnvironmentProximityReactorManager::__cordl_internal_set_pendingEvents(::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::GlobalNamespace::EnvironmentProximityReactorManager_PendingProximityEvent>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pendingEvents = value;
}
constexpr float_t& GorillaTag::Cosmetics::EnvironmentProximityReactorManager::__cordl_internal_get_distanceBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distanceBuffer;
}
constexpr float_t const& GorillaTag::Cosmetics::EnvironmentProximityReactorManager::__cordl_internal_get_distanceBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distanceBuffer;
}
constexpr void GorillaTag::Cosmetics::EnvironmentProximityReactorManager::__cordl_internal_set_distanceBuffer(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___distanceBuffer = value;
}
constexpr int32_t& GorillaTag::Cosmetics::EnvironmentProximityReactorManager::__cordl_internal_get_m_maxCachedEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_maxCachedEvents;
}
constexpr int32_t const& GorillaTag::Cosmetics::EnvironmentProximityReactorManager::__cordl_internal_get_m_maxCachedEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_maxCachedEvents;
}
constexpr void GorillaTag::Cosmetics::EnvironmentProximityReactorManager::__cordl_internal_set_m_maxCachedEvents(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_maxCachedEvents = value;
}
inline void GorillaTag::Cosmetics::EnvironmentProximityReactorManager::setStaticF_instance(::UnityW<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager>, "instance", ::GorillaTag::Cosmetics::EnvironmentProximityReactorManager*>(std::forward<::UnityW<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager>>(value));
}
inline ::UnityW<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager> GorillaTag::Cosmetics::EnvironmentProximityReactorManager::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager>, "instance", ::GorillaTag::Cosmetics::EnvironmentProximityReactorManager*>();
}
inline void GorillaTag::Cosmetics::EnvironmentProximityReactorManager::setStaticF_registry(::System::Collections::Generic::HashSet_1<::UnityW<::GorillaTag::Cosmetics::EnvironmentProximityReactor>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::UnityW<::GorillaTag::Cosmetics::EnvironmentProximityReactor>>*, "registry", ::GorillaTag::Cosmetics::EnvironmentProximityReactorManager*>(std::forward<::System::Collections::Generic::HashSet_1<::UnityW<::GorillaTag::Cosmetics::EnvironmentProximityReactor>>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::UnityW<::GorillaTag::Cosmetics::EnvironmentProximityReactor>>* GorillaTag::Cosmetics::EnvironmentProximityReactorManager::getStaticF_registry()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::UnityW<::GorillaTag::Cosmetics::EnvironmentProximityReactor>>*, "registry", ::GorillaTag::Cosmetics::EnvironmentProximityReactorManager*>();
}
inline ::UnityW<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager> GorillaTag::Cosmetics::EnvironmentProximityReactorManager::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager>>(nullptr, ___internal_method);
}
inline void GorillaTag::Cosmetics::EnvironmentProximityReactorManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::EnvironmentProximityReactorManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::EnvironmentProximityReactorManager::OnPlayerLeft(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager*>(),
                        {"OnPlayerLeft", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GorillaTag::Cosmetics::EnvironmentProximityReactorManager::OnLeftRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager*>(),
                        {"OnLeftRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::EnvironmentProximityReactorManager::OnPlayerJoined(::GlobalNamespace::NetPlayer*  newPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager*>(),
                        {"OnPlayerJoined", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newPlayer);
}
inline void GorillaTag::Cosmetics::EnvironmentProximityReactorManager::BroadcastProximityStateTo(::GlobalNamespace::NetPlayer*  target, int32_t  reactorId, int32_t  blockIndex, bool  isBelow)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager*>(),
                        {"BroadcastProximityStateTo", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, reactorId, blockIndex, isBelow);
}
inline bool GorillaTag::Cosmetics::EnvironmentProximityReactorManager::CheckPlayerRateLimit(::GlobalNamespace::NetPlayer*  sender)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager*>(),
                        {"CheckPlayerRateLimit", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sender);
}
inline bool GorillaTag::Cosmetics::EnvironmentProximityReactorManager::SenderHasValidCosmetic(int32_t  reactorId, int32_t  blockIndex, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager*>(),
                        {"SenderHasValidCosmetic", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, reactorId, blockIndex, info);
}
inline bool GorillaTag::Cosmetics::EnvironmentProximityReactorManager::SenderIsInRange(int32_t  reactorId, int32_t  blockIndex, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager*>(),
                        {"SenderIsInRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, reactorId, blockIndex, info);
}
inline void GorillaTag::Cosmetics::EnvironmentProximityReactorManager::OnCosmeticRegistered(::GorillaTag::Cosmetics::CosmeticsProximityReactor*  cosmetic)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager*>(),
                        {"OnCosmeticRegistered", {}, {::i2c::type_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cosmetic);
}
inline void GorillaTag::Cosmetics::EnvironmentProximityReactorManager::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::EnvironmentProximityReactorManager::TryCacheProximityEvent(int32_t  reactorId, int32_t  blockIndex, bool  isBelow, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager*>(),
                        {"TryCacheProximityEvent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reactorId, blockIndex, isBelow, info);
}
inline void GorillaTag::Cosmetics::EnvironmentProximityReactorManager::ApplyProximityEventToReactor(int32_t  reactorId, int32_t  blockIndex, bool  isBelow, int32_t  senderActorNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager*>(),
                        {"ApplyProximityEventToReactor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reactorId, blockIndex, isBelow, senderActorNumber);
}
inline void GorillaTag::Cosmetics::EnvironmentProximityReactorManager::RegisterInstance(::GorillaTag::Cosmetics::EnvironmentProximityReactor*  reactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager*>(),
                        {"RegisterInstance", {}, {::i2c::type_of<::GorillaTag::Cosmetics::EnvironmentProximityReactor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reactor);
}
inline void GorillaTag::Cosmetics::EnvironmentProximityReactorManager::UnregisterInstance(::GorillaTag::Cosmetics::EnvironmentProximityReactor*  reactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager*>(),
                        {"UnregisterInstance", {}, {::i2c::type_of<::GorillaTag::Cosmetics::EnvironmentProximityReactor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reactor);
}
inline void GorillaTag::Cosmetics::EnvironmentProximityReactorManager::Register(::GorillaTag::Cosmetics::EnvironmentProximityReactor*  reactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager*>(),
                        {"Register", {}, {::i2c::type_of<::GorillaTag::Cosmetics::EnvironmentProximityReactor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, reactor);
}
inline void GorillaTag::Cosmetics::EnvironmentProximityReactorManager::Unregister(::GorillaTag::Cosmetics::EnvironmentProximityReactor*  reactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager*>(),
                        {"Unregister", {}, {::i2c::type_of<::GorillaTag::Cosmetics::EnvironmentProximityReactor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, reactor);
}
inline void GorillaTag::Cosmetics::EnvironmentProximityReactorManager::BroadcastProximityState(int32_t  reactorId, int32_t  blockIndex, bool  isBelow)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager*>(),
                        {"BroadcastProximityState", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reactorId, blockIndex, isBelow);
}
inline void GorillaTag::Cosmetics::EnvironmentProximityReactorManager::ProximityStateRPC(int32_t  reactorId, int32_t  blockIndex, bool  isBelow, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager*>(),
                        {"ProximityStateRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reactorId, blockIndex, isBelow, info);
}
inline void GorillaTag::Cosmetics::EnvironmentProximityReactorManager::RPC_ProximityState(::Fusion::NetworkRunner*  runner, int32_t  reactorId, int32_t  blockIndex, bool  isBelow, ::Fusion::RpcInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager*>(),
                        {"RPC_ProximityState", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Fusion::RpcInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, runner, reactorId, blockIndex, isBelow, info);
}
inline void GorillaTag::Cosmetics::EnvironmentProximityReactorManager::ApplyProximityStateShared(int32_t  reactorId, int32_t  blockIndex, bool  isBelow, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager*>(),
                        {"ApplyProximityStateShared", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reactorId, blockIndex, isBelow, info);
}
inline void GorillaTag::Cosmetics::EnvironmentProximityReactorManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::EnvironmentProximityReactorManager::RPC_ProximityState@Invoker(::Fusion::NetworkRunner*  runner, ::Fusion::SimulationMessage*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager*>(),
                        {"RPC_ProximityState@Invoker", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, runner, message);
}
inline ::GorillaTag::Cosmetics::EnvironmentProximityReactorManager* GorillaTag::Cosmetics::EnvironmentProximityReactorManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::EnvironmentProximityReactorManager::EnvironmentProximityReactorManager()   {
}
//  Writing Method size for method: ::GorillaTag::Cosmetics::EnvironmentProximityReactorManager___c__DisplayClass31_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::EnvironmentProximityReactorManager___c__DisplayClass31_0::*)()>(&::GorillaTag::Cosmetics::EnvironmentProximityReactorManager___c__DisplayClass31_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d93e4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager___c__DisplayClass31_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EnvironmentProximityReactorManager___c__DisplayClass31_0._ApplyProximityStateShared_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::EnvironmentProximityReactorManager___c__DisplayClass31_0::*)(::GlobalNamespace::EnvironmentProximityReactorManager_PendingProximityEvent)>(&::GorillaTag::Cosmetics::EnvironmentProximityReactorManager___c__DisplayClass31_0::_ApplyProximityStateShared_b__0)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5d94130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager___c__DisplayClass31_0*>(),
                        {"<ApplyProximityStateShared>b__0", {}, {::i2c::type_of<::GlobalNamespace::EnvironmentProximityReactorManager_PendingProximityEvent>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaTag::Cosmetics::EnvironmentProximityReactorManager___c__DisplayClass31_0::__cordl_internal_get_reactorId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reactorId;
}
constexpr int32_t const& GorillaTag::Cosmetics::EnvironmentProximityReactorManager___c__DisplayClass31_0::__cordl_internal_get_reactorId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reactorId;
}
constexpr void GorillaTag::Cosmetics::EnvironmentProximityReactorManager___c__DisplayClass31_0::__cordl_internal_set_reactorId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reactorId = value;
}
constexpr int32_t& GorillaTag::Cosmetics::EnvironmentProximityReactorManager___c__DisplayClass31_0::__cordl_internal_get_blockIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockIndex;
}
constexpr int32_t const& GorillaTag::Cosmetics::EnvironmentProximityReactorManager___c__DisplayClass31_0::__cordl_internal_get_blockIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockIndex;
}
constexpr void GorillaTag::Cosmetics::EnvironmentProximityReactorManager___c__DisplayClass31_0::__cordl_internal_set_blockIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blockIndex = value;
}
inline void GorillaTag::Cosmetics::EnvironmentProximityReactorManager___c__DisplayClass31_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager___c__DisplayClass31_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::EnvironmentProximityReactorManager___c__DisplayClass31_0::_ApplyProximityStateShared_b__0(::GlobalNamespace::EnvironmentProximityReactorManager_PendingProximityEvent  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager___c__DisplayClass31_0*>(),
                        {"<ApplyProximityStateShared>b__0", {}, {::i2c::type_of<::GlobalNamespace::EnvironmentProximityReactorManager_PendingProximityEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, e);
}
inline ::GorillaTag::Cosmetics::EnvironmentProximityReactorManager___c__DisplayClass31_0* GorillaTag::Cosmetics::EnvironmentProximityReactorManager___c__DisplayClass31_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager___c__DisplayClass31_0*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::EnvironmentProximityReactorManager___c__DisplayClass31_0::EnvironmentProximityReactorManager___c__DisplayClass31_0()   {
}
//  Writing Method size for method: ::GorillaTag::Cosmetics::EnvironmentProximityReactorManager___c__DisplayClass22_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::EnvironmentProximityReactorManager___c__DisplayClass22_0::*)()>(&::GorillaTag::Cosmetics::EnvironmentProximityReactorManager___c__DisplayClass22_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d93688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager___c__DisplayClass22_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EnvironmentProximityReactorManager___c__DisplayClass22_0._TryCacheProximityEvent_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::EnvironmentProximityReactorManager___c__DisplayClass22_0::*)(::GlobalNamespace::EnvironmentProximityReactorManager_PendingProximityEvent)>(&::GorillaTag::Cosmetics::EnvironmentProximityReactorManager___c__DisplayClass22_0::_TryCacheProximityEvent_b__0)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5d94104;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager___c__DisplayClass22_0*>(),
                        {"<TryCacheProximityEvent>b__0", {}, {::i2c::type_of<::GlobalNamespace::EnvironmentProximityReactorManager_PendingProximityEvent>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaTag::Cosmetics::EnvironmentProximityReactorManager___c__DisplayClass22_0::__cordl_internal_get_reactorId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reactorId;
}
constexpr int32_t const& GorillaTag::Cosmetics::EnvironmentProximityReactorManager___c__DisplayClass22_0::__cordl_internal_get_reactorId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reactorId;
}
constexpr void GorillaTag::Cosmetics::EnvironmentProximityReactorManager___c__DisplayClass22_0::__cordl_internal_set_reactorId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reactorId = value;
}
constexpr int32_t& GorillaTag::Cosmetics::EnvironmentProximityReactorManager___c__DisplayClass22_0::__cordl_internal_get_blockIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockIndex;
}
constexpr int32_t const& GorillaTag::Cosmetics::EnvironmentProximityReactorManager___c__DisplayClass22_0::__cordl_internal_get_blockIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockIndex;
}
constexpr void GorillaTag::Cosmetics::EnvironmentProximityReactorManager___c__DisplayClass22_0::__cordl_internal_set_blockIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blockIndex = value;
}
inline void GorillaTag::Cosmetics::EnvironmentProximityReactorManager___c__DisplayClass22_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager___c__DisplayClass22_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::EnvironmentProximityReactorManager___c__DisplayClass22_0::_TryCacheProximityEvent_b__0(::GlobalNamespace::EnvironmentProximityReactorManager_PendingProximityEvent  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager___c__DisplayClass22_0*>(),
                        {"<TryCacheProximityEvent>b__0", {}, {::i2c::type_of<::GlobalNamespace::EnvironmentProximityReactorManager_PendingProximityEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, e);
}
inline ::GorillaTag::Cosmetics::EnvironmentProximityReactorManager___c__DisplayClass22_0* GorillaTag::Cosmetics::EnvironmentProximityReactorManager___c__DisplayClass22_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager___c__DisplayClass22_0*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::EnvironmentProximityReactorManager___c__DisplayClass22_0::EnvironmentProximityReactorManager___c__DisplayClass22_0()   {
}
