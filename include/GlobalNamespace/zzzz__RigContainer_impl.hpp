#pragma once
// IWYU pragma private; include "GlobalNamespace/RigContainer.hpp"
#include "GlobalNamespace/zzzz__PlayerStatsReadonly_impl.hpp"
#include "GlobalNamespace/zzzz__RigContainer_MuteReason_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__RigContainer_def.hpp"
#include "GlobalNamespace/zzzz__LCKSocialCameraFollower_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__NetworkView_def.hpp"
#include "GlobalNamespace/zzzz__PlayerStatsReadonly_def.hpp"
#include "GlobalNamespace/zzzz__RigContainer_MuteReason_def.hpp"
#include "GlobalNamespace/zzzz__RigContainer_def.hpp"
#include "GlobalNamespace/zzzz__VRRigEvents_def.hpp"
#include "GlobalNamespace/zzzz__VRRigReliableState_def.hpp"
#include "GlobalNamespace/zzzz__VRRigSerializer_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaTag/Audio/zzzz__LoudSpeakerNetwork_def.hpp"
#include "Photon/Voice/PUN/zzzz__PhotonVoiceView_def.hpp"
#include "PlayFab/CloudScriptModels/zzzz__ExecuteFunctionResult_def.hpp"
#include "PlayFab/zzzz__PlayFabError_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__CapsuleCollider_def.hpp"
#include "UnityEngine/zzzz__SphereCollider_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RigContainer.get_Initialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RigContainer::*)()>(&::GlobalNamespace::RigContainer::get_Initialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58f7200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"get_Initialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigContainer.set_Initialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigContainer::*)(bool)>(&::GlobalNamespace::RigContainer::set_Initialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58f7208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"set_Initialized", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigContainer.get_Rig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::VRRig> (::GlobalNamespace::RigContainer::*)()>(&::GlobalNamespace::RigContainer::get_Rig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58f7210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"get_Rig", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigContainer.get_ReliableState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::VRRigReliableState> (::GlobalNamespace::RigContainer::*)()>(&::GlobalNamespace::RigContainer::get_ReliableState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58f7218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"get_ReliableState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigContainer.get_SpeakerHead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::RigContainer::*)()>(&::GlobalNamespace::RigContainer::get_SpeakerHead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58f7220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"get_SpeakerHead", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigContainer.get_ReplacementVoiceSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioSource> (::GlobalNamespace::RigContainer::*)()>(&::GlobalNamespace::RigContainer::get_ReplacementVoiceSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58f7228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"get_ReplacementVoiceSource", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigContainer.get_LoudSpeakerNetworks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Audio::LoudSpeakerNetwork>>* (::GlobalNamespace::RigContainer::*)()>(&::GlobalNamespace::RigContainer::get_LoudSpeakerNetworks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58f7230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"get_LoudSpeakerNetworks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigContainer.get_LckCococamFollower
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::LCKSocialCameraFollower> (::GlobalNamespace::RigContainer::*)()>(&::GlobalNamespace::RigContainer::get_LckCococamFollower)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58f7238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"get_LckCococamFollower", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigContainer.get_LCKTabletFollower
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::LCKSocialCameraFollower> (::GlobalNamespace::RigContainer::*)()>(&::GlobalNamespace::RigContainer::get_LCKTabletFollower)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58f7240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"get_LCKTabletFollower", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigContainer.get_Voice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Photon::Voice::PUN::PhotonVoiceView> (::GlobalNamespace::RigContainer::*)()>(&::GlobalNamespace::RigContainer::get_Voice)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58f7248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"get_Voice", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigContainer.set_Voice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigContainer::*)(::Photon::Voice::PUN::PhotonVoiceView*)>(&::GlobalNamespace::RigContainer::set_Voice)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x58f7250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"set_Voice", {}, {::i2c::type_of<::Photon::Voice::PUN::PhotonVoiceView*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigContainer.get_netView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::NetworkView> (::GlobalNamespace::RigContainer::*)()>(&::GlobalNamespace::RigContainer::get_netView)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58f74bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"get_netView", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigContainer.get_CachedNetViewID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::RigContainer::*)()>(&::GlobalNamespace::RigContainer::get_CachedNetViewID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58f74d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"get_CachedNetViewID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigContainer.get_IsMuted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RigContainer::*)()>(&::GlobalNamespace::RigContainer::get_IsMuted)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58f74dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"get_IsMuted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigContainer.IsMutedFor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RigContainer::*)(::GlobalNamespace::RigContainer_MuteReason)>(&::GlobalNamespace::RigContainer::IsMutedFor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58f74ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"IsMutedFor", {}, {::i2c::type_of<::GlobalNamespace::RigContainer_MuteReason>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigContainer.WithReasons
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::RigContainer_MuteReason (::GlobalNamespace::RigContainer::*)(::GlobalNamespace::RigContainer_MuteReason, bool)>(&::GlobalNamespace::RigContainer::WithReasons)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58f74fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"WithReasons", {}, {::i2c::type_of<::GlobalNamespace::RigContainer_MuteReason>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigContainer.SetMuted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigContainer::*)(::GlobalNamespace::RigContainer_MuteReason, bool)>(&::GlobalNamespace::RigContainer::SetMuted)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x58f6f58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"SetMuted", {}, {::i2c::type_of<::GlobalNamespace::RigContainer_MuteReason>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigContainer.get_Creator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NetPlayer* (::GlobalNamespace::RigContainer::*)()>(&::GlobalNamespace::RigContainer::get_Creator)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58f7514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"get_Creator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigContainer.set_Creator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigContainer::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::RigContainer::set_Creator)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x58f752c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"set_Creator", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigContainer.get_HeadCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::SphereCollider> (::GlobalNamespace::RigContainer::*)()>(&::GlobalNamespace::RigContainer::get_HeadCollider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58f7598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"get_HeadCollider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigContainer.get_BodyCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::CapsuleCollider> (::GlobalNamespace::RigContainer::*)()>(&::GlobalNamespace::RigContainer::get_BodyCollider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58f75a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"get_BodyCollider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigContainer.get_RigEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::VRRigEvents> (::GlobalNamespace::RigContainer::*)()>(&::GlobalNamespace::RigContainer::get_RigEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58f75a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"get_RigEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigContainer.get_PlayerStats
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerStatsReadonly (::GlobalNamespace::RigContainer::*)()>(&::GlobalNamespace::RigContainer::get_PlayerStats)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x58f75b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"get_PlayerStats", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigContainer.set_PlayerStats
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigContainer::*)(::GlobalNamespace::PlayerStatsReadonly)>(&::GlobalNamespace::RigContainer::set_PlayerStats)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58f76d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"set_PlayerStats", {}, {::i2c::type_of<::GlobalNamespace::PlayerStatsReadonly>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigContainer.GetIsPlayerAutoMuted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RigContainer::*)()>(&::GlobalNamespace::RigContainer::GetIsPlayerAutoMuted)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58f76dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"GetIsPlayerAutoMuted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigContainer.UpdateAutomuteLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigContainer::*)(::StringW)>(&::GlobalNamespace::RigContainer::UpdateAutomuteLevel)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x58f76e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"UpdateAutomuteLevel", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigContainer.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigContainer::*)()>(&::GlobalNamespace::RigContainer::Awake)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x58f77bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigContainer.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigContainer::*)()>(&::GlobalNamespace::RigContainer::Start)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x58f7838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigContainer.RigPostEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigContainer::*)(::GlobalNamespace::RigContainer*)>(&::GlobalNamespace::RigContainer::RigPostEnable)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58f7a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"RigPostEnable", {}, {::i2c::type_of<::GlobalNamespace::RigContainer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigContainer.OnMultiPlayerStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigContainer::*)()>(&::GlobalNamespace::RigContainer::OnMultiPlayerStarted)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x58f7a98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"OnMultiPlayerStarted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigContainer.OnReturnedToSinglePlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigContainer::*)()>(&::GlobalNamespace::RigContainer::OnReturnedToSinglePlayer)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x58f7b34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"OnReturnedToSinglePlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigContainer.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigContainer::*)()>(&::GlobalNamespace::RigContainer::OnDisable)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x58f7ca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigContainer.InitializeNetwork
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigContainer::*)(::GlobalNamespace::NetworkView*, ::Photon::Voice::PUN::PhotonVoiceView*, ::GlobalNamespace::VRRigSerializer*)>(&::GlobalNamespace::RigContainer::InitializeNetwork)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x58f7e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"InitializeNetwork", {}, {::i2c::type_of<::GlobalNamespace::NetworkView*>(), ::i2c::type_of<::Photon::Voice::PUN::PhotonVoiceView*>(), ::i2c::type_of<::GlobalNamespace::VRRigSerializer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigContainer.InitializeNetwork_Shared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigContainer::*)(::GlobalNamespace::NetworkView*, ::GlobalNamespace::VRRigSerializer*)>(&::GlobalNamespace::RigContainer::InitializeNetwork_Shared)> {
  constexpr static std::size_t size = 0x4ec;
  constexpr static std::size_t addrs = 0x58f7f1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"InitializeNetwork_Shared", {}, {::i2c::type_of<::GlobalNamespace::NetworkView*>(), ::i2c::type_of<::GlobalNamespace::VRRigSerializer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigContainer.QueueAutomute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::RigContainer::QueueAutomute)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x58f8408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"QueueAutomute", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigContainer.RequestAutomuteSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::RigContainer::RequestAutomuteSettings)> {
  constexpr static std::size_t size = 0x6a0;
  constexpr static std::size_t addrs = 0x58f849c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"RequestAutomuteSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigContainer.CancelAutomuteRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::RigContainer::CancelAutomuteRequest)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x58f7ba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"CancelAutomuteRequest", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigContainer.ReceiveAutomuteSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::NetPlayer*, ::StringW)>(&::GlobalNamespace::RigContainer::ReceiveAutomuteSettings)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x58f8b3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"ReceiveAutomuteSettings", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigContainer.ProcessAutomute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigContainer::*)()>(&::GlobalNamespace::RigContainer::ProcessAutomute)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x58f8c38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"ProcessAutomute", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigContainer.RefreshVoiceChat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigContainer::*)()>(&::GlobalNamespace::RigContainer::RefreshVoiceChat)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x58f7334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"RefreshVoiceChat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigContainer.AddLoudSpeakerNetwork
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigContainer::*)(::GorillaTag::Audio::LoudSpeakerNetwork*)>(&::GlobalNamespace::RigContainer::AddLoudSpeakerNetwork)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x58f8cc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"AddLoudSpeakerNetwork", {}, {::i2c::type_of<::GorillaTag::Audio::LoudSpeakerNetwork*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigContainer.RemoveLoudSpeakerNetwork
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigContainer::*)(::GorillaTag::Audio::LoudSpeakerNetwork*)>(&::GlobalNamespace::RigContainer::RemoveLoudSpeakerNetwork)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x58f8da8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"RemoveLoudSpeakerNetwork", {}, {::i2c::type_of<::GorillaTag::Audio::LoudSpeakerNetwork*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigContainer.RefreshAllRigVoices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::RigContainer::RefreshAllRigVoices)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x58f8e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"RefreshAllRigVoices", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigContainer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigContainer::*)()>(&::GlobalNamespace::RigContainer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58f906c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::RigContainer::__cordl_internal_get__Initialized_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Initialized_k__BackingField;
}
constexpr bool const& GlobalNamespace::RigContainer::__cordl_internal_get__Initialized_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Initialized_k__BackingField;
}
constexpr void GlobalNamespace::RigContainer::__cordl_internal_set__Initialized_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Initialized_k__BackingField = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::RigContainer::__cordl_internal_get_vrrig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vrrig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::RigContainer::__cordl_internal_get_vrrig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vrrig;
}
constexpr void GlobalNamespace::RigContainer::__cordl_internal_set_vrrig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vrrig = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRigReliableState>& GlobalNamespace::RigContainer::__cordl_internal_get_reliableState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reliableState;
}
constexpr ::UnityW<::GlobalNamespace::VRRigReliableState> const& GlobalNamespace::RigContainer::__cordl_internal_get_reliableState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reliableState;
}
constexpr void GlobalNamespace::RigContainer::__cordl_internal_set_reliableState(::UnityW<::GlobalNamespace::VRRigReliableState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reliableState = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::RigContainer::__cordl_internal_get_speakerHead()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speakerHead;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::RigContainer::__cordl_internal_get_speakerHead() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speakerHead;
}
constexpr void GlobalNamespace::RigContainer::__cordl_internal_set_speakerHead(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___speakerHead = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::RigContainer::__cordl_internal_get_replacementVoiceSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___replacementVoiceSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::RigContainer::__cordl_internal_get_replacementVoiceSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___replacementVoiceSource;
}
constexpr void GlobalNamespace::RigContainer::__cordl_internal_set_replacementVoiceSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___replacementVoiceSource = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Audio::LoudSpeakerNetwork>>*& GlobalNamespace::RigContainer::__cordl_internal_get_loudSpeakerNetworks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loudSpeakerNetworks;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Audio::LoudSpeakerNetwork>>* const& GlobalNamespace::RigContainer::__cordl_internal_get_loudSpeakerNetworks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loudSpeakerNetworks;
}
constexpr void GlobalNamespace::RigContainer::__cordl_internal_set_loudSpeakerNetworks(::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Audio::LoudSpeakerNetwork>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loudSpeakerNetworks = value;
}
constexpr ::UnityW<::GlobalNamespace::LCKSocialCameraFollower>& GlobalNamespace::RigContainer::__cordl_internal_get_m_lckCococamFollower()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_lckCococamFollower;
}
constexpr ::UnityW<::GlobalNamespace::LCKSocialCameraFollower> const& GlobalNamespace::RigContainer::__cordl_internal_get_m_lckCococamFollower() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_lckCococamFollower;
}
constexpr void GlobalNamespace::RigContainer::__cordl_internal_set_m_lckCococamFollower(::UnityW<::GlobalNamespace::LCKSocialCameraFollower>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_lckCococamFollower = value;
}
constexpr ::UnityW<::GlobalNamespace::LCKSocialCameraFollower>& GlobalNamespace::RigContainer::__cordl_internal_get_m_lckTablet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_lckTablet;
}
constexpr ::UnityW<::GlobalNamespace::LCKSocialCameraFollower> const& GlobalNamespace::RigContainer::__cordl_internal_get_m_lckTablet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_lckTablet;
}
constexpr void GlobalNamespace::RigContainer::__cordl_internal_set_m_lckTablet(::UnityW<::GlobalNamespace::LCKSocialCameraFollower>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_lckTablet = value;
}
constexpr ::UnityW<::Photon::Voice::PUN::PhotonVoiceView>& GlobalNamespace::RigContainer::__cordl_internal_get_voiceView()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceView;
}
constexpr ::UnityW<::Photon::Voice::PUN::PhotonVoiceView> const& GlobalNamespace::RigContainer::__cordl_internal_get_voiceView() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceView;
}
constexpr void GlobalNamespace::RigContainer::__cordl_internal_set_voiceView(::UnityW<::Photon::Voice::PUN::PhotonVoiceView>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voiceView = value;
}
constexpr int32_t& GlobalNamespace::RigContainer::__cordl_internal_get_m_cachedNetViewID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_cachedNetViewID;
}
constexpr int32_t const& GlobalNamespace::RigContainer::__cordl_internal_get_m_cachedNetViewID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_cachedNetViewID;
}
constexpr void GlobalNamespace::RigContainer::__cordl_internal_set_m_cachedNetViewID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_cachedNetViewID = value;
}
constexpr ::GlobalNamespace::RigContainer_MuteReason& GlobalNamespace::RigContainer::__cordl_internal_get_muteReasons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___muteReasons;
}
constexpr ::GlobalNamespace::RigContainer_MuteReason const& GlobalNamespace::RigContainer::__cordl_internal_get_muteReasons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___muteReasons;
}
constexpr void GlobalNamespace::RigContainer::__cordl_internal_set_muteReasons(::GlobalNamespace::RigContainer_MuteReason  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___muteReasons = value;
}
constexpr ::UnityW<::UnityEngine::SphereCollider>& GlobalNamespace::RigContainer::__cordl_internal_get_headCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headCollider;
}
constexpr ::UnityW<::UnityEngine::SphereCollider> const& GlobalNamespace::RigContainer::__cordl_internal_get_headCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headCollider;
}
constexpr void GlobalNamespace::RigContainer::__cordl_internal_set_headCollider(::UnityW<::UnityEngine::SphereCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headCollider = value;
}
constexpr ::UnityW<::UnityEngine::CapsuleCollider>& GlobalNamespace::RigContainer::__cordl_internal_get_bodyCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyCollider;
}
constexpr ::UnityW<::UnityEngine::CapsuleCollider> const& GlobalNamespace::RigContainer::__cordl_internal_get_bodyCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyCollider;
}
constexpr void GlobalNamespace::RigContainer::__cordl_internal_set_bodyCollider(::UnityW<::UnityEngine::CapsuleCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bodyCollider = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRigEvents>& GlobalNamespace::RigContainer::__cordl_internal_get_rigEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigEvents;
}
constexpr ::UnityW<::GlobalNamespace::VRRigEvents> const& GlobalNamespace::RigContainer::__cordl_internal_get_rigEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigEvents;
}
constexpr void GlobalNamespace::RigContainer::__cordl_internal_set_rigEvents(::UnityW<::GlobalNamespace::VRRigEvents>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rigEvents = value;
}
constexpr ::GlobalNamespace::PlayerStatsReadonly& GlobalNamespace::RigContainer::__cordl_internal_get_m_playerStats()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_playerStats;
}
constexpr ::GlobalNamespace::PlayerStatsReadonly const& GlobalNamespace::RigContainer::__cordl_internal_get_m_playerStats() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_playerStats;
}
constexpr void GlobalNamespace::RigContainer::__cordl_internal_set_m_playerStats(::GlobalNamespace::PlayerStatsReadonly  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_playerStats = value;
}
constexpr bool& GlobalNamespace::RigContainer::__cordl_internal_get_hasManualMute()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasManualMute;
}
constexpr bool const& GlobalNamespace::RigContainer::__cordl_internal_get_hasManualMute() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasManualMute;
}
constexpr void GlobalNamespace::RigContainer::__cordl_internal_set_hasManualMute(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasManualMute = value;
}
constexpr int32_t& GlobalNamespace::RigContainer::__cordl_internal_get_playerChatQuality()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerChatQuality;
}
constexpr int32_t const& GlobalNamespace::RigContainer::__cordl_internal_get_playerChatQuality() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerChatQuality;
}
constexpr void GlobalNamespace::RigContainer::__cordl_internal_set_playerChatQuality(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerChatQuality = value;
}
inline void GlobalNamespace::RigContainer::setStaticF_playersToCheckAutomute(::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*, "playersToCheckAutomute", ::GlobalNamespace::RigContainer*>(std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*>(value));
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>* GlobalNamespace::RigContainer::getStaticF_playersToCheckAutomute()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*, "playersToCheckAutomute", ::GlobalNamespace::RigContainer*>();
}
inline void GlobalNamespace::RigContainer::setStaticF_automuteQueued(bool  value)  {
::cordl_internals::setStaticField<bool, "automuteQueued", ::GlobalNamespace::RigContainer*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::RigContainer::getStaticF_automuteQueued()  {
return ::cordl_internals::getStaticField<bool, "automuteQueued", ::GlobalNamespace::RigContainer*>();
}
inline void GlobalNamespace::RigContainer::setStaticF_requestedAutomutePlayers(::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*, "requestedAutomutePlayers", ::GlobalNamespace::RigContainer*>(std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*>(value));
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>* GlobalNamespace::RigContainer::getStaticF_requestedAutomutePlayers()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*, "requestedAutomutePlayers", ::GlobalNamespace::RigContainer*>();
}
inline void GlobalNamespace::RigContainer::setStaticF_waitingForAutomuteCallback(bool  value)  {
::cordl_internals::setStaticField<bool, "waitingForAutomuteCallback", ::GlobalNamespace::RigContainer*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::RigContainer::getStaticF_waitingForAutomuteCallback()  {
return ::cordl_internals::getStaticField<bool, "waitingForAutomuteCallback", ::GlobalNamespace::RigContainer*>();
}
inline void GlobalNamespace::RigContainer::setStaticF_staticTempRC(::UnityW<::GlobalNamespace::RigContainer>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::RigContainer>, "staticTempRC", ::GlobalNamespace::RigContainer*>(std::forward<::UnityW<::GlobalNamespace::RigContainer>>(value));
}
inline ::UnityW<::GlobalNamespace::RigContainer> GlobalNamespace::RigContainer::getStaticF_staticTempRC()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::RigContainer>, "staticTempRC", ::GlobalNamespace::RigContainer*>();
}
inline bool GlobalNamespace::RigContainer::get_Initialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"get_Initialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::RigContainer::set_Initialized(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"set_Initialized", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::VRRig> GlobalNamespace::RigContainer::get_Rig()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"get_Rig", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::VRRig>>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::VRRigReliableState> GlobalNamespace::RigContainer::get_ReliableState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"get_ReliableState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::VRRigReliableState>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::RigContainer::get_SpeakerHead()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"get_SpeakerHead", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::AudioSource> GlobalNamespace::RigContainer::get_ReplacementVoiceSource()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"get_ReplacementVoiceSource", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioSource>>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Audio::LoudSpeakerNetwork>>* GlobalNamespace::RigContainer::get_LoudSpeakerNetworks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"get_LoudSpeakerNetworks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Audio::LoudSpeakerNetwork>>*>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::LCKSocialCameraFollower> GlobalNamespace::RigContainer::get_LckCococamFollower()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"get_LckCococamFollower", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::LCKSocialCameraFollower>>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::LCKSocialCameraFollower> GlobalNamespace::RigContainer::get_LCKTabletFollower()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"get_LCKTabletFollower", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::LCKSocialCameraFollower>>(this, ___internal_method);
}
inline ::UnityW<::Photon::Voice::PUN::PhotonVoiceView> GlobalNamespace::RigContainer::get_Voice()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"get_Voice", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Photon::Voice::PUN::PhotonVoiceView>>(this, ___internal_method);
}
inline void GlobalNamespace::RigContainer::set_Voice(::Photon::Voice::PUN::PhotonVoiceView*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"set_Voice", {}, {::i2c::type_of<::Photon::Voice::PUN::PhotonVoiceView*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::NetworkView> GlobalNamespace::RigContainer::get_netView()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"get_netView", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::NetworkView>>(this, ___internal_method);
}
inline int32_t GlobalNamespace::RigContainer::get_CachedNetViewID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"get_CachedNetViewID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool GlobalNamespace::RigContainer::get_IsMuted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"get_IsMuted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::RigContainer::IsMutedFor(::GlobalNamespace::RigContainer_MuteReason  reasons)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"IsMutedFor", {}, {::i2c::type_of<::GlobalNamespace::RigContainer_MuteReason>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, reasons);
}
inline ::GlobalNamespace::RigContainer_MuteReason GlobalNamespace::RigContainer::WithReasons(::GlobalNamespace::RigContainer_MuteReason  reasons, bool  muted)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"WithReasons", {}, {::i2c::type_of<::GlobalNamespace::RigContainer_MuteReason>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::RigContainer_MuteReason>(this, ___internal_method, reasons, muted);
}
inline void GlobalNamespace::RigContainer::SetMuted(::GlobalNamespace::RigContainer_MuteReason  reasons, bool  muted)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"SetMuted", {}, {::i2c::type_of<::GlobalNamespace::RigContainer_MuteReason>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reasons, muted);
}
inline ::GlobalNamespace::NetPlayer* GlobalNamespace::RigContainer::get_Creator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"get_Creator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetPlayer*>(this, ___internal_method);
}
inline void GlobalNamespace::RigContainer::set_Creator(::GlobalNamespace::NetPlayer*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"set_Creator", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::SphereCollider> GlobalNamespace::RigContainer::get_HeadCollider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"get_HeadCollider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::SphereCollider>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::CapsuleCollider> GlobalNamespace::RigContainer::get_BodyCollider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"get_BodyCollider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::CapsuleCollider>>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::VRRigEvents> GlobalNamespace::RigContainer::get_RigEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"get_RigEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::VRRigEvents>>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerStatsReadonly GlobalNamespace::RigContainer::get_PlayerStats()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"get_PlayerStats", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerStatsReadonly>(this, ___internal_method);
}
inline void GlobalNamespace::RigContainer::set_PlayerStats(::GlobalNamespace::PlayerStatsReadonly  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"set_PlayerStats", {}, {::i2c::type_of<::GlobalNamespace::PlayerStatsReadonly>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::RigContainer::GetIsPlayerAutoMuted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"GetIsPlayerAutoMuted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::RigContainer::UpdateAutomuteLevel(::StringW  autoMuteLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"UpdateAutomuteLevel", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, autoMuteLevel);
}
inline void GlobalNamespace::RigContainer::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RigContainer::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RigContainer::RigPostEnable(::GlobalNamespace::RigContainer*  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"RigPostEnable", {}, {::i2c::type_of<::GlobalNamespace::RigContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline void GlobalNamespace::RigContainer::OnMultiPlayerStarted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"OnMultiPlayerStarted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RigContainer::OnReturnedToSinglePlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"OnReturnedToSinglePlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RigContainer::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RigContainer::InitializeNetwork(::GlobalNamespace::NetworkView*  netView, ::Photon::Voice::PUN::PhotonVoiceView*  voiceView, ::GlobalNamespace::VRRigSerializer*  vrRigSerializer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"InitializeNetwork", {}, {::i2c::type_of<::GlobalNamespace::NetworkView*>(), ::i2c::type_of<::Photon::Voice::PUN::PhotonVoiceView*>(), ::i2c::type_of<::GlobalNamespace::VRRigSerializer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, netView, voiceView, vrRigSerializer);
}
inline void GlobalNamespace::RigContainer::InitializeNetwork_Shared(::GlobalNamespace::NetworkView*  netView, ::GlobalNamespace::VRRigSerializer*  vrRigSerializer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"InitializeNetwork_Shared", {}, {::i2c::type_of<::GlobalNamespace::NetworkView*>(), ::i2c::type_of<::GlobalNamespace::VRRigSerializer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, netView, vrRigSerializer);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::RigContainer::QueueAutomute(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"QueueAutomute", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(nullptr, ___internal_method, player);
}
inline void GlobalNamespace::RigContainer::RequestAutomuteSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"RequestAutomuteSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::RigContainer::CancelAutomuteRequest()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"CancelAutomuteRequest", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::RigContainer::ReceiveAutomuteSettings(::GlobalNamespace::NetPlayer*  player, ::StringW  score)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"ReceiveAutomuteSettings", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, player, score);
}
inline void GlobalNamespace::RigContainer::ProcessAutomute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"ProcessAutomute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RigContainer::RefreshVoiceChat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"RefreshVoiceChat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RigContainer::AddLoudSpeakerNetwork(::GorillaTag::Audio::LoudSpeakerNetwork*  network)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"AddLoudSpeakerNetwork", {}, {::i2c::type_of<::GorillaTag::Audio::LoudSpeakerNetwork*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, network);
}
inline void GlobalNamespace::RigContainer::RemoveLoudSpeakerNetwork(::GorillaTag::Audio::LoudSpeakerNetwork*  network)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"RemoveLoudSpeakerNetwork", {}, {::i2c::type_of<::GorillaTag::Audio::LoudSpeakerNetwork*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, network);
}
inline void GlobalNamespace::RigContainer::RefreshAllRigVoices()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {"RefreshAllRigVoices", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::RigContainer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RigContainer* GlobalNamespace::RigContainer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RigContainer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RigContainer::RigContainer()   {
}
//  Writing Method size for method: ::GlobalNamespace::RigContainer__QueueAutomute_d__71._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigContainer__QueueAutomute_d__71::*)(int32_t)>(&::GlobalNamespace::RigContainer__QueueAutomute_d__71::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x58f8474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer__QueueAutomute_d__71*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigContainer__QueueAutomute_d__71.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigContainer__QueueAutomute_d__71::*)()>(&::GlobalNamespace::RigContainer__QueueAutomute_d__71::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58f974c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer__QueueAutomute_d__71*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigContainer__QueueAutomute_d__71.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RigContainer__QueueAutomute_d__71::*)()>(&::GlobalNamespace::RigContainer__QueueAutomute_d__71::MoveNext)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x58f9750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer__QueueAutomute_d__71*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigContainer__QueueAutomute_d__71.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::RigContainer__QueueAutomute_d__71::*)()>(&::GlobalNamespace::RigContainer__QueueAutomute_d__71::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58f991c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer__QueueAutomute_d__71*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigContainer__QueueAutomute_d__71.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigContainer__QueueAutomute_d__71::*)()>(&::GlobalNamespace::RigContainer__QueueAutomute_d__71::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x58f9924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer__QueueAutomute_d__71*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigContainer__QueueAutomute_d__71.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::RigContainer__QueueAutomute_d__71::*)()>(&::GlobalNamespace::RigContainer__QueueAutomute_d__71::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58f995c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer__QueueAutomute_d__71*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::RigContainer__QueueAutomute_d__71::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::RigContainer__QueueAutomute_d__71::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::RigContainer__QueueAutomute_d__71::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::RigContainer__QueueAutomute_d__71::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::RigContainer__QueueAutomute_d__71::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::RigContainer__QueueAutomute_d__71::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::GlobalNamespace::NetPlayer*& GlobalNamespace::RigContainer__QueueAutomute_d__71::__cordl_internal_get_player()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___player;
}
constexpr ::GlobalNamespace::NetPlayer* const& GlobalNamespace::RigContainer__QueueAutomute_d__71::__cordl_internal_get_player() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___player;
}
constexpr void GlobalNamespace::RigContainer__QueueAutomute_d__71::__cordl_internal_set_player(::GlobalNamespace::NetPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___player = value;
}
inline void GlobalNamespace::RigContainer__QueueAutomute_d__71::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer__QueueAutomute_d__71*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::RigContainer__QueueAutomute_d__71::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer__QueueAutomute_d__71*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::RigContainer__QueueAutomute_d__71::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer__QueueAutomute_d__71*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::RigContainer__QueueAutomute_d__71::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer__QueueAutomute_d__71*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::RigContainer__QueueAutomute_d__71::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer__QueueAutomute_d__71*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::RigContainer__QueueAutomute_d__71::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer__QueueAutomute_d__71*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::RigContainer__QueueAutomute_d__71* GlobalNamespace::RigContainer__QueueAutomute_d__71::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RigContainer__QueueAutomute_d__71*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::RigContainer__QueueAutomute_d__71::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::RigContainer__QueueAutomute_d__71::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::RigContainer__QueueAutomute_d__71::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::RigContainer__QueueAutomute_d__71::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::RigContainer__QueueAutomute_d__71::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::RigContainer__QueueAutomute_d__71::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RigContainer__QueueAutomute_d__71::RigContainer__QueueAutomute_d__71()   {
}
//  Writing Method size for method: ::GlobalNamespace::RigContainer___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigContainer___c::*)()>(&::GlobalNamespace::RigContainer___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58f9190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigContainer___c._RequestAutomuteSettings_b__74_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RigContainer___c::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::RigContainer___c::_RequestAutomuteSettings_b__74_0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58f9198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer___c*>(),
                        {"<RequestAutomuteSettings>b__74_0", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigContainer___c._RequestAutomuteSettings_b__74_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::RigContainer___c::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::RigContainer___c::_RequestAutomuteSettings_b__74_1)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x58f91a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer___c*>(),
                        {"<RequestAutomuteSettings>b__74_1", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigContainer___c._RequestAutomuteSettings_b__74_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigContainer___c::*)(::PlayFab::CloudScriptModels::ExecuteFunctionResult*)>(&::GlobalNamespace::RigContainer___c::_RequestAutomuteSettings_b__74_2)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x58f91c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer___c*>(),
                        {"<RequestAutomuteSettings>b__74_2", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigContainer___c._RequestAutomuteSettings_b__74_3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigContainer___c::*)(::PlayFab::PlayFabError*)>(&::GlobalNamespace::RigContainer___c::_RequestAutomuteSettings_b__74_3)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x58f9574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer___c*>(),
                        {"<RequestAutomuteSettings>b__74_3", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::RigContainer___c::setStaticF___9(::GlobalNamespace::RigContainer___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::RigContainer___c*, "<>9", ::GlobalNamespace::RigContainer___c*>(std::forward<::GlobalNamespace::RigContainer___c*>(value));
}
inline ::GlobalNamespace::RigContainer___c* GlobalNamespace::RigContainer___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::RigContainer___c*, "<>9", ::GlobalNamespace::RigContainer___c*>();
}
inline void GlobalNamespace::RigContainer___c::setStaticF___9__74_0(::System::Predicate_1<::GlobalNamespace::NetPlayer*>*  value)  {
::cordl_internals::setStaticField<::System::Predicate_1<::GlobalNamespace::NetPlayer*>*, "<>9__74_0", ::GlobalNamespace::RigContainer___c*>(std::forward<::System::Predicate_1<::GlobalNamespace::NetPlayer*>*>(value));
}
inline ::System::Predicate_1<::GlobalNamespace::NetPlayer*>* GlobalNamespace::RigContainer___c::getStaticF___9__74_0()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<::GlobalNamespace::NetPlayer*>*, "<>9__74_0", ::GlobalNamespace::RigContainer___c*>();
}
inline void GlobalNamespace::RigContainer___c::setStaticF___9__74_1(::System::Func_2<::GlobalNamespace::NetPlayer*,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::NetPlayer*,::StringW>*, "<>9__74_1", ::GlobalNamespace::RigContainer___c*>(std::forward<::System::Func_2<::GlobalNamespace::NetPlayer*,::StringW>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::NetPlayer*,::StringW>* GlobalNamespace::RigContainer___c::getStaticF___9__74_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::NetPlayer*,::StringW>*, "<>9__74_1", ::GlobalNamespace::RigContainer___c*>();
}
inline void GlobalNamespace::RigContainer___c::setStaticF___9__74_2(::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*, "<>9__74_2", ::GlobalNamespace::RigContainer___c*>(std::forward<::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*>(value));
}
inline ::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>* GlobalNamespace::RigContainer___c::getStaticF___9__74_2()  {
return ::cordl_internals::getStaticField<::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*, "<>9__74_2", ::GlobalNamespace::RigContainer___c*>();
}
inline void GlobalNamespace::RigContainer___c::setStaticF___9__74_3(::System::Action_1<::PlayFab::PlayFabError*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::PlayFab::PlayFabError*>*, "<>9__74_3", ::GlobalNamespace::RigContainer___c*>(std::forward<::System::Action_1<::PlayFab::PlayFabError*>*>(value));
}
inline ::System::Action_1<::PlayFab::PlayFabError*>* GlobalNamespace::RigContainer___c::getStaticF___9__74_3()  {
return ::cordl_internals::getStaticField<::System::Action_1<::PlayFab::PlayFabError*>*, "<>9__74_3", ::GlobalNamespace::RigContainer___c*>();
}
inline void GlobalNamespace::RigContainer___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::RigContainer___c::_RequestAutomuteSettings_b__74_0(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer___c*>(),
                        {"<RequestAutomuteSettings>b__74_0", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player);
}
inline ::StringW GlobalNamespace::RigContainer___c::_RequestAutomuteSettings_b__74_1(::GlobalNamespace::NetPlayer*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer___c*>(),
                        {"<RequestAutomuteSettings>b__74_1", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, x);
}
inline void GlobalNamespace::RigContainer___c::_RequestAutomuteSettings_b__74_2(::PlayFab::CloudScriptModels::ExecuteFunctionResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer___c*>(),
                        {"<RequestAutomuteSettings>b__74_2", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void GlobalNamespace::RigContainer___c::_RequestAutomuteSettings_b__74_3(::PlayFab::PlayFabError*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigContainer___c*>(),
                        {"<RequestAutomuteSettings>b__74_3", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline ::GlobalNamespace::RigContainer___c* GlobalNamespace::RigContainer___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RigContainer___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RigContainer___c::RigContainer___c()   {
}
