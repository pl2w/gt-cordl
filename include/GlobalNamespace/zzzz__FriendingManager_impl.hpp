#pragma once
// IWYU pragma private; include "GlobalNamespace/FriendingManager.hpp"
#include "GlobalNamespace/zzzz__GTZone_impl.hpp"
#include "Photon/Pun/zzzz__MonoBehaviourPun_impl.hpp"
#include "GlobalNamespace/zzzz__FriendingManager_def.hpp"
#include "GlobalNamespace/zzzz__FriendBackendController_def.hpp"
#include "GlobalNamespace/zzzz__FriendingManager_FriendStationData_def.hpp"
#include "GlobalNamespace/zzzz__FriendingManager_FriendStationState_def.hpp"
#include "GlobalNamespace/zzzz__FriendingStation_def.hpp"
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSliceableSimple_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "Photon/Pun/zzzz__IPunObservable_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FriendingManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendingManager::*)()>(&::GlobalNamespace::FriendingManager::Awake)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5aa6658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendingManager.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendingManager::*)()>(&::GlobalNamespace::FriendingManager::Start)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5aa675c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendingManager.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendingManager::*)()>(&::GlobalNamespace::FriendingManager::OnDestroy)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x5aa692c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendingManager.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendingManager::*)()>(&::GlobalNamespace::FriendingManager::OnEnable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5aa6b6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendingManager.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendingManager::*)()>(&::GlobalNamespace::FriendingManager::OnDisable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5aa6b78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendingManager.SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendingManager::*)()>(&::GlobalNamespace::FriendingManager::SliceUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5aa6b84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {"SliceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendingManager.AuthorityUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendingManager::*)()>(&::GlobalNamespace::FriendingManager::AuthorityUpdate)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x5aa6b88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {"AuthorityUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendingManager.OnPlayerLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendingManager::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::FriendingManager::OnPlayerLeftRoom)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5aa6ef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {"OnPlayerLeftRoom", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendingManager.ValidateState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendingManager::*)()>(&::GlobalNamespace::FriendingManager::ValidateState)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5aa6efc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {"ValidateState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendingManager.UpdateFriendingStations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendingManager::*)()>(&::GlobalNamespace::FriendingManager::UpdateFriendingStations)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5aa70a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {"UpdateFriendingStations", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendingManager.RegisterFriendingStation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendingManager::*)(::GlobalNamespace::FriendingStation*)>(&::GlobalNamespace::FriendingManager::RegisterFriendingStation)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5aa71ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {"RegisterFriendingStation", {}, {::i2c::type_of<::GlobalNamespace::FriendingStation*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendingManager.UnregisterFriendingStation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendingManager::*)(::GlobalNamespace::FriendingStation*)>(&::GlobalNamespace::FriendingManager::UnregisterFriendingStation)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5aa7244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {"UnregisterFriendingStation", {}, {::i2c::type_of<::GlobalNamespace::FriendingStation*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendingManager.DebugLogFriendingStations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendingManager::*)()>(&::GlobalNamespace::FriendingManager::DebugLogFriendingStations)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x5aa72a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {"DebugLogFriendingStations", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendingManager.PlayerEnteredStation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendingManager::*)(::GlobalNamespace::GTZone, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::FriendingManager::PlayerEnteredStation)> {
  constexpr static std::size_t size = 0x5d4;
  constexpr static std::size_t addrs = 0x5aa74e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {"PlayerEnteredStation", {}, {::i2c::type_of<::GlobalNamespace::GTZone>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendingManager.PlayerExitedStation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendingManager::*)(::GlobalNamespace::GTZone, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::FriendingManager::PlayerExitedStation)> {
  constexpr static std::size_t size = 0x570;
  constexpr static std::size_t addrs = 0x5aa7ab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {"PlayerExitedStation", {}, {::i2c::type_of<::GlobalNamespace::GTZone>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendingManager.PlayerPressedButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendingManager::*)(::GlobalNamespace::GTZone, int32_t)>(&::GlobalNamespace::FriendingManager::PlayerPressedButton)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x5aa8024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {"PlayerPressedButton", {}, {::i2c::type_of<::GlobalNamespace::GTZone>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendingManager.PlayerUnpressedButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendingManager::*)(::GlobalNamespace::GTZone, int32_t)>(&::GlobalNamespace::FriendingManager::PlayerUnpressedButton)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x5aa83a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {"PlayerUnpressedButton", {}, {::i2c::type_of<::GlobalNamespace::GTZone>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendingManager.CheckFriendStatusRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendingManager::*)(::GlobalNamespace::GTZone, int32_t, int32_t)>(&::GlobalNamespace::FriendingManager::CheckFriendStatusRequest)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5aa8724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {"CheckFriendStatusRequest", {}, {::i2c::type_of<::GlobalNamespace::GTZone>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendingManager.CheckFriendStatusOnFriendListRefresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendingManager::*)(::System::Collections::Generic::List_1<::GlobalNamespace::FriendBackendController_Friend*>*)>(&::GlobalNamespace::FriendingManager::CheckFriendStatusOnFriendListRefresh)> {
  constexpr static std::size_t size = 0x46c;
  constexpr static std::size_t addrs = 0x5aa882c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {"CheckFriendStatusOnFriendListRefresh", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::FriendBackendController_Friend*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendingManager.CheckFriendStatusResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendingManager::*)(::GlobalNamespace::GTZone, int32_t, int32_t, bool)>(&::GlobalNamespace::FriendingManager::CheckFriendStatusResponse)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x5aa8e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {"CheckFriendStatusResponse", {}, {::i2c::type_of<::GlobalNamespace::GTZone>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendingManager.SendFriendRequestIfApplicable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendingManager::*)(::GlobalNamespace::GTZone)>(&::GlobalNamespace::FriendingManager::SendFriendRequestIfApplicable)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x5aa91c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {"SendFriendRequestIfApplicable", {}, {::i2c::type_of<::GlobalNamespace::GTZone>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendingManager.FriendRequestCompletedAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendingManager::*)(::GlobalNamespace::GTZone, int32_t, bool)>(&::GlobalNamespace::FriendingManager::FriendRequestCompletedAuthority)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x5aa973c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {"FriendRequestCompletedAuthority", {}, {::i2c::type_of<::GlobalNamespace::GTZone>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendingManager.FriendRequestCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendingManager::*)(::GlobalNamespace::GTZone, int32_t, int32_t, bool)>(&::GlobalNamespace::FriendingManager::FriendRequestCallback)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5aa9ad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {"FriendRequestCallback", {}, {::i2c::type_of<::GlobalNamespace::GTZone>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendingManager.OnPhotonSerializeView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendingManager::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::FriendingManager::OnPhotonSerializeView)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x5aa9ca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {"OnPhotonSerializeView", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendingManager.CheckFriendStatusRequestRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendingManager::*)(::GlobalNamespace::GTZone, int32_t, int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::FriendingManager::CheckFriendStatusRequestRPC)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5aaa0ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {"CheckFriendStatusRequestRPC", {}, {::i2c::type_of<::GlobalNamespace::GTZone>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendingManager.CheckFriendStatusResponseRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendingManager::*)(::GlobalNamespace::GTZone, int32_t, bool, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::FriendingManager::CheckFriendStatusResponseRPC)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x5aaa280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {"CheckFriendStatusResponseRPC", {}, {::i2c::type_of<::GlobalNamespace::GTZone>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendingManager.FriendButtonPressedRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendingManager::*)(::GlobalNamespace::GTZone, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::FriendingManager::FriendButtonPressedRPC)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x5aaa478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {"FriendButtonPressedRPC", {}, {::i2c::type_of<::GlobalNamespace::GTZone>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendingManager.FriendButtonUnpressedRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendingManager::*)(::GlobalNamespace::GTZone, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::FriendingManager::FriendButtonUnpressedRPC)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x5aaa660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {"FriendButtonUnpressedRPC", {}, {::i2c::type_of<::GlobalNamespace::GTZone>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendingManager.StationNoLongerActiveRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendingManager::*)(::GlobalNamespace::GTZone, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::FriendingManager::StationNoLongerActiveRPC)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x5aaa848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {"StationNoLongerActiveRPC", {}, {::i2c::type_of<::GlobalNamespace::GTZone>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendingManager.NotifyClientsFriendRequestReadyRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendingManager::*)(::GlobalNamespace::GTZone, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::FriendingManager::NotifyClientsFriendRequestReadyRPC)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x5aaaa80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {"NotifyClientsFriendRequestReadyRPC", {}, {::i2c::type_of<::GlobalNamespace::GTZone>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendingManager.FriendRequestCompletedRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendingManager::*)(::GlobalNamespace::GTZone, bool, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::FriendingManager::FriendRequestCompletedRPC)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x5aaac5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {"FriendRequestCompletedRPC", {}, {::i2c::type_of<::GlobalNamespace::GTZone>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendingManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendingManager::*)()>(&::GlobalNamespace::FriendingManager::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5aaae54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendingManager._OnPhotonSerializeView_g__SendFriendStationData_31_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Photon::Pun::PhotonStream*, ::GlobalNamespace::FriendingManager_FriendStationData)>(&::GlobalNamespace::FriendingManager::_OnPhotonSerializeView_g__SendFriendStationData_31_0)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5aa9ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {"<OnPhotonSerializeView>g__SendFriendStationData|31_0", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::GlobalNamespace::FriendingManager_FriendStationData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendingManager._OnPhotonSerializeView_g__ReceiveFriendStationData_31_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::FriendingManager_FriendStationData (*)(::Photon::Pun::PhotonStream*)>(&::GlobalNamespace::FriendingManager::_OnPhotonSerializeView_g__ReceiveFriendStationData_31_1)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5aa9fa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {"<OnPhotonSerializeView>g__ReceiveFriendStationData|31_1", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::FriendingManager::__cordl_internal_get_progressBarDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressBarDuration;
}
constexpr float_t const& GlobalNamespace::FriendingManager::__cordl_internal_get_progressBarDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressBarDuration;
}
constexpr void GlobalNamespace::FriendingManager::__cordl_internal_set_progressBarDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___progressBarDuration = value;
}
constexpr float_t& GlobalNamespace::FriendingManager::__cordl_internal_get_requiredProximityToStation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requiredProximityToStation;
}
constexpr float_t const& GlobalNamespace::FriendingManager::__cordl_internal_get_requiredProximityToStation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requiredProximityToStation;
}
constexpr void GlobalNamespace::FriendingManager::__cordl_internal_set_requiredProximityToStation(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___requiredProximityToStation = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FriendingManager_FriendStationData>*& GlobalNamespace::FriendingManager::__cordl_internal_get_activeFriendStationData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeFriendStationData;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FriendingManager_FriendStationData>* const& GlobalNamespace::FriendingManager::__cordl_internal_get_activeFriendStationData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeFriendStationData;
}
constexpr void GlobalNamespace::FriendingManager::__cordl_internal_set_activeFriendStationData(::System::Collections::Generic::List_1<::GlobalNamespace::FriendingManager_FriendStationData>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeFriendStationData = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTZone,::UnityW<::GlobalNamespace::FriendingStation>>*& GlobalNamespace::FriendingManager::__cordl_internal_get_friendingStations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___friendingStations;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTZone,::UnityW<::GlobalNamespace::FriendingStation>>* const& GlobalNamespace::FriendingManager::__cordl_internal_get_friendingStations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___friendingStations;
}
constexpr void GlobalNamespace::FriendingManager::__cordl_internal_set_friendingStations(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTZone,::UnityW<::GlobalNamespace::FriendingStation>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___friendingStations = value;
}
constexpr ::GlobalNamespace::GTZone& GlobalNamespace::FriendingManager::__cordl_internal_get_localPlayerZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localPlayerZone;
}
constexpr ::GlobalNamespace::GTZone const& GlobalNamespace::FriendingManager::__cordl_internal_get_localPlayerZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localPlayerZone;
}
constexpr void GlobalNamespace::FriendingManager::__cordl_internal_set_localPlayerZone(::GlobalNamespace::GTZone  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localPlayerZone = value;
}
inline void GlobalNamespace::FriendingManager::setStaticF_Instance(::UnityW<::GlobalNamespace::FriendingManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::FriendingManager>, "Instance", ::GlobalNamespace::FriendingManager*>(std::forward<::UnityW<::GlobalNamespace::FriendingManager>>(value));
}
inline ::UnityW<::GlobalNamespace::FriendingManager> GlobalNamespace::FriendingManager::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::FriendingManager>, "Instance", ::GlobalNamespace::FriendingManager*>();
}
inline void GlobalNamespace::FriendingManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FriendingManager::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FriendingManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FriendingManager::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FriendingManager::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FriendingManager::SliceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {"SliceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FriendingManager::AuthorityUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {"AuthorityUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FriendingManager::OnPlayerLeftRoom(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {"OnPlayerLeftRoom", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::FriendingManager::ValidateState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {"ValidateState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FriendingManager::UpdateFriendingStations()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {"UpdateFriendingStations", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FriendingManager::RegisterFriendingStation(::GlobalNamespace::FriendingStation*  friendingStation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {"RegisterFriendingStation", {}, {::i2c::type_of<::GlobalNamespace::FriendingStation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, friendingStation);
}
inline void GlobalNamespace::FriendingManager::UnregisterFriendingStation(::GlobalNamespace::FriendingStation*  friendingStation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {"UnregisterFriendingStation", {}, {::i2c::type_of<::GlobalNamespace::FriendingStation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, friendingStation);
}
inline void GlobalNamespace::FriendingManager::DebugLogFriendingStations()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {"DebugLogFriendingStations", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FriendingManager::PlayerEnteredStation(::GlobalNamespace::GTZone  zone, ::GlobalNamespace::NetPlayer*  netPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {"PlayerEnteredStation", {}, {::i2c::type_of<::GlobalNamespace::GTZone>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, zone, netPlayer);
}
inline void GlobalNamespace::FriendingManager::PlayerExitedStation(::GlobalNamespace::GTZone  zone, ::GlobalNamespace::NetPlayer*  netPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {"PlayerExitedStation", {}, {::i2c::type_of<::GlobalNamespace::GTZone>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, zone, netPlayer);
}
inline void GlobalNamespace::FriendingManager::PlayerPressedButton(::GlobalNamespace::GTZone  zone, int32_t  playerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {"PlayerPressedButton", {}, {::i2c::type_of<::GlobalNamespace::GTZone>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, zone, playerId);
}
inline void GlobalNamespace::FriendingManager::PlayerUnpressedButton(::GlobalNamespace::GTZone  zone, int32_t  playerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {"PlayerUnpressedButton", {}, {::i2c::type_of<::GlobalNamespace::GTZone>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, zone, playerId);
}
inline void GlobalNamespace::FriendingManager::CheckFriendStatusRequest(::GlobalNamespace::GTZone  zone, int32_t  actorNumberA, int32_t  actorNumberB)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {"CheckFriendStatusRequest", {}, {::i2c::type_of<::GlobalNamespace::GTZone>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, zone, actorNumberA, actorNumberB);
}
inline void GlobalNamespace::FriendingManager::CheckFriendStatusOnFriendListRefresh(::System::Collections::Generic::List_1<::GlobalNamespace::FriendBackendController_Friend*>*  friendList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {"CheckFriendStatusOnFriendListRefresh", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::FriendBackendController_Friend*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, friendList);
}
inline void GlobalNamespace::FriendingManager::CheckFriendStatusResponse(::GlobalNamespace::GTZone  zone, int32_t  responderActorNumber, int32_t  friendTargetActorNumber, bool  friends)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {"CheckFriendStatusResponse", {}, {::i2c::type_of<::GlobalNamespace::GTZone>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, zone, responderActorNumber, friendTargetActorNumber, friends);
}
inline void GlobalNamespace::FriendingManager::SendFriendRequestIfApplicable(::GlobalNamespace::GTZone  zone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {"SendFriendRequestIfApplicable", {}, {::i2c::type_of<::GlobalNamespace::GTZone>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, zone);
}
inline void GlobalNamespace::FriendingManager::FriendRequestCompletedAuthority(::GlobalNamespace::GTZone  zone, int32_t  playerId, bool  succeeded)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {"FriendRequestCompletedAuthority", {}, {::i2c::type_of<::GlobalNamespace::GTZone>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, zone, playerId, succeeded);
}
inline void GlobalNamespace::FriendingManager::FriendRequestCallback(::GlobalNamespace::GTZone  zone, int32_t  localId, int32_t  friendId, bool  success)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {"FriendRequestCallback", {}, {::i2c::type_of<::GlobalNamespace::GTZone>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, zone, localId, friendId, success);
}
inline void GlobalNamespace::FriendingManager::OnPhotonSerializeView(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {"OnPhotonSerializeView", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::FriendingManager::CheckFriendStatusRequestRPC(::GlobalNamespace::GTZone  zone, int32_t  actorNumberA, int32_t  actorNumberB, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {"CheckFriendStatusRequestRPC", {}, {::i2c::type_of<::GlobalNamespace::GTZone>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, zone, actorNumberA, actorNumberB, info);
}
inline void GlobalNamespace::FriendingManager::CheckFriendStatusResponseRPC(::GlobalNamespace::GTZone  zone, int32_t  friendTargetActorNumber, bool  friends, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {"CheckFriendStatusResponseRPC", {}, {::i2c::type_of<::GlobalNamespace::GTZone>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, zone, friendTargetActorNumber, friends, info);
}
inline void GlobalNamespace::FriendingManager::FriendButtonPressedRPC(::GlobalNamespace::GTZone  zone, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {"FriendButtonPressedRPC", {}, {::i2c::type_of<::GlobalNamespace::GTZone>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, zone, info);
}
inline void GlobalNamespace::FriendingManager::FriendButtonUnpressedRPC(::GlobalNamespace::GTZone  zone, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {"FriendButtonUnpressedRPC", {}, {::i2c::type_of<::GlobalNamespace::GTZone>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, zone, info);
}
inline void GlobalNamespace::FriendingManager::StationNoLongerActiveRPC(::GlobalNamespace::GTZone  zone, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {"StationNoLongerActiveRPC", {}, {::i2c::type_of<::GlobalNamespace::GTZone>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, zone, info);
}
inline void GlobalNamespace::FriendingManager::NotifyClientsFriendRequestReadyRPC(::GlobalNamespace::GTZone  zone, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {"NotifyClientsFriendRequestReadyRPC", {}, {::i2c::type_of<::GlobalNamespace::GTZone>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, zone, info);
}
inline void GlobalNamespace::FriendingManager::FriendRequestCompletedRPC(::GlobalNamespace::GTZone  zone, bool  succeeded, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {"FriendRequestCompletedRPC", {}, {::i2c::type_of<::GlobalNamespace::GTZone>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, zone, succeeded, info);
}
inline void GlobalNamespace::FriendingManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FriendingManager::_OnPhotonSerializeView_g__SendFriendStationData_31_0(::Photon::Pun::PhotonStream*  stream, ::GlobalNamespace::FriendingManager_FriendStationData  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {"<OnPhotonSerializeView>g__SendFriendStationData|31_0", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::GlobalNamespace::FriendingManager_FriendStationData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, stream, data);
}
inline ::GlobalNamespace::FriendingManager_FriendStationData GlobalNamespace::FriendingManager::_OnPhotonSerializeView_g__ReceiveFriendStationData_31_1(::Photon::Pun::PhotonStream*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendingManager*>(),
                        {"<OnPhotonSerializeView>g__ReceiveFriendStationData|31_1", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::FriendingManager_FriendStationData>(nullptr, ___internal_method, stream);
}
inline ::GlobalNamespace::FriendingManager* GlobalNamespace::FriendingManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FriendingManager*>());
}
/// @brief Convert operator to "::Photon::Pun::IPunObservable"
constexpr  GlobalNamespace::FriendingManager::operator ::Photon::Pun::IPunObservable*() noexcept {
return static_cast<::Photon::Pun::IPunObservable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Pun::IPunObservable"
constexpr ::Photon::Pun::IPunObservable* GlobalNamespace::FriendingManager::i___Photon__Pun__IPunObservable() noexcept {
return static_cast<::Photon::Pun::IPunObservable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr  GlobalNamespace::FriendingManager::operator ::GlobalNamespace::IGorillaSliceableSimple*() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* GlobalNamespace::FriendingManager::i___GlobalNamespace__IGorillaSliceableSimple() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FriendingManager::FriendingManager()   {
}
