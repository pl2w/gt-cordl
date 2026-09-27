#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaGuardianManager.hpp"
#include "GlobalNamespace/zzzz__GorillaGameManager_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaGuardianManager_def.hpp"
#include "Fusion/zzzz__NetworkObject_def.hpp"
#include "GlobalNamespace/zzzz__GameModeSerializer_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__Tappable_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaGameModes/zzzz__GameModeType_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianManager.get_isPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaGuardianManager::*)()>(&::GlobalNamespace::GorillaGuardianManager::get_isPlaying)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59083ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(),
                        {"get_isPlaying", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianManager.set_isPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGuardianManager::*)(bool)>(&::GlobalNamespace::GorillaGuardianManager::set_isPlaying)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59083f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(),
                        {"set_isPlaying", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianManager.StartPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGuardianManager::*)()>(&::GlobalNamespace::GorillaGuardianManager::StartPlaying)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x59083fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(), 96}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianManager.StopPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGuardianManager::*)()>(&::GlobalNamespace::GorillaGuardianManager::StopPlaying)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5908674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(), 97}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianManager.ResetGame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGuardianManager::*)()>(&::GlobalNamespace::GorillaGuardianManager::ResetGame)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5908874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(), 95}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianManager.NetworkLinkSetup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGuardianManager::*)(::GlobalNamespace::GameModeSerializer*)>(&::GlobalNamespace::GorillaGuardianManager::NetworkLinkSetup)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5908878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(), 87}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianManager.AddFusionDataBehaviour
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGuardianManager::*)(::Fusion::NetworkObject*)>(&::GlobalNamespace::GorillaGuardianManager::AddFusionDataBehaviour)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59088f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(), 90}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianManager.OnSerializeRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGuardianManager::*)(::System::Object*)>(&::GlobalNamespace::GorillaGuardianManager::OnSerializeRead)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59088fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(), 91}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianManager.OnSerializeWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GorillaGuardianManager::*)()>(&::GlobalNamespace::GorillaGuardianManager::OnSerializeWrite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5908900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(), 92}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianManager.LocalCanTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaGuardianManager::*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaGuardianManager::LocalCanTag)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5908908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(), 79}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianManager.LocalIsTagged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaGuardianManager::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaGuardianManager::LocalIsTagged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5908ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(), 80}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianManager.CanJoinFrienship
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaGuardianManager::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaGuardianManager::CanJoinFrienship)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5908ad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(), 73}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianManager.IsPlayerGuardian
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaGuardianManager::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaGuardianManager::IsPlayerGuardian)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5908938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(),
                        {"IsPlayerGuardian", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianManager.RequestEjectGuardian
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGuardianManager::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaGuardianManager::RequestEjectGuardian)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5908280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(),
                        {"RequestEjectGuardian", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianManager.EjectGuardian
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGuardianManager::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaGuardianManager::EjectGuardian)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5908b0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(),
                        {"EjectGuardian", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianManager.LaunchPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGuardianManager::*)(::GlobalNamespace::NetPlayer*, ::UnityEngine::Vector3)>(&::GlobalNamespace::GorillaGuardianManager::LaunchPlayer)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x59091a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(),
                        {"LaunchPlayer", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianManager.LocalTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGuardianManager::*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*, bool, bool)>(&::GlobalNamespace::GorillaGuardianManager::LocalTag)> {
  constexpr static std::size_t size = 0x510;
  constexpr static std::size_t addrs = 0x5909480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(), 68}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianManager.CheckSlap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaGuardianManager::*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*, bool, ::by_ref<::UnityEngine::Vector3>)>(&::GlobalNamespace::GorillaGuardianManager::CheckSlap)> {
  constexpr static std::size_t size = 0x5cc;
  constexpr static std::size_t addrs = 0x5909990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(),
                        {"CheckSlap", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianManager.HandleHandTap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGuardianManager::*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::Tappable*, bool, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::GorillaGuardianManager::HandleHandTap)> {
  constexpr static std::size_t size = 0xb38;
  constexpr static std::size_t addrs = 0x590a334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(), 72}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianManager.CheckLaunchRetriggerDelay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaGuardianManager::*)(::GlobalNamespace::VRRig*)>(&::GlobalNamespace::GorillaGuardianManager::CheckLaunchRetriggerDelay)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x590a2dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(),
                        {"CheckLaunchRetriggerDelay", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianManager.IsHoldingPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaGuardianManager::*)()>(&::GlobalNamespace::GorillaGuardianManager::IsHoldingPlayer)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5908aa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(),
                        {"IsHoldingPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianManager.IsHoldingPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaGuardianManager::*)(bool)>(&::GlobalNamespace::GorillaGuardianManager::IsHoldingPlayer)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x590a044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(),
                        {"IsHoldingPlayer", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianManager.IsRigBeingHeld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaGuardianManager::*)(::GlobalNamespace::VRRig*)>(&::GlobalNamespace::GorillaGuardianManager::IsRigBeingHeld)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x590a13c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(),
                        {"IsRigBeingHeld", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianManager.OnSerializeWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGuardianManager::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GorillaGuardianManager::OnSerializeWrite)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x590af54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(), 94}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianManager.OnSerializeRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGuardianManager::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GorillaGuardianManager::OnSerializeRead)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x590af58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(), 93}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianManager.GameType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaGameModes::GameModeType (::GlobalNamespace::GorillaGuardianManager::*)()>(&::GlobalNamespace::GorillaGuardianManager::GameType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x590af5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(), 89}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianManager.GameModeName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GorillaGuardianManager::*)()>(&::GlobalNamespace::GorillaGuardianManager::GameModeName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x590af64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(), 66}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianManager.GameModeNameRoomLabel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GorillaGuardianManager::*)()>(&::GlobalNamespace::GorillaGuardianManager::GameModeNameRoomLabel)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x590afa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(), 67}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianManager.PlaySlapEffect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGuardianManager::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::GorillaGuardianManager::PlaySlapEffect)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x590b07c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(),
                        {"PlaySlapEffect", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianManager.LocalPlaySlapEffect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGuardianManager::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::GorillaGuardianManager::LocalPlaySlapEffect)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5909f5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(),
                        {"LocalPlaySlapEffect", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianManager.PlaySlamEffect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGuardianManager::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::GorillaGuardianManager::PlaySlamEffect)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x590b080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(),
                        {"PlaySlamEffect", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianManager.LocalPlaySlamEffect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGuardianManager::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::GorillaGuardianManager::LocalPlaySlamEffect)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x590ae6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(),
                        {"LocalPlaySlamEffect", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGuardianManager::*)()>(&::GlobalNamespace::GorillaGuardianManager::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x590b084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::GorillaGuardianManager::__cordl_internal_get_slapFrontAlignmentThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slapFrontAlignmentThreshold;
}
constexpr float_t const& GlobalNamespace::GorillaGuardianManager::__cordl_internal_get_slapFrontAlignmentThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slapFrontAlignmentThreshold;
}
constexpr void GlobalNamespace::GorillaGuardianManager::__cordl_internal_set_slapFrontAlignmentThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slapFrontAlignmentThreshold = value;
}
constexpr float_t& GlobalNamespace::GorillaGuardianManager::__cordl_internal_get_slapBackAlignmentThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slapBackAlignmentThreshold;
}
constexpr float_t const& GlobalNamespace::GorillaGuardianManager::__cordl_internal_get_slapBackAlignmentThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slapBackAlignmentThreshold;
}
constexpr void GlobalNamespace::GorillaGuardianManager::__cordl_internal_set_slapBackAlignmentThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slapBackAlignmentThreshold = value;
}
constexpr float_t& GlobalNamespace::GorillaGuardianManager::__cordl_internal_get_launchMinimumStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchMinimumStrength;
}
constexpr float_t const& GlobalNamespace::GorillaGuardianManager::__cordl_internal_get_launchMinimumStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchMinimumStrength;
}
constexpr void GlobalNamespace::GorillaGuardianManager::__cordl_internal_set_launchMinimumStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___launchMinimumStrength = value;
}
constexpr float_t& GlobalNamespace::GorillaGuardianManager::__cordl_internal_get_launchStrengthMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchStrengthMultiplier;
}
constexpr float_t const& GlobalNamespace::GorillaGuardianManager::__cordl_internal_get_launchStrengthMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchStrengthMultiplier;
}
constexpr void GlobalNamespace::GorillaGuardianManager::__cordl_internal_set_launchStrengthMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___launchStrengthMultiplier = value;
}
constexpr float_t& GlobalNamespace::GorillaGuardianManager::__cordl_internal_get_launchGroundHeadCheckDist()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchGroundHeadCheckDist;
}
constexpr float_t const& GlobalNamespace::GorillaGuardianManager::__cordl_internal_get_launchGroundHeadCheckDist() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchGroundHeadCheckDist;
}
constexpr void GlobalNamespace::GorillaGuardianManager::__cordl_internal_set_launchGroundHeadCheckDist(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___launchGroundHeadCheckDist = value;
}
constexpr float_t& GlobalNamespace::GorillaGuardianManager::__cordl_internal_get_launchGroundHandCheckDist()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchGroundHandCheckDist;
}
constexpr float_t const& GlobalNamespace::GorillaGuardianManager::__cordl_internal_get_launchGroundHandCheckDist() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchGroundHandCheckDist;
}
constexpr void GlobalNamespace::GorillaGuardianManager::__cordl_internal_set_launchGroundHandCheckDist(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___launchGroundHandCheckDist = value;
}
constexpr float_t& GlobalNamespace::GorillaGuardianManager::__cordl_internal_get_launchGroundKickup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchGroundKickup;
}
constexpr float_t const& GlobalNamespace::GorillaGuardianManager::__cordl_internal_get_launchGroundKickup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchGroundKickup;
}
constexpr void GlobalNamespace::GorillaGuardianManager::__cordl_internal_set_launchGroundKickup(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___launchGroundKickup = value;
}
constexpr float_t& GlobalNamespace::GorillaGuardianManager::__cordl_internal_get_slamTriggerTapSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slamTriggerTapSpeed;
}
constexpr float_t const& GlobalNamespace::GorillaGuardianManager::__cordl_internal_get_slamTriggerTapSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slamTriggerTapSpeed;
}
constexpr void GlobalNamespace::GorillaGuardianManager::__cordl_internal_set_slamTriggerTapSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slamTriggerTapSpeed = value;
}
constexpr float_t& GlobalNamespace::GorillaGuardianManager::__cordl_internal_get_slamMaxTapSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slamMaxTapSpeed;
}
constexpr float_t const& GlobalNamespace::GorillaGuardianManager::__cordl_internal_get_slamMaxTapSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slamMaxTapSpeed;
}
constexpr void GlobalNamespace::GorillaGuardianManager::__cordl_internal_set_slamMaxTapSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slamMaxTapSpeed = value;
}
constexpr float_t& GlobalNamespace::GorillaGuardianManager::__cordl_internal_get_slamTriggerAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slamTriggerAngle;
}
constexpr float_t const& GlobalNamespace::GorillaGuardianManager::__cordl_internal_get_slamTriggerAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slamTriggerAngle;
}
constexpr void GlobalNamespace::GorillaGuardianManager::__cordl_internal_set_slamTriggerAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slamTriggerAngle = value;
}
constexpr float_t& GlobalNamespace::GorillaGuardianManager::__cordl_internal_get_slamRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slamRadius;
}
constexpr float_t const& GlobalNamespace::GorillaGuardianManager::__cordl_internal_get_slamRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slamRadius;
}
constexpr void GlobalNamespace::GorillaGuardianManager::__cordl_internal_set_slamRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slamRadius = value;
}
constexpr float_t& GlobalNamespace::GorillaGuardianManager::__cordl_internal_get_slamMinStrengthMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slamMinStrengthMultiplier;
}
constexpr float_t const& GlobalNamespace::GorillaGuardianManager::__cordl_internal_get_slamMinStrengthMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slamMinStrengthMultiplier;
}
constexpr void GlobalNamespace::GorillaGuardianManager::__cordl_internal_set_slamMinStrengthMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slamMinStrengthMultiplier = value;
}
constexpr float_t& GlobalNamespace::GorillaGuardianManager::__cordl_internal_get_slamMaxStrengthMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slamMaxStrengthMultiplier;
}
constexpr float_t const& GlobalNamespace::GorillaGuardianManager::__cordl_internal_get_slamMaxStrengthMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slamMaxStrengthMultiplier;
}
constexpr void GlobalNamespace::GorillaGuardianManager::__cordl_internal_set_slamMaxStrengthMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slamMaxStrengthMultiplier = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GorillaGuardianManager::__cordl_internal_get_slapImpactPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slapImpactPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GorillaGuardianManager::__cordl_internal_get_slapImpactPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slapImpactPrefab;
}
constexpr void GlobalNamespace::GorillaGuardianManager::__cordl_internal_set_slapImpactPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slapImpactPrefab = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GorillaGuardianManager::__cordl_internal_get_slamImpactPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slamImpactPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GorillaGuardianManager::__cordl_internal_get_slamImpactPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slamImpactPrefab;
}
constexpr void GlobalNamespace::GorillaGuardianManager::__cordl_internal_set_slamImpactPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slamImpactPrefab = value;
}
constexpr float_t& GlobalNamespace::GorillaGuardianManager::__cordl_internal_get_hapticStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticStrength;
}
constexpr float_t const& GlobalNamespace::GorillaGuardianManager::__cordl_internal_get_hapticStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticStrength;
}
constexpr void GlobalNamespace::GorillaGuardianManager::__cordl_internal_set_hapticStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hapticStrength = value;
}
constexpr float_t& GlobalNamespace::GorillaGuardianManager::__cordl_internal_get_hapticDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticDuration;
}
constexpr float_t const& GlobalNamespace::GorillaGuardianManager::__cordl_internal_get_hapticDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticDuration;
}
constexpr void GlobalNamespace::GorillaGuardianManager::__cordl_internal_set_hapticDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hapticDuration = value;
}
constexpr bool& GlobalNamespace::GorillaGuardianManager::__cordl_internal_get__isPlaying_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isPlaying_k__BackingField;
}
constexpr bool const& GlobalNamespace::GorillaGuardianManager::__cordl_internal_get__isPlaying_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isPlaying_k__BackingField;
}
constexpr void GlobalNamespace::GorillaGuardianManager::__cordl_internal_set__isPlaying_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isPlaying_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::GorillaGuardianManager::__cordl_internal_get_requiredGuardianDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requiredGuardianDistance;
}
constexpr float_t const& GlobalNamespace::GorillaGuardianManager::__cordl_internal_get_requiredGuardianDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requiredGuardianDistance;
}
constexpr void GlobalNamespace::GorillaGuardianManager::__cordl_internal_set_requiredGuardianDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___requiredGuardianDistance = value;
}
constexpr float_t& GlobalNamespace::GorillaGuardianManager::__cordl_internal_get_maxLaunchVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxLaunchVelocity;
}
constexpr float_t const& GlobalNamespace::GorillaGuardianManager::__cordl_internal_get_maxLaunchVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxLaunchVelocity;
}
constexpr void GlobalNamespace::GorillaGuardianManager::__cordl_internal_set_maxLaunchVelocity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxLaunchVelocity = value;
}
inline bool GlobalNamespace::GorillaGuardianManager::get_isPlaying()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(),
                        {"get_isPlaying", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaGuardianManager::set_isPlaying(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(),
                        {"set_isPlaying", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GorillaGuardianManager::StartPlaying()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(), 96}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaGuardianManager::StopPlaying()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(), 97}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaGuardianManager::ResetGame()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(), 95}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaGuardianManager::NetworkLinkSetup(::GlobalNamespace::GameModeSerializer*  netSerializer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(), 87}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, netSerializer);
}
inline void GlobalNamespace::GorillaGuardianManager::AddFusionDataBehaviour(::Fusion::NetworkObject*  behaviour)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(), 90}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, behaviour);
}
inline void GlobalNamespace::GorillaGuardianManager::OnSerializeRead(::System::Object*  newData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(), 91}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newData);
}
inline ::System::Object* GlobalNamespace::GorillaGuardianManager::OnSerializeWrite()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(), 92}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaGuardianManager::LocalCanTag(::GlobalNamespace::NetPlayer*  myPlayer, ::GlobalNamespace::NetPlayer*  otherPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(), 79}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, myPlayer, otherPlayer);
}
inline bool GlobalNamespace::GorillaGuardianManager::LocalIsTagged(::GlobalNamespace::NetPlayer*  player)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(), 80}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player);
}
inline bool GlobalNamespace::GorillaGuardianManager::CanJoinFrienship(::GlobalNamespace::NetPlayer*  player)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(), 73}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player);
}
inline bool GlobalNamespace::GorillaGuardianManager::IsPlayerGuardian(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(),
                        {"IsPlayerGuardian", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player);
}
inline void GlobalNamespace::GorillaGuardianManager::RequestEjectGuardian(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(),
                        {"RequestEjectGuardian", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::GorillaGuardianManager::EjectGuardian(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(),
                        {"EjectGuardian", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::GorillaGuardianManager::LaunchPlayer(::GlobalNamespace::NetPlayer*  launcher, ::UnityEngine::Vector3  velocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(),
                        {"LaunchPlayer", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, launcher, velocity);
}
inline void GlobalNamespace::GorillaGuardianManager::LocalTag(::GlobalNamespace::NetPlayer*  taggedPlayer, ::GlobalNamespace::NetPlayer*  taggingPlayer, bool  bodyHit, bool  leftHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(), 68}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, taggedPlayer, taggingPlayer, bodyHit, leftHand);
}
inline bool GlobalNamespace::GorillaGuardianManager::CheckSlap(::GlobalNamespace::NetPlayer*  slapper, ::GlobalNamespace::NetPlayer*  target, bool  leftHand, ::by_ref<::UnityEngine::Vector3>  velocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(),
                        {"CheckSlap", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, slapper, target, leftHand, velocity);
}
inline void GlobalNamespace::GorillaGuardianManager::HandleHandTap(::GlobalNamespace::NetPlayer*  tappingPlayer, ::GlobalNamespace::Tappable*  hitTappable, bool  leftHand, ::UnityEngine::Vector3  handVelocity, ::UnityEngine::Vector3  tapSurfaceNormal)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(), 72}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tappingPlayer, hitTappable, leftHand, handVelocity, tapSurfaceNormal);
}
inline bool GlobalNamespace::GorillaGuardianManager::CheckLaunchRetriggerDelay(::GlobalNamespace::VRRig*  launchedRig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(),
                        {"CheckLaunchRetriggerDelay", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, launchedRig);
}
inline bool GlobalNamespace::GorillaGuardianManager::IsHoldingPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(),
                        {"IsHoldingPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaGuardianManager::IsHoldingPlayer(bool  leftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(),
                        {"IsHoldingPlayer", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, leftHand);
}
inline bool GlobalNamespace::GorillaGuardianManager::IsRigBeingHeld(::GlobalNamespace::VRRig*  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(),
                        {"IsRigBeingHeld", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, rig);
}
inline void GlobalNamespace::GorillaGuardianManager::OnSerializeWrite(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(), 94}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::GorillaGuardianManager::OnSerializeRead(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(), 93}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline ::GorillaGameModes::GameModeType GlobalNamespace::GorillaGuardianManager::GameType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(), 89}
                        )));
