#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaGameManager.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_impl.hpp"
#include "Photon/Pun/zzzz__MonoBehaviourPunCallbacks_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaGameManager_def.hpp"
#include "ExitGames/Client/Photon/zzzz__Hashtable_def.hpp"
#include "Fusion/zzzz__INetworkStruct_def.hpp"
#include "Fusion/zzzz__NetworkObject_def.hpp"
#include "GlobalNamespace/zzzz__GameModeSerializer_def.hpp"
#include "GlobalNamespace/zzzz__GorillaGameManager_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemTick_def.hpp"
#include "GlobalNamespace/zzzz__IWrappedSerializable_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__RigContainer_def.hpp"
#include "GlobalNamespace/zzzz__Tappable_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaGameModes/zzzz__GameModeType_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaGameManager.GameModeEnumToName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GorillaGameModes::GameModeType)>(&::GlobalNamespace::GorillaGameManager::GameModeEnumToName)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5905d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                        {"GameModeEnumToName", {}, {::i2c::type_of<::GorillaGameModes::GameModeType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGameManager.add_OnTouch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GorillaGameManager_OnTouchDelegate*)>(&::GlobalNamespace::GorillaGameManager::add_OnTouch)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5905da4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                        {"add_OnTouch", {}, {::i2c::type_of<::GlobalNamespace::GorillaGameManager_OnTouchDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGameManager.remove_OnTouch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GorillaGameManager_OnTouchDelegate*)>(&::GlobalNamespace::GorillaGameManager::remove_OnTouch)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5905e5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                        {"remove_OnTouch", {}, {::i2c::type_of<::GlobalNamespace::GorillaGameManager_OnTouchDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGameManager.get_instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GorillaGameManager> (*)()>(&::GlobalNamespace::GorillaGameManager::get_instance)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5905f14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                        {"get_instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGameManager.ITickSystemTick_get_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaGameManager::*)()>(&::GlobalNamespace::GorillaGameManager::ITickSystemTick_get_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5905f9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                        {"ITickSystemTick.get_TickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGameManager.ITickSystemTick_set_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGameManager::*)(bool)>(&::GlobalNamespace::GorillaGameManager::ITickSystemTick_set_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5905fa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                        {"ITickSystemTick.set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGameManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGameManager::*)()>(&::GlobalNamespace::GorillaGameManager::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5905fac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 63}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGameManager.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGameManager::*)()>(&::GlobalNamespace::GorillaGameManager::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5905fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGameManager.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGameManager::*)()>(&::GlobalNamespace::GorillaGameManager::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5905fb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGameManager.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGameManager::*)()>(&::GlobalNamespace::GorillaGameManager::Tick)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5905fb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 64}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGameManager.InfrequentUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGameManager::*)()>(&::GlobalNamespace::GorillaGameManager::InfrequentUpdate)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59060c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 65}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGameManager.GameModeName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GorillaGameManager::*)()>(&::GlobalNamespace::GorillaGameManager::GameModeName)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5906174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 66}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGameManager.GameModeNameRoomLabel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GorillaGameManager::*)()>(&::GlobalNamespace::GorillaGameManager::GameModeNameRoomLabel)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x590621c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 67}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGameManager.LocalTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGameManager::*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*, bool, bool)>(&::GlobalNamespace::GorillaGameManager::LocalTag)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59062f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 68}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGameManager.ReportTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGameManager::*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaGameManager::ReportTag)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59062f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 69}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGameManager.HitPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGameManager::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaGameManager::HitPlayer)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59062fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 70}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGameManager.CanAffectPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaGameManager::*)(::GlobalNamespace::NetPlayer*, bool)>(&::GlobalNamespace::GorillaGameManager::CanAffectPlayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5906300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 71}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGameManager.HandleHandTap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGameManager::*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::Tappable*, bool, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::GorillaGameManager::HandleHandTap)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5906308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 72}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGameManager.CanJoinFrienship
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaGameManager::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaGameManager::CanJoinFrienship)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x590630c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 73}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGameManager.CanPlayerParticipate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaGameManager::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaGameManager::CanPlayerParticipate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5906314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 74}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGameManager.HandleRoundComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGameManager::*)()>(&::GlobalNamespace::GorillaGameManager::HandleRoundComplete)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x590631c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 75}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGameManager.HandleTagBroadcast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGameManager::*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaGameManager::HandleTagBroadcast)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5906324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 76}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGameManager.HandleTagBroadcast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGameManager::*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*, double_t)>(&::GlobalNamespace::GorillaGameManager::HandleTagBroadcast)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5906328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 77}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGameManager.NewVRRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGameManager::*)(::GlobalNamespace::NetPlayer*, int32_t, bool)>(&::GlobalNamespace::GorillaGameManager::NewVRRig)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x590632c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 78}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGameManager.LocalCanTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaGameManager::*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaGameManager::LocalCanTag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5906330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 79}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGameManager.LocalIsTagged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaGameManager::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaGameManager::LocalIsTagged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5906338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 80}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGameManager.FindPlayerVRRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::VRRig> (::GlobalNamespace::GorillaGameManager::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaGameManager::FindPlayerVRRig)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5906340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 81}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGameManager.StaticFindRigForPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::VRRig> (*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaGameManager::StaticFindRigForPlayer)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5906414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                        {"StaticFindRigForPlayer", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGameManager.LocalPlayerSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<float_t> (::GlobalNamespace::GorillaGameManager::*)()>(&::GlobalNamespace::GorillaGameManager::LocalPlayerSpeed)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5906548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 82}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGameManager.UpdatePlayerAppearance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGameManager::*)(::GlobalNamespace::VRRig*)>(&::GlobalNamespace::GorillaGameManager::UpdatePlayerAppearance)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5906588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 83}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGameManager.MyMatIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GorillaGameManager::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaGameManager::MyMatIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5906694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 84}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGameManager.SpecialHandFX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GorillaGameManager::*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::RigContainer*)>(&::GlobalNamespace::GorillaGameManager::SpecialHandFX)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x590669c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 85}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGameManager.ValidGameMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaGameManager::*)()>(&::GlobalNamespace::GorillaGameManager::ValidGameMode)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x59066a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 86}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGameManager.OnInstanceReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::GorillaGameManager::OnInstanceReady)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5906898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                        {"OnInstanceReady", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGameManager.ReplicatedClientReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::GorillaGameManager::ReplicatedClientReady)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5906960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                        {"ReplicatedClientReady", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGameManager.OnReplicatedClientReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::GorillaGameManager::OnReplicatedClientReady)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x59069ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                        {"OnReplicatedClientReady", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGameManager.get_Serializer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GameModeSerializer> (::GlobalNamespace::GorillaGameManager::*)()>(&::GlobalNamespace::GorillaGameManager::get_Serializer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5906a88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                        {"get_Serializer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGameManager.NetworkLinkSetup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGameManager::*)(::GlobalNamespace::GameModeSerializer*)>(&::GlobalNamespace::GorillaGameManager::NetworkLinkSetup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5906a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 87}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGameManager.NetworkLinkDestroyed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGameManager::*)(::GlobalNamespace::GameModeSerializer*)>(&::GlobalNamespace::GorillaGameManager::NetworkLinkDestroyed)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5906a98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 88}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGameManager.GameType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaGameModes::GameModeType (::GlobalNamespace::GorillaGameManager::*)()>(&::GlobalNamespace::GorillaGameManager::GameType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 89}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGameManager.GameTypeName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GorillaGameManager::*)()>(&::GlobalNamespace::GorillaGameManager::GameTypeName)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5906820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                        {"GameTypeName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGameManager.AddFusionDataBehaviour
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGameManager::*)(::Fusion::NetworkObject*)>(&::GlobalNamespace::GorillaGameManager::AddFusionDataBehaviour)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 90}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGameManager.OnSerializeRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGameManager::*)(::System::Object*)>(&::GlobalNamespace::GorillaGameManager::OnSerializeRead)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 91}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGameManager.OnSerializeWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GorillaGameManager::*)()>(&::GlobalNamespace::GorillaGameManager::OnSerializeWrite)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 92}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGameManager.OnSerializeRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGameManager::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GorillaGameManager::OnSerializeRead)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 93}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGameManager.OnSerializeWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGameManager::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GorillaGameManager::OnSerializeWrite)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 94}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGameManager.ResetGame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGameManager::*)()>(&::GlobalNamespace::GorillaGameManager::ResetGame)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5906b28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 95}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGameManager.StartPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGameManager::*)()>(&::GlobalNamespace::GorillaGameManager::StartPlaying)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x5906b2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 96}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGameManager.StopPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGameManager::*)()>(&::GlobalNamespace::GorillaGameManager::StopPlaying)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5906d78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 97}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGameManager.OnMasterClientSwitched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGameManager::*)(::Photon::Realtime::Player*)>(&::GlobalNamespace::GorillaGameManager::OnMasterClientSwitched)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5906f4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 98}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGameManager.OnRoomPropertiesUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGameManager::*)(::ExitGames::Client::Photon::Hashtable*)>(&::GlobalNamespace::GorillaGameManager::OnRoomPropertiesUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5906f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 99}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGameManager.OnPlayerPropertiesUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGameManager::*)(::Photon::Realtime::Player*, ::ExitGames::Client::Photon::Hashtable*)>(&::GlobalNamespace::GorillaGameManager::OnPlayerPropertiesUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5906f54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 100}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGameManager.OnPlayerLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGameManager::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaGameManager::OnPlayerLeftRoom)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5906f58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 101}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGameManager.OnPlayerEnteredRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGameManager::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaGameManager::OnPlayerEnteredRoom)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5907078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 102}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGameManager.OnMasterClientSwitched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGameManager::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaGameManager::OnMasterClientSwitched)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59070f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 103}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGameManager.ForceStopGame_DisconnectAndDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::GorillaGameManager::ForceStopGame_DisconnectAndDestroy)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x59070fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                        {"ForceStopGame_DisconnectAndDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGameManager.AddLastTagged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGameManager::*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaGameManager::AddLastTagged)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x59072d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                        {"AddLastTagged", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGameManager.WriteLastTagged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGameManager::*)(::Photon::Pun::PhotonStream*)>(&::GlobalNamespace::GorillaGameManager::WriteLastTagged)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x5907400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                        {"WriteLastTagged", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGameManager.ReadLastTagged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGameManager::*)(::Photon::Pun::PhotonStream*)>(&::GlobalNamespace::GorillaGameManager::ReadLastTagged)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x59075dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                        {"ReadLastTagged", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGameManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGameManager::*)()>(&::GlobalNamespace::GorillaGameManager::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5907750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::GorillaGameManager::__cordl_internal_get_fastJumpLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fastJumpLimit;
}
constexpr float_t const& GlobalNamespace::GorillaGameManager::__cordl_internal_get_fastJumpLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fastJumpLimit;
}
constexpr void GlobalNamespace::GorillaGameManager::__cordl_internal_set_fastJumpLimit(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fastJumpLimit = value;
}
constexpr float_t& GlobalNamespace::GorillaGameManager::__cordl_internal_get_fastJumpMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fastJumpMultiplier;
}
constexpr float_t const& GlobalNamespace::GorillaGameManager::__cordl_internal_get_fastJumpMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fastJumpMultiplier;
}
constexpr void GlobalNamespace::GorillaGameManager::__cordl_internal_set_fastJumpMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fastJumpMultiplier = value;
}
constexpr float_t& GlobalNamespace::GorillaGameManager::__cordl_internal_get_slowJumpLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slowJumpLimit;
}
constexpr float_t const& GlobalNamespace::GorillaGameManager::__cordl_internal_get_slowJumpLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slowJumpLimit;
}
constexpr void GlobalNamespace::GorillaGameManager::__cordl_internal_set_slowJumpLimit(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slowJumpLimit = value;
}
constexpr float_t& GlobalNamespace::GorillaGameManager::__cordl_internal_get_slowJumpMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slowJumpMultiplier;
}
constexpr float_t const& GlobalNamespace::GorillaGameManager::__cordl_internal_get_slowJumpMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slowJumpMultiplier;
}
constexpr void GlobalNamespace::GorillaGameManager::__cordl_internal_set_slowJumpMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slowJumpMultiplier = value;
}
constexpr float_t& GlobalNamespace::GorillaGameManager::__cordl_internal_get_lastCheck()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastCheck;
}
constexpr float_t const& GlobalNamespace::GorillaGameManager::__cordl_internal_get_lastCheck() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastCheck;
}
constexpr void GlobalNamespace::GorillaGameManager::__cordl_internal_set_lastCheck(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastCheck = value;
}
constexpr float_t& GlobalNamespace::GorillaGameManager::__cordl_internal_get_checkCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkCooldown;
}
constexpr float_t const& GlobalNamespace::GorillaGameManager::__cordl_internal_get_checkCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkCooldown;
}
constexpr void GlobalNamespace::GorillaGameManager::__cordl_internal_set_checkCooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___checkCooldown = value;
}
constexpr float_t& GlobalNamespace::GorillaGameManager::__cordl_internal_get_tagDistanceThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagDistanceThreshold;
}
constexpr float_t const& GlobalNamespace::GorillaGameManager::__cordl_internal_get_tagDistanceThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagDistanceThreshold;
}
constexpr void GlobalNamespace::GorillaGameManager::__cordl_internal_set_tagDistanceThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tagDistanceThreshold = value;
}
constexpr ::GlobalNamespace::NetPlayer*& GlobalNamespace::GorillaGameManager::__cordl_internal_get_outPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outPlayer;
}
constexpr ::GlobalNamespace::NetPlayer* const& GlobalNamespace::GorillaGameManager::__cordl_internal_get_outPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outPlayer;
}
constexpr void GlobalNamespace::GorillaGameManager::__cordl_internal_set_outPlayer(::GlobalNamespace::NetPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outPlayer = value;
}
constexpr int32_t& GlobalNamespace::GorillaGameManager::__cordl_internal_get_outInt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outInt;
}
constexpr int32_t const& GlobalNamespace::GorillaGameManager::__cordl_internal_get_outInt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outInt;
}
constexpr void GlobalNamespace::GorillaGameManager::__cordl_internal_set_outInt(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outInt = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::GorillaGameManager::__cordl_internal_get_tempRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::GorillaGameManager::__cordl_internal_get_tempRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempRig;
}
constexpr void GlobalNamespace::GorillaGameManager::__cordl_internal_set_tempRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tempRig = value;
}
constexpr ::ArrayW<::GlobalNamespace::NetPlayer*>& GlobalNamespace::GorillaGameManager::__cordl_internal_get_currentNetPlayerArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentNetPlayerArray;
}
constexpr ::ArrayW<::GlobalNamespace::NetPlayer*> const& GlobalNamespace::GorillaGameManager::__cordl_internal_get_currentNetPlayerArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentNetPlayerArray;
}
constexpr void GlobalNamespace::GorillaGameManager::__cordl_internal_set_currentNetPlayerArray(::ArrayW<::GlobalNamespace::NetPlayer*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentNetPlayerArray = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::GorillaGameManager::__cordl_internal_get_playerSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerSpeed;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::GorillaGameManager::__cordl_internal_get_playerSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerSpeed;
}
constexpr void GlobalNamespace::GorillaGameManager::__cordl_internal_set_playerSpeed(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerSpeed = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*& GlobalNamespace::GorillaGameManager::__cordl_internal_get_lastTaggedActorNr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTaggedActorNr;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* const& GlobalNamespace::GorillaGameManager::__cordl_internal_get_lastTaggedActorNr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTaggedActorNr;
}
constexpr void GlobalNamespace::GorillaGameManager::__cordl_internal_set_lastTaggedActorNr(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastTaggedActorNr = value;
}
constexpr bool& GlobalNamespace::GorillaGameManager::__cordl_internal_get__ITickSystemTick_TickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ITickSystemTick_TickRunning_k__BackingField;
}
constexpr bool const& GlobalNamespace::GorillaGameManager::__cordl_internal_get__ITickSystemTick_TickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ITickSystemTick_TickRunning_k__BackingField;
}
constexpr void GlobalNamespace::GorillaGameManager::__cordl_internal_set__ITickSystemTick_TickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ITickSystemTick_TickRunning_k__BackingField = value;
}
constexpr ::StringW& GlobalNamespace::GorillaGameManager::__cordl_internal_get__gameModeName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gameModeName;
}
constexpr ::StringW const& GlobalNamespace::GorillaGameManager::__cordl_internal_get__gameModeName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gameModeName;
}
constexpr void GlobalNamespace::GorillaGameManager::__cordl_internal_set__gameModeName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____gameModeName = value;
}
constexpr ::UnityW<::GlobalNamespace::GameModeSerializer>& GlobalNamespace::GorillaGameManager::__cordl_internal_get_serializer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serializer;
}
constexpr ::UnityW<::GlobalNamespace::GameModeSerializer> const& GlobalNamespace::GorillaGameManager::__cordl_internal_get_serializer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serializer;
}
constexpr void GlobalNamespace::GorillaGameManager::__cordl_internal_set_serializer(::UnityW<::GlobalNamespace::GameModeSerializer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serializer = value;
}
inline void GlobalNamespace::GorillaGameManager::setStaticF_OnTouch(::GlobalNamespace::GorillaGameManager_OnTouchDelegate*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::GorillaGameManager_OnTouchDelegate*, "OnTouch", ::GlobalNamespace::GorillaGameManager*>(std::forward<::GlobalNamespace::GorillaGameManager_OnTouchDelegate*>(value));
}
inline ::GlobalNamespace::GorillaGameManager_OnTouchDelegate* GlobalNamespace::GorillaGameManager::getStaticF_OnTouch()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::GorillaGameManager_OnTouchDelegate*, "OnTouch", ::GlobalNamespace::GorillaGameManager*>();
}
inline void GlobalNamespace::GorillaGameManager::setStaticF_onInstanceReady(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "onInstanceReady", ::GlobalNamespace::GorillaGameManager*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::GorillaGameManager::getStaticF_onInstanceReady()  {
return ::cordl_internals::getStaticField<::System::Action*, "onInstanceReady", ::GlobalNamespace::GorillaGameManager*>();
}
inline void GlobalNamespace::GorillaGameManager::setStaticF_replicatedClientReady(bool  value)  {
::cordl_internals::setStaticField<bool, "replicatedClientReady", ::GlobalNamespace::GorillaGameManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::GorillaGameManager::getStaticF_replicatedClientReady()  {
return ::cordl_internals::getStaticField<bool, "replicatedClientReady", ::GlobalNamespace::GorillaGameManager*>();
}
inline void GlobalNamespace::GorillaGameManager::setStaticF_onReplicatedClientReady(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "onReplicatedClientReady", ::GlobalNamespace::GorillaGameManager*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::GorillaGameManager::getStaticF_onReplicatedClientReady()  {
return ::cordl_internals::getStaticField<::System::Action*, "onReplicatedClientReady", ::GlobalNamespace::GorillaGameManager*>();
}
inline ::StringW GlobalNamespace::GorillaGameManager::GameModeEnumToName(::GorillaGameModes::GameModeType  gameMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                        {"GameModeEnumToName", {}, {::i2c::type_of<::GorillaGameModes::GameModeType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, gameMode);
}
inline void GlobalNamespace::GorillaGameManager::add_OnTouch(::GlobalNamespace::GorillaGameManager_OnTouchDelegate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                        {"add_OnTouch", {}, {::i2c::type_of<::GlobalNamespace::GorillaGameManager_OnTouchDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::GorillaGameManager::remove_OnTouch(::GlobalNamespace::GorillaGameManager_OnTouchDelegate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                        {"remove_OnTouch", {}, {::i2c::type_of<::GlobalNamespace::GorillaGameManager_OnTouchDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::GorillaGameManager> GlobalNamespace::GorillaGameManager::get_instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                        {"get_instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GorillaGameManager>>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::GorillaGameManager::ITickSystemTick_get_TickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                        {"ITickSystemTick.get_TickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaGameManager::ITickSystemTick_set_TickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                        {"ITickSystemTick.set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GorillaGameManager::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 63}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaGameManager::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaGameManager::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaGameManager::Tick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 64}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaGameManager::InfrequentUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 65}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GorillaGameManager::GameModeName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 66}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GorillaGameManager::GameModeNameRoomLabel()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 67}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaGameManager::LocalTag(::GlobalNamespace::NetPlayer*  taggedPlayer, ::GlobalNamespace::NetPlayer*  taggingPlayer, bool  bodyHit, bool  leftHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 68}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, taggedPlayer, taggingPlayer, bodyHit, leftHand);
}
inline void GlobalNamespace::GorillaGameManager::ReportTag(::GlobalNamespace::NetPlayer*  taggedPlayer, ::GlobalNamespace::NetPlayer*  taggingPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 69}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, taggedPlayer, taggingPlayer);
}
inline void GlobalNamespace::GorillaGameManager::HitPlayer(::GlobalNamespace::NetPlayer*  player)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 70}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline bool GlobalNamespace::GorillaGameManager::CanAffectPlayer(::GlobalNamespace::NetPlayer*  player, bool  thisFrame)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 71}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player, thisFrame);
}
inline void GlobalNamespace::GorillaGameManager::HandleHandTap(::GlobalNamespace::NetPlayer*  tappingPlayer, ::GlobalNamespace::Tappable*  hitTappable, bool  leftHand, ::UnityEngine::Vector3  handVelocity, ::UnityEngine::Vector3  tapSurfaceNormal)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 72}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tappingPlayer, hitTappable, leftHand, handVelocity, tapSurfaceNormal);
}
inline bool GlobalNamespace::GorillaGameManager::CanJoinFrienship(::GlobalNamespace::NetPlayer*  player)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 73}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player);
}
inline bool GlobalNamespace::GorillaGameManager::CanPlayerParticipate(::GlobalNamespace::NetPlayer*  player)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 74}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player);
}
inline void GlobalNamespace::GorillaGameManager::HandleRoundComplete()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 75}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaGameManager::HandleTagBroadcast(::GlobalNamespace::NetPlayer*  taggedPlayer, ::GlobalNamespace::NetPlayer*  taggingPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 76}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, taggedPlayer, taggingPlayer);
}
inline void GlobalNamespace::GorillaGameManager::HandleTagBroadcast(::GlobalNamespace::NetPlayer*  taggedPlayer, ::GlobalNamespace::NetPlayer*  taggingPlayer, double_t  tagTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 77}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, taggedPlayer, taggingPlayer, tagTime);
}
inline void GlobalNamespace::GorillaGameManager::NewVRRig(::GlobalNamespace::NetPlayer*  player, int32_t  vrrigPhotonViewID, bool  didTutorial)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 78}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, vrrigPhotonViewID, didTutorial);
}
inline bool GlobalNamespace::GorillaGameManager::LocalCanTag(::GlobalNamespace::NetPlayer*  myPlayer, ::GlobalNamespace::NetPlayer*  otherPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 79}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, myPlayer, otherPlayer);
}
inline bool GlobalNamespace::GorillaGameManager::LocalIsTagged(::GlobalNamespace::NetPlayer*  player)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 80}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player);
}
inline ::UnityW<::GlobalNamespace::VRRig> GlobalNamespace::GorillaGameManager::FindPlayerVRRig(::GlobalNamespace::NetPlayer*  player)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 81}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::VRRig>>(this, ___internal_method, player);
}
inline ::UnityW<::GlobalNamespace::VRRig> GlobalNamespace::GorillaGameManager::StaticFindRigForPlayer(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                        {"StaticFindRigForPlayer", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::VRRig>>(nullptr, ___internal_method, player);
}
inline ::ArrayW<float_t> GlobalNamespace::GorillaGameManager::LocalPlayerSpeed()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 82}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t>>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaGameManager::UpdatePlayerAppearance(::GlobalNamespace::VRRig*  rig)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 83}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig);
}
inline int32_t GlobalNamespace::GorillaGameManager::MyMatIndex(::GlobalNamespace::NetPlayer*  forPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 84}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, forPlayer);
}
inline int32_t GlobalNamespace::GorillaGameManager::SpecialHandFX(::GlobalNamespace::NetPlayer*  player, ::GlobalNamespace::RigContainer*  rigContainer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 85}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, player, rigContainer);
}
inline bool GlobalNamespace::GorillaGameManager::ValidGameMode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 86}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaGameManager::OnInstanceReady(::System::Action*  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                        {"OnInstanceReady", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, action);
}
inline void GlobalNamespace::GorillaGameManager::ReplicatedClientReady()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                        {"ReplicatedClientReady", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::GorillaGameManager::OnReplicatedClientReady(::System::Action*  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                        {"OnReplicatedClientReady", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, action);
}
inline ::UnityW<::GlobalNamespace::GameModeSerializer> GlobalNamespace::GorillaGameManager::get_Serializer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                        {"get_Serializer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GameModeSerializer>>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaGameManager::NetworkLinkSetup(::GlobalNamespace::GameModeSerializer*  netSerializer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 87}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, netSerializer);
}
inline void GlobalNamespace::GorillaGameManager::NetworkLinkDestroyed(::GlobalNamespace::GameModeSerializer*  netSerializer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 88}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, netSerializer);
}
inline ::GorillaGameModes::GameModeType GlobalNamespace::GorillaGameManager::GameType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 89}
                        )));
