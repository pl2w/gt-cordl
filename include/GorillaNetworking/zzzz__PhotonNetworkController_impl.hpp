#pragma once
// IWYU pragma private; include "GorillaNetworking/PhotonNetworkController.hpp"
#include "GlobalNamespace/zzzz__GTZone_impl.hpp"
#include "GorillaNetworking/zzzz__JoinType_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__SkinnedMeshRenderer_impl.hpp"
#include "GorillaNetworking/zzzz__PhotonNetworkController_def.hpp"
#include "Fusion/zzzz__NetworkObject_def.hpp"
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include "GlobalNamespace/zzzz__GorillaGeoHideShowTrigger_def.hpp"
#include "GlobalNamespace/zzzz__NetJoinResult_def.hpp"
#include "GorillaNetworking/zzzz__GorillaNetworkJoinTrigger_def.hpp"
#include "GorillaNetworking/zzzz__JoinType_def.hpp"
#include "GorillaNetworking/zzzz__PhotonNetworkController__AttemptToJoinPublicRoomAsync_d__69_def.hpp"
#include "GorillaNetworking/zzzz__PhotonNetworkController__AttemptToJoinRankedPublicRoomAsync_d__71_def.hpp"
#include "GorillaNetworking/zzzz__PhotonNetworkController__AttemptToJoinSpecificRoomAsync_d__81_def.hpp"
#include "GorillaNetworking/zzzz__PhotonNetworkController__SendPartyFollowCommands_d__72_def.hpp"
#include "GorillaNetworking/zzzz__PhotonNetworkController_def.hpp"
#include "GorillaNetworking/zzzz__PlayFabAuthenticator_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GorillaNetworking::PhotonNetworkController.get_FriendIDList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::GorillaNetworking::PhotonNetworkController::*)()>(&::GorillaNetworking::PhotonNetworkController::get_FriendIDList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c90a3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"get_FriendIDList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PhotonNetworkController.set_FriendIDList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PhotonNetworkController::*)(::System::Collections::Generic::List_1<::StringW>*)>(&::GorillaNetworking::PhotonNetworkController::set_FriendIDList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c90a44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"set_FriendIDList", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PhotonNetworkController.get_StartLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaNetworking::PhotonNetworkController::*)()>(&::GorillaNetworking::PhotonNetworkController::get_StartLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c90a4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"get_StartLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PhotonNetworkController.set_StartLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PhotonNetworkController::*)(::StringW)>(&::GorillaNetworking::PhotonNetworkController::set_StartLevel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c90a54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"set_StartLevel", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PhotonNetworkController.get_StartZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GTZone (::GorillaNetworking::PhotonNetworkController::*)()>(&::GorillaNetworking::PhotonNetworkController::get_StartZone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c90a64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"get_StartZone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PhotonNetworkController.set_StartZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PhotonNetworkController::*)(::GlobalNamespace::GTZone)>(&::GorillaNetworking::PhotonNetworkController::set_StartZone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c90a6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"set_StartZone", {}, {::i2c::type_of<::GlobalNamespace::GTZone>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PhotonNetworkController.get_CurrentRoomZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GTZone (::GorillaNetworking::PhotonNetworkController::*)()>(&::GorillaNetworking::PhotonNetworkController::get_CurrentRoomZone)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5c90a74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"get_CurrentRoomZone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PhotonNetworkController.get_StartGeoTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GorillaGeoHideShowTrigger> (::GorillaNetworking::PhotonNetworkController::*)()>(&::GorillaNetworking::PhotonNetworkController::get_StartGeoTrigger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c90af4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"get_StartGeoTrigger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PhotonNetworkController.set_StartGeoTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PhotonNetworkController::*)(::GlobalNamespace::GorillaGeoHideShowTrigger*)>(&::GorillaNetworking::PhotonNetworkController::set_StartGeoTrigger)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c90afc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"set_StartGeoTrigger", {}, {::i2c::type_of<::GlobalNamespace::GorillaGeoHideShowTrigger*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PhotonNetworkController.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PhotonNetworkController::*)()>(&::GorillaNetworking::PhotonNetworkController::Awake)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5c90b0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PhotonNetworkController.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PhotonNetworkController::*)()>(&::GorillaNetworking::PhotonNetworkController::Start)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x5c90c88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PhotonNetworkController.DisableOnStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GorillaNetworking::PhotonNetworkController::*)()>(&::GorillaNetworking::PhotonNetworkController::DisableOnStart)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5c90e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"DisableOnStart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PhotonNetworkController.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PhotonNetworkController::*)()>(&::GorillaNetworking::PhotonNetworkController::FixedUpdate)> {
  constexpr static std::size_t size = 0x7c0;
  constexpr static std::size_t addrs = 0x5c90f04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PhotonNetworkController.DeferJoining
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PhotonNetworkController::*)(float_t)>(&::GorillaNetworking::PhotonNetworkController::DeferJoining)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5c8b91c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"DeferJoining", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PhotonNetworkController.ClearDeferredJoin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PhotonNetworkController::*)()>(&::GorillaNetworking::PhotonNetworkController::ClearDeferredJoin)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c8b958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"ClearDeferredJoin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PhotonNetworkController.AttemptToJoinPublicRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PhotonNetworkController::*)(::GorillaNetworking::GorillaNetworkJoinTrigger*, ::GorillaNetworking::JoinType, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW,::StringW>>*, bool)>(&::GorillaNetworking::PhotonNetworkController::AttemptToJoinPublicRoom)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c8b954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"AttemptToJoinPublicRoom", {}, {::i2c::type_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>(), ::i2c::type_of<::GorillaNetworking::JoinType>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW,::StringW>>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PhotonNetworkController.AttemptToJoinPublicRoomAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PhotonNetworkController::*)(::GorillaNetworking::GorillaNetworkJoinTrigger*, ::GorillaNetworking::JoinType, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW,::StringW>>*, bool)>(&::GorillaNetworking::PhotonNetworkController::AttemptToJoinPublicRoomAsync)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5c91774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"AttemptToJoinPublicRoomAsync", {}, {::i2c::type_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>(), ::i2c::type_of<::GorillaNetworking::JoinType>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW,::StringW>>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PhotonNetworkController.AttemptToJoinRankedPublicRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PhotonNetworkController::*)(::GorillaNetworking::GorillaNetworkJoinTrigger*, ::GorillaNetworking::JoinType)>(&::GorillaNetworking::PhotonNetworkController::AttemptToJoinRankedPublicRoom)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5c8c15c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"AttemptToJoinRankedPublicRoom", {}, {::i2c::type_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>(), ::i2c::type_of<::GorillaNetworking::JoinType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PhotonNetworkController.AttemptToJoinRankedPublicRoomAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PhotonNetworkController::*)(::GorillaNetworking::GorillaNetworkJoinTrigger*, ::StringW, ::StringW, ::GorillaNetworking::JoinType)>(&::GorillaNetworking::PhotonNetworkController::AttemptToJoinRankedPublicRoomAsync)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5c91868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"AttemptToJoinRankedPublicRoomAsync", {}, {::i2c::type_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GorillaNetworking::JoinType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PhotonNetworkController.SendPartyFollowCommands
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GorillaNetworking::PhotonNetworkController::*)()>(&::GorillaNetworking::PhotonNetworkController::SendPartyFollowCommands)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5c91968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"SendPartyFollowCommands", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PhotonNetworkController.AttemptToAutoJoinRoomCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PhotonNetworkController::*)(::GlobalNamespace::NetJoinResult)>(&::GorillaNetworking::PhotonNetworkController::AttemptToAutoJoinRoomCallback)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c91a2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"AttemptToAutoJoinRoomCallback", {}, {::i2c::type_of<::GlobalNamespace::NetJoinResult>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PhotonNetworkController.AttemptToAutoJoinSpecificRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PhotonNetworkController::*)(::StringW, ::GorillaNetworking::JoinType)>(&::GorillaNetworking::PhotonNetworkController::AttemptToAutoJoinSpecificRoom)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5c916c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"AttemptToAutoJoinSpecificRoom", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GorillaNetworking::JoinType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PhotonNetworkController.AttemptToJoinSpecificRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PhotonNetworkController::*)(::StringW, ::GorillaNetworking::JoinType)>(&::GorillaNetworking::PhotonNetworkController::AttemptToJoinSpecificRoom)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c9176c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"AttemptToJoinSpecificRoom", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GorillaNetworking::JoinType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PhotonNetworkController.AttemptToJoinSpecificRoomWithCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PhotonNetworkController::*)(::StringW, ::GorillaNetworking::JoinType, ::System::Action_1<::GlobalNamespace::NetJoinResult>*)>(&::GorillaNetworking::PhotonNetworkController::AttemptToJoinSpecificRoomWithCallback)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c91b5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"AttemptToJoinSpecificRoomWithCallback", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GorillaNetworking::JoinType>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::NetJoinResult>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PhotonNetworkController.AttemptToJoinSpecificRoomAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GorillaNetworking::PhotonNetworkController::*)(::StringW, ::GorillaNetworking::JoinType, ::System::Action_1<::GlobalNamespace::NetJoinResult>*)>(&::GorillaNetworking::PhotonNetworkController::AttemptToJoinSpecificRoomAsync)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5c91a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"AttemptToJoinSpecificRoomAsync", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GorillaNetworking::JoinType>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::NetJoinResult>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PhotonNetworkController.DisconnectCleanup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PhotonNetworkController::*)()>(&::GorillaNetworking::PhotonNetworkController::DisconnectCleanup)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x5c91b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"DisconnectCleanup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PhotonNetworkController.OnJoinedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PhotonNetworkController::*)()>(&::GorillaNetworking::PhotonNetworkController::OnJoinedRoom)> {
  constexpr static std::size_t size = 0x894;
  constexpr static std::size_t addrs = 0x5c9209c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"OnJoinedRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PhotonNetworkController.RegisterJoinTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PhotonNetworkController::*)(::GorillaNetworking::GorillaNetworkJoinTrigger*)>(&::GorillaNetworking::PhotonNetworkController::RegisterJoinTrigger)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5c89d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"RegisterJoinTrigger", {}, {::i2c::type_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PhotonNetworkController.UpdateCurrentJoinTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PhotonNetworkController::*)()>(&::GorillaNetworking::PhotonNetworkController::UpdateCurrentJoinTrigger)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x5c92c88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"UpdateCurrentJoinTrigger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PhotonNetworkController.UpdateTriggerScreens
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PhotonNetworkController::*)()>(&::GorillaNetworking::PhotonNetworkController::UpdateTriggerScreens)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5c91f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"UpdateTriggerScreens", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PhotonNetworkController.AttemptToFollowIntoPub
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PhotonNetworkController::*)(::StringW, int32_t, ::StringW, ::StringW, ::GorillaNetworking::JoinType)>(&::GorillaNetworking::PhotonNetworkController::AttemptToFollowIntoPub)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5c92e88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"AttemptToFollowIntoPub", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GorillaNetworking::JoinType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PhotonNetworkController.OnDisconnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PhotonNetworkController::*)()>(&::GorillaNetworking::PhotonNetworkController::OnDisconnected)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c92fc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"OnDisconnected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PhotonNetworkController.OnApplicationQuit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PhotonNetworkController::*)()>(&::GorillaNetworking::PhotonNetworkController::OnApplicationQuit)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5c92fcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"OnApplicationQuit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PhotonNetworkController.ReturnRoomName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaNetworking::PhotonNetworkController::*)()>(&::GorillaNetworking::PhotonNetworkController::ReturnRoomName)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c93078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"ReturnRoomName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PhotonNetworkController.RandomRoomName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaNetworking::PhotonNetworkController::*)()>(&::GorillaNetworking::PhotonNetworkController::RandomRoomName)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5c9308c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"RandomRoomName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PhotonNetworkController.GetRegionWithLowestPing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaNetworking::PhotonNetworkController::*)()>(&::GorillaNetworking::PhotonNetworkController::GetRegionWithLowestPing)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5c9318c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"GetRegionWithLowestPing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PhotonNetworkController.TotalUsers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaNetworking::PhotonNetworkController::*)()>(&::GorillaNetworking::PhotonNetworkController::TotalUsers)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5c93304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"TotalUsers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PhotonNetworkController.CurrentState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaNetworking::PhotonNetworkController::*)()>(&::GorillaNetworking::PhotonNetworkController::CurrentState)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5c9335c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"CurrentState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PhotonNetworkController.OnApplicationPause
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PhotonNetworkController::*)(bool)>(&::GorillaNetworking::PhotonNetworkController::OnApplicationPause)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x5c93494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"OnApplicationPause", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PhotonNetworkController.OnApplicationFocus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PhotonNetworkController::*)(bool)>(&::GorillaNetworking::PhotonNetworkController::OnApplicationFocus)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5c93734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"OnApplicationFocus", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PhotonNetworkController.ParseZoneFromGameMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GTZone (::GorillaNetworking::PhotonNetworkController::*)(::StringW)>(&::GorillaNetworking::PhotonNetworkController::ParseZoneFromGameMode)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x5c92930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"ParseZoneFromGameMode", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PhotonNetworkController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PhotonNetworkController::*)()>(&::GorillaNetworking::PhotonNetworkController::_ctor)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5c9386c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_incrementCounter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___incrementCounter;
}
constexpr int32_t const& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_incrementCounter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___incrementCounter;
}
constexpr void GorillaNetworking::PhotonNetworkController::__cordl_internal_set_incrementCounter(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___incrementCounter = value;
}
constexpr ::UnityW<::GorillaNetworking::PlayFabAuthenticator>& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_playFabAuthenticator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playFabAuthenticator;
}
constexpr ::UnityW<::GorillaNetworking::PlayFabAuthenticator> const& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_playFabAuthenticator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playFabAuthenticator;
}
constexpr void GorillaNetworking::PhotonNetworkController::__cordl_internal_set_playFabAuthenticator(::UnityW<::GorillaNetworking::PlayFabAuthenticator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playFabAuthenticator = value;
}
constexpr ::ArrayW<::StringW>& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_serverRegions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverRegions;
}
constexpr ::ArrayW<::StringW> const& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_serverRegions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverRegions;
}
constexpr void GorillaNetworking::PhotonNetworkController::__cordl_internal_set_serverRegions(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serverRegions = value;
}
constexpr bool& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_isPrivate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isPrivate;
}
constexpr bool const& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_isPrivate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isPrivate;
}
constexpr void GorillaNetworking::PhotonNetworkController::__cordl_internal_set_isPrivate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isPrivate = value;
}
constexpr ::StringW& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_customRoomID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customRoomID;
}
constexpr ::StringW const& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_customRoomID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customRoomID;
}
constexpr void GorillaNetworking::PhotonNetworkController::__cordl_internal_set_customRoomID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customRoomID = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_playerOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerOffset;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_playerOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerOffset;
}
constexpr void GorillaNetworking::PhotonNetworkController::__cordl_internal_set_playerOffset(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerOffset = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::SkinnedMeshRenderer>>& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_offlineVRRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offlineVRRig;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::SkinnedMeshRenderer>> const& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_offlineVRRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offlineVRRig;
}
constexpr void GorillaNetworking::PhotonNetworkController::__cordl_internal_set_offlineVRRig(::ArrayW<::UnityW<::UnityEngine::SkinnedMeshRenderer>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offlineVRRig = value;
}
constexpr bool& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_attemptingToConnect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attemptingToConnect;
}
constexpr bool const& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_attemptingToConnect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attemptingToConnect;
}
constexpr void GorillaNetworking::PhotonNetworkController::__cordl_internal_set_attemptingToConnect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attemptingToConnect = value;
}
constexpr int32_t& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_currentRegionIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentRegionIndex;
}
constexpr int32_t const& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_currentRegionIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentRegionIndex;
}
constexpr void GorillaNetworking::PhotonNetworkController::__cordl_internal_set_currentRegionIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentRegionIndex = value;
}
constexpr ::StringW& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_currentGameType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentGameType;
}
constexpr ::StringW const& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_currentGameType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentGameType;
}
constexpr void GorillaNetworking::PhotonNetworkController::__cordl_internal_set_currentGameType(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentGameType = value;
}
constexpr bool& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_roomCosmeticsInitialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomCosmeticsInitialized;
}
constexpr bool const& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_roomCosmeticsInitialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomCosmeticsInitialized;
}
constexpr void GorillaNetworking::PhotonNetworkController::__cordl_internal_set_roomCosmeticsInitialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___roomCosmeticsInitialized = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_photonVoiceObjectPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___photonVoiceObjectPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_photonVoiceObjectPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___photonVoiceObjectPrefab;
}
constexpr void GorillaNetworking::PhotonNetworkController::__cordl_internal_set_photonVoiceObjectPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___photonVoiceObjectPrefab = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,bool>*& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_playerCosmeticsLookup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCosmeticsLookup;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,bool>* const& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_playerCosmeticsLookup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCosmeticsLookup;
}
constexpr void GorillaNetworking::PhotonNetworkController::__cordl_internal_set_playerCosmeticsLookup(::System::Collections::Generic::Dictionary_2<::StringW,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerCosmeticsLookup = value;
}
constexpr float_t& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_lastHeadRightHandDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastHeadRightHandDistance;
}
constexpr float_t const& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_lastHeadRightHandDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastHeadRightHandDistance;
}
constexpr void GorillaNetworking::PhotonNetworkController::__cordl_internal_set_lastHeadRightHandDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastHeadRightHandDistance = value;
}
constexpr float_t& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_lastHeadLeftHandDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastHeadLeftHandDistance;
}
constexpr float_t const& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_lastHeadLeftHandDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastHeadLeftHandDistance;
}
constexpr void GorillaNetworking::PhotonNetworkController::__cordl_internal_set_lastHeadLeftHandDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastHeadLeftHandDistance = value;
}
constexpr float_t& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_pauseTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pauseTime;
}
constexpr float_t const& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_pauseTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pauseTime;
}
constexpr void GorillaNetworking::PhotonNetworkController::__cordl_internal_set_pauseTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pauseTime = value;
}
constexpr float_t& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_disconnectTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disconnectTime;
}
constexpr float_t const& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_disconnectTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disconnectTime;
}
constexpr void GorillaNetworking::PhotonNetworkController::__cordl_internal_set_disconnectTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disconnectTime = value;
}
constexpr bool& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_disableAFKKick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableAFKKick;
}
constexpr bool const& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_disableAFKKick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableAFKKick;
}
constexpr void GorillaNetworking::PhotonNetworkController::__cordl_internal_set_disableAFKKick(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disableAFKKick = value;
}
constexpr float_t& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_headRightHandDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headRightHandDistance;
}
constexpr float_t const& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_headRightHandDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headRightHandDistance;
}
constexpr void GorillaNetworking::PhotonNetworkController::__cordl_internal_set_headRightHandDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headRightHandDistance = value;
}
constexpr float_t& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_headLeftHandDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headLeftHandDistance;
}
constexpr float_t const& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_headLeftHandDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headLeftHandDistance;
}
constexpr void GorillaNetworking::PhotonNetworkController::__cordl_internal_set_headLeftHandDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headLeftHandDistance = value;
}
constexpr ::UnityEngine::Quaternion& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_headQuat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headQuat;
}
constexpr ::UnityEngine::Quaternion const& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_headQuat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headQuat;
}
constexpr void GorillaNetworking::PhotonNetworkController::__cordl_internal_set_headQuat(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headQuat = value;
}
constexpr ::UnityEngine::Quaternion& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_lastHeadQuat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastHeadQuat;
}
constexpr ::UnityEngine::Quaternion const& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_lastHeadQuat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastHeadQuat;
}
constexpr void GorillaNetworking::PhotonNetworkController::__cordl_internal_set_lastHeadQuat(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastHeadQuat = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_disableOnStartup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableOnStartup;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_disableOnStartup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableOnStartup;
}
constexpr void GorillaNetworking::PhotonNetworkController::__cordl_internal_set_disableOnStartup(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disableOnStartup = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_enableOnStartup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableOnStartup;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_enableOnStartup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableOnStartup;
}
constexpr void GorillaNetworking::PhotonNetworkController::__cordl_internal_set_enableOnStartup(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enableOnStartup = value;
}
constexpr bool& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_updatedName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updatedName;
}
constexpr bool const& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_updatedName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updatedName;
}
constexpr void GorillaNetworking::PhotonNetworkController::__cordl_internal_set_updatedName(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___updatedName = value;
}
constexpr ::ArrayW<int32_t>& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_playersInRegion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playersInRegion;
}
constexpr ::ArrayW<int32_t> const& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_playersInRegion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playersInRegion;
}
constexpr void GorillaNetworking::PhotonNetworkController::__cordl_internal_set_playersInRegion(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playersInRegion = value;
}
constexpr ::ArrayW<int32_t>& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_pingInRegion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pingInRegion;
}
constexpr ::ArrayW<int32_t> const& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_pingInRegion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pingInRegion;
}
constexpr void GorillaNetworking::PhotonNetworkController::__cordl_internal_set_pingInRegion(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pingInRegion = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_friendIDList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___friendIDList;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_friendIDList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___friendIDList;
}
constexpr void GorillaNetworking::PhotonNetworkController::__cordl_internal_set_friendIDList(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___friendIDList = value;
}
constexpr ::GorillaNetworking::JoinType& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_currentJoinType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentJoinType;
}
constexpr ::GorillaNetworking::JoinType const& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_currentJoinType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentJoinType;
}
constexpr void GorillaNetworking::PhotonNetworkController::__cordl_internal_set_currentJoinType(::GorillaNetworking::JoinType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentJoinType = value;
}
constexpr ::StringW& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_friendToFollow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___friendToFollow;
}
constexpr ::StringW const& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_friendToFollow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___friendToFollow;
}
constexpr void GorillaNetworking::PhotonNetworkController::__cordl_internal_set_friendToFollow(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___friendToFollow = value;
}
constexpr ::StringW& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_keyToFollow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyToFollow;
}
constexpr ::StringW const& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_keyToFollow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyToFollow;
}
constexpr void GorillaNetworking::PhotonNetworkController::__cordl_internal_set_keyToFollow(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___keyToFollow = value;
}
constexpr ::StringW& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_shuffler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shuffler;
}
constexpr ::StringW const& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_shuffler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shuffler;
}
constexpr void GorillaNetworking::PhotonNetworkController::__cordl_internal_set_shuffler(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shuffler = value;
}
constexpr ::StringW& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_keyStr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyStr;
}
constexpr ::StringW const& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_keyStr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyStr;
}
constexpr void GorillaNetworking::PhotonNetworkController::__cordl_internal_set_keyStr(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___keyStr = value;
}
constexpr ::StringW& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_platformTag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformTag;
}
constexpr ::StringW const& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_platformTag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformTag;
}
constexpr void GorillaNetworking::PhotonNetworkController::__cordl_internal_set_platformTag(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___platformTag = value;
}
constexpr ::StringW& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_startLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startLevel;
}
constexpr ::StringW const& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_startLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startLevel;
}
constexpr void GorillaNetworking::PhotonNetworkController::__cordl_internal_set_startLevel(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startLevel = value;
}
constexpr ::GlobalNamespace::GTZone& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_startZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startZone;
}
constexpr ::GlobalNamespace::GTZone const& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_startZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startZone;
}
constexpr void GorillaNetworking::PhotonNetworkController::__cordl_internal_set_startZone(::GlobalNamespace::GTZone  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startZone = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaGeoHideShowTrigger>& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_startGeoTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startGeoTrigger;
}
constexpr ::UnityW<::GlobalNamespace::GorillaGeoHideShowTrigger> const& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_startGeoTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startGeoTrigger;
}
constexpr void GorillaNetworking::PhotonNetworkController::__cordl_internal_set_startGeoTrigger(::UnityW<::GlobalNamespace::GorillaGeoHideShowTrigger>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startGeoTrigger = value;
}
constexpr ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_privateTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___privateTrigger;
}
constexpr ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger> const& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_privateTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___privateTrigger;
}
constexpr void GorillaNetworking::PhotonNetworkController::__cordl_internal_set_privateTrigger(::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___privateTrigger = value;
}
constexpr ::StringW& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_initialGameMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialGameMode;
}
constexpr ::StringW const& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_initialGameMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialGameMode;
}
constexpr void GorillaNetworking::PhotonNetworkController::__cordl_internal_set_initialGameMode(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialGameMode = value;
}
constexpr ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_currentJoinTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentJoinTrigger;
}
constexpr ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger> const& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_currentJoinTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentJoinTrigger;
}
constexpr void GorillaNetworking::PhotonNetworkController::__cordl_internal_set_currentJoinTrigger(::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentJoinTrigger = value;
}
constexpr ::StringW& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_autoJoinRoom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoJoinRoom;
}
constexpr ::StringW const& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_autoJoinRoom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoJoinRoom;
}
constexpr void GorillaNetworking::PhotonNetworkController::__cordl_internal_set_autoJoinRoom(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___autoJoinRoom = value;
}
constexpr int32_t& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_autoJoinRoomCap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoJoinRoomCap;
}
constexpr int32_t const& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_autoJoinRoomCap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoJoinRoomCap;
}
constexpr void GorillaNetworking::PhotonNetworkController::__cordl_internal_set_autoJoinRoomCap(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___autoJoinRoomCap = value;
}
constexpr ::StringW& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_autoJoinGameMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoJoinGameMode;
}
constexpr ::StringW const& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_autoJoinGameMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoJoinGameMode;
}
constexpr void GorillaNetworking::PhotonNetworkController::__cordl_internal_set_autoJoinGameMode(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___autoJoinGameMode = value;
}
constexpr bool& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_deferredJoin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deferredJoin;
}
constexpr bool const& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_deferredJoin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deferredJoin;
}
constexpr void GorillaNetworking::PhotonNetworkController::__cordl_internal_set_deferredJoin(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deferredJoin = value;
}
constexpr float_t& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_partyJoinDeferredUntilTimestamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___partyJoinDeferredUntilTimestamp;
}
constexpr float_t const& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_partyJoinDeferredUntilTimestamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___partyJoinDeferredUntilTimestamp;
}
constexpr void GorillaNetworking::PhotonNetworkController::__cordl_internal_set_partyJoinDeferredUntilTimestamp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___partyJoinDeferredUntilTimestamp = value;
}
constexpr ::System::Nullable_1<::System::DateTime>& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_timeWhenApplicationPaused()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeWhenApplicationPaused;
}
constexpr ::System::Nullable_1<::System::DateTime> const& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_timeWhenApplicationPaused() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeWhenApplicationPaused;
}
constexpr void GorillaNetworking::PhotonNetworkController::__cordl_internal_set_timeWhenApplicationPaused(::System::Nullable_1<::System::DateTime>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeWhenApplicationPaused = value;
}
constexpr ::UnityW<::Fusion::NetworkObject>& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_testPlayerPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testPlayerPrefab;
}
constexpr ::UnityW<::Fusion::NetworkObject> const& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_testPlayerPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testPlayerPrefab;
}
constexpr void GorillaNetworking::PhotonNetworkController::__cordl_internal_set_testPlayerPrefab(::UnityW<::Fusion::NetworkObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___testPlayerPrefab = value;
}
constexpr ::StringW& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_roomToJoin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomToJoin;
}
constexpr ::StringW const& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_roomToJoin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomToJoin;
}
constexpr void GorillaNetworking::PhotonNetworkController::__cordl_internal_set_roomToJoin(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___roomToJoin = value;
}
constexpr int32_t& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_joinNextAttempt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joinNextAttempt;
}
constexpr int32_t const& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_joinNextAttempt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joinNextAttempt;
}
constexpr void GorillaNetworking::PhotonNetworkController::__cordl_internal_set_joinNextAttempt(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___joinNextAttempt = value;
}
constexpr int32_t& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_maxNextAttempts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxNextAttempts;
}
constexpr int32_t const& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_maxNextAttempts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxNextAttempts;
}
constexpr void GorillaNetworking::PhotonNetworkController::__cordl_internal_set_maxNextAttempts(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxNextAttempts = value;
}
constexpr ::StringW& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_LastRoomToJoin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LastRoomToJoin;
}
constexpr ::StringW const& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_LastRoomToJoin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LastRoomToJoin;
}
constexpr void GorillaNetworking::PhotonNetworkController::__cordl_internal_set_LastRoomToJoin(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LastRoomToJoin = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>>*& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_allJoinTriggers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allJoinTriggers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>>* const& GorillaNetworking::PhotonNetworkController::__cordl_internal_get_allJoinTriggers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allJoinTriggers;
}
constexpr void GorillaNetworking::PhotonNetworkController::__cordl_internal_set_allJoinTriggers(::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allJoinTriggers = value;
}
inline void GorillaNetworking::PhotonNetworkController::setStaticF_Instance(::UnityW<::GorillaNetworking::PhotonNetworkController>  value)  {
::cordl_internals::setStaticField<::UnityW<::GorillaNetworking::PhotonNetworkController>, "Instance", ::GorillaNetworking::PhotonNetworkController*>(std::forward<::UnityW<::GorillaNetworking::PhotonNetworkController>>(value));
}
inline ::UnityW<::GorillaNetworking::PhotonNetworkController> GorillaNetworking::PhotonNetworkController::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GorillaNetworking::PhotonNetworkController>, "Instance", ::GorillaNetworking::PhotonNetworkController*>();
}
inline ::System::Collections::Generic::List_1<::StringW>* GorillaNetworking::PhotonNetworkController::get_FriendIDList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"get_FriendIDList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*>(this, ___internal_method);
}
inline void GorillaNetworking::PhotonNetworkController::set_FriendIDList(::System::Collections::Generic::List_1<::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"set_FriendIDList", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GorillaNetworking::PhotonNetworkController::get_StartLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"get_StartLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GorillaNetworking::PhotonNetworkController::set_StartLevel(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"set_StartLevel", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::GTZone GorillaNetworking::PhotonNetworkController::get_StartZone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"get_StartZone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GTZone>(this, ___internal_method);
}
inline void GorillaNetworking::PhotonNetworkController::set_StartZone(::GlobalNamespace::GTZone  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"set_StartZone", {}, {::i2c::type_of<::GlobalNamespace::GTZone>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::GTZone GorillaNetworking::PhotonNetworkController::get_CurrentRoomZone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"get_CurrentRoomZone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GTZone>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::GorillaGeoHideShowTrigger> GorillaNetworking::PhotonNetworkController::get_StartGeoTrigger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"get_StartGeoTrigger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GorillaGeoHideShowTrigger>>(this, ___internal_method);
}
inline void GorillaNetworking::PhotonNetworkController::set_StartGeoTrigger(::GlobalNamespace::GorillaGeoHideShowTrigger*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"set_StartGeoTrigger", {}, {::i2c::type_of<::GlobalNamespace::GorillaGeoHideShowTrigger*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaNetworking::PhotonNetworkController::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::PhotonNetworkController::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GorillaNetworking::PhotonNetworkController::DisableOnStart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"DisableOnStart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GorillaNetworking::PhotonNetworkController::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::PhotonNetworkController::DeferJoining(float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"DeferJoining", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, duration);
}
inline void GorillaNetworking::PhotonNetworkController::ClearDeferredJoin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"ClearDeferredJoin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::PhotonNetworkController::AttemptToJoinPublicRoom(::GorillaNetworking::GorillaNetworkJoinTrigger*  triggeredTrigger, ::GorillaNetworking::JoinType  roomJoinType, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW,::StringW>>*  additionalCustomProperties, bool  filterSubscribed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"AttemptToJoinPublicRoom", {}, {::i2c::type_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>(), ::i2c::type_of<::GorillaNetworking::JoinType>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW,::StringW>>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, triggeredTrigger, roomJoinType, additionalCustomProperties, filterSubscribed);
}
inline void GorillaNetworking::PhotonNetworkController::AttemptToJoinPublicRoomAsync(::GorillaNetworking::GorillaNetworkJoinTrigger*  triggeredTrigger, ::GorillaNetworking::JoinType  roomJoinType, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW,::StringW>>*  additionalCustomProperties, bool  filterSubscribed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"AttemptToJoinPublicRoomAsync", {}, {::i2c::type_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>(), ::i2c::type_of<::GorillaNetworking::JoinType>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW,::StringW>>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, triggeredTrigger, roomJoinType, additionalCustomProperties, filterSubscribed);
}
inline void GorillaNetworking::PhotonNetworkController::AttemptToJoinRankedPublicRoom(::GorillaNetworking::GorillaNetworkJoinTrigger*  triggeredTrigger, ::GorillaNetworking::JoinType  roomJoinType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"AttemptToJoinRankedPublicRoom", {}, {::i2c::type_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>(), ::i2c::type_of<::GorillaNetworking::JoinType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, triggeredTrigger, roomJoinType);
}
inline void GorillaNetworking::PhotonNetworkController::AttemptToJoinRankedPublicRoomAsync(::GorillaNetworking::GorillaNetworkJoinTrigger*  triggeredTrigger, ::StringW  mmrTier, ::StringW  platform, ::GorillaNetworking::JoinType  roomJoinType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"AttemptToJoinRankedPublicRoomAsync", {}, {::i2c::type_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GorillaNetworking::JoinType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, triggeredTrigger, mmrTier, platform, roomJoinType);
}
inline ::System::Threading::Tasks::Task* GorillaNetworking::PhotonNetworkController::SendPartyFollowCommands()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"SendPartyFollowCommands", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void GorillaNetworking::PhotonNetworkController::AttemptToAutoJoinRoomCallback(::GlobalNamespace::NetJoinResult  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"AttemptToAutoJoinRoomCallback", {}, {::i2c::type_of<::GlobalNamespace::NetJoinResult>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void GorillaNetworking::PhotonNetworkController::AttemptToAutoJoinSpecificRoom(::StringW  roomID, ::GorillaNetworking::JoinType  roomJoinType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"AttemptToAutoJoinSpecificRoom", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GorillaNetworking::JoinType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, roomID, roomJoinType);
}
inline void GorillaNetworking::PhotonNetworkController::AttemptToJoinSpecificRoom(::StringW  roomID, ::GorillaNetworking::JoinType  roomJoinType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"AttemptToJoinSpecificRoom", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GorillaNetworking::JoinType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, roomID, roomJoinType);
}
inline void GorillaNetworking::PhotonNetworkController::AttemptToJoinSpecificRoomWithCallback(::StringW  roomID, ::GorillaNetworking::JoinType  roomJoinType, ::System::Action_1<::GlobalNamespace::NetJoinResult>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"AttemptToJoinSpecificRoomWithCallback", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GorillaNetworking::JoinType>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::NetJoinResult>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, roomID, roomJoinType, callback);
}
inline ::System::Threading::Tasks::Task* GorillaNetworking::PhotonNetworkController::AttemptToJoinSpecificRoomAsync(::StringW  roomID, ::GorillaNetworking::JoinType  roomJoinType, ::System::Action_1<::GlobalNamespace::NetJoinResult>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"AttemptToJoinSpecificRoomAsync", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GorillaNetworking::JoinType>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::NetJoinResult>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, roomID, roomJoinType, callback);
}
inline void GorillaNetworking::PhotonNetworkController::DisconnectCleanup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"DisconnectCleanup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::PhotonNetworkController::OnJoinedRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"OnJoinedRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::PhotonNetworkController::RegisterJoinTrigger(::GorillaNetworking::GorillaNetworkJoinTrigger*  trigger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"RegisterJoinTrigger", {}, {::i2c::type_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trigger);
}
inline void GorillaNetworking::PhotonNetworkController::UpdateCurrentJoinTrigger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"UpdateCurrentJoinTrigger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::PhotonNetworkController::UpdateTriggerScreens()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"UpdateTriggerScreens", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::PhotonNetworkController::AttemptToFollowIntoPub(::StringW  userIDToFollow, int32_t  actorNumberToFollow, ::StringW  newKeyStr, ::StringW  shufflerStr, ::GorillaNetworking::JoinType  joinType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"AttemptToFollowIntoPub", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GorillaNetworking::JoinType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userIDToFollow, actorNumberToFollow, newKeyStr, shufflerStr, joinType);
}
inline void GorillaNetworking::PhotonNetworkController::OnDisconnected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"OnDisconnected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::PhotonNetworkController::OnApplicationQuit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"OnApplicationQuit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GorillaNetworking::PhotonNetworkController::ReturnRoomName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"ReturnRoomName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GorillaNetworking::PhotonNetworkController::RandomRoomName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"RandomRoomName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GorillaNetworking::PhotonNetworkController::GetRegionWithLowestPing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"GetRegionWithLowestPing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t GorillaNetworking::PhotonNetworkController::TotalUsers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"TotalUsers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW GorillaNetworking::PhotonNetworkController::CurrentState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"CurrentState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GorillaNetworking::PhotonNetworkController::OnApplicationPause(bool  pause)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"OnApplicationPause", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pause);
}
inline void GorillaNetworking::PhotonNetworkController::OnApplicationFocus(bool  focus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"OnApplicationFocus", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, focus);
}
inline ::GlobalNamespace::GTZone GorillaNetworking::PhotonNetworkController::ParseZoneFromGameMode(::StringW  gameMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {"ParseZoneFromGameMode", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GTZone>(this, ___internal_method, gameMode);
}
inline void GorillaNetworking::PhotonNetworkController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaNetworking::PhotonNetworkController* GorillaNetworking::PhotonNetworkController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::PhotonNetworkController*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::PhotonNetworkController::PhotonNetworkController()   {
}
//  Writing Method size for method: ::GorillaNetworking::PhotonNetworkController__DisableOnStart_d__64._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PhotonNetworkController__DisableOnStart_d__64::*)(int32_t)>(&::GorillaNetworking::PhotonNetworkController__DisableOnStart_d__64::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c90edc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController__DisableOnStart_d__64*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PhotonNetworkController__DisableOnStart_d__64.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PhotonNetworkController__DisableOnStart_d__64::*)()>(&::GorillaNetworking::PhotonNetworkController__DisableOnStart_d__64::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c95a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController__DisableOnStart_d__64*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PhotonNetworkController__DisableOnStart_d__64.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::PhotonNetworkController__DisableOnStart_d__64::*)()>(&::GorillaNetworking::PhotonNetworkController__DisableOnStart_d__64::MoveNext)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5c95a84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController__DisableOnStart_d__64*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PhotonNetworkController__DisableOnStart_d__64.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaNetworking::PhotonNetworkController__DisableOnStart_d__64::*)()>(&::GorillaNetworking::PhotonNetworkController__DisableOnStart_d__64::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c95abc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController__DisableOnStart_d__64*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PhotonNetworkController__DisableOnStart_d__64.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PhotonNetworkController__DisableOnStart_d__64::*)()>(&::GorillaNetworking::PhotonNetworkController__DisableOnStart_d__64::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5c95ac4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController__DisableOnStart_d__64*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PhotonNetworkController__DisableOnStart_d__64.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaNetworking::PhotonNetworkController__DisableOnStart_d__64::*)()>(&::GorillaNetworking::PhotonNetworkController__DisableOnStart_d__64::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c95afc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController__DisableOnStart_d__64*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaNetworking::PhotonNetworkController__DisableOnStart_d__64::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GorillaNetworking::PhotonNetworkController__DisableOnStart_d__64::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GorillaNetworking::PhotonNetworkController__DisableOnStart_d__64::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GorillaNetworking::PhotonNetworkController__DisableOnStart_d__64::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GorillaNetworking::PhotonNetworkController__DisableOnStart_d__64::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GorillaNetworking::PhotonNetworkController__DisableOnStart_d__64::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GorillaNetworking::PhotonNetworkController>& GorillaNetworking::PhotonNetworkController__DisableOnStart_d__64::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GorillaNetworking::PhotonNetworkController> const& GorillaNetworking::PhotonNetworkController__DisableOnStart_d__64::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GorillaNetworking::PhotonNetworkController__DisableOnStart_d__64::__cordl_internal_set___4__this(::UnityW<::GorillaNetworking::PhotonNetworkController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GorillaNetworking::PhotonNetworkController__DisableOnStart_d__64::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController__DisableOnStart_d__64*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GorillaNetworking::PhotonNetworkController__DisableOnStart_d__64::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController__DisableOnStart_d__64*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaNetworking::PhotonNetworkController__DisableOnStart_d__64::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController__DisableOnStart_d__64*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GorillaNetworking::PhotonNetworkController__DisableOnStart_d__64::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController__DisableOnStart_d__64*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GorillaNetworking::PhotonNetworkController__DisableOnStart_d__64::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController__DisableOnStart_d__64*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GorillaNetworking::PhotonNetworkController__DisableOnStart_d__64::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PhotonNetworkController__DisableOnStart_d__64*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GorillaNetworking::PhotonNetworkController__DisableOnStart_d__64* GorillaNetworking::PhotonNetworkController__DisableOnStart_d__64::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::PhotonNetworkController__DisableOnStart_d__64*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GorillaNetworking::PhotonNetworkController__DisableOnStart_d__64::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GorillaNetworking::PhotonNetworkController__DisableOnStart_d__64::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GorillaNetworking::PhotonNetworkController__DisableOnStart_d__64::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GorillaNetworking::PhotonNetworkController__DisableOnStart_d__64::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GorillaNetworking::PhotonNetworkController__DisableOnStart_d__64::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GorillaNetworking::PhotonNetworkController__DisableOnStart_d__64::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaNetworking::PhotonNetworkController__DisableOnStart_d__64::PhotonNetworkController__DisableOnStart_d__64()   {
}