return ::cordl_internals::RunMethodRethrow<::GorillaGameModes::GameModeType>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GorillaGuardianManager::GameModeName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(), 66}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GorillaGuardianManager::GameModeNameRoomLabel()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(), 67}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaGuardianManager::PlaySlapEffect(::UnityEngine::Vector3  location, ::UnityEngine::Vector3  direction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(),
                        {"PlaySlapEffect", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, location, direction);
}
inline void GlobalNamespace::GorillaGuardianManager::LocalPlaySlapEffect(::UnityEngine::Vector3  location, ::UnityEngine::Vector3  direction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(),
                        {"LocalPlaySlapEffect", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, location, direction);
}
inline void GlobalNamespace::GorillaGuardianManager::PlaySlamEffect(::UnityEngine::Vector3  location, ::UnityEngine::Vector3  direction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(),
                        {"PlaySlamEffect", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, location, direction);
}
inline void GlobalNamespace::GorillaGuardianManager::LocalPlaySlamEffect(::UnityEngine::Vector3  location, ::UnityEngine::Vector3  direction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(),
                        {"LocalPlaySlamEffect", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, location, direction);
}
inline void GlobalNamespace::GorillaGuardianManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaGuardianManager* GlobalNamespace::GorillaGuardianManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaGuardianManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaGuardianManager::GorillaGuardianManager()   {
}