return ::cordl_internals::RunMethodRethrow<::GorillaGameModes::GameModeType>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GorillaGameManager::GameTypeName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                        {"GameTypeName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaGameManager::AddFusionDataBehaviour(::Fusion::NetworkObject*  behaviour)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 90}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, behaviour);
}
inline void GlobalNamespace::GorillaGameManager::OnSerializeRead(::System::Object*  newData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 91}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newData);
}
inline ::System::Object* GlobalNamespace::GorillaGameManager::OnSerializeWrite()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 92}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaGameManager::OnSerializeRead(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 93}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::GorillaGameManager::OnSerializeWrite(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 94}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::GorillaGameManager::ResetGame()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 95}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaGameManager::StartPlaying()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 96}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaGameManager::StopPlaying()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 97}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaGameManager::OnMasterClientSwitched(::Photon::Realtime::Player*  newMaster)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 98}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newMaster);
}
inline void GlobalNamespace::GorillaGameManager::OnRoomPropertiesUpdate(::ExitGames::Client::Photon::Hashtable*  propertiesThatChanged)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 99}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propertiesThatChanged);
}
inline void GlobalNamespace::GorillaGameManager::OnPlayerPropertiesUpdate(::Photon::Realtime::Player*  targetPlayer, ::ExitGames::Client::Photon::Hashtable*  changedProps)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 100}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetPlayer, changedProps);
}
inline void GlobalNamespace::GorillaGameManager::OnPlayerLeftRoom(::GlobalNamespace::NetPlayer*  otherPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 101}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, otherPlayer);
}
inline void GlobalNamespace::GorillaGameManager::OnPlayerEnteredRoom(::GlobalNamespace::NetPlayer*  newPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 102}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newPlayer);
}
inline void GlobalNamespace::GorillaGameManager::OnMasterClientSwitched(::GlobalNamespace::NetPlayer*  newMaster)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(), 103}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newMaster);
}
inline void GlobalNamespace::GorillaGameManager::ForceStopGame_DisconnectAndDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                        {"ForceStopGame_DisconnectAndDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::GorillaGameManager::AddLastTagged(::GlobalNamespace::NetPlayer*  taggedPlayer, ::GlobalNamespace::NetPlayer*  taggingPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                        {"AddLastTagged", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, taggedPlayer, taggingPlayer);
}
inline void GlobalNamespace::GorillaGameManager::WriteLastTagged(::Photon::Pun::PhotonStream*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                        {"WriteLastTagged", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream);
}
inline void GlobalNamespace::GorillaGameManager::ReadLastTagged(::Photon::Pun::PhotonStream*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                        {"ReadLastTagged", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream);
}
inline void GlobalNamespace::GorillaGameManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGameManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaGameManager* GlobalNamespace::GorillaGameManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaGameManager*>());
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr  GlobalNamespace::GorillaGameManager::operator ::GlobalNamespace::ITickSystemTick*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* GlobalNamespace::GorillaGameManager::i___GlobalNamespace__ITickSystemTick() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IWrappedSerializable"
constexpr  GlobalNamespace::GorillaGameManager::operator ::GlobalNamespace::IWrappedSerializable*() noexcept {
return static_cast<::GlobalNamespace::IWrappedSerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IWrappedSerializable"
constexpr ::GlobalNamespace::IWrappedSerializable* GlobalNamespace::GorillaGameManager::i___GlobalNamespace__IWrappedSerializable() noexcept {
return static_cast<::GlobalNamespace::IWrappedSerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr  GlobalNamespace::GorillaGameManager::operator ::Fusion::INetworkStruct*() noexcept {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* GlobalNamespace::GorillaGameManager::i___Fusion__INetworkStruct() noexcept {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaGameManager::GorillaGameManager()   {
}
//  Writing Method size for method: ::GlobalNamespace::GorillaGameManager___c__DisplayClass69_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGameManager___c__DisplayClass69_0::*)()>(&::GlobalNamespace::GorillaGameManager___c__DisplayClass69_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5906958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGameManager___c__DisplayClass69_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGameManager___c__DisplayClass69_0._OnInstanceReady_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGameManager___c__DisplayClass69_0::*)()>(&::GlobalNamespace::GorillaGameManager___c__DisplayClass69_0::_OnInstanceReady_b__0)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5907968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGameManager___c__DisplayClass69_0*>(),
                        {"<OnInstanceReady>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action*& GlobalNamespace::GorillaGameManager___c__DisplayClass69_0::__cordl_internal_get_action()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___action;
}
constexpr ::System::Action* const& GlobalNamespace::GorillaGameManager___c__DisplayClass69_0::__cordl_internal_get_action() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___action;
}
constexpr void GlobalNamespace::GorillaGameManager___c__DisplayClass69_0::__cordl_internal_set_action(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___action = value;
}
inline void GlobalNamespace::GorillaGameManager___c__DisplayClass69_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGameManager___c__DisplayClass69_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaGameManager___c__DisplayClass69_0::_OnInstanceReady_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGameManager___c__DisplayClass69_0*>(),
                        {"<OnInstanceReady>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaGameManager___c__DisplayClass69_0* GlobalNamespace::GorillaGameManager___c__DisplayClass69_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaGameManager___c__DisplayClass69_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaGameManager___c__DisplayClass69_0::GorillaGameManager___c__DisplayClass69_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::GorillaGameManager_OnTouchDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGameManager_OnTouchDelegate::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::GorillaGameManager_OnTouchDelegate::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5907814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGameManager_OnTouchDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGameManager_OnTouchDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGameManager_OnTouchDelegate::*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaGameManager_OnTouchDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5907920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaGameManager_OnTouchDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaGameManager_OnTouchDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGameManager_OnTouchDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::GorillaGameManager_OnTouchDelegate::*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::GorillaGameManager_OnTouchDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5907934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaGameManager_OnTouchDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaGameManager_OnTouchDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGameManager_OnTouchDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGameManager_OnTouchDelegate::*)(::System::IAsyncResult*)>(&::GlobalNamespace::GorillaGameManager_OnTouchDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x590795c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaGameManager_OnTouchDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaGameManager_OnTouchDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GorillaGameManager_OnTouchDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGameManager_OnTouchDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::GorillaGameManager_OnTouchDelegate::Invoke(::GlobalNamespace::NetPlayer*  taggedPlayer, ::GlobalNamespace::NetPlayer*  taggingPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaGameManager_OnTouchDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, taggedPlayer, taggingPlayer);
}
inline ::System::IAsyncResult* GlobalNamespace::GorillaGameManager_OnTouchDelegate::BeginInvoke(::GlobalNamespace::NetPlayer*  taggedPlayer, ::GlobalNamespace::NetPlayer*  taggingPlayer, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaGameManager_OnTouchDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, taggedPlayer, taggingPlayer, callback, object);
}
inline void GlobalNamespace::GorillaGameManager_OnTouchDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaGameManager_OnTouchDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::GorillaGameManager_OnTouchDelegate* GlobalNamespace::GorillaGameManager_OnTouchDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaGameManager_OnTouchDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaGameManager_OnTouchDelegate::GorillaGameManager_OnTouchDelegate()   {
}
