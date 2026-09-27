#pragma once
// IWYU pragma private; include "GlobalNamespace/GameAgentManager.hpp"
#include "GlobalNamespace/zzzz__NetworkComponent_impl.hpp"
#include "GlobalNamespace/zzzz__GameAgentManager_def.hpp"
#include "GlobalNamespace/zzzz__CallLimiter_def.hpp"
#include "GlobalNamespace/zzzz__CallLimitersList_2_def.hpp"
#include "GlobalNamespace/zzzz__GameAgentManager_RPC_def.hpp"
#include "GlobalNamespace/zzzz__GameAgent_def.hpp"
#include "GlobalNamespace/zzzz__GameEntityId_def.hpp"
#include "GlobalNamespace/zzzz__GameEntityManager_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemTick_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "Photon/Pun/zzzz__PhotonView_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameAgentManager.get_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameAgentManager::*)()>(&::GlobalNamespace::GameAgentManager::get_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x580f5d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"get_TickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgentManager.set_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgentManager::*)(bool)>(&::GlobalNamespace::GameAgentManager::set_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x580f5dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgentManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgentManager::*)()>(&::GlobalNamespace::GameAgentManager::Awake)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x580f5e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GameAgentManager*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgentManager.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgentManager::*)()>(&::GlobalNamespace::GameAgentManager::OnEnable)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x580f7d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgentManager.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgentManager::*)()>(&::GlobalNamespace::GameAgentManager::OnDisable)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x580f8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgentManager.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GameAgentManager> (*)(::GlobalNamespace::GameEntity*)>(&::GlobalNamespace::GameAgentManager::Get)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x580f9ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"Get", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgentManager.GetAgents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameAgent>>* (::GlobalNamespace::GameAgentManager::*)()>(&::GlobalNamespace::GameAgentManager::GetAgents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x580fa9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"GetAgents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgentManager.GetGameAgentCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GameAgentManager::*)()>(&::GlobalNamespace::GameAgentManager::GetGameAgentCount)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x580faa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"GetGameAgentCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgentManager.AddGameAgent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgentManager::*)(::GlobalNamespace::GameAgent*)>(&::GlobalNamespace::GameAgentManager::AddGameAgent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x580cc38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"AddGameAgent", {}, {::i2c::type_of<::GlobalNamespace::GameAgent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgentManager.RemoveGameAgent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgentManager::*)(::GlobalNamespace::GameAgent*)>(&::GlobalNamespace::GameAgentManager::RemoveGameAgent)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x580cd04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"RemoveGameAgent", {}, {::i2c::type_of<::GlobalNamespace::GameAgent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgentManager.GetGameAgent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GameAgent> (::GlobalNamespace::GameAgentManager::*)(::GlobalNamespace::GameEntityId)>(&::GlobalNamespace::GameAgentManager::GetGameAgent)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x580faec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"GetGameAgent", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgentManager.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgentManager::*)()>(&::GlobalNamespace::GameAgentManager::Tick)> {
  constexpr static std::size_t size = 0x5b8;
  constexpr static std::size_t addrs = 0x580fb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgentManager.IsAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameAgentManager::*)()>(&::GlobalNamespace::GameAgentManager::IsAuthority)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5810108;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"IsAuthority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgentManager.IsAuthorityPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameAgentManager::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GameAgentManager::IsAuthorityPlayer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5810128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"IsAuthorityPlayer", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgentManager.IsAuthorityPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameAgentManager::*)(::Photon::Realtime::Player*)>(&::GlobalNamespace::GameAgentManager::IsAuthorityPlayer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5810140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"IsAuthorityPlayer", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgentManager.GetAuthorityPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Realtime::Player* (::GlobalNamespace::GameAgentManager::*)()>(&::GlobalNamespace::GameAgentManager::GetAuthorityPlayer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5810158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"GetAuthorityPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgentManager.IsZoneActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameAgentManager::*)()>(&::GlobalNamespace::GameAgentManager::IsZoneActive)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5810170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"IsZoneActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgentManager.IsPositionInManagerBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameAgentManager::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::GameAgentManager::IsPositionInManagerBounds)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5810190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"IsPositionInManagerBounds", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgentManager.IsValidClientRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameAgentManager::*)(::Photon::Realtime::Player*)>(&::GlobalNamespace::GameAgentManager::IsValidClientRPC)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x58101b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"IsValidClientRPC", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgentManager.IsValidClientRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameAgentManager::*)(::Photon::Realtime::Player*, int32_t)>(&::GlobalNamespace::GameAgentManager::IsValidClientRPC)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58101d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"IsValidClientRPC", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgentManager.IsValidClientRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameAgentManager::*)(::Photon::Realtime::Player*, int32_t, ::UnityEngine::Vector3)>(&::GlobalNamespace::GameAgentManager::IsValidClientRPC)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58101e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"IsValidClientRPC", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgentManager.IsValidClientRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameAgentManager::*)(::Photon::Realtime::Player*, ::UnityEngine::Vector3)>(&::GlobalNamespace::GameAgentManager::IsValidClientRPC)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5810200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"IsValidClientRPC", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgentManager.IsValidAuthorityRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameAgentManager::*)(::Photon::Realtime::Player*)>(&::GlobalNamespace::GameAgentManager::IsValidAuthorityRPC)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5810218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"IsValidAuthorityRPC", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgentManager.IsValidAuthorityRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameAgentManager::*)(::Photon::Realtime::Player*, int32_t)>(&::GlobalNamespace::GameAgentManager::IsValidAuthorityRPC)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5810230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"IsValidAuthorityRPC", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgentManager.IsValidAuthorityRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameAgentManager::*)(::Photon::Realtime::Player*, int32_t, ::UnityEngine::Vector3)>(&::GlobalNamespace::GameAgentManager::IsValidAuthorityRPC)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5810248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"IsValidAuthorityRPC", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgentManager.IsValidAuthorityRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameAgentManager::*)(::Photon::Realtime::Player*, ::UnityEngine::Vector3)>(&::GlobalNamespace::GameAgentManager::IsValidAuthorityRPC)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5810260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"IsValidAuthorityRPC", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgentManager.RequestDestination
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgentManager::*)(::GlobalNamespace::GameAgent*, ::UnityEngine::Vector3)>(&::GlobalNamespace::GameAgentManager::RequestDestination)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x580d7c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"RequestDestination", {}, {::i2c::type_of<::GlobalNamespace::GameAgent*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgentManager.ApplyDestinationRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgentManager::*)(::ArrayW<int32_t>, ::ArrayW<::UnityEngine::Vector3>, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GameAgentManager::ApplyDestinationRPC)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x5810278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"ApplyDestinationRPC", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgentManager.RequestState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgentManager::*)(::GlobalNamespace::GameAgent*, uint8_t)>(&::GlobalNamespace::GameAgentManager::RequestState)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x580dc94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"RequestState", {}, {::i2c::type_of<::GlobalNamespace::GameAgent*>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgentManager.ApplyStateRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgentManager::*)(::ArrayW<int32_t>, ::ArrayW<uint8_t>, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GameAgentManager::ApplyStateRPC)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x58104f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"ApplyStateRPC", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgentManager.RequestBehavior
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgentManager::*)(::GlobalNamespace::GameAgent*, uint8_t)>(&::GlobalNamespace::GameAgentManager::RequestBehavior)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x580da70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"RequestBehavior", {}, {::i2c::type_of<::GlobalNamespace::GameAgent*>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgentManager.ApplyBehaviorRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgentManager::*)(::ArrayW<int32_t>, ::ArrayW<uint8_t>, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GameAgentManager::ApplyBehaviorRPC)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x58106dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"ApplyBehaviorRPC", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgentManager.RequestTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgentManager::*)(::GlobalNamespace::GameAgent*, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GameAgentManager::RequestTarget)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x580deb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"RequestTarget", {}, {::i2c::type_of<::GlobalNamespace::GameAgent*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgentManager.ApplyTargetRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgentManager::*)(int32_t, ::Photon::Realtime::Player*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GameAgentManager::ApplyTargetRPC)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x58108c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"ApplyTargetRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgentManager.RequestJump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgentManager::*)(::GlobalNamespace::GameAgent*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, float_t)>(&::GlobalNamespace::GameAgentManager::RequestJump)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x580d2ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"RequestJump", {}, {::i2c::type_of<::GlobalNamespace::GameAgent*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgentManager.ApplyJumpRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgentManager::*)(int32_t, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, float_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GameAgentManager::ApplyJumpRPC)> {
  constexpr static std::size_t size = 0x484;
  constexpr static std::size_t addrs = 0x5810a34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"ApplyJumpRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgentManager.WriteDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgentManager::*)()>(&::GlobalNamespace::GameAgentManager::WriteDataFusion)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5810eb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GameAgentManager*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgentManager.ReadDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgentManager::*)()>(&::GlobalNamespace::GameAgentManager::ReadDataFusion)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5810ebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GameAgentManager*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgentManager.WriteDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgentManager::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GameAgentManager::WriteDataPUN)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x5810ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GameAgentManager*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgentManager.ReadDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgentManager::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GameAgentManager::ReadDataPUN)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x58110f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GameAgentManager*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgentManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgentManager::*)()>(&::GlobalNamespace::GameAgentManager::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x581138c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgentManager.CopyBackingFieldsToState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgentManager::*)(bool)>(&::GlobalNamespace::GameAgentManager::CopyBackingFieldsToState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x581141c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GameAgentManager*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgentManager.CopyStateToBackingFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgentManager::*)()>(&::GlobalNamespace::GameAgentManager::CopyStateToBackingFields)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5811424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GameAgentManager*>(), 24}
                ));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameEntityManager>& GlobalNamespace::GameAgentManager::__cordl_internal_get_entityManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entityManager;
}
constexpr ::UnityW<::GlobalNamespace::GameEntityManager> const& GlobalNamespace::GameAgentManager::__cordl_internal_get_entityManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entityManager;
}
constexpr void GlobalNamespace::GameAgentManager::__cordl_internal_set_entityManager(::UnityW<::GlobalNamespace::GameEntityManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entityManager = value;
}
constexpr ::UnityW<::Photon::Pun::PhotonView>& GlobalNamespace::GameAgentManager::__cordl_internal_get_photonView()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___photonView;
}
constexpr ::UnityW<::Photon::Pun::PhotonView> const& GlobalNamespace::GameAgentManager::__cordl_internal_get_photonView() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___photonView;
}
constexpr void GlobalNamespace::GameAgentManager::__cordl_internal_set_photonView(::UnityW<::Photon::Pun::PhotonView>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___photonView = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameAgent>>*& GlobalNamespace::GameAgentManager::__cordl_internal_get_agents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___agents;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameAgent>>* const& GlobalNamespace::GameAgentManager::__cordl_internal_get_agents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___agents;
}
constexpr void GlobalNamespace::GameAgentManager::__cordl_internal_set_agents(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameAgent>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___agents = value;
}
constexpr float_t& GlobalNamespace::GameAgentManager::__cordl_internal_get_lastDestinationSentTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastDestinationSentTime;
}
constexpr float_t const& GlobalNamespace::GameAgentManager::__cordl_internal_get_lastDestinationSentTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastDestinationSentTime;
}
constexpr void GlobalNamespace::GameAgentManager::__cordl_internal_set_lastDestinationSentTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastDestinationSentTime = value;
}
constexpr float_t& GlobalNamespace::GameAgentManager::__cordl_internal_get_destinationCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destinationCooldown;
}
constexpr float_t const& GlobalNamespace::GameAgentManager::__cordl_internal_get_destinationCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destinationCooldown;
}
constexpr void GlobalNamespace::GameAgentManager::__cordl_internal_set_destinationCooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___destinationCooldown = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GlobalNamespace::GameAgentManager::__cordl_internal_get_netIdsForDestination()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netIdsForDestination;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GlobalNamespace::GameAgentManager::__cordl_internal_get_netIdsForDestination() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netIdsForDestination;
}
constexpr void GlobalNamespace::GameAgentManager::__cordl_internal_set_netIdsForDestination(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___netIdsForDestination = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& GlobalNamespace::GameAgentManager::__cordl_internal_get_destinationsForDestination()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destinationsForDestination;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& GlobalNamespace::GameAgentManager::__cordl_internal_get_destinationsForDestination() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destinationsForDestination;
}
constexpr void GlobalNamespace::GameAgentManager::__cordl_internal_set_destinationsForDestination(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___destinationsForDestination = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GlobalNamespace::GameAgentManager::__cordl_internal_get_netIdsForState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netIdsForState;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GlobalNamespace::GameAgentManager::__cordl_internal_get_netIdsForState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netIdsForState;
}
constexpr void GlobalNamespace::GameAgentManager::__cordl_internal_set_netIdsForState(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___netIdsForState = value;
}
constexpr ::System::Collections::Generic::List_1<uint8_t>*& GlobalNamespace::GameAgentManager::__cordl_internal_get_statesForState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___statesForState;
}
constexpr ::System::Collections::Generic::List_1<uint8_t>* const& GlobalNamespace::GameAgentManager::__cordl_internal_get_statesForState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___statesForState;
}
constexpr void GlobalNamespace::GameAgentManager::__cordl_internal_set_statesForState(::System::Collections::Generic::List_1<uint8_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___statesForState = value;
}
constexpr float_t& GlobalNamespace::GameAgentManager::__cordl_internal_get_lastStateSentTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastStateSentTime;
}
constexpr float_t const& GlobalNamespace::GameAgentManager::__cordl_internal_get_lastStateSentTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastStateSentTime;
}
constexpr void GlobalNamespace::GameAgentManager::__cordl_internal_set_lastStateSentTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastStateSentTime = value;
}
constexpr float_t& GlobalNamespace::GameAgentManager::__cordl_internal_get_stateCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateCooldown;
}
constexpr float_t const& GlobalNamespace::GameAgentManager::__cordl_internal_get_stateCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateCooldown;
}
constexpr void GlobalNamespace::GameAgentManager::__cordl_internal_set_stateCooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stateCooldown = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GlobalNamespace::GameAgentManager::__cordl_internal_get_netIdsForBehavior()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netIdsForBehavior;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GlobalNamespace::GameAgentManager::__cordl_internal_get_netIdsForBehavior() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netIdsForBehavior;
}
constexpr void GlobalNamespace::GameAgentManager::__cordl_internal_set_netIdsForBehavior(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___netIdsForBehavior = value;
}
constexpr ::System::Collections::Generic::List_1<uint8_t>*& GlobalNamespace::GameAgentManager::__cordl_internal_get_behaviorsForBehavior()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___behaviorsForBehavior;
}
constexpr ::System::Collections::Generic::List_1<uint8_t>* const& GlobalNamespace::GameAgentManager::__cordl_internal_get_behaviorsForBehavior() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___behaviorsForBehavior;
}
constexpr void GlobalNamespace::GameAgentManager::__cordl_internal_set_behaviorsForBehavior(::System::Collections::Generic::List_1<uint8_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___behaviorsForBehavior = value;
}
constexpr float_t& GlobalNamespace::GameAgentManager::__cordl_internal_get_lastBehaviorSentTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastBehaviorSentTime;
}
constexpr float_t const& GlobalNamespace::GameAgentManager::__cordl_internal_get_lastBehaviorSentTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastBehaviorSentTime;
}
constexpr void GlobalNamespace::GameAgentManager::__cordl_internal_set_lastBehaviorSentTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastBehaviorSentTime = value;
}
constexpr float_t& GlobalNamespace::GameAgentManager::__cordl_internal_get_behaviorCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___behaviorCooldown;
}
constexpr float_t const& GlobalNamespace::GameAgentManager::__cordl_internal_get_behaviorCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___behaviorCooldown;
}
constexpr void GlobalNamespace::GameAgentManager::__cordl_internal_set_behaviorCooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___behaviorCooldown = value;
}
constexpr int32_t& GlobalNamespace::GameAgentManager::__cordl_internal_get_nextAgentIndexUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextAgentIndexUpdate;
}
constexpr int32_t const& GlobalNamespace::GameAgentManager::__cordl_internal_get_nextAgentIndexUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextAgentIndexUpdate;
}
constexpr void GlobalNamespace::GameAgentManager::__cordl_internal_set_nextAgentIndexUpdate(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextAgentIndexUpdate = value;
}
constexpr int32_t& GlobalNamespace::GameAgentManager::__cordl_internal_get_nextAgentIndexThink()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextAgentIndexThink;
}
constexpr int32_t const& GlobalNamespace::GameAgentManager::__cordl_internal_get_nextAgentIndexThink() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextAgentIndexThink;
}
constexpr void GlobalNamespace::GameAgentManager::__cordl_internal_set_nextAgentIndexThink(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextAgentIndexThink = value;
}
constexpr bool& GlobalNamespace::GameAgentManager::__cordl_internal_get__TickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr bool const& GlobalNamespace::GameAgentManager::__cordl_internal_get__TickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr void GlobalNamespace::GameAgentManager::__cordl_internal_set__TickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TickRunning_k__BackingField = value;
}
constexpr ::GlobalNamespace::CallLimitersList_2<::GlobalNamespace::CallLimiter*,::GlobalNamespace::GameAgentManager_RPC>*& GlobalNamespace::GameAgentManager::__cordl_internal_get_m_RpcSpamChecks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RpcSpamChecks;
}
constexpr ::GlobalNamespace::CallLimitersList_2<::GlobalNamespace::CallLimiter*,::GlobalNamespace::GameAgentManager_RPC>* const& GlobalNamespace::GameAgentManager::__cordl_internal_get_m_RpcSpamChecks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RpcSpamChecks;
}
constexpr void GlobalNamespace::GameAgentManager::__cordl_internal_set_m_RpcSpamChecks(::GlobalNamespace::CallLimitersList_2<::GlobalNamespace::CallLimiter*,::GlobalNamespace::GameAgentManager_RPC>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RpcSpamChecks = value;
}
inline bool GlobalNamespace::GameAgentManager::get_TickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"get_TickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GameAgentManager::set_TickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameAgentManager::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameAgentManager*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameAgentManager::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameAgentManager::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::GameAgentManager> GlobalNamespace::GameAgentManager::Get(::GlobalNamespace::GameEntity*  gameEntity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"Get", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GameAgentManager>>(nullptr, ___internal_method, gameEntity);
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameAgent>>* GlobalNamespace::GameAgentManager::GetAgents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"GetAgents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameAgent>>*>(this, ___internal_method);
}
inline int32_t GlobalNamespace::GameAgentManager::GetGameAgentCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"GetGameAgentCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::GameAgentManager::AddGameAgent(::GlobalNamespace::GameAgent*  gameAgent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"AddGameAgent", {}, {::i2c::type_of<::GlobalNamespace::GameAgent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameAgent);
}
inline void GlobalNamespace::GameAgentManager::RemoveGameAgent(::GlobalNamespace::GameAgent*  gameAgent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"RemoveGameAgent", {}, {::i2c::type_of<::GlobalNamespace::GameAgent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameAgent);
}
inline ::UnityW<::GlobalNamespace::GameAgent> GlobalNamespace::GameAgentManager::GetGameAgent(::GlobalNamespace::GameEntityId  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"GetGameAgent", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GameAgent>>(this, ___internal_method, id);
}
inline void GlobalNamespace::GameAgentManager::Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GameAgentManager::IsAuthority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"IsAuthority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::GameAgentManager::IsAuthorityPlayer(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"IsAuthorityPlayer", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player);
}
inline bool GlobalNamespace::GameAgentManager::IsAuthorityPlayer(::Photon::Realtime::Player*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"IsAuthorityPlayer", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player);
}
inline ::Photon::Realtime::Player* GlobalNamespace::GameAgentManager::GetAuthorityPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"GetAuthorityPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Realtime::Player*>(this, ___internal_method);
}
inline bool GlobalNamespace::GameAgentManager::IsZoneActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"IsZoneActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::GameAgentManager::IsPositionInManagerBounds(::UnityEngine::Vector3  pos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"IsPositionInManagerBounds", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pos);
}
inline bool GlobalNamespace::GameAgentManager::IsValidClientRPC(::Photon::Realtime::Player*  sender)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"IsValidClientRPC", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sender);
}
inline bool GlobalNamespace::GameAgentManager::IsValidClientRPC(::Photon::Realtime::Player*  sender, int32_t  entityNetId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"IsValidClientRPC", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sender, entityNetId);
}
inline bool GlobalNamespace::GameAgentManager::IsValidClientRPC(::Photon::Realtime::Player*  sender, int32_t  entityNetId, ::UnityEngine::Vector3  pos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"IsValidClientRPC", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sender, entityNetId, pos);
}
inline bool GlobalNamespace::GameAgentManager::IsValidClientRPC(::Photon::Realtime::Player*  sender, ::UnityEngine::Vector3  pos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"IsValidClientRPC", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sender, pos);
}
inline bool GlobalNamespace::GameAgentManager::IsValidAuthorityRPC(::Photon::Realtime::Player*  sender)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"IsValidAuthorityRPC", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sender);
}
inline bool GlobalNamespace::GameAgentManager::IsValidAuthorityRPC(::Photon::Realtime::Player*  sender, int32_t  entityNetId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"IsValidAuthorityRPC", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sender, entityNetId);
}
inline bool GlobalNamespace::GameAgentManager::IsValidAuthorityRPC(::Photon::Realtime::Player*  sender, int32_t  entityNetId, ::UnityEngine::Vector3  pos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"IsValidAuthorityRPC", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sender, entityNetId, pos);
}
inline bool GlobalNamespace::GameAgentManager::IsValidAuthorityRPC(::Photon::Realtime::Player*  sender, ::UnityEngine::Vector3  pos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"IsValidAuthorityRPC", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sender, pos);
}
inline void GlobalNamespace::GameAgentManager::RequestDestination(::GlobalNamespace::GameAgent*  agent, ::UnityEngine::Vector3  dest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"RequestDestination", {}, {::i2c::type_of<::GlobalNamespace::GameAgent*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, agent, dest);
}
inline void GlobalNamespace::GameAgentManager::ApplyDestinationRPC(::ArrayW<int32_t>  netEntityId, ::ArrayW<::UnityEngine::Vector3>  dest, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"ApplyDestinationRPC", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, netEntityId, dest, info);
}
inline void GlobalNamespace::GameAgentManager::RequestState(::GlobalNamespace::GameAgent*  agent, uint8_t  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"RequestState", {}, {::i2c::type_of<::GlobalNamespace::GameAgent*>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, agent, state);
}
inline void GlobalNamespace::GameAgentManager::ApplyStateRPC(::ArrayW<int32_t>  netEntityId, ::ArrayW<uint8_t>  state, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"ApplyStateRPC", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, netEntityId, state, info);
}
inline void GlobalNamespace::GameAgentManager::RequestBehavior(::GlobalNamespace::GameAgent*  agent, uint8_t  behavior)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"RequestBehavior", {}, {::i2c::type_of<::GlobalNamespace::GameAgent*>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, agent, behavior);
}
inline void GlobalNamespace::GameAgentManager::ApplyBehaviorRPC(::ArrayW<int32_t>  netEntityId, ::ArrayW<uint8_t>  behavior, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"ApplyBehaviorRPC", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, netEntityId, behavior, info);
}
inline void GlobalNamespace::GameAgentManager::RequestTarget(::GlobalNamespace::GameAgent*  agent, ::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"RequestTarget", {}, {::i2c::type_of<::GlobalNamespace::GameAgent*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, agent, player);
}
inline void GlobalNamespace::GameAgentManager::ApplyTargetRPC(int32_t  agentNetId, ::Photon::Realtime::Player*  player, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"ApplyTargetRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, agentNetId, player, info);
}
inline void GlobalNamespace::GameAgentManager::RequestJump(::GlobalNamespace::GameAgent*  agent, ::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, float_t  heightScale, float_t  speedScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"RequestJump", {}, {::i2c::type_of<::GlobalNamespace::GameAgent*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, agent, start, end, heightScale, speedScale);
}
inline void GlobalNamespace::GameAgentManager::ApplyJumpRPC(int32_t  agentNetId, ::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, float_t  heightScale, float_t  speedScale, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {"ApplyJumpRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, agentNetId, start, end, heightScale, speedScale, info);
}
inline void GlobalNamespace::GameAgentManager::WriteDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameAgentManager*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameAgentManager::ReadDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameAgentManager*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameAgentManager::WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameAgentManager*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::GameAgentManager::ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameAgentManager*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::GameAgentManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgentManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameAgentManager::CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameAgentManager*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void GlobalNamespace::GameAgentManager::CopyStateToBackingFields()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameAgentManager*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameAgentManager* GlobalNamespace::GameAgentManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameAgentManager*>());
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr  GlobalNamespace::GameAgentManager::operator ::GlobalNamespace::ITickSystemTick*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* GlobalNamespace::GameAgentManager::i___GlobalNamespace__ITickSystemTick() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameAgentManager::GameAgentManager()   {
}
