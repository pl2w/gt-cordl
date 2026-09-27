#pragma once
// IWYU pragma private; include "GlobalNamespace/GreyZoneManager.hpp"
#include "GlobalNamespace/zzzz__ShaderHashId_impl.hpp"
#include "Photon/Pun/zzzz__MonoBehaviourPun_impl.hpp"
#include "Photon/Realtime/zzzz__Player_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GreyZoneManager_def.hpp"
#include "ExitGames/Client/Photon/zzzz__Hashtable_def.hpp"
#include "GlobalNamespace/zzzz__GreyZoneAreaEnable_def.hpp"
#include "GlobalNamespace/zzzz__GreyZoneManager_def.hpp"
#include "GlobalNamespace/zzzz__GreyZoneSummoner_def.hpp"
#include "GlobalNamespace/zzzz__MoonController_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaLocomotion/zzzz__GTPlayer_def.hpp"
#include "Photon/Pun/zzzz__IPunObservable_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "Photon/Realtime/zzzz__IInRoomCallbacks_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GreyZoneManager.get_GreyZoneActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GreyZoneManager::*)()>(&::GlobalNamespace::GreyZoneManager::get_GreyZoneActive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5619f18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"get_GreyZoneActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneManager.get_GreyZoneAvailable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GreyZoneManager::*)()>(&::GlobalNamespace::GreyZoneManager::get_GreyZoneAvailable)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5619d04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"get_GreyZoneAvailable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneManager.get_GravityFactorSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GreyZoneManager::*)()>(&::GlobalNamespace::GreyZoneManager::get_GravityFactorSelection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5619f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"get_GravityFactorSelection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneManager.get_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GreyZoneManager::*)()>(&::GlobalNamespace::GreyZoneManager::get_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5619f28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"get_TickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneManager.set_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GreyZoneManager::*)(bool)>(&::GlobalNamespace::GreyZoneManager::set_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5619f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneManager.get_HasAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GreyZoneManager::*)()>(&::GlobalNamespace::GreyZoneManager::get_HasAuthority)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5619f38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"get_HasAuthority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneManager.get_SummoningProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::GreyZoneManager::*)()>(&::GlobalNamespace::GreyZoneManager::get_SummoningProgress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5619fbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"get_SummoningProgress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneManager.RegisterSummoner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GreyZoneManager::*)(::GlobalNamespace::GreyZoneSummoner*)>(&::GlobalNamespace::GreyZoneManager::RegisterSummoner)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5619fc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"RegisterSummoner", {}, {::i2c::type_of<::GlobalNamespace::GreyZoneSummoner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneManager.DeregisterSummoner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GreyZoneManager::*)(::GlobalNamespace::GreyZoneSummoner*)>(&::GlobalNamespace::GreyZoneManager::DeregisterSummoner)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x561a0a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"DeregisterSummoner", {}, {::i2c::type_of<::GlobalNamespace::GreyZoneSummoner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneManager.RegisterMoon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GreyZoneManager::*)(::GlobalNamespace::MoonController*)>(&::GlobalNamespace::GreyZoneManager::RegisterMoon)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x561a138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"RegisterMoon", {}, {::i2c::type_of<::GlobalNamespace::MoonController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneManager.UnregisterMoon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GreyZoneManager::*)(::GlobalNamespace::MoonController*)>(&::GlobalNamespace::GreyZoneManager::UnregisterMoon)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5619088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"UnregisterMoon", {}, {::i2c::type_of<::GlobalNamespace::MoonController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneManager.RegisterArea
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GreyZoneManager::*)(::GlobalNamespace::GreyZoneAreaEnable*)>(&::GlobalNamespace::GreyZoneManager::RegisterArea)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x561a140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"RegisterArea", {}, {::i2c::type_of<::GlobalNamespace::GreyZoneAreaEnable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneManager.UnRegisterArea
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GreyZoneManager::*)(::GlobalNamespace::GreyZoneAreaEnable*)>(&::GlobalNamespace::GreyZoneManager::UnRegisterArea)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x561a224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"UnRegisterArea", {}, {::i2c::type_of<::GlobalNamespace::GreyZoneAreaEnable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneManager.ActivateGreyZoneAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GreyZoneManager::*)()>(&::GlobalNamespace::GreyZoneManager::ActivateGreyZoneAuthority)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x561a27c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"ActivateGreyZoneAuthority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneManager.ActivateGreyZoneLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GreyZoneManager::*)()>(&::GlobalNamespace::GreyZoneManager::ActivateGreyZoneLocal)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x561a318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"ActivateGreyZoneLocal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneManager.LocalSimpleActivation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GreyZoneManager::*)(bool, float_t)>(&::GlobalNamespace::GreyZoneManager::LocalSimpleActivation)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x561a748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"LocalSimpleActivation", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneManager.DeactivateGreyZoneAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GreyZoneManager::*)()>(&::GlobalNamespace::GreyZoneManager::DeactivateGreyZoneAuthority)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x561a964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"DeactivateGreyZoneAuthority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneManager.DeactivateGreyZoneLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GreyZoneManager::*)()>(&::GlobalNamespace::GreyZoneManager::DeactivateGreyZoneLocal)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x561aad4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"DeactivateGreyZoneLocal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneManager.ForceStopGreyZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GreyZoneManager::*)()>(&::GlobalNamespace::GreyZoneManager::ForceStopGreyZone)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x561acac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"ForceStopGreyZone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneManager.GravityOverrideFunction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GreyZoneManager::*)(::GorillaLocomotion::GTPlayer*)>(&::GlobalNamespace::GreyZoneManager::GravityOverrideFunction)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x561aefc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"GravityOverrideFunction", {}, {::i2c::type_of<::GorillaLocomotion::GTPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneManager.SimpleGravityOverrideFunction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GreyZoneManager::*)(::GorillaLocomotion::GTPlayer*)>(&::GlobalNamespace::GreyZoneManager::SimpleGravityOverrideFunction)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x561b088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"SimpleGravityOverrideFunction", {}, {::i2c::type_of<::GorillaLocomotion::GTPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneManager.FadeAudioIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::GreyZoneManager::*)(::UnityEngine::AudioSource*, float_t, float_t)>(&::GlobalNamespace::GreyZoneManager::FadeAudioIn)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x561a5f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"FadeAudioIn", {}, {::i2c::type_of<::UnityEngine::AudioSource*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneManager.FadeAudioOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::GreyZoneManager::*)(::UnityEngine::AudioSource*, float_t)>(&::GlobalNamespace::GreyZoneManager::FadeAudioOut)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x561ac30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"FadeAudioOut", {}, {::i2c::type_of<::UnityEngine::AudioSource*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneManager.VRRigEnteredSummonerProximity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GreyZoneManager::*)(::GlobalNamespace::VRRig*, ::GlobalNamespace::GreyZoneSummoner*)>(&::GlobalNamespace::GreyZoneManager::VRRigEnteredSummonerProximity)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x561b18c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"VRRigEnteredSummonerProximity", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::GlobalNamespace::GreyZoneSummoner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneManager.VRRigExitedSummonerProximity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GreyZoneManager::*)(::GlobalNamespace::VRRig*, ::GlobalNamespace::GreyZoneSummoner*)>(&::GlobalNamespace::GreyZoneManager::VRRigExitedSummonerProximity)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x561b2d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"VRRigExitedSummonerProximity", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::GlobalNamespace::GreyZoneSummoner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneManager.UpdateSummonerVisuals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GreyZoneManager::*)()>(&::GlobalNamespace::GreyZoneManager::UpdateSummonerVisuals)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x561a678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"UpdateSummonerVisuals", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneManager.ValidateSummoningPlayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GreyZoneManager::*)()>(&::GlobalNamespace::GreyZoneManager::ValidateSummoningPlayers)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x561b684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"ValidateSummoningPlayers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneManager.DayNightOverrideFunction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GreyZoneManager::*)(int32_t)>(&::GlobalNamespace::GreyZoneManager::DayNightOverrideFunction)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x561bacc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"DayNightOverrideFunction", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GreyZoneManager::*)()>(&::GlobalNamespace::GreyZoneManager::Awake)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x561baf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneManager.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GreyZoneManager::*)()>(&::GlobalNamespace::GreyZoneManager::OnEnable)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x561bbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneManager.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GreyZoneManager::*)()>(&::GlobalNamespace::GreyZoneManager::OnDisable)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x561bce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneManager.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GreyZoneManager::*)()>(&::GlobalNamespace::GreyZoneManager::Update)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x561bda8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneManager.AuthorityUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GreyZoneManager::*)()>(&::GlobalNamespace::GreyZoneManager::AuthorityUpdate)> {
  constexpr static std::size_t size = 0x5bc;
  constexpr static std::size_t addrs = 0x561bdcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"AuthorityUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneManager.SharedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GreyZoneManager::*)()>(&::GlobalNamespace::GreyZoneManager::SharedUpdate)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x561c388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"SharedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneManager.OnPhotonSerializeView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GreyZoneManager::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GreyZoneManager::OnPhotonSerializeView)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x561c68c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"OnPhotonSerializeView", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneManager.OnPlayerEnteredRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GreyZoneManager::*)(::Photon::Realtime::Player*)>(&::GlobalNamespace::GreyZoneManager::OnPlayerEnteredRoom)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x561c9e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"OnPlayerEnteredRoom", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneManager.OnPlayerLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GreyZoneManager::*)(::Photon::Realtime::Player*)>(&::GlobalNamespace::GreyZoneManager::OnPlayerLeftRoom)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x561c9e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"OnPlayerLeftRoom", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneManager.OnRoomPropertiesUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GreyZoneManager::*)(::ExitGames::Client::Photon::Hashtable*)>(&::GlobalNamespace::GreyZoneManager::OnRoomPropertiesUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x561c9ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"OnRoomPropertiesUpdate", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneManager.OnPlayerPropertiesUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GreyZoneManager::*)(::Photon::Realtime::Player*, ::ExitGames::Client::Photon::Hashtable*)>(&::GlobalNamespace::GreyZoneManager::OnPlayerPropertiesUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x561c9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"OnPlayerPropertiesUpdate", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneManager.OnMasterClientSwitched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GreyZoneManager::*)(::Photon::Realtime::Player*)>(&::GlobalNamespace::GreyZoneManager::OnMasterClientSwitched)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x561c9f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"OnMasterClientSwitched", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GreyZoneManager::*)()>(&::GlobalNamespace::GreyZoneManager::_ctor)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x561c9f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::GreyZoneManager::__cordl_internal_get_greyZoneActiveDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___greyZoneActiveDuration;
}
constexpr float_t const& GlobalNamespace::GreyZoneManager::__cordl_internal_get_greyZoneActiveDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___greyZoneActiveDuration;
}
constexpr void GlobalNamespace::GreyZoneManager::__cordl_internal_set_greyZoneActiveDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___greyZoneActiveDuration = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::GreyZoneManager::__cordl_internal_get_gravityFactorOptions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravityFactorOptions;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::GreyZoneManager::__cordl_internal_get_gravityFactorOptions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravityFactorOptions;
}
constexpr void GlobalNamespace::GreyZoneManager::__cordl_internal_set_gravityFactorOptions(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gravityFactorOptions = value;
}
constexpr int32_t& GlobalNamespace::GreyZoneManager::__cordl_internal_get_gravityFactorOptionSelection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravityFactorOptionSelection;
}
constexpr int32_t const& GlobalNamespace::GreyZoneManager::__cordl_internal_get_gravityFactorOptionSelection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravityFactorOptionSelection;
}
constexpr void GlobalNamespace::GreyZoneManager::__cordl_internal_set_gravityFactorOptionSelection(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gravityFactorOptionSelection = value;
}
constexpr float_t& GlobalNamespace::GreyZoneManager::__cordl_internal_get_summoningActivationTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___summoningActivationTime;
}
constexpr float_t const& GlobalNamespace::GreyZoneManager::__cordl_internal_get_summoningActivationTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___summoningActivationTime;
}
constexpr void GlobalNamespace::GreyZoneManager::__cordl_internal_set_summoningActivationTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___summoningActivationTime = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GreyZoneManager::__cordl_internal_get_greyZoneAmbience()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___greyZoneAmbience;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GreyZoneManager::__cordl_internal_get_greyZoneAmbience() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___greyZoneAmbience;
}
constexpr void GlobalNamespace::GreyZoneManager::__cordl_internal_set_greyZoneAmbience(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___greyZoneAmbience = value;
}
constexpr float_t& GlobalNamespace::GreyZoneManager::__cordl_internal_get_ambienceFadeTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ambienceFadeTime;
}
constexpr float_t const& GlobalNamespace::GreyZoneManager::__cordl_internal_get_ambienceFadeTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ambienceFadeTime;
}
constexpr void GlobalNamespace::GreyZoneManager::__cordl_internal_set_ambienceFadeTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ambienceFadeTime = value;
}
constexpr bool& GlobalNamespace::GreyZoneManager::__cordl_internal_get_forceTimeOfDayToNight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forceTimeOfDayToNight;
}
constexpr bool const& GlobalNamespace::GreyZoneManager::__cordl_internal_get_forceTimeOfDayToNight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forceTimeOfDayToNight;
}
constexpr void GlobalNamespace::GreyZoneManager::__cordl_internal_set_forceTimeOfDayToNight(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___forceTimeOfDayToNight = value;
}
constexpr float_t& GlobalNamespace::GreyZoneManager::__cordl_internal_get_skyMonsterMovementEnterTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skyMonsterMovementEnterTime;
}
constexpr float_t const& GlobalNamespace::GreyZoneManager::__cordl_internal_get_skyMonsterMovementEnterTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skyMonsterMovementEnterTime;
}
constexpr void GlobalNamespace::GreyZoneManager::__cordl_internal_set_skyMonsterMovementEnterTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___skyMonsterMovementEnterTime = value;
}
constexpr float_t& GlobalNamespace::GreyZoneManager::__cordl_internal_get_skyMonsterMovementExitTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skyMonsterMovementExitTime;
}
constexpr float_t const& GlobalNamespace::GreyZoneManager::__cordl_internal_get_skyMonsterMovementExitTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skyMonsterMovementExitTime;
}
constexpr void GlobalNamespace::GreyZoneManager::__cordl_internal_set_skyMonsterMovementExitTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___skyMonsterMovementExitTime = value;
}
constexpr float_t& GlobalNamespace::GreyZoneManager::__cordl_internal_get_skyMonsterDistGravityRampBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skyMonsterDistGravityRampBuffer;
}
constexpr float_t const& GlobalNamespace::GreyZoneManager::__cordl_internal_get_skyMonsterDistGravityRampBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skyMonsterDistGravityRampBuffer;
}
constexpr void GlobalNamespace::GreyZoneManager::__cordl_internal_set_skyMonsterDistGravityRampBuffer(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___skyMonsterDistGravityRampBuffer = value;
}
constexpr float_t& GlobalNamespace::GreyZoneManager::__cordl_internal_get_gravityReductionAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravityReductionAmount;
}
constexpr float_t const& GlobalNamespace::GreyZoneManager::__cordl_internal_get_gravityReductionAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravityReductionAmount;
}
constexpr void GlobalNamespace::GreyZoneManager::__cordl_internal_set_gravityReductionAmount(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gravityReductionAmount = value;
}
constexpr float_t& GlobalNamespace::GreyZoneManager::__cordl_internal_get_simpleGravityFactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___simpleGravityFactor;
}
constexpr float_t const& GlobalNamespace::GreyZoneManager::__cordl_internal_get_simpleGravityFactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___simpleGravityFactor;
}
constexpr void GlobalNamespace::GreyZoneManager::__cordl_internal_set_simpleGravityFactor(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___simpleGravityFactor = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::GreyZoneManager::__cordl_internal_get_greyZoneParticles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___greyZoneParticles;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::GreyZoneManager::__cordl_internal_get_greyZoneParticles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___greyZoneParticles;
}
constexpr void GlobalNamespace::GreyZoneManager::__cordl_internal_set_greyZoneParticles(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___greyZoneParticles = value;
}
constexpr float_t& GlobalNamespace::GreyZoneManager::__cordl_internal_get_particlePredictiveSpawnMaxDist()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particlePredictiveSpawnMaxDist;
}
constexpr float_t const& GlobalNamespace::GreyZoneManager::__cordl_internal_get_particlePredictiveSpawnMaxDist() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particlePredictiveSpawnMaxDist;
}
constexpr void GlobalNamespace::GreyZoneManager::__cordl_internal_set_particlePredictiveSpawnMaxDist(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___particlePredictiveSpawnMaxDist = value;
}
constexpr float_t& GlobalNamespace::GreyZoneManager::__cordl_internal_get_particlePredictiveSpawnVelocityFactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particlePredictiveSpawnVelocityFactor;
}
constexpr float_t const& GlobalNamespace::GreyZoneManager::__cordl_internal_get_particlePredictiveSpawnVelocityFactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particlePredictiveSpawnVelocityFactor;
}
constexpr void GlobalNamespace::GreyZoneManager::__cordl_internal_set_particlePredictiveSpawnVelocityFactor(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___particlePredictiveSpawnVelocityFactor = value;
}
constexpr bool& GlobalNamespace::GreyZoneManager::__cordl_internal_get_photonConnectedDuringActivation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___photonConnectedDuringActivation;
}
constexpr bool const& GlobalNamespace::GreyZoneManager::__cordl_internal_get_photonConnectedDuringActivation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___photonConnectedDuringActivation;
}
constexpr void GlobalNamespace::GreyZoneManager::__cordl_internal_set_photonConnectedDuringActivation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___photonConnectedDuringActivation = value;
}
constexpr double_t& GlobalNamespace::GreyZoneManager::__cordl_internal_get_greyZoneActivationTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___greyZoneActivationTime;
}
constexpr double_t const& GlobalNamespace::GreyZoneManager::__cordl_internal_get_greyZoneActivationTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___greyZoneActivationTime;
}
constexpr void GlobalNamespace::GreyZoneManager::__cordl_internal_set_greyZoneActivationTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___greyZoneActivationTime = value;
}
constexpr bool& GlobalNamespace::GreyZoneManager::__cordl_internal_get_greyZoneActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___greyZoneActive;
}
constexpr bool const& GlobalNamespace::GreyZoneManager::__cordl_internal_get_greyZoneActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___greyZoneActive;
}
constexpr void GlobalNamespace::GreyZoneManager::__cordl_internal_set_greyZoneActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___greyZoneActive = value;
}
constexpr bool& GlobalNamespace::GreyZoneManager::__cordl_internal_get__tickRunning()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tickRunning;
}
constexpr bool const& GlobalNamespace::GreyZoneManager::__cordl_internal_get__tickRunning() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tickRunning;
}
constexpr void GlobalNamespace::GreyZoneManager::__cordl_internal_set__tickRunning(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tickRunning = value;
}
constexpr float_t& GlobalNamespace::GreyZoneManager::__cordl_internal_get_summoningProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___summoningProgress;
}
constexpr float_t const& GlobalNamespace::GreyZoneManager::__cordl_internal_get_summoningProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___summoningProgress;
}
constexpr void GlobalNamespace::GreyZoneManager::__cordl_internal_set_summoningProgress(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___summoningProgress = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GreyZoneSummoner>>*& GlobalNamespace::GreyZoneManager::__cordl_internal_get_activeSummoners()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeSummoners;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GreyZoneSummoner>>* const& GlobalNamespace::GreyZoneManager::__cordl_internal_get_activeSummoners() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeSummoners;
}
constexpr void GlobalNamespace::GreyZoneManager::__cordl_internal_set_activeSummoners(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GreyZoneSummoner>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeSummoners = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::ValueTuple_2<::UnityW<::GlobalNamespace::VRRig>,::UnityW<::GlobalNamespace::GreyZoneSummoner>>>*& GlobalNamespace::GreyZoneManager::__cordl_internal_get_summoningPlayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___summoningPlayers;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::ValueTuple_2<::UnityW<::GlobalNamespace::VRRig>,::UnityW<::GlobalNamespace::GreyZoneSummoner>>>* const& GlobalNamespace::GreyZoneManager::__cordl_internal_get_summoningPlayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___summoningPlayers;
}
constexpr void GlobalNamespace::GreyZoneManager::__cordl_internal_set_summoningPlayers(::System::Collections::Generic::Dictionary_2<int32_t,::System::ValueTuple_2<::UnityW<::GlobalNamespace::VRRig>,::UnityW<::GlobalNamespace::GreyZoneSummoner>>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___summoningPlayers = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,float_t>*& GlobalNamespace::GreyZoneManager::__cordl_internal_get_summoningPlayerProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___summoningPlayerProgress;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,float_t>* const& GlobalNamespace::GreyZoneManager::__cordl_internal_get_summoningPlayerProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___summoningPlayerProgress;
}
constexpr void GlobalNamespace::GreyZoneManager::__cordl_internal_set_summoningPlayerProgress(::System::Collections::Generic::Dictionary_2<int32_t,float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___summoningPlayerProgress = value;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& GlobalNamespace::GreyZoneManager::__cordl_internal_get_invalidSummoners()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___invalidSummoners;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& GlobalNamespace::GreyZoneManager::__cordl_internal_get_invalidSummoners() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___invalidSummoners;
}
constexpr void GlobalNamespace::GreyZoneManager::__cordl_internal_set_invalidSummoners(::System::Collections::Generic::HashSet_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___invalidSummoners = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GreyZoneAreaEnable>>*& GlobalNamespace::GreyZoneManager::__cordl_internal_get_m_areas()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_areas;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GreyZoneAreaEnable>>* const& GlobalNamespace::GreyZoneManager::__cordl_internal_get_m_areas() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_areas;
}
constexpr void GlobalNamespace::GreyZoneManager::__cordl_internal_set_m_areas(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GreyZoneAreaEnable>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_areas = value;
}
constexpr ::UnityEngine::Coroutine*& GlobalNamespace::GreyZoneManager::__cordl_internal_get_audioFadeCoroutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioFadeCoroutine;
}
constexpr ::UnityEngine::Coroutine* const& GlobalNamespace::GreyZoneManager::__cordl_internal_get_audioFadeCoroutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioFadeCoroutine;
}
constexpr void GlobalNamespace::GreyZoneManager::__cordl_internal_set_audioFadeCoroutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioFadeCoroutine = value;
}
constexpr ::ArrayW<::Photon::Realtime::Player*>& GlobalNamespace::GreyZoneManager::__cordl_internal_get_roomPlayerList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomPlayerList;
}
constexpr ::ArrayW<::Photon::Realtime::Player*> const& GlobalNamespace::GreyZoneManager::__cordl_internal_get_roomPlayerList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomPlayerList;
}
constexpr void GlobalNamespace::GreyZoneManager::__cordl_internal_set_roomPlayerList(::ArrayW<::Photon::Realtime::Player*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___roomPlayerList = value;
}
constexpr ::GlobalNamespace::ShaderHashId& GlobalNamespace::GreyZoneManager::__cordl_internal_get__GreyZoneActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GreyZoneActive;
}
constexpr ::GlobalNamespace::ShaderHashId const& GlobalNamespace::GreyZoneManager::__cordl_internal_get__GreyZoneActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GreyZoneActive;
}
constexpr void GlobalNamespace::GreyZoneManager::__cordl_internal_set__GreyZoneActive(::GlobalNamespace::ShaderHashId  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GreyZoneActive = value;
}
constexpr ::UnityW<::GlobalNamespace::MoonController>& GlobalNamespace::GreyZoneManager::__cordl_internal_get_moonController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moonController;
}
constexpr ::UnityW<::GlobalNamespace::MoonController> const& GlobalNamespace::GreyZoneManager::__cordl_internal_get_moonController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moonController;
}
constexpr void GlobalNamespace::GreyZoneManager::__cordl_internal_set_moonController(::UnityW<::GlobalNamespace::MoonController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___moonController = value;
}
constexpr float_t& GlobalNamespace::GreyZoneManager::__cordl_internal_get_skyMonsterMovementVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skyMonsterMovementVelocity;
}
constexpr float_t const& GlobalNamespace::GreyZoneManager::__cordl_internal_get_skyMonsterMovementVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skyMonsterMovementVelocity;
}
constexpr void GlobalNamespace::GreyZoneManager::__cordl_internal_set_skyMonsterMovementVelocity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___skyMonsterMovementVelocity = value;
}
constexpr bool& GlobalNamespace::GreyZoneManager::__cordl_internal_get_gravityOverrideSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravityOverrideSet;
}
constexpr bool const& GlobalNamespace::GreyZoneManager::__cordl_internal_get_gravityOverrideSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravityOverrideSet;
}
constexpr void GlobalNamespace::GreyZoneManager::__cordl_internal_set_gravityOverrideSet(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gravityOverrideSet = value;
}
constexpr float_t& GlobalNamespace::GreyZoneManager::__cordl_internal_get_greyZoneAmbienceVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___greyZoneAmbienceVolume;
}
constexpr float_t const& GlobalNamespace::GreyZoneManager::__cordl_internal_get_greyZoneAmbienceVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___greyZoneAmbienceVolume;
}
constexpr void GlobalNamespace::GreyZoneManager::__cordl_internal_set_greyZoneAmbienceVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___greyZoneAmbienceVolume = value;
}
constexpr int32_t& GlobalNamespace::GreyZoneManager::__cordl_internal_get_greyZoneAvailableDayOfYear()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___greyZoneAvailableDayOfYear;
}
constexpr int32_t const& GlobalNamespace::GreyZoneManager::__cordl_internal_get_greyZoneAvailableDayOfYear() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___greyZoneAvailableDayOfYear;
}
constexpr void GlobalNamespace::GreyZoneManager::__cordl_internal_set_greyZoneAvailableDayOfYear(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___greyZoneAvailableDayOfYear = value;
}
constexpr ::System::Action*& GlobalNamespace::GreyZoneManager::__cordl_internal_get_OnGreyZoneActivated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnGreyZoneActivated;
}
constexpr ::System::Action* const& GlobalNamespace::GreyZoneManager::__cordl_internal_get_OnGreyZoneActivated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnGreyZoneActivated;
}
constexpr void GlobalNamespace::GreyZoneManager::__cordl_internal_set_OnGreyZoneActivated(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnGreyZoneActivated = value;
}
constexpr ::System::Action*& GlobalNamespace::GreyZoneManager::__cordl_internal_get_OnGreyZoneDeactivated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnGreyZoneDeactivated;
}
constexpr ::System::Action* const& GlobalNamespace::GreyZoneManager::__cordl_internal_get_OnGreyZoneDeactivated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnGreyZoneDeactivated;
}
constexpr void GlobalNamespace::GreyZoneManager::__cordl_internal_set_OnGreyZoneDeactivated(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnGreyZoneDeactivated = value;
}
inline void GlobalNamespace::GreyZoneManager::setStaticF_Instance(::UnityW<::GlobalNamespace::GreyZoneManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::GreyZoneManager>, "Instance", ::GlobalNamespace::GreyZoneManager*>(std::forward<::UnityW<::GlobalNamespace::GreyZoneManager>>(value));
}
inline ::UnityW<::GlobalNamespace::GreyZoneManager> GlobalNamespace::GreyZoneManager::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::GreyZoneManager>, "Instance", ::GlobalNamespace::GreyZoneManager*>();
}
inline bool GlobalNamespace::GreyZoneManager::get_GreyZoneActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"get_GreyZoneActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::GreyZoneManager::get_GreyZoneAvailable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"get_GreyZoneAvailable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t GlobalNamespace::GreyZoneManager::get_GravityFactorSelection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"get_GravityFactorSelection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool GlobalNamespace::GreyZoneManager::get_TickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"get_TickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GreyZoneManager::set_TickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GreyZoneManager::get_HasAuthority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"get_HasAuthority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t GlobalNamespace::GreyZoneManager::get_SummoningProgress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"get_SummoningProgress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::GreyZoneManager::RegisterSummoner(::GlobalNamespace::GreyZoneSummoner*  summoner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"RegisterSummoner", {}, {::i2c::type_of<::GlobalNamespace::GreyZoneSummoner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, summoner);
}
inline void GlobalNamespace::GreyZoneManager::DeregisterSummoner(::GlobalNamespace::GreyZoneSummoner*  summoner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"DeregisterSummoner", {}, {::i2c::type_of<::GlobalNamespace::GreyZoneSummoner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, summoner);
}
inline void GlobalNamespace::GreyZoneManager::RegisterMoon(::GlobalNamespace::MoonController*  moon)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"RegisterMoon", {}, {::i2c::type_of<::GlobalNamespace::MoonController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, moon);
}
inline void GlobalNamespace::GreyZoneManager::UnregisterMoon(::GlobalNamespace::MoonController*  moon)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"UnregisterMoon", {}, {::i2c::type_of<::GlobalNamespace::MoonController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, moon);
}
inline void GlobalNamespace::GreyZoneManager::RegisterArea(::GlobalNamespace::GreyZoneAreaEnable*  area)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"RegisterArea", {}, {::i2c::type_of<::GlobalNamespace::GreyZoneAreaEnable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, area);
}
inline void GlobalNamespace::GreyZoneManager::UnRegisterArea(::GlobalNamespace::GreyZoneAreaEnable*  area)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"UnRegisterArea", {}, {::i2c::type_of<::GlobalNamespace::GreyZoneAreaEnable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, area);
}
inline void GlobalNamespace::GreyZoneManager::ActivateGreyZoneAuthority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"ActivateGreyZoneAuthority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GreyZoneManager::ActivateGreyZoneLocal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"ActivateGreyZoneLocal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GreyZoneManager::LocalSimpleActivation(bool  onOff, float_t  gravityFactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"LocalSimpleActivation", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, onOff, gravityFactor);
}
inline void GlobalNamespace::GreyZoneManager::DeactivateGreyZoneAuthority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"DeactivateGreyZoneAuthority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GreyZoneManager::DeactivateGreyZoneLocal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"DeactivateGreyZoneLocal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GreyZoneManager::ForceStopGreyZone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"ForceStopGreyZone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GreyZoneManager::GravityOverrideFunction(::GorillaLocomotion::GTPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"GravityOverrideFunction", {}, {::i2c::type_of<::GorillaLocomotion::GTPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::GreyZoneManager::SimpleGravityOverrideFunction(::GorillaLocomotion::GTPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"SimpleGravityOverrideFunction", {}, {::i2c::type_of<::GorillaLocomotion::GTPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::GreyZoneManager::FadeAudioIn(::UnityEngine::AudioSource*  source, float_t  maxVolume, float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"FadeAudioIn", {}, {::i2c::type_of<::UnityEngine::AudioSource*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, source, maxVolume, duration);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::GreyZoneManager::FadeAudioOut(::UnityEngine::AudioSource*  source, float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"FadeAudioOut", {}, {::i2c::type_of<::UnityEngine::AudioSource*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, source, duration);
}
inline void GlobalNamespace::GreyZoneManager::VRRigEnteredSummonerProximity(::GlobalNamespace::VRRig*  rig, ::GlobalNamespace::GreyZoneSummoner*  summoner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"VRRigEnteredSummonerProximity", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::GlobalNamespace::GreyZoneSummoner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig, summoner);
}
inline void GlobalNamespace::GreyZoneManager::VRRigExitedSummonerProximity(::GlobalNamespace::VRRig*  rig, ::GlobalNamespace::GreyZoneSummoner*  summoner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"VRRigExitedSummonerProximity", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::GlobalNamespace::GreyZoneSummoner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig, summoner);
}
inline void GlobalNamespace::GreyZoneManager::UpdateSummonerVisuals()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"UpdateSummonerVisuals", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GreyZoneManager::ValidateSummoningPlayers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"ValidateSummoningPlayers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::GreyZoneManager::DayNightOverrideFunction(int32_t  inputIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"DayNightOverrideFunction", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, inputIndex);
}
inline void GlobalNamespace::GreyZoneManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GreyZoneManager::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GreyZoneManager::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GreyZoneManager::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GreyZoneManager::AuthorityUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"AuthorityUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GreyZoneManager::SharedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"SharedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GreyZoneManager::OnPhotonSerializeView(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"OnPhotonSerializeView", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::GreyZoneManager::OnPlayerEnteredRoom(::Photon::Realtime::Player*  newPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"OnPlayerEnteredRoom", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newPlayer);
}
inline void GlobalNamespace::GreyZoneManager::OnPlayerLeftRoom(::Photon::Realtime::Player*  otherPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"OnPlayerLeftRoom", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, otherPlayer);
}
inline void GlobalNamespace::GreyZoneManager::OnRoomPropertiesUpdate(::ExitGames::Client::Photon::Hashtable*  propertiesThatChanged)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"OnRoomPropertiesUpdate", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propertiesThatChanged);
}
inline void GlobalNamespace::GreyZoneManager::OnPlayerPropertiesUpdate(::Photon::Realtime::Player*  targetPlayer, ::ExitGames::Client::Photon::Hashtable*  changedProps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"OnPlayerPropertiesUpdate", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetPlayer, changedProps);
}
inline void GlobalNamespace::GreyZoneManager::OnMasterClientSwitched(::Photon::Realtime::Player*  newMasterClient)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {"OnMasterClientSwitched", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newMasterClient);
}
inline void GlobalNamespace::GreyZoneManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GreyZoneManager* GlobalNamespace::GreyZoneManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GreyZoneManager*>());
}
/// @brief Convert operator to "::Photon::Pun::IPunObservable"
constexpr  GlobalNamespace::GreyZoneManager::operator ::Photon::Pun::IPunObservable*() noexcept {
return static_cast<::Photon::Pun::IPunObservable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Pun::IPunObservable"
constexpr ::Photon::Pun::IPunObservable* GlobalNamespace::GreyZoneManager::i___Photon__Pun__IPunObservable() noexcept {
return static_cast<::Photon::Pun::IPunObservable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Photon::Realtime::IInRoomCallbacks"
constexpr  GlobalNamespace::GreyZoneManager::operator ::Photon::Realtime::IInRoomCallbacks*() noexcept {
return static_cast<::Photon::Realtime::IInRoomCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Realtime::IInRoomCallbacks"
constexpr ::Photon::Realtime::IInRoomCallbacks* GlobalNamespace::GreyZoneManager::i___Photon__Realtime__IInRoomCallbacks() noexcept {
return static_cast<::Photon::Realtime::IInRoomCallbacks*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GreyZoneManager::GreyZoneManager()   {
}
//  Writing Method size for method: ::GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64::*)(int32_t)>(&::GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x561b164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64::*)()>(&::GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x561ceb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64::*)()>(&::GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64::MoveNext)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x561ceb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64::*)()>(&::GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x561d008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64::*)()>(&::GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x561d010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64::*)()>(&::GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x561d048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64::__cordl_internal_get_source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64::__cordl_internal_get_source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
constexpr void GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64::__cordl_internal_set_source(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___source = value;
}
constexpr float_t& GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64::__cordl_internal_get_duration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr float_t const& GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64::__cordl_internal_get_duration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr void GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64::__cordl_internal_set_duration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___duration = value;
}
constexpr float_t& GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64::__cordl_internal_get__startingVolume_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startingVolume_5__2;
}
constexpr float_t const& GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64::__cordl_internal_get__startingVolume_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startingVolume_5__2;
}
constexpr void GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64::__cordl_internal_set__startingVolume_5__2(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startingVolume_5__2 = value;
}
constexpr float_t& GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64::__cordl_internal_get__startTime_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startTime_5__3;
}
constexpr float_t const& GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64::__cordl_internal_get__startTime_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startTime_5__3;
}
constexpr void GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64::__cordl_internal_set__startTime_5__3(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startTime_5__3 = value;
}
inline void GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64* GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64::GreyZoneManager__FadeAudioOut_d__64()   {
}
//  Writing Method size for method: ::GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63::*)(int32_t)>(&::GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x561b13c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63::*)()>(&::GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x561cd0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63::*)()>(&::GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63::MoveNext)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x561cd10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63::*)()>(&::GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x561ce68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63::*)()>(&::GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x561ce70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63::*)()>(&::GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x561cea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63::__cordl_internal_get_source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63::__cordl_internal_get_source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
constexpr void GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63::__cordl_internal_set_source(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___source = value;
}
constexpr float_t& GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63::__cordl_internal_get_maxVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxVolume;
}
constexpr float_t const& GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63::__cordl_internal_get_maxVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxVolume;
}
constexpr void GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63::__cordl_internal_set_maxVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxVolume = value;
}
constexpr float_t& GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63::__cordl_internal_get_duration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr float_t const& GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63::__cordl_internal_get_duration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr void GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63::__cordl_internal_set_duration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___duration = value;
}
constexpr float_t& GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63::__cordl_internal_get__startingVolume_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startingVolume_5__2;
}
constexpr float_t const& GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63::__cordl_internal_get__startingVolume_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startingVolume_5__2;
}
constexpr void GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63::__cordl_internal_set__startingVolume_5__2(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startingVolume_5__2 = value;
}
constexpr float_t& GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63::__cordl_internal_get__startTime_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startTime_5__3;
}
constexpr float_t const& GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63::__cordl_internal_get__startTime_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startTime_5__3;
}
constexpr void GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63::__cordl_internal_set__startTime_5__3(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startTime_5__3 = value;
}
inline void GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63* GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63::GreyZoneManager__FadeAudioIn_d__63()   {
}
