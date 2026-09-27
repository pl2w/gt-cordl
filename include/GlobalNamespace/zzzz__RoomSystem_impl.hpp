#pragma once
// IWYU pragma private; include "GlobalNamespace/RoomSystem.hpp"
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_impl.hpp"
#include "GlobalNamespace/zzzz__RoomSystem_ProjectileSource_impl.hpp"
#include "GlobalNamespace/zzzz__RoomSystem_impl.hpp"
#include "Photon/Pun/zzzz__PhotonView_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__RoomSystem_def.hpp"
#include "ExitGames/Client/Photon/zzzz__EventData_def.hpp"
#include "GlobalNamespace/zzzz__CallLimiter_def.hpp"
#include "GlobalNamespace/zzzz__FXSystemSettings_def.hpp"
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include "GlobalNamespace/zzzz__GorillaFriendCollider_def.hpp"
#include "GlobalNamespace/zzzz__IFXContext_def.hpp"
#include "GlobalNamespace/zzzz__NetEventOptions_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_def.hpp"
#include "GlobalNamespace/zzzz__PlayerEffect_def.hpp"
#include "GlobalNamespace/zzzz__RoomSystemEffect_def.hpp"
#include "GlobalNamespace/zzzz__RoomSystemSettings_def.hpp"
#include "GlobalNamespace/zzzz__RoomSystem_Events_def.hpp"
#include "GlobalNamespace/zzzz__RoomSystem_LavaSyncEventData_def.hpp"
#include "GlobalNamespace/zzzz__RoomSystem_PlayerEffectConfig_def.hpp"
#include "GlobalNamespace/zzzz__RoomSystem_ProjectileSource_def.hpp"
#include "GlobalNamespace/zzzz__RoomSystem_SoundEffect_def.hpp"
#include "GlobalNamespace/zzzz__RoomSystem_StatusEffects_def.hpp"
#include "GlobalNamespace/zzzz__RoomSystem_def.hpp"
#include "GlobalNamespace/zzzz__SnowballThrowable_def.hpp"
#include "GlobalNamespace/zzzz__StaticArrayBag_1_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaGameModes/zzzz__GameModeType_def.hpp"
#include "GorillaNetworking/zzzz__GorillaNetworkJoinTrigger_def.hpp"
#include "GorillaTag/zzzz__DelegateListProcessor_1_def.hpp"
#include "GorillaTag/zzzz__DelegateListProcessor_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Timers/zzzz__ElapsedEventArgs_def.hpp"
#include "System/Timers/zzzz__Timer_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.DeserializeLaunchProjectile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::System::Object*>, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::RoomSystem::DeserializeLaunchProjectile)> {
  constexpr static std::size_t size = 0x754;
  constexpr static std::size_t addrs = 0x5acb750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"DeserializeLaunchProjectile", {}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.SendLaunchProjectile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::GlobalNamespace::RoomSystem_ProjectileSource, int32_t, bool, uint8_t, uint8_t, uint8_t, uint8_t)>(&::GlobalNamespace::RoomSystem::SendLaunchProjectile)> {
  constexpr static std::size_t size = 0x484;
  constexpr static std::size_t addrs = 0x5acbea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"SendLaunchProjectile", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::RoomSystem_ProjectileSource>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.ImpactEffect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::VRRig*, ::UnityEngine::Vector3, float_t, float_t, float_t, float_t, int32_t, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::RoomSystem::ImpactEffect)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5acc5f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"ImpactEffect", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.DeserializeImpactEffect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::System::Object*>, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::RoomSystem::DeserializeImpactEffect)> {
  constexpr static std::size_t size = 0x4fc;
  constexpr static std::size_t addrs = 0x5acc714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"DeserializeImpactEffect", {}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.SendImpactEffect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, float_t, float_t, float_t, float_t, int32_t)>(&::GlobalNamespace::RoomSystem::SendImpactEffect)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0x5accc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"SendImpactEffect", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.SendLavaSync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t, uint8_t, double_t, float_t, int32_t, ::ArrayW<int32_t>)>(&::GlobalNamespace::RoomSystem::SendLavaSync)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5accff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"SendLavaSync", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.SendLavaSyncToPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t, uint8_t, double_t, float_t, int32_t, ::ArrayW<int32_t>, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::RoomSystem::SendLavaSyncToPlayer)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5acd400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"SendLavaSyncToPlayer", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.PackLavaSyncData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t, uint8_t, double_t, float_t, int32_t, ::ArrayW<int32_t>)>(&::GlobalNamespace::RoomSystem::PackLavaSyncData)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x5acd108;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"PackLavaSyncData", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.DeserializeLavaSync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::System::Object*>, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::RoomSystem::DeserializeLavaSync)> {
  constexpr static std::size_t size = 0x50c;
  constexpr static std::size_t addrs = 0x5acd5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"DeserializeLavaSync", {}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.SendMonkePointsRedeemed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::GlobalNamespace::RoomSystem::SendMonkePointsRedeemed)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5acdacc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"SendMonkePointsRedeemed", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.DeserializeMonkePointsRedeemed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::System::Object*>, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::RoomSystem::DeserializeMonkePointsRedeemed)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5acdbf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"DeserializeMonkePointsRedeemed", {}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RoomSystem::*)()>(&::GlobalNamespace::RoomSystem::Awake)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x5acdd8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RoomSystem::*)()>(&::GlobalNamespace::RoomSystem::Start)> {
  constexpr static std::size_t size = 0x530;
  constexpr static std::size_t addrs = 0x5ace0ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.OnApplicationPause
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RoomSystem::*)(bool)>(&::GlobalNamespace::RoomSystem::OnApplicationPause)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5ace5dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"OnApplicationPause", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.OnJoinedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RoomSystem::*)()>(&::GlobalNamespace::RoomSystem::OnJoinedRoom)> {
  constexpr static std::size_t size = 0x8a8;
  constexpr static std::size_t addrs = 0x5ace694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"OnJoinedRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.OnPlayerEnteredRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RoomSystem::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::RoomSystem::OnPlayerEnteredRoom)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x5acef3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"OnPlayerEnteredRoom", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.OnLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RoomSystem::*)()>(&::GlobalNamespace::RoomSystem::OnLeftRoom)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0x5acf28c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"OnLeftRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.OnPlayerLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RoomSystem::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::RoomSystem::OnPlayerLeftRoom)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x5acf70c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"OnPlayerLeftRoom", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.get_UseRoomSizeOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::RoomSystem::get_UseRoomSizeOverride)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5acf908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"get_UseRoomSizeOverride", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.set_UseRoomSizeOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GlobalNamespace::RoomSystem::set_UseRoomSizeOverride)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5acf960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"set_UseRoomSizeOverride", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.get_RoomSizeOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)()>(&::GlobalNamespace::RoomSystem::get_RoomSizeOverride)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5acf9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"get_RoomSizeOverride", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.set_RoomSizeOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t)>(&::GlobalNamespace::RoomSystem::set_RoomSizeOverride)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5acfa18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"set_RoomSizeOverride", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.get_RoomSizeReduction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)()>(&::GlobalNamespace::RoomSystem::get_RoomSizeReduction)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5acfa74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"get_RoomSizeReduction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.set_RoomSizeReduction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t)>(&::GlobalNamespace::RoomSystem::set_RoomSizeReduction)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5acfacc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"set_RoomSizeReduction", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.get_PlayersInRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>* (*)()>(&::GlobalNamespace::RoomSystem::get_PlayersInRoom)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5acfb28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"get_PlayersInRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.get_RoomGameMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::GlobalNamespace::RoomSystem::get_RoomGameMode)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5acfb80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"get_RoomGameMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.get_JoinedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::RoomSystem::get_JoinedRoom)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5acc328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"get_JoinedRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.get_AmITheHost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::RoomSystem::get_AmITheHost)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5acfbd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"get_AmITheHost", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.get_IsVStumpRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::RoomSystem::get_IsVStumpRoom)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5acfc88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"get_IsVStumpRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.set_IsVStumpRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GlobalNamespace::RoomSystem::set_IsVStumpRoom)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5acfce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"set_IsVStumpRoom", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.get_WasRoomPrivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::RoomSystem::get_WasRoomPrivate)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5acfd40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"get_WasRoomPrivate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.set_WasRoomPrivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GlobalNamespace::RoomSystem::set_WasRoomPrivate)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5acfd98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"set_WasRoomPrivate", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.get_WasRoomSubscription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::RoomSystem::get_WasRoomSubscription)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5acfdf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"get_WasRoomSubscription", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.set_WasRoomSubscription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GlobalNamespace::RoomSystem::set_WasRoomSubscription)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5acfe50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"set_WasRoomSubscription", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.get_InitialJoinTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger> (*)()>(&::GlobalNamespace::RoomSystem::get_InitialJoinTrigger)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5acfeb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"get_InitialJoinTrigger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.set_InitialJoinTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GorillaNetworking::GorillaNetworkJoinTrigger*)>(&::GlobalNamespace::RoomSystem::set_InitialJoinTrigger)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5acff08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"set_InitialJoinTrigger", {}, {::i2c::type_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.StaticLoad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::RoomSystem::StaticLoad)> {
  constexpr static std::size_t size = 0x65c;
  constexpr static std::size_t addrs = 0x5ad069c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"StaticLoad", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.TimerDC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::System::Timers::ElapsedEventArgs*)>(&::GlobalNamespace::RoomSystem::TimerDC)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5ad0cf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"TimerDC", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Timers::ElapsedEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.GetMaxRoomSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)()>(&::GlobalNamespace::RoomSystem::GetMaxRoomSize)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5ad0dac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"GetMaxRoomSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.GetCurrentRoomExpectedSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)()>(&::GlobalNamespace::RoomSystem::GetCurrentRoomExpectedSize)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0x5ad0e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"GetCurrentRoomExpectedSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.GetRoomSizeForCreate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(::GlobalNamespace::GTZone, ::GorillaGameModes::GameModeType, bool, bool)>(&::GlobalNamespace::RoomSystem::GetRoomSizeForCreate)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5ad14a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"GetRoomSizeForCreate", {}, {::i2c::type_of<::GlobalNamespace::GTZone>(), ::i2c::type_of<::GorillaGameModes::GameModeType>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.OverrideRoomSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t)>(&::GlobalNamespace::RoomSystem::OverrideRoomSize)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5ad15c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"OverrideRoomSize", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.GetOverridenRoomSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)()>(&::GlobalNamespace::RoomSystem::GetOverridenRoomSize)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5ad1700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"GetOverridenRoomSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.ClearOverridenRoomSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::RoomSystem::ClearOverridenRoomSize)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5ad17dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"ClearOverridenRoomSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.MakeRoomMultiplayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t)>(&::GlobalNamespace::RoomSystem::MakeRoomMultiplayer)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5ad18a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"MakeRoomMultiplayer", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.GetLowestActorNumberPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NetPlayer* (*)()>(&::GlobalNamespace::RoomSystem::GetLowestActorNumberPlayer)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5ad12d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"GetLowestActorNumberPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.SendEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t, ::ArrayW<::System::Object*>, ::by_ref<::GlobalNamespace::NetPlayer*>, bool)>(&::GlobalNamespace::RoomSystem::SendEvent)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5acd4d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"SendEvent", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NetPlayer*>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.SendEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t, ::ArrayW<::System::Object*>, ::by_ref<::GlobalNamespace::NetEventOptions*>, bool)>(&::GlobalNamespace::RoomSystem::SendEvent)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x5acc3dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"SendEvent", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NetEventOptions*>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.OnEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ExitGames::Client::Photon::EventData*)>(&::GlobalNamespace::RoomSystem::OnEvent)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5ad1990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"OnEvent", {}, {::i2c::type_of<::ExitGames::Client::Photon::EventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.OnEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t, ::System::Object*, int32_t)>(&::GlobalNamespace::RoomSystem::OnEvent)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x5ad1a24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"OnEvent", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.SearchForNearby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::System::Object*>, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::RoomSystem::SearchForNearby)> {
  constexpr static std::size_t size = 0x464;
  constexpr static std::size_t addrs = 0x5ad1d1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"SearchForNearby", {}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.SearchForParty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::System::Object*>, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::RoomSystem::SearchForParty)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x5ad2180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"SearchForParty", {}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.SearchForElevator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::System::Object*>, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::RoomSystem::SearchForElevator)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x5ad2538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"SearchForElevator", {}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.SearchForShuttle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::System::Object*>, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::RoomSystem::SearchForShuttle)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x5ad2884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"SearchForShuttle", {}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.SendNearbyFollowCommand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GorillaFriendCollider*, ::StringW, ::StringW)>(&::GlobalNamespace::RoomSystem::SendNearbyFollowCommand)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x5ad2bd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"SendNearbyFollowCommand", {}, {::i2c::type_of<::GlobalNamespace::GorillaFriendCollider*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.SendPartyFollowCommand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW)>(&::GlobalNamespace::RoomSystem::SendPartyFollowCommand)> {
  constexpr static std::size_t size = 0x514;
  constexpr static std::size_t addrs = 0x5ad2f94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"SendPartyFollowCommand", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.SendElevatorFollowCommand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW, ::GlobalNamespace::GorillaFriendCollider*, ::GlobalNamespace::GorillaFriendCollider*)>(&::GlobalNamespace::RoomSystem::SendElevatorFollowCommand)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5ad34a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"SendElevatorFollowCommand", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::GorillaFriendCollider*>(), ::i2c::type_of<::GlobalNamespace::GorillaFriendCollider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.SendShuttleFollowCommand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW, ::GlobalNamespace::GorillaFriendCollider*, ::GlobalNamespace::GorillaFriendCollider*)>(&::GlobalNamespace::RoomSystem::SendShuttleFollowCommand)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5ad3940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"SendShuttleFollowCommand", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::GorillaFriendCollider*>(), ::i2c::type_of<::GlobalNamespace::GorillaFriendCollider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.SendGroupJoinFollowCommand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t, ::StringW, ::StringW, ::GlobalNamespace::GorillaFriendCollider*, ::GlobalNamespace::GorillaFriendCollider*)>(&::GlobalNamespace::RoomSystem::SendGroupJoinFollowCommand)> {
  constexpr static std::size_t size = 0x418;
  constexpr static std::size_t addrs = 0x5ad3528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"SendGroupJoinFollowCommand", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::GorillaFriendCollider*>(), ::i2c::type_of<::GlobalNamespace::GorillaFriendCollider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.DeserializeReportTouch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::System::Object*>, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::RoomSystem::DeserializeReportTouch)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5ad39c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"DeserializeReportTouch", {}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.SendReportTouch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::RoomSystem::SendReportTouch)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5ad3b34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"SendReportTouch", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.LaunchPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::NetPlayer*, ::UnityEngine::Vector3)>(&::GlobalNamespace::RoomSystem::LaunchPlayer)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5ad3cd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"LaunchPlayer", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.DeserializePlayerLaunched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::System::Object*>, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::RoomSystem::DeserializePlayerLaunched)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x5ad3de4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"DeserializePlayerLaunched", {}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.HitPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::NetPlayer*, ::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::RoomSystem::HitPlayer)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x5ad4164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"HitPlayer", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.DeserializePlayerHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::System::Object*>, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::RoomSystem::DeserializePlayerHit)> {
  constexpr static std::size_t size = 0x6e8;
  constexpr static std::size_t addrs = 0x5ad4418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"DeserializePlayerHit", {}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.AddEffect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::RoomSystemEffect*)>(&::GlobalNamespace::RoomSystem::AddEffect)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5ad4b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"AddEffect", {}, {::i2c::type_of<::GlobalNamespace::RoomSystemEffect*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.RemoveEffect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::RoomSystemEffect*)>(&::GlobalNamespace::RoomSystem::RemoveEffect)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5ad4bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"RemoveEffect", {}, {::i2c::type_of<::GlobalNamespace::RoomSystemEffect*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.PlayEffect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::RoomSystemEffect*)>(&::GlobalNamespace::RoomSystem::PlayEffect)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5ad4c78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"PlayEffect", {}, {::i2c::type_of<::GlobalNamespace::RoomSystemEffect*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.DeserializeEffect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::System::Object*>, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::RoomSystem::DeserializeEffect)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5ad4dc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"DeserializeEffect", {}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.SetSlowedTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::RoomSystem::SetSlowedTime)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x5ad4f2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"SetSlowedTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.SetTaggedTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::RoomSystem::SetTaggedTime)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x5ad5270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"SetTaggedTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.SetFrozenTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::RoomSystem::SetFrozenTime)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x5ad5550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"SetFrozenTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.SetJoinedTaggedTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::RoomSystem::SetJoinedTaggedTime)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x5ad5880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"SetJoinedTaggedTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.SetUntaggedTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::RoomSystem::SetUntaggedTime)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x5ad5a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"SetUntaggedTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.OnStatusEffect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::RoomSystem_StatusEffects)>(&::GlobalNamespace::RoomSystem::OnStatusEffect)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5ad5ccc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"OnStatusEffect", {}, {::i2c::type_of<::GlobalNamespace::RoomSystem_StatusEffects>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.DeserializeStatusEffect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::System::Object*>, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::RoomSystem::DeserializeStatusEffect)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x5ad5de4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"DeserializeStatusEffect", {}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.SendStatusEffectAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::RoomSystem_StatusEffects)>(&::GlobalNamespace::RoomSystem::SendStatusEffectAll)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5ad604c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"SendStatusEffectAll", {}, {::i2c::type_of<::GlobalNamespace::RoomSystem_StatusEffects>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.SendStatusEffectToPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::RoomSystem_StatusEffects, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::RoomSystem::SendStatusEffectToPlayer)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5ad61ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"SendStatusEffectToPlayer", {}, {::i2c::type_of<::GlobalNamespace::RoomSystem_StatusEffects>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.PlaySoundEffect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, float_t, bool)>(&::GlobalNamespace::RoomSystem::PlaySoundEffect)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5ad62ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"PlaySoundEffect", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.PlaySoundEffect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, float_t, bool, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::RoomSystem::PlaySoundEffect)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5ad63b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"PlaySoundEffect", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.OnPlaySoundEffect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::RoomSystem_SoundEffect, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::RoomSystem::OnPlaySoundEffect)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5ad64a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"OnPlaySoundEffect", {}, {::i2c::type_of<::GlobalNamespace::RoomSystem_SoundEffect>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.DeserializeSoundEffect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::System::Object*>, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::RoomSystem::DeserializeSoundEffect)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x5ad656c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"DeserializeSoundEffect", {}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.SendSoundEffectAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, float_t, bool)>(&::GlobalNamespace::RoomSystem::SendSoundEffectAll)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5ad6940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"SendSoundEffectAll", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.SendSoundEffectAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::RoomSystem_SoundEffect)>(&::GlobalNamespace::RoomSystem::SendSoundEffectAll)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x5ad69c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"SendSoundEffectAll", {}, {::i2c::type_of<::GlobalNamespace::RoomSystem_SoundEffect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.SendSoundEffectToPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, float_t, ::GlobalNamespace::NetPlayer*, bool)>(&::GlobalNamespace::RoomSystem::SendSoundEffectToPlayer)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5ad6c3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"SendSoundEffectToPlayer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.SendSoundEffectToPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::RoomSystem_SoundEffect, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::RoomSystem::SendSoundEffectToPlayer)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x5ad6cbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"SendSoundEffectToPlayer", {}, {::i2c::type_of<::GlobalNamespace::RoomSystem_SoundEffect>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.SendSoundEffectOnOther
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, float_t, ::GlobalNamespace::NetPlayer*, bool)>(&::GlobalNamespace::RoomSystem::SendSoundEffectOnOther)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5ad6ef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"SendSoundEffectOnOther", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.SendSoundEffectOnOther
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::RoomSystem_SoundEffect, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::RoomSystem::SendSoundEffectOnOther)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x5ad6f74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"SendSoundEffectOnOther", {}, {::i2c::type_of<::GlobalNamespace::RoomSystem_SoundEffect>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.OnPlayerEffect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::PlayerEffect, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::RoomSystem::OnPlayerEffect)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x5ad7224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"OnPlayerEffect", {}, {::i2c::type_of<::GlobalNamespace::PlayerEffect>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.DeserializePlayerEffect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::System::Object*>, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::RoomSystem::DeserializePlayerEffect)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x5ad749c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"DeserializePlayerEffect", {}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem.SendPlayerEffect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::PlayerEffect, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::RoomSystem::SendPlayerEffect)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5ad7680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"SendPlayerEffect", {}, {::i2c::type_of<::GlobalNamespace::PlayerEffect>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RoomSystem::*)()>(&::GlobalNamespace::RoomSystem::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5ad7848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::RoomSystemSettings>& GlobalNamespace::RoomSystem::__cordl_internal_get_roomSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomSettings;
}
constexpr ::UnityW<::GlobalNamespace::RoomSystemSettings> const& GlobalNamespace::RoomSystem::__cordl_internal_get_roomSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomSettings;
}
constexpr void GlobalNamespace::RoomSystem::__cordl_internal_set_roomSettings(::UnityW<::GlobalNamespace::RoomSystemSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___roomSettings = value;
}
constexpr ::ArrayW<::StringW>& GlobalNamespace::RoomSystem::__cordl_internal_get_prefabsToInstantiateByPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefabsToInstantiateByPath;
}
constexpr ::ArrayW<::StringW> const& GlobalNamespace::RoomSystem::__cordl_internal_get_prefabsToInstantiateByPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefabsToInstantiateByPath;
}
constexpr void GlobalNamespace::RoomSystem::__cordl_internal_set_prefabsToInstantiateByPath(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prefabsToInstantiateByPath = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::RoomSystem::__cordl_internal_get_prefabsToInstantiate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefabsToInstantiate;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::RoomSystem::__cordl_internal_get_prefabsToInstantiate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefabsToInstantiate;
}
constexpr void GlobalNamespace::RoomSystem::__cordl_internal_set_prefabsToInstantiate(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prefabsToInstantiate = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::RoomSystem::__cordl_internal_get_prefabsInstantiated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefabsInstantiated;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::RoomSystem::__cordl_internal_get_prefabsInstantiated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefabsInstantiated;
}
constexpr void GlobalNamespace::RoomSystem::__cordl_internal_set_prefabsInstantiated(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prefabsInstantiated = value;
}
inline void GlobalNamespace::RoomSystem::setStaticF_impactEffect(::GlobalNamespace::RoomSystem_ImpactFxContainer*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::RoomSystem_ImpactFxContainer*, "impactEffect", ::GlobalNamespace::RoomSystem*>(std::forward<::GlobalNamespace::RoomSystem_ImpactFxContainer*>(value));
}
inline ::GlobalNamespace::RoomSystem_ImpactFxContainer* GlobalNamespace::RoomSystem::getStaticF_impactEffect()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::RoomSystem_ImpactFxContainer*, "impactEffect", ::GlobalNamespace::RoomSystem*>();
}
inline void GlobalNamespace::RoomSystem::setStaticF_launchProjectile(::GlobalNamespace::RoomSystem_LaunchProjectileContainer*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::RoomSystem_LaunchProjectileContainer*, "launchProjectile", ::GlobalNamespace::RoomSystem*>(std::forward<::GlobalNamespace::RoomSystem_LaunchProjectileContainer*>(value));
}
inline ::GlobalNamespace::RoomSystem_LaunchProjectileContainer* GlobalNamespace::RoomSystem::getStaticF_launchProjectile()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::RoomSystem_LaunchProjectileContainer*, "launchProjectile", ::GlobalNamespace::RoomSystem*>();
}
inline void GlobalNamespace::RoomSystem::setStaticF_playerImpactEffectPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::GameObject>, "playerImpactEffectPrefab", ::GlobalNamespace::RoomSystem*>(std::forward<::UnityW<::UnityEngine::GameObject>>(value));
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::RoomSystem::getStaticF_playerImpactEffectPrefab()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::GameObject>, "playerImpactEffectPrefab", ::GlobalNamespace::RoomSystem*>();
}
inline void GlobalNamespace::RoomSystem::setStaticF_projectileSendData(::ArrayW<::System::Object*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Object*>, "projectileSendData", ::GlobalNamespace::RoomSystem*>(std::forward<::ArrayW<::System::Object*>>(value));
}
inline ::ArrayW<::System::Object*> GlobalNamespace::RoomSystem::getStaticF_projectileSendData()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Object*>, "projectileSendData", ::GlobalNamespace::RoomSystem*>();
}
inline void GlobalNamespace::RoomSystem::setStaticF_impactSendData(::ArrayW<::System::Object*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Object*>, "impactSendData", ::GlobalNamespace::RoomSystem*>(std::forward<::ArrayW<::System::Object*>>(value));
}
inline ::ArrayW<::System::Object*> GlobalNamespace::RoomSystem::getStaticF_impactSendData()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Object*>, "impactSendData", ::GlobalNamespace::RoomSystem*>();
}
inline void GlobalNamespace::RoomSystem::setStaticF_hashValues(::System::Collections::Generic::List_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<int32_t>*, "hashValues", ::GlobalNamespace::RoomSystem*>(std::forward<::System::Collections::Generic::List_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::List_1<int32_t>* GlobalNamespace::RoomSystem::getStaticF_hashValues()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<int32_t>*, "hashValues", ::GlobalNamespace::RoomSystem*>();
}
inline void GlobalNamespace::RoomSystem::setStaticF_OnLavaSyncReceived(::System::Action_1<::GlobalNamespace::RoomSystem_LavaSyncEventData>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::GlobalNamespace::RoomSystem_LavaSyncEventData>*, "OnLavaSyncReceived", ::GlobalNamespace::RoomSystem*>(std::forward<::System::Action_1<::GlobalNamespace::RoomSystem_LavaSyncEventData>*>(value));
}
inline ::System::Action_1<::GlobalNamespace::RoomSystem_LavaSyncEventData>* GlobalNamespace::RoomSystem::getStaticF_OnLavaSyncReceived()  {
return ::cordl_internals::getStaticField<::System::Action_1<::GlobalNamespace::RoomSystem_LavaSyncEventData>*, "OnLavaSyncReceived", ::GlobalNamespace::RoomSystem*>();
}
inline void GlobalNamespace::RoomSystem::setStaticF_lavaSyncSendData(::ArrayW<::System::Object*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Object*>, "lavaSyncSendData", ::GlobalNamespace::RoomSystem*>(std::forward<::ArrayW<::System::Object*>>(value));
}
inline ::ArrayW<::System::Object*> GlobalNamespace::RoomSystem::getStaticF_lavaSyncSendData()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Object*>, "lavaSyncSendData", ::GlobalNamespace::RoomSystem*>();
}
inline void GlobalNamespace::RoomSystem::setStaticF_OnMonkePointsRedeemedReceived(::System::Action_2<::GlobalNamespace::NetPlayer*,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::GlobalNamespace::NetPlayer*,int32_t>*, "OnMonkePointsRedeemedReceived", ::GlobalNamespace::RoomSystem*>(std::forward<::System::Action_2<::GlobalNamespace::NetPlayer*,int32_t>*>(value));
}
inline ::System::Action_2<::GlobalNamespace::NetPlayer*,int32_t>* GlobalNamespace::RoomSystem::getStaticF_OnMonkePointsRedeemedReceived()  {
return ::cordl_internals::getStaticField<::System::Action_2<::GlobalNamespace::NetPlayer*,int32_t>*, "OnMonkePointsRedeemedReceived", ::GlobalNamespace::RoomSystem*>();
}
inline void GlobalNamespace::RoomSystem::setStaticF_monkePointsRedeemedSendData(::ArrayW<::System::Object*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Object*>, "monkePointsRedeemedSendData", ::GlobalNamespace::RoomSystem*>(std::forward<::ArrayW<::System::Object*>>(value));
}
inline ::ArrayW<::System::Object*> GlobalNamespace::RoomSystem::getStaticF_monkePointsRedeemedSendData()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Object*>, "monkePointsRedeemedSendData", ::GlobalNamespace::RoomSystem*>();
}
inline void GlobalNamespace::RoomSystem::setStaticF_playerEffectDictionary(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::PlayerEffect,::GlobalNamespace::RoomSystem_PlayerEffectConfig>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::PlayerEffect,::GlobalNamespace::RoomSystem_PlayerEffectConfig>*, "playerEffectDictionary", ::GlobalNamespace::RoomSystem*>(std::forward<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::PlayerEffect,::GlobalNamespace::RoomSystem_PlayerEffectConfig>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::PlayerEffect,::GlobalNamespace::RoomSystem_PlayerEffectConfig>* GlobalNamespace::RoomSystem::getStaticF_playerEffectDictionary()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::PlayerEffect,::GlobalNamespace::RoomSystem_PlayerEffectConfig>*, "playerEffectDictionary", ::GlobalNamespace::RoomSystem*>();
}
inline void GlobalNamespace::RoomSystem::setStaticF___roomSettings(::UnityW<::GlobalNamespace::RoomSystemSettings>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::RoomSystemSettings>, "__roomSettings", ::GlobalNamespace::RoomSystem*>(std::forward<::UnityW<::GlobalNamespace::RoomSystemSettings>>(value));
}
inline ::UnityW<::GlobalNamespace::RoomSystemSettings> GlobalNamespace::RoomSystem::getStaticF___roomSettings()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::RoomSystemSettings>, "__roomSettings", ::GlobalNamespace::RoomSystem*>();
}
inline void GlobalNamespace::RoomSystem::setStaticF_callbackInstance(::UnityW<::GlobalNamespace::RoomSystem>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::RoomSystem>, "callbackInstance", ::GlobalNamespace::RoomSystem*>(std::forward<::UnityW<::GlobalNamespace::RoomSystem>>(value));
}
inline ::UnityW<::GlobalNamespace::RoomSystem> GlobalNamespace::RoomSystem::getStaticF_callbackInstance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::RoomSystem>, "callbackInstance", ::GlobalNamespace::RoomSystem*>();
}
inline void GlobalNamespace::RoomSystem::setStaticF__UseRoomSizeOverride_k__BackingField(bool  value)  {
::cordl_internals::setStaticField<bool, "<UseRoomSizeOverride>k__BackingField", ::GlobalNamespace::RoomSystem*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::RoomSystem::getStaticF__UseRoomSizeOverride_k__BackingField()  {
return ::cordl_internals::getStaticField<bool, "<UseRoomSizeOverride>k__BackingField", ::GlobalNamespace::RoomSystem*>();
}
inline void GlobalNamespace::RoomSystem::setStaticF__RoomSizeOverride_k__BackingField(uint8_t  value)  {
::cordl_internals::setStaticField<uint8_t, "<RoomSizeOverride>k__BackingField", ::GlobalNamespace::RoomSystem*>(std::forward<uint8_t>(value));
}
inline uint8_t GlobalNamespace::RoomSystem::getStaticF__RoomSizeOverride_k__BackingField()  {
return ::cordl_internals::getStaticField<uint8_t, "<RoomSizeOverride>k__BackingField", ::GlobalNamespace::RoomSystem*>();
}
inline void GlobalNamespace::RoomSystem::setStaticF_m_roomSizeOnJoin(uint8_t  value)  {
::cordl_internals::setStaticField<uint8_t, "m_roomSizeOnJoin", ::GlobalNamespace::RoomSystem*>(std::forward<uint8_t>(value));
}
inline uint8_t GlobalNamespace::RoomSystem::getStaticF_m_roomSizeOnJoin()  {
return ::cordl_internals::getStaticField<uint8_t, "m_roomSizeOnJoin", ::GlobalNamespace::RoomSystem*>();
}
inline void GlobalNamespace::RoomSystem::setStaticF__RoomSizeReduction_k__BackingField(uint8_t  value)  {
::cordl_internals::setStaticField<uint8_t, "<RoomSizeReduction>k__BackingField", ::GlobalNamespace::RoomSystem*>(std::forward<uint8_t>(value));
}
inline uint8_t GlobalNamespace::RoomSystem::getStaticF__RoomSizeReduction_k__BackingField()  {
return ::cordl_internals::getStaticField<uint8_t, "<RoomSizeReduction>k__BackingField", ::GlobalNamespace::RoomSystem*>();
}
inline void GlobalNamespace::RoomSystem::setStaticF_netPlayersInRoom(::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*, "netPlayersInRoom", ::GlobalNamespace::RoomSystem*>(std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*>(value));
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>* GlobalNamespace::RoomSystem::getStaticF_netPlayersInRoom()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*, "netPlayersInRoom", ::GlobalNamespace::RoomSystem*>();
}
inline void GlobalNamespace::RoomSystem::setStaticF_roomGameMode(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "roomGameMode", ::GlobalNamespace::RoomSystem*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::RoomSystem::getStaticF_roomGameMode()  {
return ::cordl_internals::getStaticField<::StringW, "roomGameMode", ::GlobalNamespace::RoomSystem*>();
}
inline void GlobalNamespace::RoomSystem::setStaticF_joinedRoom(bool  value)  {
::cordl_internals::setStaticField<bool, "joinedRoom", ::GlobalNamespace::RoomSystem*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::RoomSystem::getStaticF_joinedRoom()  {
return ::cordl_internals::getStaticField<bool, "joinedRoom", ::GlobalNamespace::RoomSystem*>();
}
inline void GlobalNamespace::RoomSystem::setStaticF__IsVStumpRoom_k__BackingField(bool  value)  {
::cordl_internals::setStaticField<bool, "<IsVStumpRoom>k__BackingField", ::GlobalNamespace::RoomSystem*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::RoomSystem::getStaticF__IsVStumpRoom_k__BackingField()  {
return ::cordl_internals::getStaticField<bool, "<IsVStumpRoom>k__BackingField", ::GlobalNamespace::RoomSystem*>();
}
inline void GlobalNamespace::RoomSystem::setStaticF__WasRoomPrivate_k__BackingField(bool  value)  {
::cordl_internals::setStaticField<bool, "<WasRoomPrivate>k__BackingField", ::GlobalNamespace::RoomSystem*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::RoomSystem::getStaticF__WasRoomPrivate_k__BackingField()  {
return ::cordl_internals::getStaticField<bool, "<WasRoomPrivate>k__BackingField", ::GlobalNamespace::RoomSystem*>();
}
inline void GlobalNamespace::RoomSystem::setStaticF__WasRoomSubscription_k__BackingField(bool  value)  {
::cordl_internals::setStaticField<bool, "<WasRoomSubscription>k__BackingField", ::GlobalNamespace::RoomSystem*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::RoomSystem::getStaticF__WasRoomSubscription_k__BackingField()  {
return ::cordl_internals::getStaticField<bool, "<WasRoomSubscription>k__BackingField", ::GlobalNamespace::RoomSystem*>();
}
inline void GlobalNamespace::RoomSystem::setStaticF__InitialJoinTrigger_k__BackingField(::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>  value)  {
::cordl_internals::setStaticField<::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>, "<InitialJoinTrigger>k__BackingField", ::GlobalNamespace::RoomSystem*>(std::forward<::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>>(value));
}
inline ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger> GlobalNamespace::RoomSystem::getStaticF__InitialJoinTrigger_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>, "<InitialJoinTrigger>k__BackingField", ::GlobalNamespace::RoomSystem*>();
}
inline void GlobalNamespace::RoomSystem::setStaticF_sceneViews(::ArrayW<::UnityW<::Photon::Pun::PhotonView>>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityW<::Photon::Pun::PhotonView>>, "sceneViews", ::GlobalNamespace::RoomSystem*>(std::forward<::ArrayW<::UnityW<::Photon::Pun::PhotonView>>>(value));
}
inline ::ArrayW<::UnityW<::Photon::Pun::PhotonView>> GlobalNamespace::RoomSystem::getStaticF_sceneViews()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityW<::Photon::Pun::PhotonView>>, "sceneViews", ::GlobalNamespace::RoomSystem*>();
}
inline void GlobalNamespace::RoomSystem::setStaticF_LeftRoomEvent(::GorillaTag::DelegateListProcessor*  value)  {
::cordl_internals::setStaticField<::GorillaTag::DelegateListProcessor*, "LeftRoomEvent", ::GlobalNamespace::RoomSystem*>(std::forward<::GorillaTag::DelegateListProcessor*>(value));
}
inline ::GorillaTag::DelegateListProcessor* GlobalNamespace::RoomSystem::getStaticF_LeftRoomEvent()  {
return ::cordl_internals::getStaticField<::GorillaTag::DelegateListProcessor*, "LeftRoomEvent", ::GlobalNamespace::RoomSystem*>();
}
inline void GlobalNamespace::RoomSystem::setStaticF_JoinedRoomEvent(::GorillaTag::DelegateListProcessor*  value)  {
::cordl_internals::setStaticField<::GorillaTag::DelegateListProcessor*, "JoinedRoomEvent", ::GlobalNamespace::RoomSystem*>(std::forward<::GorillaTag::DelegateListProcessor*>(value));
}
inline ::GorillaTag::DelegateListProcessor* GlobalNamespace::RoomSystem::getStaticF_JoinedRoomEvent()  {
return ::cordl_internals::getStaticField<::GorillaTag::DelegateListProcessor*, "JoinedRoomEvent", ::GlobalNamespace::RoomSystem*>();
}
inline void GlobalNamespace::RoomSystem::setStaticF_PlayerJoinedEvent(::GorillaTag::DelegateListProcessor_1<::GlobalNamespace::NetPlayer*>*  value)  {
::cordl_internals::setStaticField<::GorillaTag::DelegateListProcessor_1<::GlobalNamespace::NetPlayer*>*, "PlayerJoinedEvent", ::GlobalNamespace::RoomSystem*>(std::forward<::GorillaTag::DelegateListProcessor_1<::GlobalNamespace::NetPlayer*>*>(value));
}
inline ::GorillaTag::DelegateListProcessor_1<::GlobalNamespace::NetPlayer*>* GlobalNamespace::RoomSystem::getStaticF_PlayerJoinedEvent()  {
return ::cordl_internals::getStaticField<::GorillaTag::DelegateListProcessor_1<::GlobalNamespace::NetPlayer*>*, "PlayerJoinedEvent", ::GlobalNamespace::RoomSystem*>();
}
inline void GlobalNamespace::RoomSystem::setStaticF_PlayerLeftEvent(::GorillaTag::DelegateListProcessor_1<::GlobalNamespace::NetPlayer*>*  value)  {
::cordl_internals::setStaticField<::GorillaTag::DelegateListProcessor_1<::GlobalNamespace::NetPlayer*>*, "PlayerLeftEvent", ::GlobalNamespace::RoomSystem*>(std::forward<::GorillaTag::DelegateListProcessor_1<::GlobalNamespace::NetPlayer*>*>(value));
}
inline ::GorillaTag::DelegateListProcessor_1<::GlobalNamespace::NetPlayer*>* GlobalNamespace::RoomSystem::getStaticF_PlayerLeftEvent()  {
return ::cordl_internals::getStaticField<::GorillaTag::DelegateListProcessor_1<::GlobalNamespace::NetPlayer*>*, "PlayerLeftEvent", ::GlobalNamespace::RoomSystem*>();
}
inline void GlobalNamespace::RoomSystem::setStaticF_PlayersChangedEvent(::GorillaTag::DelegateListProcessor*  value)  {
::cordl_internals::setStaticField<::GorillaTag::DelegateListProcessor*, "PlayersChangedEvent", ::GlobalNamespace::RoomSystem*>(std::forward<::GorillaTag::DelegateListProcessor*>(value));
}
inline ::GorillaTag::DelegateListProcessor* GlobalNamespace::RoomSystem::getStaticF_PlayersChangedEvent()  {
return ::cordl_internals::getStaticField<::GorillaTag::DelegateListProcessor*, "PlayersChangedEvent", ::GlobalNamespace::RoomSystem*>();
}
inline void GlobalNamespace::RoomSystem::setStaticF_disconnectTimer(::System::Timers::Timer*  value)  {
::cordl_internals::setStaticField<::System::Timers::Timer*, "disconnectTimer", ::GlobalNamespace::RoomSystem*>(std::forward<::System::Timers::Timer*>(value));
}
inline ::System::Timers::Timer* GlobalNamespace::RoomSystem::getStaticF_disconnectTimer()  {
return ::cordl_internals::getStaticField<::System::Timers::Timer*, "disconnectTimer", ::GlobalNamespace::RoomSystem*>();
}
inline void GlobalNamespace::RoomSystem::setStaticF_s_reusableArrayPool(::GlobalNamespace::StaticArrayBag_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::StaticArrayBag_1<::System::Object*>*, "s_reusableArrayPool", ::GlobalNamespace::RoomSystem*>(std::forward<::GlobalNamespace::StaticArrayBag_1<::System::Object*>*>(value));
}
inline ::GlobalNamespace::StaticArrayBag_1<::System::Object*>* GlobalNamespace::RoomSystem::getStaticF_s_reusableArrayPool()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::StaticArrayBag_1<::System::Object*>*, "s_reusableArrayPool", ::GlobalNamespace::RoomSystem*>();
}
inline void GlobalNamespace::RoomSystem::setStaticF_netEventCallbacks(::System::Collections::Generic::Dictionary_2<uint8_t,::System::Action_2<::ArrayW<::System::Object*>,::GlobalNamespace::PhotonMessageInfoWrapped>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<uint8_t,::System::Action_2<::ArrayW<::System::Object*>,::GlobalNamespace::PhotonMessageInfoWrapped>*>*, "netEventCallbacks", ::GlobalNamespace::RoomSystem*>(std::forward<::System::Collections::Generic::Dictionary_2<uint8_t,::System::Action_2<::ArrayW<::System::Object*>,::GlobalNamespace::PhotonMessageInfoWrapped>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<uint8_t,::System::Action_2<::ArrayW<::System::Object*>,::GlobalNamespace::PhotonMessageInfoWrapped>*>* GlobalNamespace::RoomSystem::getStaticF_netEventCallbacks()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<uint8_t,::System::Action_2<::ArrayW<::System::Object*>,::GlobalNamespace::PhotonMessageInfoWrapped>*>*, "netEventCallbacks", ::GlobalNamespace::RoomSystem*>();
}
inline void GlobalNamespace::RoomSystem::setStaticF_sendEventData(::ArrayW<::System::Object*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Object*>, "sendEventData", ::GlobalNamespace::RoomSystem*>(std::forward<::ArrayW<::System::Object*>>(value));
}
inline ::ArrayW<::System::Object*> GlobalNamespace::RoomSystem::getStaticF_sendEventData()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Object*>, "sendEventData", ::GlobalNamespace::RoomSystem*>();
}
inline void GlobalNamespace::RoomSystem::setStaticF_groupJoinSendData(::ArrayW<::System::Object*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Object*>, "groupJoinSendData", ::GlobalNamespace::RoomSystem*>(std::forward<::ArrayW<::System::Object*>>(value));
}
inline ::ArrayW<::System::Object*> GlobalNamespace::RoomSystem::getStaticF_groupJoinSendData()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Object*>, "groupJoinSendData", ::GlobalNamespace::RoomSystem*>();
}
inline void GlobalNamespace::RoomSystem::setStaticF_reportTouchSendData(::ArrayW<::System::Object*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Object*>, "reportTouchSendData", ::GlobalNamespace::RoomSystem*>(std::forward<::ArrayW<::System::Object*>>(value));
}
inline ::ArrayW<::System::Object*> GlobalNamespace::RoomSystem::getStaticF_reportTouchSendData()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Object*>, "reportTouchSendData", ::GlobalNamespace::RoomSystem*>();
}
inline void GlobalNamespace::RoomSystem::setStaticF_reportHitSendData(::ArrayW<::System::Object*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Object*>, "reportHitSendData", ::GlobalNamespace::RoomSystem*>(std::forward<::ArrayW<::System::Object*>>(value));
}
inline ::ArrayW<::System::Object*> GlobalNamespace::RoomSystem::getStaticF_reportHitSendData()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Object*>, "reportHitSendData", ::GlobalNamespace::RoomSystem*>();
}
inline void GlobalNamespace::RoomSystem::setStaticF_playerTouchedCallback(::System::Action_2<::GlobalNamespace::NetPlayer*,::GlobalNamespace::NetPlayer*>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::GlobalNamespace::NetPlayer*,::GlobalNamespace::NetPlayer*>*, "playerTouchedCallback", ::GlobalNamespace::RoomSystem*>(std::forward<::System::Action_2<::GlobalNamespace::NetPlayer*,::GlobalNamespace::NetPlayer*>*>(value));
}
inline ::System::Action_2<::GlobalNamespace::NetPlayer*,::GlobalNamespace::NetPlayer*>* GlobalNamespace::RoomSystem::getStaticF_playerTouchedCallback()  {
return ::cordl_internals::getStaticField<::System::Action_2<::GlobalNamespace::NetPlayer*,::GlobalNamespace::NetPlayer*>*, "playerTouchedCallback", ::GlobalNamespace::RoomSystem*>();
}
inline void GlobalNamespace::RoomSystem::setStaticF_playerLaunchedCallLimiter(::GlobalNamespace::CallLimiter*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::CallLimiter*, "playerLaunchedCallLimiter", ::GlobalNamespace::RoomSystem*>(std::forward<::GlobalNamespace::CallLimiter*>(value));
}
inline ::GlobalNamespace::CallLimiter* GlobalNamespace::RoomSystem::getStaticF_playerLaunchedCallLimiter()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::CallLimiter*, "playerLaunchedCallLimiter", ::GlobalNamespace::RoomSystem*>();
}
inline void GlobalNamespace::RoomSystem::setStaticF_hitPlayerCallLimiter(::GlobalNamespace::CallLimiter*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::CallLimiter*, "hitPlayerCallLimiter", ::GlobalNamespace::RoomSystem*>(std::forward<::GlobalNamespace::CallLimiter*>(value));
}
inline ::GlobalNamespace::CallLimiter* GlobalNamespace::RoomSystem::getStaticF_hitPlayerCallLimiter()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::CallLimiter*, "hitPlayerCallLimiter", ::GlobalNamespace::RoomSystem*>();
}
inline void GlobalNamespace::RoomSystem::setStaticF_s_effects(::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::RoomSystemEffect*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::RoomSystemEffect*>*, "s_effects", ::GlobalNamespace::RoomSystem*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::RoomSystemEffect*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::RoomSystemEffect*>* GlobalNamespace::RoomSystem::getStaticF_s_effects()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::RoomSystemEffect*>*, "s_effects", ::GlobalNamespace::RoomSystem*>();
}
inline void GlobalNamespace::RoomSystem::setStaticF_statusSendData(::ArrayW<::System::Object*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Object*>, "statusSendData", ::GlobalNamespace::RoomSystem*>(std::forward<::ArrayW<::System::Object*>>(value));
}
inline ::ArrayW<::System::Object*> GlobalNamespace::RoomSystem::getStaticF_statusSendData()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Object*>, "statusSendData", ::GlobalNamespace::RoomSystem*>();
}
inline void GlobalNamespace::RoomSystem::setStaticF_statusEffectCallback(::System::Action_1<::GlobalNamespace::RoomSystem_StatusEffects>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::GlobalNamespace::RoomSystem_StatusEffects>*, "statusEffectCallback", ::GlobalNamespace::RoomSystem*>(std::forward<::System::Action_1<::GlobalNamespace::RoomSystem_StatusEffects>*>(value));
}
inline ::System::Action_1<::GlobalNamespace::RoomSystem_StatusEffects>* GlobalNamespace::RoomSystem::getStaticF_statusEffectCallback()  {
return ::cordl_internals::getStaticField<::System::Action_1<::GlobalNamespace::RoomSystem_StatusEffects>*, "statusEffectCallback", ::GlobalNamespace::RoomSystem*>();
}
inline void GlobalNamespace::RoomSystem::setStaticF_soundSendData(::ArrayW<::System::Object*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Object*>, "soundSendData", ::GlobalNamespace::RoomSystem*>(std::forward<::ArrayW<::System::Object*>>(value));
}
inline ::ArrayW<::System::Object*> GlobalNamespace::RoomSystem::getStaticF_soundSendData()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Object*>, "soundSendData", ::GlobalNamespace::RoomSystem*>();
}
inline void GlobalNamespace::RoomSystem::setStaticF_sendSoundDataOther(::ArrayW<::System::Object*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Object*>, "sendSoundDataOther", ::GlobalNamespace::RoomSystem*>(std::forward<::ArrayW<::System::Object*>>(value));
}
inline ::ArrayW<::System::Object*> GlobalNamespace::RoomSystem::getStaticF_sendSoundDataOther()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Object*>, "sendSoundDataOther", ::GlobalNamespace::RoomSystem*>();
}
inline void GlobalNamespace::RoomSystem::setStaticF_soundEffectCallback(::System::Action_2<::GlobalNamespace::RoomSystem_SoundEffect,::GlobalNamespace::NetPlayer*>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::GlobalNamespace::RoomSystem_SoundEffect,::GlobalNamespace::NetPlayer*>*, "soundEffectCallback", ::GlobalNamespace::RoomSystem*>(std::forward<::System::Action_2<::GlobalNamespace::RoomSystem_SoundEffect,::GlobalNamespace::NetPlayer*>*>(value));
}
inline ::System::Action_2<::GlobalNamespace::RoomSystem_SoundEffect,::GlobalNamespace::NetPlayer*>* GlobalNamespace::RoomSystem::getStaticF_soundEffectCallback()  {
return ::cordl_internals::getStaticField<::System::Action_2<::GlobalNamespace::RoomSystem_SoundEffect,::GlobalNamespace::NetPlayer*>*, "soundEffectCallback", ::GlobalNamespace::RoomSystem*>();
}
inline void GlobalNamespace::RoomSystem::setStaticF_playerEffectData(::ArrayW<::System::Object*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Object*>, "playerEffectData", ::GlobalNamespace::RoomSystem*>(std::forward<::ArrayW<::System::Object*>>(value));
}
inline ::ArrayW<::System::Object*> GlobalNamespace::RoomSystem::getStaticF_playerEffectData()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Object*>, "playerEffectData", ::GlobalNamespace::RoomSystem*>();
}
inline void GlobalNamespace::RoomSystem::DeserializeLaunchProjectile(::ArrayW<::System::Object*>  projectileData, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"DeserializeLaunchProjectile", {}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, projectileData, info);
}
inline void GlobalNamespace::RoomSystem::SendLaunchProjectile(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  velocity, ::GlobalNamespace::RoomSystem_ProjectileSource  projectileSource, int32_t  projectileCount, bool  randomColour, uint8_t  r, uint8_t  g, uint8_t  b, uint8_t  a)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"SendLaunchProjectile", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::RoomSystem_ProjectileSource>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, velocity, projectileSource, projectileCount, randomColour, r, g, b, a);
}
inline void GlobalNamespace::RoomSystem::ImpactEffect(::GlobalNamespace::VRRig*  targetRig, ::UnityEngine::Vector3  position, float_t  r, float_t  g, float_t  b, float_t  a, int32_t  projectileCount, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"ImpactEffect", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, targetRig, position, r, g, b, a, projectileCount, info);
}
inline void GlobalNamespace::RoomSystem::DeserializeImpactEffect(::ArrayW<::System::Object*>  impactData, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"DeserializeImpactEffect", {}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, impactData, info);
}
inline void GlobalNamespace::RoomSystem::SendImpactEffect(::UnityEngine::Vector3  position, float_t  r, float_t  g, float_t  b, float_t  a, int32_t  projectileCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"SendImpactEffect", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, r, g, b, a, projectileCount);
}
inline void GlobalNamespace::RoomSystem::SendLavaSync(uint8_t  zone, uint8_t  state, double_t  stateStartTime, float_t  activationProgress, int32_t  voteCount, ::ArrayW<int32_t>  votePlayerIds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"SendLavaSync", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, zone, state, stateStartTime, activationProgress, voteCount, votePlayerIds);
}
inline void GlobalNamespace::RoomSystem::SendLavaSyncToPlayer(uint8_t  zone, uint8_t  state, double_t  stateStartTime, float_t  activationProgress, int32_t  voteCount, ::ArrayW<int32_t>  votePlayerIds, ::GlobalNamespace::NetPlayer*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"SendLavaSyncToPlayer", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, zone, state, stateStartTime, activationProgress, voteCount, votePlayerIds, target);
}
inline void GlobalNamespace::RoomSystem::PackLavaSyncData(uint8_t  zone, uint8_t  state, double_t  stateStartTime, float_t  activationProgress, int32_t  voteCount, ::ArrayW<int32_t>  votePlayerIds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"PackLavaSyncData", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, zone, state, stateStartTime, activationProgress, voteCount, votePlayerIds);
}
inline void GlobalNamespace::RoomSystem::DeserializeLavaSync(::ArrayW<::System::Object*>  data, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"DeserializeLavaSync", {}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, info);
}
inline void GlobalNamespace::RoomSystem::SendMonkePointsRedeemed(int32_t  redeemedPointCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"SendMonkePointsRedeemed", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, redeemedPointCount);
}
inline void GlobalNamespace::RoomSystem::DeserializeMonkePointsRedeemed(::ArrayW<::System::Object*>  data, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"DeserializeMonkePointsRedeemed", {}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, info);
}
inline void GlobalNamespace::RoomSystem::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RoomSystem::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RoomSystem::OnApplicationPause(bool  paused)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"OnApplicationPause", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, paused);
}
inline void GlobalNamespace::RoomSystem::OnJoinedRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"OnJoinedRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RoomSystem::OnPlayerEnteredRoom(::GlobalNamespace::NetPlayer*  newPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"OnPlayerEnteredRoom", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newPlayer);
}
inline void GlobalNamespace::RoomSystem::OnLeftRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"OnLeftRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RoomSystem::OnPlayerLeftRoom(::GlobalNamespace::NetPlayer*  netPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"OnPlayerLeftRoom", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, netPlayer);
}
inline bool GlobalNamespace::RoomSystem::get_UseRoomSizeOverride()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"get_UseRoomSizeOverride", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GlobalNamespace::RoomSystem::set_UseRoomSizeOverride(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"set_UseRoomSizeOverride", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline uint8_t GlobalNamespace::RoomSystem::get_RoomSizeOverride()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"get_RoomSizeOverride", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method);
}
inline void GlobalNamespace::RoomSystem::set_RoomSizeOverride(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"set_RoomSizeOverride", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline uint8_t GlobalNamespace::RoomSystem::get_RoomSizeReduction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"get_RoomSizeReduction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method);
}
inline void GlobalNamespace::RoomSystem::set_RoomSizeReduction(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"set_RoomSizeReduction", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>* GlobalNamespace::RoomSystem::get_PlayersInRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"get_PlayersInRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*>(nullptr, ___internal_method);
}
inline ::StringW GlobalNamespace::RoomSystem::get_RoomGameMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"get_RoomGameMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::RoomSystem::get_JoinedRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"get_JoinedRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::RoomSystem::get_AmITheHost()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"get_AmITheHost", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::RoomSystem::get_IsVStumpRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"get_IsVStumpRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GlobalNamespace::RoomSystem::set_IsVStumpRoom(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"set_IsVStumpRoom", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool GlobalNamespace::RoomSystem::get_WasRoomPrivate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"get_WasRoomPrivate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GlobalNamespace::RoomSystem::set_WasRoomPrivate(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"set_WasRoomPrivate", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool GlobalNamespace::RoomSystem::get_WasRoomSubscription()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"get_WasRoomSubscription", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GlobalNamespace::RoomSystem::set_WasRoomSubscription(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"set_WasRoomSubscription", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger> GlobalNamespace::RoomSystem::get_InitialJoinTrigger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"get_InitialJoinTrigger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::RoomSystem::set_InitialJoinTrigger(::GorillaNetworking::GorillaNetworkJoinTrigger*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"set_InitialJoinTrigger", {}, {::i2c::type_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::RoomSystem::StaticLoad()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"StaticLoad", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::RoomSystem::TimerDC(::System::Object*  sender, ::System::Timers::ElapsedEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"TimerDC", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Timers::ElapsedEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sender, args);
}
inline uint8_t GlobalNamespace::RoomSystem::GetMaxRoomSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"GetMaxRoomSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method);
}
inline uint8_t GlobalNamespace::RoomSystem::GetCurrentRoomExpectedSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"GetCurrentRoomExpectedSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method);
}
inline uint8_t GlobalNamespace::RoomSystem::GetRoomSizeForCreate(::GlobalNamespace::GTZone  zone, ::GorillaGameModes::GameModeType  mode, bool  privateRoom, bool  sub)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"GetRoomSizeForCreate", {}, {::i2c::type_of<::GlobalNamespace::GTZone>(), ::i2c::type_of<::GorillaGameModes::GameModeType>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, zone, mode, privateRoom, sub);
}
inline void GlobalNamespace::RoomSystem::OverrideRoomSize(uint8_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"OverrideRoomSize", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, size);
}
inline uint8_t GlobalNamespace::RoomSystem::GetOverridenRoomSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"GetOverridenRoomSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method);
}
inline void GlobalNamespace::RoomSystem::ClearOverridenRoomSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"ClearOverridenRoomSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::RoomSystem::MakeRoomMultiplayer(uint8_t  roomSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"MakeRoomMultiplayer", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, roomSize);
}
inline ::GlobalNamespace::NetPlayer* GlobalNamespace::RoomSystem::GetLowestActorNumberPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"GetLowestActorNumberPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetPlayer*>(nullptr, ___internal_method);
}
inline void GlobalNamespace::RoomSystem::SendEvent(uint8_t  code, ::ArrayW<::System::Object*>  evData, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::NetPlayer*>  target, bool  reliable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"SendEvent", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NetPlayer*>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, code, evData, target, reliable);
}
inline void GlobalNamespace::RoomSystem::SendEvent(uint8_t  code, ::ArrayW<::System::Object*>  evData, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::NetEventOptions*>  neo, bool  reliable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"SendEvent", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NetEventOptions*>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, code, evData, neo, reliable);
}
inline void GlobalNamespace::RoomSystem::OnEvent(::ExitGames::Client::Photon::EventData*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"OnEvent", {}, {::i2c::type_of<::ExitGames::Client::Photon::EventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
inline void GlobalNamespace::RoomSystem::OnEvent(uint8_t  code, ::System::Object*  data, int32_t  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"OnEvent", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, code, data, source);
}
inline void GlobalNamespace::RoomSystem::SearchForNearby(::ArrayW<::System::Object*>  shuffleData, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"SearchForNearby", {}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, shuffleData, info);
}
inline void GlobalNamespace::RoomSystem::SearchForParty(::ArrayW<::System::Object*>  shuffleData, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"SearchForParty", {}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, shuffleData, info);
}
inline void GlobalNamespace::RoomSystem::SearchForElevator(::ArrayW<::System::Object*>  shuffleData, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"SearchForElevator", {}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, shuffleData, info);
}
inline void GlobalNamespace::RoomSystem::SearchForShuttle(::ArrayW<::System::Object*>  shuffleData, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"SearchForShuttle", {}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, shuffleData, info);
}
inline void GlobalNamespace::RoomSystem::SendNearbyFollowCommand(::GlobalNamespace::GorillaFriendCollider*  friendCollider, ::StringW  shuffler, ::StringW  keyStr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"SendNearbyFollowCommand", {}, {::i2c::type_of<::GlobalNamespace::GorillaFriendCollider*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, friendCollider, shuffler, keyStr);
}
inline void GlobalNamespace::RoomSystem::SendPartyFollowCommand(::StringW  shuffler, ::StringW  keyStr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"SendPartyFollowCommand", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, shuffler, keyStr);
}
inline void GlobalNamespace::RoomSystem::SendElevatorFollowCommand(::StringW  shuffler, ::StringW  keyStr, ::GlobalNamespace::GorillaFriendCollider*  sourceFriendCollider, ::GlobalNamespace::GorillaFriendCollider*  targetFriendCollider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"SendElevatorFollowCommand", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::GorillaFriendCollider*>(), ::i2c::type_of<::GlobalNamespace::GorillaFriendCollider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, shuffler, keyStr, sourceFriendCollider, targetFriendCollider);
}
inline void GlobalNamespace::RoomSystem::SendShuttleFollowCommand(::StringW  shuffler, ::StringW  keyStr, ::GlobalNamespace::GorillaFriendCollider*  sourceFriendCollider, ::GlobalNamespace::GorillaFriendCollider*  targetFriendCollider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"SendShuttleFollowCommand", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::GorillaFriendCollider*>(), ::i2c::type_of<::GlobalNamespace::GorillaFriendCollider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, shuffler, keyStr, sourceFriendCollider, targetFriendCollider);
}
inline void GlobalNamespace::RoomSystem::SendGroupJoinFollowCommand(uint8_t  eventType, ::StringW  shuffler, ::StringW  keyStr, ::GlobalNamespace::GorillaFriendCollider*  sourceFriendCollider, ::GlobalNamespace::GorillaFriendCollider*  targetFriendCollider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"SendGroupJoinFollowCommand", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::GorillaFriendCollider*>(), ::i2c::type_of<::GlobalNamespace::GorillaFriendCollider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, eventType, shuffler, keyStr, sourceFriendCollider, targetFriendCollider);
}
inline void GlobalNamespace::RoomSystem::DeserializeReportTouch(::ArrayW<::System::Object*>  data, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"DeserializeReportTouch", {}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, info);
}
inline void GlobalNamespace::RoomSystem::SendReportTouch(::GlobalNamespace::NetPlayer*  touchedNetPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"SendReportTouch", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, touchedNetPlayer);
}
inline void GlobalNamespace::RoomSystem::LaunchPlayer(::GlobalNamespace::NetPlayer*  player, ::UnityEngine::Vector3  velocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"LaunchPlayer", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, player, velocity);
}
inline void GlobalNamespace::RoomSystem::DeserializePlayerLaunched(::ArrayW<::System::Object*>  data, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"DeserializePlayerLaunched", {}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, info);
}
inline void GlobalNamespace::RoomSystem::HitPlayer(::GlobalNamespace::NetPlayer*  player, ::UnityEngine::Vector3  direction, float_t  strength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"HitPlayer", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, player, direction, strength);
}
inline void GlobalNamespace::RoomSystem::DeserializePlayerHit(::ArrayW<::System::Object*>  data, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"DeserializePlayerHit", {}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, info);
}
inline void GlobalNamespace::RoomSystem::AddEffect(::GlobalNamespace::RoomSystemEffect*  effect)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"AddEffect", {}, {::i2c::type_of<::GlobalNamespace::RoomSystemEffect*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, effect);
}
inline void GlobalNamespace::RoomSystem::RemoveEffect(::GlobalNamespace::RoomSystemEffect*  effect)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"RemoveEffect", {}, {::i2c::type_of<::GlobalNamespace::RoomSystemEffect*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, effect);
}
inline void GlobalNamespace::RoomSystem::PlayEffect(::GlobalNamespace::RoomSystemEffect*  effect)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"PlayEffect", {}, {::i2c::type_of<::GlobalNamespace::RoomSystemEffect*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, effect);
}
inline void GlobalNamespace::RoomSystem::DeserializeEffect(::ArrayW<::System::Object*>  data, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"DeserializeEffect", {}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, info);
}
inline void GlobalNamespace::RoomSystem::SetSlowedTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"SetSlowedTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::RoomSystem::SetTaggedTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"SetTaggedTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::RoomSystem::SetFrozenTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"SetFrozenTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::RoomSystem::SetJoinedTaggedTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"SetJoinedTaggedTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::RoomSystem::SetUntaggedTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"SetUntaggedTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::RoomSystem::OnStatusEffect(::GlobalNamespace::RoomSystem_StatusEffects  status)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"OnStatusEffect", {}, {::i2c::type_of<::GlobalNamespace::RoomSystem_StatusEffects>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, status);
}
inline void GlobalNamespace::RoomSystem::DeserializeStatusEffect(::ArrayW<::System::Object*>  data, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"DeserializeStatusEffect", {}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, info);
}
inline void GlobalNamespace::RoomSystem::SendStatusEffectAll(::GlobalNamespace::RoomSystem_StatusEffects  status)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"SendStatusEffectAll", {}, {::i2c::type_of<::GlobalNamespace::RoomSystem_StatusEffects>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, status);
}
inline void GlobalNamespace::RoomSystem::SendStatusEffectToPlayer(::GlobalNamespace::RoomSystem_StatusEffects  status, ::GlobalNamespace::NetPlayer*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"SendStatusEffectToPlayer", {}, {::i2c::type_of<::GlobalNamespace::RoomSystem_StatusEffects>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, status, target);
}
inline void GlobalNamespace::RoomSystem::PlaySoundEffect(int32_t  soundIndex, float_t  soundVolume, bool  stopCurrentAudio)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"PlaySoundEffect", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, soundIndex, soundVolume, stopCurrentAudio);
}
inline void GlobalNamespace::RoomSystem::PlaySoundEffect(int32_t  soundIndex, float_t  soundVolume, bool  stopCurrentAudio, ::GlobalNamespace::NetPlayer*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"PlaySoundEffect", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, soundIndex, soundVolume, stopCurrentAudio, target);
}
inline void GlobalNamespace::RoomSystem::OnPlaySoundEffect(::GlobalNamespace::RoomSystem_SoundEffect  sound, ::GlobalNamespace::NetPlayer*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"OnPlaySoundEffect", {}, {::i2c::type_of<::GlobalNamespace::RoomSystem_SoundEffect>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sound, target);
}
inline void GlobalNamespace::RoomSystem::DeserializeSoundEffect(::ArrayW<::System::Object*>  data, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"DeserializeSoundEffect", {}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, info);
}
inline void GlobalNamespace::RoomSystem::SendSoundEffectAll(int32_t  soundIndex, float_t  soundVolume, bool  stopCurrentAudio)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"SendSoundEffectAll", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, soundIndex, soundVolume, stopCurrentAudio);
}
inline void GlobalNamespace::RoomSystem::SendSoundEffectAll(::GlobalNamespace::RoomSystem_SoundEffect  sound)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"SendSoundEffectAll", {}, {::i2c::type_of<::GlobalNamespace::RoomSystem_SoundEffect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sound);
}
inline void GlobalNamespace::RoomSystem::SendSoundEffectToPlayer(int32_t  soundIndex, float_t  soundVolume, ::GlobalNamespace::NetPlayer*  player, bool  stopCurrentAudio)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"SendSoundEffectToPlayer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, soundIndex, soundVolume, player, stopCurrentAudio);
}
inline void GlobalNamespace::RoomSystem::SendSoundEffectToPlayer(::GlobalNamespace::RoomSystem_SoundEffect  sound, ::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"SendSoundEffectToPlayer", {}, {::i2c::type_of<::GlobalNamespace::RoomSystem_SoundEffect>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sound, player);
}
inline void GlobalNamespace::RoomSystem::SendSoundEffectOnOther(int32_t  soundIndex, float_t  soundvolume, ::GlobalNamespace::NetPlayer*  target, bool  stopCurrentAudio)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"SendSoundEffectOnOther", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, soundIndex, soundvolume, target, stopCurrentAudio);
}
inline void GlobalNamespace::RoomSystem::SendSoundEffectOnOther(::GlobalNamespace::RoomSystem_SoundEffect  sound, ::GlobalNamespace::NetPlayer*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"SendSoundEffectOnOther", {}, {::i2c::type_of<::GlobalNamespace::RoomSystem_SoundEffect>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sound, target);
}
inline void GlobalNamespace::RoomSystem::OnPlayerEffect(::GlobalNamespace::PlayerEffect  effect, ::GlobalNamespace::NetPlayer*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"OnPlayerEffect", {}, {::i2c::type_of<::GlobalNamespace::PlayerEffect>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, effect, target);
}
inline void GlobalNamespace::RoomSystem::DeserializePlayerEffect(::ArrayW<::System::Object*>  data, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"DeserializePlayerEffect", {}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, info);
}
inline void GlobalNamespace::RoomSystem::SendPlayerEffect(::GlobalNamespace::PlayerEffect  effect, ::GlobalNamespace::NetPlayer*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {"SendPlayerEffect", {}, {::i2c::type_of<::GlobalNamespace::PlayerEffect>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, effect, target);
}
inline void GlobalNamespace::RoomSystem::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RoomSystem* GlobalNamespace::RoomSystem::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RoomSystem*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RoomSystem::RoomSystem()   {
}
//  Writing Method size for method: ::GlobalNamespace::RoomSystem_LaunchProjectileContainer.OnPlayFX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RoomSystem_LaunchProjectileContainer::*)()>(&::GlobalNamespace::RoomSystem_LaunchProjectileContainer::OnPlayFX)> {
  constexpr static std::size_t size = 0x778;
  constexpr static std::size_t addrs = 0x5ad7f08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RoomSystem_LaunchProjectileContainer*>(),
                    {::i2c::class_of<::GlobalNamespace::RoomSystem_LaunchProjectileContainer*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem_LaunchProjectileContainer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RoomSystem_LaunchProjectileContainer::*)()>(&::GlobalNamespace::RoomSystem_LaunchProjectileContainer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ad0694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem_LaunchProjectileContainer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GlobalNamespace::RoomSystem_LaunchProjectileContainer::__cordl_internal_get_velocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocity;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::RoomSystem_LaunchProjectileContainer::__cordl_internal_get_velocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocity;
}
constexpr void GlobalNamespace::RoomSystem_LaunchProjectileContainer::__cordl_internal_set_velocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocity = value;
}
constexpr ::GlobalNamespace::RoomSystem_ProjectileSource& GlobalNamespace::RoomSystem_LaunchProjectileContainer::__cordl_internal_get_projectileSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileSource;
}
constexpr ::GlobalNamespace::RoomSystem_ProjectileSource const& GlobalNamespace::RoomSystem_LaunchProjectileContainer::__cordl_internal_get_projectileSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileSource;
}
constexpr void GlobalNamespace::RoomSystem_LaunchProjectileContainer::__cordl_internal_set_projectileSource(::GlobalNamespace::RoomSystem_ProjectileSource  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___projectileSource = value;
}
constexpr bool& GlobalNamespace::RoomSystem_LaunchProjectileContainer::__cordl_internal_get_overridecolour()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overridecolour;
}
constexpr bool const& GlobalNamespace::RoomSystem_LaunchProjectileContainer::__cordl_internal_get_overridecolour() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overridecolour;
}
constexpr void GlobalNamespace::RoomSystem_LaunchProjectileContainer::__cordl_internal_set_overridecolour(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overridecolour = value;
}
constexpr ::GlobalNamespace::PhotonMessageInfoWrapped& GlobalNamespace::RoomSystem_LaunchProjectileContainer::__cordl_internal_get_messageInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___messageInfo;
}
constexpr ::GlobalNamespace::PhotonMessageInfoWrapped const& GlobalNamespace::RoomSystem_LaunchProjectileContainer::__cordl_internal_get_messageInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___messageInfo;
}
constexpr void GlobalNamespace::RoomSystem_LaunchProjectileContainer::__cordl_internal_set_messageInfo(::GlobalNamespace::PhotonMessageInfoWrapped  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___messageInfo = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::RoomSystem_LaunchProjectileContainer::__cordl_internal_get_tempThrowableGO()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempThrowableGO;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::RoomSystem_LaunchProjectileContainer::__cordl_internal_get_tempThrowableGO() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempThrowableGO;
}
constexpr void GlobalNamespace::RoomSystem_LaunchProjectileContainer::__cordl_internal_set_tempThrowableGO(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tempThrowableGO = value;
}
constexpr ::UnityW<::GlobalNamespace::SnowballThrowable>& GlobalNamespace::RoomSystem_LaunchProjectileContainer::__cordl_internal_get_tempThrowableRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempThrowableRef;
}
constexpr ::UnityW<::GlobalNamespace::SnowballThrowable> const& GlobalNamespace::RoomSystem_LaunchProjectileContainer::__cordl_internal_get_tempThrowableRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempThrowableRef;
}
constexpr void GlobalNamespace::RoomSystem_LaunchProjectileContainer::__cordl_internal_set_tempThrowableRef(::UnityW<::GlobalNamespace::SnowballThrowable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tempThrowableRef = value;
}
inline void GlobalNamespace::RoomSystem_LaunchProjectileContainer::OnPlayFX()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RoomSystem_LaunchProjectileContainer*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RoomSystem_LaunchProjectileContainer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem_LaunchProjectileContainer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RoomSystem_LaunchProjectileContainer* GlobalNamespace::RoomSystem_LaunchProjectileContainer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RoomSystem_LaunchProjectileContainer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RoomSystem_LaunchProjectileContainer::RoomSystem_LaunchProjectileContainer()   {
}
//  Writing Method size for method: ::GlobalNamespace::RoomSystem_ImpactFxContainer.get_settings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::FXSystemSettings> (::GlobalNamespace::RoomSystem_ImpactFxContainer::*)()>(&::GlobalNamespace::RoomSystem_ImpactFxContainer::get_settings)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5ad78d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem_ImpactFxContainer*>(),
                        {"get_settings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem_ImpactFxContainer.OnPlayFX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RoomSystem_ImpactFxContainer::*)()>(&::GlobalNamespace::RoomSystem_ImpactFxContainer::OnPlayFX)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x5ad78e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RoomSystem_ImpactFxContainer*>(),
                    {::i2c::class_of<::GlobalNamespace::RoomSystem_ImpactFxContainer*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystem_ImpactFxContainer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RoomSystem_ImpactFxContainer::*)()>(&::GlobalNamespace::RoomSystem_ImpactFxContainer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ad068c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem_ImpactFxContainer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::RoomSystem_ImpactFxContainer::__cordl_internal_get_targetRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::RoomSystem_ImpactFxContainer::__cordl_internal_get_targetRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetRig;
}
constexpr void GlobalNamespace::RoomSystem_ImpactFxContainer::__cordl_internal_set_targetRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetRig = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::RoomSystem_ImpactFxContainer::__cordl_internal_get_position()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___position;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::RoomSystem_ImpactFxContainer::__cordl_internal_get_position() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___position;
}
constexpr void GlobalNamespace::RoomSystem_ImpactFxContainer::__cordl_internal_set_position(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___position = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::RoomSystem_ImpactFxContainer::__cordl_internal_get_colour()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colour;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::RoomSystem_ImpactFxContainer::__cordl_internal_get_colour() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colour;
}
constexpr void GlobalNamespace::RoomSystem_ImpactFxContainer::__cordl_internal_set_colour(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colour = value;
}
constexpr int32_t& GlobalNamespace::RoomSystem_ImpactFxContainer::__cordl_internal_get_projectileIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileIndex;
}
constexpr int32_t const& GlobalNamespace::RoomSystem_ImpactFxContainer::__cordl_internal_get_projectileIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileIndex;
}
constexpr void GlobalNamespace::RoomSystem_ImpactFxContainer::__cordl_internal_set_projectileIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___projectileIndex = value;
}
inline ::UnityW<::GlobalNamespace::FXSystemSettings> GlobalNamespace::RoomSystem_ImpactFxContainer::get_settings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem_ImpactFxContainer*>(),
                        {"get_settings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::FXSystemSettings>>(this, ___internal_method);
}
inline void GlobalNamespace::RoomSystem_ImpactFxContainer::OnPlayFX()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RoomSystem_ImpactFxContainer*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RoomSystem_ImpactFxContainer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem_ImpactFxContainer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RoomSystem_ImpactFxContainer* GlobalNamespace::RoomSystem_ImpactFxContainer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RoomSystem_ImpactFxContainer*>());
}
/// @brief Convert operator to "::GlobalNamespace::IFXContext"
constexpr  GlobalNamespace::RoomSystem_ImpactFxContainer::operator ::GlobalNamespace::IFXContext*() noexcept {
return static_cast<::GlobalNamespace::IFXContext*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IFXContext"
constexpr ::GlobalNamespace::IFXContext* GlobalNamespace::RoomSystem_ImpactFxContainer::i___GlobalNamespace__IFXContext() noexcept {
return static_cast<::GlobalNamespace::IFXContext*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RoomSystem_ImpactFxContainer::RoomSystem_ImpactFxContainer()   {
}
