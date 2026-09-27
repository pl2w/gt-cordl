#pragma once
// IWYU pragma private; include "GorillaTagScripts/FriendshipGroupDetection.hpp"
#include "GlobalNamespace/zzzz__GroupJoinZoneAB_impl.hpp"
#include "GlobalNamespace/zzzz__NetworkSceneObject_impl.hpp"
#include "GorillaTag/zzzz__GTColor_HSVRanges_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GorillaTagScripts/zzzz__FriendshipGroupDetection_def.hpp"
#include "GlobalNamespace/zzzz__GorillaFriendCollider_def.hpp"
#include "GlobalNamespace/zzzz__GroupJoinZoneAB_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemTick_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_def.hpp"
#include "GorillaTagScripts/zzzz__FriendshipGroupDetection_PlayerFist_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::FriendshipGroupDetection.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GorillaTagScripts::FriendshipGroupDetection> (*)()>(&::GorillaTagScripts::FriendshipGroupDetection::get_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5bbbea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FriendshipGroupDetection.set_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GorillaTagScripts::FriendshipGroupDetection*)>(&::GorillaTagScripts::FriendshipGroupDetection::set_Instance)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5bbbefc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"set_Instance", {}, {::i2c::type_of<::GorillaTagScripts::FriendshipGroupDetection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FriendshipGroupDetection.get_myBeadColors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Color>* (::GorillaTagScripts::FriendshipGroupDetection::*)()>(&::GorillaTagScripts::FriendshipGroupDetection::get_myBeadColors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bbbf64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"get_myBeadColors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FriendshipGroupDetection.set_myBeadColors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::FriendshipGroupDetection::*)(::System::Collections::Generic::List_1<::UnityEngine::Color>*)>(&::GorillaTagScripts::FriendshipGroupDetection::set_myBeadColors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bbbf6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"set_myBeadColors", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Color>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FriendshipGroupDetection.get_myBraceletColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GorillaTagScripts::FriendshipGroupDetection::*)()>(&::GorillaTagScripts::FriendshipGroupDetection::get_myBraceletColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5bbbf74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"get_myBraceletColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FriendshipGroupDetection.set_myBraceletColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::FriendshipGroupDetection::*)(::UnityEngine::Color)>(&::GorillaTagScripts::FriendshipGroupDetection::set_myBraceletColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5bbbf80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"set_myBraceletColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FriendshipGroupDetection.get_MyBraceletSelfIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaTagScripts::FriendshipGroupDetection::*)()>(&::GorillaTagScripts::FriendshipGroupDetection::get_MyBraceletSelfIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bbbf8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"get_MyBraceletSelfIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FriendshipGroupDetection.set_MyBraceletSelfIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::FriendshipGroupDetection::*)(int32_t)>(&::GorillaTagScripts::FriendshipGroupDetection::set_MyBraceletSelfIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bbbf94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"set_MyBraceletSelfIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FriendshipGroupDetection.get_PartyMemberIDs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::GorillaTagScripts::FriendshipGroupDetection::*)()>(&::GorillaTagScripts::FriendshipGroupDetection::get_PartyMemberIDs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bbbf9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"get_PartyMemberIDs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FriendshipGroupDetection.get_IsInParty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::FriendshipGroupDetection::*)()>(&::GorillaTagScripts::FriendshipGroupDetection::get_IsInParty)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5bbbfa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"get_IsInParty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FriendshipGroupDetection.get_partyZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GroupJoinZoneAB (::GorillaTagScripts::FriendshipGroupDetection::*)()>(&::GorillaTagScripts::FriendshipGroupDetection::get_partyZone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bbbfb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"get_partyZone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FriendshipGroupDetection.set_partyZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::FriendshipGroupDetection::*)(::GlobalNamespace::GroupJoinZoneAB)>(&::GorillaTagScripts::FriendshipGroupDetection::set_partyZone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bbbfbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"set_partyZone", {}, {::i2c::type_of<::GlobalNamespace::GroupJoinZoneAB>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FriendshipGroupDetection.get_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::FriendshipGroupDetection::*)()>(&::GorillaTagScripts::FriendshipGroupDetection::get_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bbbfc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"get_TickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FriendshipGroupDetection.set_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::FriendshipGroupDetection::*)(bool)>(&::GorillaTagScripts::FriendshipGroupDetection::set_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bbbfcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FriendshipGroupDetection.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::FriendshipGroupDetection::*)()>(&::GorillaTagScripts::FriendshipGroupDetection::Awake)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x5bbbfd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FriendshipGroupDetection.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::FriendshipGroupDetection::*)()>(&::GorillaTagScripts::FriendshipGroupDetection::OnEnable)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5bbc1cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FriendshipGroupDetection.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::FriendshipGroupDetection::*)()>(&::GorillaTagScripts::FriendshipGroupDetection::OnDisable)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5bbc2e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FriendshipGroupDetection.OnPlayerJoinedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::FriendshipGroupDetection::*)(::GlobalNamespace::NetPlayer*)>(&::GorillaTagScripts::FriendshipGroupDetection::OnPlayerJoinedRoom)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x5bbc3fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"OnPlayerJoinedRoom", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FriendshipGroupDetection.AddGroupZoneCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::FriendshipGroupDetection::*)(::System::Action_1<::GlobalNamespace::GroupJoinZoneAB>*)>(&::GorillaTagScripts::FriendshipGroupDetection::AddGroupZoneCallback)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5bbcb5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"AddGroupZoneCallback", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::GroupJoinZoneAB>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FriendshipGroupDetection.RemoveGroupZoneCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::FriendshipGroupDetection::*)(::System::Action_1<::GlobalNamespace::GroupJoinZoneAB>*)>(&::GorillaTagScripts::FriendshipGroupDetection::RemoveGroupZoneCallback)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5bbcc08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"RemoveGroupZoneCallback", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::GroupJoinZoneAB>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FriendshipGroupDetection.IsInMyGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::FriendshipGroupDetection::*)(::StringW)>(&::GorillaTagScripts::FriendshipGroupDetection::IsInMyGroup)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5bbcc60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"IsInMyGroup", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FriendshipGroupDetection.AnyPartyMembersOutsideFriendCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::FriendshipGroupDetection::*)()>(&::GorillaTagScripts::FriendshipGroupDetection::AnyPartyMembersOutsideFriendCollider)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x5bbccc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"AnyPartyMembersOutsideFriendCollider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FriendshipGroupDetection.get_DidJoinLeftHanded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::FriendshipGroupDetection::*)()>(&::GorillaTagScripts::FriendshipGroupDetection::get_DidJoinLeftHanded)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bbd0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"get_DidJoinLeftHanded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FriendshipGroupDetection.set_DidJoinLeftHanded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::FriendshipGroupDetection::*)(bool)>(&::GorillaTagScripts::FriendshipGroupDetection::set_DidJoinLeftHanded)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bbd0d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"set_DidJoinLeftHanded", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FriendshipGroupDetection.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::FriendshipGroupDetection::*)()>(&::GorillaTagScripts::FriendshipGroupDetection::Tick)> {
  constexpr static std::size_t size = 0x100c;
  constexpr static std::size_t addrs = 0x5bbd0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FriendshipGroupDetection.UpdateProvisionalGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::FriendshipGroupDetection::*)(::by_ref<::UnityEngine::Vector3>)>(&::GorillaTagScripts::FriendshipGroupDetection::UpdateProvisionalGroup)> {
  constexpr static std::size_t size = 0xe8c;
  constexpr static std::size_t addrs = 0x5bbe0ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"UpdateProvisionalGroup", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FriendshipGroupDetection.UpdateWarningSigns
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::FriendshipGroupDetection::*)()>(&::GorillaTagScripts::FriendshipGroupDetection::UpdateWarningSigns)> {
  constexpr static std::size_t size = 0x6c8;
  constexpr static std::size_t addrs = 0x5bbf810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"UpdateWarningSigns", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FriendshipGroupDetection.CheckPartyZoneCallbacks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::FriendshipGroupDetection::*)()>(&::GorillaTagScripts::FriendshipGroupDetection::CheckPartyZoneCallbacks)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5bbfed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"CheckPartyZoneCallbacks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FriendshipGroupDetection.NotifyNoPartyToMerge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::FriendshipGroupDetection::*)(::Photon::Pun::PhotonMessageInfo)>(&::GorillaTagScripts::FriendshipGroupDetection::NotifyNoPartyToMerge)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5bc001c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"NotifyNoPartyToMerge", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FriendshipGroupDetection.NotifyPartyMerging
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::FriendshipGroupDetection::*)(::ArrayW<int32_t>, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaTagScripts::FriendshipGroupDetection::NotifyPartyMerging)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5bc00f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"NotifyPartyMerging", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FriendshipGroupDetection.SendAboutToGroupJoin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::FriendshipGroupDetection::*)()>(&::GorillaTagScripts::FriendshipGroupDetection::SendAboutToGroupJoin)> {
  constexpr static std::size_t size = 0x6c8;
  constexpr static std::size_t addrs = 0x5bc01e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"SendAboutToGroupJoin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FriendshipGroupDetection.PartyMemberIsAboutToGroupJoin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::FriendshipGroupDetection::*)(::Photon::Pun::PhotonMessageInfo)>(&::GorillaTagScripts::FriendshipGroupDetection::PartyMemberIsAboutToGroupJoin)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5bc08b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"PartyMemberIsAboutToGroupJoin", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FriendshipGroupDetection.PartMemberIsAboutToGroupJoinWrapped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::FriendshipGroupDetection::*)(::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GorillaTagScripts::FriendshipGroupDetection::PartMemberIsAboutToGroupJoinWrapped)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5bc09a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"PartMemberIsAboutToGroupJoinWrapped", {}, {::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FriendshipGroupDetection.SendPartyFormedRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::FriendshipGroupDetection::*)(int16_t, ::ArrayW<int32_t>, bool)>(&::GorillaTagScripts::FriendshipGroupDetection::SendPartyFormedRPC)> {
  constexpr static std::size_t size = 0x638;
  constexpr static std::size_t addrs = 0x5bbf1d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"SendPartyFormedRPC", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FriendshipGroupDetection.PartyFormedSuccessfully
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::FriendshipGroupDetection::*)(::StringW, int16_t, ::ArrayW<int32_t>, bool, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaTagScripts::FriendshipGroupDetection::PartyFormedSuccessfully)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5bc0ad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"PartyFormedSuccessfully", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int16_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FriendshipGroupDetection.PartyFormedSuccesfullyWrapped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::FriendshipGroupDetection::*)(::StringW, int16_t, ::ArrayW<int32_t>, bool, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GorillaTagScripts::FriendshipGroupDetection::PartyFormedSuccesfullyWrapped)> {
  constexpr static std::size_t size = 0x548;
  constexpr static std::size_t addrs = 0x5bc0bf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"PartyFormedSuccesfullyWrapped", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int16_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FriendshipGroupDetection.AddPartyMembers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::FriendshipGroupDetection::*)(::StringW, int16_t, ::ArrayW<int32_t>, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaTagScripts::FriendshipGroupDetection::AddPartyMembers)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5bc1828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"AddPartyMembers", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int16_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FriendshipGroupDetection.AddPartyMembersWrapped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::FriendshipGroupDetection::*)(::StringW, int16_t, ::ArrayW<int32_t>, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GorillaTagScripts::FriendshipGroupDetection::AddPartyMembersWrapped)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5bc18b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"AddPartyMembersWrapped", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int16_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FriendshipGroupDetection.SetNewParty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::FriendshipGroupDetection::*)(::StringW, int16_t, ::ArrayW<int32_t>)>(&::GorillaTagScripts::FriendshipGroupDetection::SetNewParty)> {
  constexpr static std::size_t size = 0x6ec;
  constexpr static std::size_t addrs = 0x5bc113c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"SetNewParty", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int16_t>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FriendshipGroupDetection.LeaveParty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::FriendshipGroupDetection::*)()>(&::GorillaTagScripts::FriendshipGroupDetection::LeaveParty)> {
  constexpr static std::size_t size = 0x4e0;
  constexpr static std::size_t addrs = 0x5bc2390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"LeaveParty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FriendshipGroupDetection.OnFailedToFollowParty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::FriendshipGroupDetection::*)()>(&::GorillaTagScripts::FriendshipGroupDetection::OnFailedToFollowParty)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5bc2870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"OnFailedToFollowParty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FriendshipGroupDetection.RefreshPartyMembers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::FriendshipGroupDetection::*)()>(&::GorillaTagScripts::FriendshipGroupDetection::RefreshPartyMembers)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x5bbc7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"RefreshPartyMembers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FriendshipGroupDetection.PlayerLeftParty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::FriendshipGroupDetection::*)(::Photon::Pun::PhotonMessageInfo)>(&::GorillaTagScripts::FriendshipGroupDetection::PlayerLeftParty)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5bc29b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"PlayerLeftParty", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FriendshipGroupDetection.PlayerLeftPartyWrapped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::FriendshipGroupDetection::*)(::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GorillaTagScripts::FriendshipGroupDetection::PlayerLeftPartyWrapped)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5bc2aa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"PlayerLeftPartyWrapped", {}, {::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FriendshipGroupDetection.PlayerIDLeftParty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::FriendshipGroupDetection::*)(::StringW)>(&::GorillaTagScripts::FriendshipGroupDetection::PlayerIDLeftParty)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5bc28a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"PlayerIDLeftParty", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FriendshipGroupDetection.SendVerifyPartyMember
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::FriendshipGroupDetection::*)(::GlobalNamespace::NetPlayer*)>(&::GorillaTagScripts::FriendshipGroupDetection::SendVerifyPartyMember)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5bc2be4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"SendVerifyPartyMember", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FriendshipGroupDetection.VerifyPartyMember
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::FriendshipGroupDetection::*)(::Photon::Pun::PhotonMessageInfo)>(&::GorillaTagScripts::FriendshipGroupDetection::VerifyPartyMember)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5bc2cc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"VerifyPartyMember", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FriendshipGroupDetection.VerifyPartyMemberWrapped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::FriendshipGroupDetection::*)(::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GorillaTagScripts::FriendshipGroupDetection::VerifyPartyMemberWrapped)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x5bc2d24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"VerifyPartyMemberWrapped", {}, {::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FriendshipGroupDetection.SendRequestPartyGameMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::FriendshipGroupDetection::*)(::StringW)>(&::GorillaTagScripts::FriendshipGroupDetection::SendRequestPartyGameMode)> {
  constexpr static std::size_t size = 0x44c;
  constexpr static std::size_t addrs = 0x5bc2fac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"SendRequestPartyGameMode", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FriendshipGroupDetection.RequestPartyGameMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::FriendshipGroupDetection::*)(::StringW, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaTagScripts::FriendshipGroupDetection::RequestPartyGameMode)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5bc33f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"RequestPartyGameMode", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FriendshipGroupDetection.RequestPartyGameModeWrapped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::FriendshipGroupDetection::*)(::StringW, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GorillaTagScripts::FriendshipGroupDetection::RequestPartyGameModeWrapped)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0x5bc3468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"RequestPartyGameModeWrapped", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FriendshipGroupDetection.NotifyPartyGameModeChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::FriendshipGroupDetection::*)(::StringW, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaTagScripts::FriendshipGroupDetection::NotifyPartyGameModeChanged)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5bc3938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"NotifyPartyGameModeChanged", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FriendshipGroupDetection.NotifyPartyGameModeChangedWrapped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::FriendshipGroupDetection::*)(::StringW, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GorillaTagScripts::FriendshipGroupDetection::NotifyPartyGameModeChangedWrapped)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5bc39a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"NotifyPartyGameModeChangedWrapped", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FriendshipGroupDetection.OnPartyMembershipChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::FriendshipGroupDetection::*)()>(&::GorillaTagScripts::FriendshipGroupDetection::OnPartyMembershipChanged)> {
  constexpr static std::size_t size = 0x8c8;
  constexpr static std::size_t addrs = 0x5bc1ac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"OnPartyMembershipChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FriendshipGroupDetection.IsPartyWithinCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::FriendshipGroupDetection::*)(::GlobalNamespace::GorillaFriendCollider*, bool)>(&::GorillaTagScripts::FriendshipGroupDetection::IsPartyWithinCollider)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x5bc3b04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"IsPartyWithinCollider", {}, {::i2c::type_of<::GlobalNamespace::GorillaFriendCollider*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FriendshipGroupDetection.PackColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(::UnityEngine::Color)>(&::GorillaTagScripts::FriendshipGroupDetection::PackColor)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x5bbef78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"PackColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FriendshipGroupDetection.UnpackColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)(int16_t)>(&::GorillaTagScripts::FriendshipGroupDetection::UnpackColor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5bc1a4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"UnpackColor", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FriendshipGroupDetection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::FriendshipGroupDetection::*)()>(&::GorillaTagScripts::FriendshipGroupDetection::_ctor)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x5bc3ddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_detectionRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detectionRadius;
}
constexpr float_t const& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_detectionRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detectionRadius;
}
constexpr void GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_set_detectionRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___detectionRadius = value;
}
constexpr float_t& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_groupTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groupTime;
}
constexpr float_t const& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_groupTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groupTime;
}
constexpr void GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_set_groupTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___groupTime = value;
}
constexpr float_t& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_cooldownAfterCreatingGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldownAfterCreatingGroup;
}
constexpr float_t const& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_cooldownAfterCreatingGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldownAfterCreatingGroup;
}
constexpr void GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_set_cooldownAfterCreatingGroup(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cooldownAfterCreatingGroup = value;
}
constexpr float_t& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_hapticStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticStrength;
}
constexpr float_t const& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_hapticStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticStrength;
}
constexpr void GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_set_hapticStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hapticStrength = value;
}
constexpr float_t& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_hapticDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticDuration;
}
constexpr float_t const& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_hapticDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticDuration;
}
constexpr void GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_set_hapticDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hapticDuration = value;
}
constexpr double_t& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_joinedRoomRefreshPartyDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joinedRoomRefreshPartyDelay;
}
constexpr double_t const& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_joinedRoomRefreshPartyDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joinedRoomRefreshPartyDelay;
}
constexpr void GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_set_joinedRoomRefreshPartyDelay(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___joinedRoomRefreshPartyDelay = value;
}
constexpr double_t& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_failedToFollowRefreshPartyDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___failedToFollowRefreshPartyDelay;
}
constexpr double_t const& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_failedToFollowRefreshPartyDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___failedToFollowRefreshPartyDelay;
}
constexpr void GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_set_failedToFollowRefreshPartyDelay(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___failedToFollowRefreshPartyDelay = value;
}
constexpr bool& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_debug()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debug;
}
constexpr bool const& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_debug() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debug;
}
constexpr void GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_set_debug(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debug = value;
}
constexpr double_t& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_offset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offset;
}
constexpr double_t const& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_offset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offset;
}
constexpr void GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_set_offset(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offset = value;
}
constexpr float_t& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_m_maxGroupJoinTimeDifference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_maxGroupJoinTimeDifference;
}
constexpr float_t const& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_m_maxGroupJoinTimeDifference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_maxGroupJoinTimeDifference;
}
constexpr void GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_set_m_maxGroupJoinTimeDifference(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_maxGroupJoinTimeDifference = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_myPartyMemberIDs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myPartyMemberIDs;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_myPartyMemberIDs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myPartyMemberIDs;
}
constexpr void GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_set_myPartyMemberIDs(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myPartyMemberIDs = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_myPartyMembersHash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myPartyMembersHash;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_myPartyMembersHash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myPartyMembersHash;
}
constexpr void GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_set_myPartyMembersHash(::System::Collections::Generic::HashSet_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myPartyMembersHash = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Color>*& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get__myBeadColors_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____myBeadColors_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Color>* const& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get__myBeadColors_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____myBeadColors_k__BackingField;
}
constexpr void GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_set__myBeadColors_k__BackingField(::System::Collections::Generic::List_1<::UnityEngine::Color>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____myBeadColors_k__BackingField = value;
}
constexpr ::UnityEngine::Color& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get__myBraceletColor_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____myBraceletColor_k__BackingField;
}
constexpr ::UnityEngine::Color const& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get__myBraceletColor_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____myBraceletColor_k__BackingField;
}
constexpr void GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_set__myBraceletColor_k__BackingField(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____myBraceletColor_k__BackingField = value;
}
constexpr int32_t& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get__MyBraceletSelfIndex_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MyBraceletSelfIndex_k__BackingField;
}
constexpr int32_t const& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get__MyBraceletSelfIndex_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MyBraceletSelfIndex_k__BackingField;
}
constexpr void GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_set__MyBraceletSelfIndex_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MyBraceletSelfIndex_k__BackingField = value;
}
constexpr ::GlobalNamespace::GroupJoinZoneAB& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get__partyZone_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____partyZone_k__BackingField;
}
constexpr ::GlobalNamespace::GroupJoinZoneAB const& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get__partyZone_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____partyZone_k__BackingField;
}
constexpr void GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_set__partyZone_k__BackingField(::GlobalNamespace::GroupJoinZoneAB  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____partyZone_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Action_1<::GlobalNamespace::GroupJoinZoneAB>*>*& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_groupZoneCallbacks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groupZoneCallbacks;
}
constexpr ::System::Collections::Generic::List_1<::System::Action_1<::GlobalNamespace::GroupJoinZoneAB>*>* const& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_groupZoneCallbacks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groupZoneCallbacks;
}
constexpr void GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_set_groupZoneCallbacks(::System::Collections::Generic::List_1<::System::Action_1<::GlobalNamespace::GroupJoinZoneAB>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___groupZoneCallbacks = value;
}
constexpr ::GlobalNamespace::GTColor_HSVRanges& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_braceletRandomColorHSVRanges()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___braceletRandomColorHSVRanges;
}
constexpr ::GlobalNamespace::GTColor_HSVRanges const& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_braceletRandomColorHSVRanges() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___braceletRandomColorHSVRanges;
}
constexpr void GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_set_braceletRandomColorHSVRanges(::GlobalNamespace::GTColor_HSVRanges  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___braceletRandomColorHSVRanges = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_friendshipBubble()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___friendshipBubble;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_friendshipBubble() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___friendshipBubble;
}
constexpr void GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_set_friendshipBubble(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___friendshipBubble = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_fistBumpInterruptedAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fistBumpInterruptedAudio;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_fistBumpInterruptedAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fistBumpInterruptedAudio;
}
constexpr void GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_set_fistBumpInterruptedAudio(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fistBumpInterruptedAudio = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_particleSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleSystem;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_particleSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleSystem;
}
constexpr void GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_set_particleSystem(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___particleSystem = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr double_t& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_lastJoinedRoomTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastJoinedRoomTime;
}
constexpr double_t const& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_lastJoinedRoomTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastJoinedRoomTime;
}
constexpr void GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_set_lastJoinedRoomTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastJoinedRoomTime = value;
}
constexpr bool& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_wantsPartyRefreshPostJoin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wantsPartyRefreshPostJoin;
}
constexpr bool const& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_wantsPartyRefreshPostJoin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wantsPartyRefreshPostJoin;
}
constexpr void GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_set_wantsPartyRefreshPostJoin(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wantsPartyRefreshPostJoin = value;
}
constexpr double_t& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_lastFailedToFollowPartyTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastFailedToFollowPartyTime;
}
constexpr double_t const& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_lastFailedToFollowPartyTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastFailedToFollowPartyTime;
}
constexpr void GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_set_lastFailedToFollowPartyTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastFailedToFollowPartyTime = value;
}
constexpr bool& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_wantsPartyRefreshPostFollowFailed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wantsPartyRefreshPostFollowFailed;
}
constexpr bool const& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_wantsPartyRefreshPostFollowFailed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wantsPartyRefreshPostFollowFailed;
}
constexpr void GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_set_wantsPartyRefreshPostFollowFailed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wantsPartyRefreshPostFollowFailed = value;
}
constexpr bool& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get__TickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr bool const& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get__TickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr void GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_set__TickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TickRunning_k__BackingField = value;
}
constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::FriendshipGroupDetection_PlayerFist>*& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_playersToPropagateFrom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playersToPropagateFrom;
}
constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::FriendshipGroupDetection_PlayerFist>* const& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_playersToPropagateFrom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playersToPropagateFrom;
}
constexpr void GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_set_playersToPropagateFrom(::System::Collections::Generic::Queue_1<::GlobalNamespace::FriendshipGroupDetection_PlayerFist>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playersToPropagateFrom = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_playersInProvisionalGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playersInProvisionalGroup;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_playersInProvisionalGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playersInProvisionalGroup;
}
constexpr void GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_set_playersInProvisionalGroup(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playersInProvisionalGroup = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_provisionalGroupUsingLeftHands()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___provisionalGroupUsingLeftHands;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_provisionalGroupUsingLeftHands() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___provisionalGroupUsingLeftHands;
}
constexpr void GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_set_provisionalGroupUsingLeftHands(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___provisionalGroupUsingLeftHands = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_tempIntList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempIntList;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_tempIntList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempIntList;
}
constexpr void GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_set_tempIntList(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tempIntList = value;
}
constexpr bool& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_amFirstProvisionalPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___amFirstProvisionalPlayer;
}
constexpr bool const& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_amFirstProvisionalPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___amFirstProvisionalPlayer;
}
constexpr void GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_set_amFirstProvisionalPlayer(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___amFirstProvisionalPlayer = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<int32_t>>*& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_partyMergeIDs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___partyMergeIDs;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<int32_t>>* const& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_partyMergeIDs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___partyMergeIDs;
}
constexpr void GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_set_partyMergeIDs(::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<int32_t>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___partyMergeIDs = value;
}
constexpr float_t& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_groupCreateAfterTimestamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groupCreateAfterTimestamp;
}
constexpr float_t const& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_groupCreateAfterTimestamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groupCreateAfterTimestamp;
}
constexpr void GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_set_groupCreateAfterTimestamp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___groupCreateAfterTimestamp = value;
}
constexpr float_t& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_playEffectsAfterTimestamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playEffectsAfterTimestamp;
}
constexpr float_t const& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_playEffectsAfterTimestamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playEffectsAfterTimestamp;
}
constexpr void GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_set_playEffectsAfterTimestamp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playEffectsAfterTimestamp = value;
}
constexpr float_t& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_playEffectsDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playEffectsDelay;
}
constexpr float_t const& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_playEffectsDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playEffectsDelay;
}
constexpr void GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_set_playEffectsDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playEffectsDelay = value;
}
constexpr float_t& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_suppressPartyCreationUntilTimestamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___suppressPartyCreationUntilTimestamp;
}
constexpr float_t const& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_suppressPartyCreationUntilTimestamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___suppressPartyCreationUntilTimestamp;
}
constexpr void GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_set_suppressPartyCreationUntilTimestamp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___suppressPartyCreationUntilTimestamp = value;
}
constexpr bool& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get__DidJoinLeftHanded_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DidJoinLeftHanded_k__BackingField;
}
constexpr bool const& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get__DidJoinLeftHanded_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DidJoinLeftHanded_k__BackingField;
}
constexpr void GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_set__DidJoinLeftHanded_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DidJoinLeftHanded_k__BackingField = value;
}
constexpr bool& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_WillJoinLeftHanded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WillJoinLeftHanded;
}
constexpr bool const& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_WillJoinLeftHanded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WillJoinLeftHanded;
}
constexpr void GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_set_WillJoinLeftHanded(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WillJoinLeftHanded = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FriendshipGroupDetection_PlayerFist>*& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_playersMakingFists()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playersMakingFists;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FriendshipGroupDetection_PlayerFist>* const& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_playersMakingFists() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playersMakingFists;
}
constexpr void GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_set_playersMakingFists(::System::Collections::Generic::List_1<::GlobalNamespace::FriendshipGroupDetection_PlayerFist>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playersMakingFists = value;
}
constexpr ::System::Text::StringBuilder*& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_debugStr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugStr;
}
constexpr ::System::Text::StringBuilder* const& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_debugStr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugStr;
}
constexpr void GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_set_debugStr(::System::Text::StringBuilder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugStr = value;
}
constexpr float_t& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_aboutToGroupJoin_CooldownUntilTimestamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aboutToGroupJoin_CooldownUntilTimestamp;
}
constexpr float_t const& GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_get_aboutToGroupJoin_CooldownUntilTimestamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aboutToGroupJoin_CooldownUntilTimestamp;
}
constexpr void GorillaTagScripts::FriendshipGroupDetection::__cordl_internal_set_aboutToGroupJoin_CooldownUntilTimestamp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___aboutToGroupJoin_CooldownUntilTimestamp = value;
}
inline void GorillaTagScripts::FriendshipGroupDetection::setStaticF__Instance_k__BackingField(::UnityW<::GorillaTagScripts::FriendshipGroupDetection>  value)  {
::cordl_internals::setStaticField<::UnityW<::GorillaTagScripts::FriendshipGroupDetection>, "<Instance>k__BackingField", ::GorillaTagScripts::FriendshipGroupDetection*>(std::forward<::UnityW<::GorillaTagScripts::FriendshipGroupDetection>>(value));
}
inline ::UnityW<::GorillaTagScripts::FriendshipGroupDetection> GorillaTagScripts::FriendshipGroupDetection::getStaticF__Instance_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityW<::GorillaTagScripts::FriendshipGroupDetection>, "<Instance>k__BackingField", ::GorillaTagScripts::FriendshipGroupDetection*>();
}
inline void GorillaTagScripts::FriendshipGroupDetection::setStaticF_profiler_Tick(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "profiler_Tick", ::GorillaTagScripts::FriendshipGroupDetection*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker GorillaTagScripts::FriendshipGroupDetection::getStaticF_profiler_Tick()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "profiler_Tick", ::GorillaTagScripts::FriendshipGroupDetection*>();
}
inline void GorillaTagScripts::FriendshipGroupDetection::setStaticF_profiler_updateProvisionalGroup(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "profiler_updateProvisionalGroup", ::GorillaTagScripts::FriendshipGroupDetection*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker GorillaTagScripts::FriendshipGroupDetection::getStaticF_profiler_updateProvisionalGroup()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "profiler_updateProvisionalGroup", ::GorillaTagScripts::FriendshipGroupDetection*>();
}
inline void GorillaTagScripts::FriendshipGroupDetection::setStaticF_userIdLookup(::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*, "userIdLookup", ::GorillaTagScripts::FriendshipGroupDetection*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::StringW>* GorillaTagScripts::FriendshipGroupDetection::getStaticF_userIdLookup()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*, "userIdLookup", ::GorillaTagScripts::FriendshipGroupDetection*>();
}
inline void GorillaTagScripts::FriendshipGroupDetection::setStaticF_tempColorLookup(::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Color>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Color>*, "tempColorLookup", ::GorillaTagScripts::FriendshipGroupDetection*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Color>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Color>* GorillaTagScripts::FriendshipGroupDetection::getStaticF_tempColorLookup()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Color>*, "tempColorLookup", ::GorillaTagScripts::FriendshipGroupDetection*>();
}
inline ::UnityW<::GorillaTagScripts::FriendshipGroupDetection> GorillaTagScripts::FriendshipGroupDetection::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GorillaTagScripts::FriendshipGroupDetection>>(nullptr, ___internal_method);
}
inline void GorillaTagScripts::FriendshipGroupDetection::set_Instance(::GorillaTagScripts::FriendshipGroupDetection*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"set_Instance", {}, {::i2c::type_of<::GorillaTagScripts::FriendshipGroupDetection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Color>* GorillaTagScripts::FriendshipGroupDetection::get_myBeadColors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"get_myBeadColors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Color>*>(this, ___internal_method);
}
inline void GorillaTagScripts::FriendshipGroupDetection::set_myBeadColors(::System::Collections::Generic::List_1<::UnityEngine::Color>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"set_myBeadColors", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Color>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color GorillaTagScripts::FriendshipGroupDetection::get_myBraceletColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"get_myBraceletColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void GorillaTagScripts::FriendshipGroupDetection::set_myBraceletColor(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"set_myBraceletColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GorillaTagScripts::FriendshipGroupDetection::get_MyBraceletSelfIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"get_MyBraceletSelfIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GorillaTagScripts::FriendshipGroupDetection::set_MyBraceletSelfIndex(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"set_MyBraceletSelfIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::StringW>* GorillaTagScripts::FriendshipGroupDetection::get_PartyMemberIDs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"get_PartyMemberIDs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*>(this, ___internal_method);
}
inline bool GorillaTagScripts::FriendshipGroupDetection::get_IsInParty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"get_IsInParty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::GroupJoinZoneAB GorillaTagScripts::FriendshipGroupDetection::get_partyZone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"get_partyZone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GroupJoinZoneAB>(this, ___internal_method);
}
inline void GorillaTagScripts::FriendshipGroupDetection::set_partyZone(::GlobalNamespace::GroupJoinZoneAB  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"set_partyZone", {}, {::i2c::type_of<::GlobalNamespace::GroupJoinZoneAB>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GorillaTagScripts::FriendshipGroupDetection::get_TickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"get_TickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTagScripts::FriendshipGroupDetection::set_TickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTagScripts::FriendshipGroupDetection::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::FriendshipGroupDetection::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::FriendshipGroupDetection::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::FriendshipGroupDetection::OnPlayerJoinedRoom(::GlobalNamespace::NetPlayer*  joiningPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"OnPlayerJoinedRoom", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, joiningPlayer);
}
inline void GorillaTagScripts::FriendshipGroupDetection::AddGroupZoneCallback(::System::Action_1<::GlobalNamespace::GroupJoinZoneAB>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"AddGroupZoneCallback", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::GroupJoinZoneAB>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void GorillaTagScripts::FriendshipGroupDetection::RemoveGroupZoneCallback(::System::Action_1<::GlobalNamespace::GroupJoinZoneAB>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"RemoveGroupZoneCallback", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::GroupJoinZoneAB>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline bool GorillaTagScripts::FriendshipGroupDetection::IsInMyGroup(::StringW  userID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"IsInMyGroup", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, userID);
}
inline bool GorillaTagScripts::FriendshipGroupDetection::AnyPartyMembersOutsideFriendCollider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"AnyPartyMembersOutsideFriendCollider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaTagScripts::FriendshipGroupDetection::get_DidJoinLeftHanded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"get_DidJoinLeftHanded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTagScripts::FriendshipGroupDetection::set_DidJoinLeftHanded(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"set_DidJoinLeftHanded", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTagScripts::FriendshipGroupDetection::Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::FriendshipGroupDetection::UpdateProvisionalGroup(::by_ref<::UnityEngine::Vector3>  midpoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"UpdateProvisionalGroup", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, midpoint);
}
inline void GorillaTagScripts::FriendshipGroupDetection::UpdateWarningSigns()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"UpdateWarningSigns", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::FriendshipGroupDetection::CheckPartyZoneCallbacks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"CheckPartyZoneCallbacks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::FriendshipGroupDetection::NotifyNoPartyToMerge(::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"NotifyNoPartyToMerge", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void GorillaTagScripts::FriendshipGroupDetection::NotifyPartyMerging(::ArrayW<int32_t>  memberIDs, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"NotifyPartyMerging", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, memberIDs, info);
}
inline void GorillaTagScripts::FriendshipGroupDetection::SendAboutToGroupJoin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"SendAboutToGroupJoin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::FriendshipGroupDetection::PartyMemberIsAboutToGroupJoin(::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"PartyMemberIsAboutToGroupJoin", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void GorillaTagScripts::FriendshipGroupDetection::PartMemberIsAboutToGroupJoinWrapped(::GlobalNamespace::PhotonMessageInfoWrapped  wrappedInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"PartMemberIsAboutToGroupJoinWrapped", {}, {::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrappedInfo);
}
inline void GorillaTagScripts::FriendshipGroupDetection::SendPartyFormedRPC(int16_t  braceletColor, ::ArrayW<int32_t>  memberIDs, bool  forceDebug)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"SendPartyFormedRPC", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, braceletColor, memberIDs, forceDebug);
}
inline void GorillaTagScripts::FriendshipGroupDetection::PartyFormedSuccessfully(::StringW  partyGameMode, int16_t  braceletColor, ::ArrayW<int32_t>  memberIDs, bool  forceDebug, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"PartyFormedSuccessfully", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int16_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, partyGameMode, braceletColor, memberIDs, forceDebug, info);
}
inline void GorillaTagScripts::FriendshipGroupDetection::PartyFormedSuccesfullyWrapped(::StringW  partyGameMode, int16_t  braceletColor, ::ArrayW<int32_t>  memberIDs, bool  forceDebug, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"PartyFormedSuccesfullyWrapped", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int16_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, partyGameMode, braceletColor, memberIDs, forceDebug, info);
}
inline void GorillaTagScripts::FriendshipGroupDetection::AddPartyMembers(::StringW  partyGameMode, int16_t  braceletColor, ::ArrayW<int32_t>  memberIDs, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"AddPartyMembers", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int16_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, partyGameMode, braceletColor, memberIDs, info);
}
inline void GorillaTagScripts::FriendshipGroupDetection::AddPartyMembersWrapped(::StringW  partyGameMode, int16_t  braceletColor, ::ArrayW<int32_t>  memberIDs, ::GlobalNamespace::PhotonMessageInfoWrapped  infoWrapped)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"AddPartyMembersWrapped", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int16_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, partyGameMode, braceletColor, memberIDs, infoWrapped);
}
inline void GorillaTagScripts::FriendshipGroupDetection::SetNewParty(::StringW  partyGameMode, int16_t  braceletColor, ::ArrayW<int32_t>  memberIDs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"SetNewParty", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int16_t>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, partyGameMode, braceletColor, memberIDs);
}
inline void GorillaTagScripts::FriendshipGroupDetection::LeaveParty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"LeaveParty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::FriendshipGroupDetection::OnFailedToFollowParty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"OnFailedToFollowParty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::FriendshipGroupDetection::RefreshPartyMembers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"RefreshPartyMembers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::FriendshipGroupDetection::PlayerLeftParty(::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"PlayerLeftParty", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void GorillaTagScripts::FriendshipGroupDetection::PlayerLeftPartyWrapped(::GlobalNamespace::PhotonMessageInfoWrapped  infoWrapped)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"PlayerLeftPartyWrapped", {}, {::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, infoWrapped);
}
inline void GorillaTagScripts::FriendshipGroupDetection::PlayerIDLeftParty(::StringW  userID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"PlayerIDLeftParty", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userID);
}
inline void GorillaTagScripts::FriendshipGroupDetection::SendVerifyPartyMember(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"SendVerifyPartyMember", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GorillaTagScripts::FriendshipGroupDetection::VerifyPartyMember(::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"VerifyPartyMember", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void GorillaTagScripts::FriendshipGroupDetection::VerifyPartyMemberWrapped(::GlobalNamespace::PhotonMessageInfoWrapped  infoWrapped)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"VerifyPartyMemberWrapped", {}, {::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, infoWrapped);
}
inline void GorillaTagScripts::FriendshipGroupDetection::SendRequestPartyGameMode(::StringW  gameMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"SendRequestPartyGameMode", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameMode);
}
inline void GorillaTagScripts::FriendshipGroupDetection::RequestPartyGameMode(::StringW  gameMode, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"RequestPartyGameMode", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameMode, info);
}
inline void GorillaTagScripts::FriendshipGroupDetection::RequestPartyGameModeWrapped(::StringW  gameMode, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"RequestPartyGameModeWrapped", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameMode, info);
}
inline void GorillaTagScripts::FriendshipGroupDetection::NotifyPartyGameModeChanged(::StringW  gameMode, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"NotifyPartyGameModeChanged", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameMode, info);
}
inline void GorillaTagScripts::FriendshipGroupDetection::NotifyPartyGameModeChangedWrapped(::StringW  gameMode, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"NotifyPartyGameModeChangedWrapped", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameMode, info);
}
inline void GorillaTagScripts::FriendshipGroupDetection::OnPartyMembershipChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"OnPartyMembershipChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTagScripts::FriendshipGroupDetection::IsPartyWithinCollider(::GlobalNamespace::GorillaFriendCollider*  friendCollider, bool  checkLocal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"IsPartyWithinCollider", {}, {::i2c::type_of<::GlobalNamespace::GorillaFriendCollider*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, friendCollider, checkLocal);
}
inline int16_t GorillaTagScripts::FriendshipGroupDetection::PackColor(::UnityEngine::Color  col)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"PackColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, col);
}
inline ::UnityEngine::Color GorillaTagScripts::FriendshipGroupDetection::UnpackColor(int16_t  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {"UnpackColor", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method, data);
}
inline void GorillaTagScripts::FriendshipGroupDetection::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FriendshipGroupDetection*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::FriendshipGroupDetection* GorillaTagScripts::FriendshipGroupDetection::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::FriendshipGroupDetection*>());
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr  GorillaTagScripts::FriendshipGroupDetection::operator ::GlobalNamespace::ITickSystemTick*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* GorillaTagScripts::FriendshipGroupDetection::i___GlobalNamespace__ITickSystemTick() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::FriendshipGroupDetection::FriendshipGroupDetection()   {
}
