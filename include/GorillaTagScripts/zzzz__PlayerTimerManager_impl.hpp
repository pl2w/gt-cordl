#pragma once
// IWYU pragma private; include "GorillaTagScripts/PlayerTimerManager.hpp"
#include "GlobalNamespace/zzzz__CallLimiter_impl.hpp"
#include "Photon/Pun/zzzz__MonoBehaviourPunCallbacks_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaTagScripts/zzzz__PlayerTimerManager_def.hpp"
#include "GlobalNamespace/zzzz__CallLimiter_def.hpp"
#include "GorillaTagScripts/zzzz__PlayerTimerBoard_def.hpp"
#include "GorillaTagScripts/zzzz__PlayerTimerManager_PlayerTimerData_def.hpp"
#include "GorillaTagScripts/zzzz__PlayerTimerManager_RPC_def.hpp"
#include "GorillaTagScripts/zzzz__PlayerTimerManager_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonView_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_2_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::PlayerTimerManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::PlayerTimerManager::*)()>(&::GorillaTagScripts::PlayerTimerManager::Awake)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x5bd13c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::PlayerTimerManager.CreateLimiterFromPool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CallLimiter* (::GorillaTagScripts::PlayerTimerManager::*)()>(&::GorillaTagScripts::PlayerTimerManager::CreateLimiterFromPool)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5bd1764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerManager*>(),
                        {"CreateLimiterFromPool", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::PlayerTimerManager.ReturnCallLimiterToPool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::PlayerTimerManager::*)(::GlobalNamespace::CallLimiter*)>(&::GorillaTagScripts::PlayerTimerManager::ReturnCallLimiterToPool)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5bd1840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerManager*>(),
                        {"ReturnCallLimiterToPool", {}, {::i2c::type_of<::GlobalNamespace::CallLimiter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::PlayerTimerManager.RegisterTimerBoard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::PlayerTimerManager::*)(::GorillaTagScripts::PlayerTimerBoard*)>(&::GorillaTagScripts::PlayerTimerManager::RegisterTimerBoard)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5bcfbf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerManager*>(),
                        {"RegisterTimerBoard", {}, {::i2c::type_of<::GorillaTagScripts::PlayerTimerBoard*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::PlayerTimerManager.UnregisterTimerBoard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::PlayerTimerManager::*)(::GorillaTagScripts::PlayerTimerBoard*)>(&::GorillaTagScripts::PlayerTimerManager::UnregisterTimerBoard)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5bcfe6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerManager*>(),
                        {"UnregisterTimerBoard", {}, {::i2c::type_of<::GorillaTagScripts::PlayerTimerBoard*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::PlayerTimerManager.IsLocalTimerStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::PlayerTimerManager::*)()>(&::GorillaTagScripts::PlayerTimerManager::IsLocalTimerStarted)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5bc9a4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerManager*>(),
                        {"IsLocalTimerStarted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::PlayerTimerManager.GetTimeForPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GorillaTagScripts::PlayerTimerManager::*)(int32_t)>(&::GorillaTagScripts::PlayerTimerManager::GetTimeForPlayer)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5bcaa48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerManager*>(),
                        {"GetTimeForPlayer", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::PlayerTimerManager.GetLastDurationForPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GorillaTagScripts::PlayerTimerManager::*)(int32_t)>(&::GorillaTagScripts::PlayerTimerManager::GetLastDurationForPlayer)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5bd11f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerManager*>(),
                        {"GetLastDurationForPlayer", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::PlayerTimerManager.InitTimersMasterRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::PlayerTimerManager::*)(int32_t, ::ArrayW<uint8_t>, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaTagScripts::PlayerTimerManager::InitTimersMasterRPC)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5bd1c64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerManager*>(),
                        {"InitTimersMasterRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::PlayerTimerManager.SerializeTimerState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaTagScripts::PlayerTimerManager::*)()>(&::GorillaTagScripts::PlayerTimerManager::SerializeTimerState)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x5bd2444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerManager*>(),
                        {"SerializeTimerState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::PlayerTimerManager.DeserializeTimerState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::PlayerTimerManager::*)(int32_t, ::ArrayW<uint8_t>)>(&::GorillaTagScripts::PlayerTimerManager::DeserializeTimerState)> {
  constexpr static std::size_t size = 0x52c;
  constexpr static std::size_t addrs = 0x5bd1dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerManager*>(),
                        {"DeserializeTimerState", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::PlayerTimerManager.ClearOldPlayerData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::PlayerTimerManager::*)()>(&::GorillaTagScripts::PlayerTimerManager::ClearOldPlayerData)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0x5bd2700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerManager*>(),
                        {"ClearOldPlayerData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::PlayerTimerManager.RequestTimerToggle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::PlayerTimerManager::*)(bool)>(&::GorillaTagScripts::PlayerTimerManager::RequestTimerToggle)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5bca030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerManager*>(),
                        {"RequestTimerToggle", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::PlayerTimerManager.RequestTimerToggleRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::PlayerTimerManager::*)(bool, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaTagScripts::PlayerTimerManager::RequestTimerToggleRPC)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x5bd2b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerManager*>(),
                        {"RequestTimerToggleRPC", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::PlayerTimerManager.TimerToggledMasterRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::PlayerTimerManager::*)(bool, int32_t, ::Photon::Realtime::Player*, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaTagScripts::PlayerTimerManager::TimerToggledMasterRPC)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x5bd2f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerManager*>(),
                        {"TimerToggledMasterRPC", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::PlayerTimerManager.OnToggleTimerForPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::PlayerTimerManager::*)(bool, ::Photon::Realtime::Player*, int32_t)>(&::GorillaTagScripts::PlayerTimerManager::OnToggleTimerForPlayer)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5bd3154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerManager*>(),
                        {"OnToggleTimerForPlayer", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::PlayerTimerManager.ValidateCallLimits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::PlayerTimerManager::*)(::GlobalNamespace::PlayerTimerManager_RPC, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaTagScripts::PlayerTimerManager::ValidateCallLimits)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5bd1d64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerManager*>(),
                        {"ValidateCallLimits", {}, {::i2c::type_of<::GlobalNamespace::PlayerTimerManager_RPC>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::PlayerTimerManager.OnMasterClientSwitched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::PlayerTimerManager::*)(::Photon::Realtime::Player*)>(&::GorillaTagScripts::PlayerTimerManager::OnMasterClientSwitched)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5bd331c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::PlayerTimerManager*>(),
                    {::i2c::class_of<::GorillaTagScripts::PlayerTimerManager*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::PlayerTimerManager.OnPlayerEnteredRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::PlayerTimerManager::*)(::Photon::Realtime::Player*)>(&::GorillaTagScripts::PlayerTimerManager::OnPlayerEnteredRoom)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5bd34a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::PlayerTimerManager*>(),
                    {::i2c::class_of<::GorillaTagScripts::PlayerTimerManager*>(), 43}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::PlayerTimerManager.OnPlayerLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::PlayerTimerManager::*)(::Photon::Realtime::Player*)>(&::GorillaTagScripts::PlayerTimerManager::OnPlayerLeftRoom)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5bd3638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::PlayerTimerManager*>(),
                    {::i2c::class_of<::GorillaTagScripts::PlayerTimerManager*>(), 44}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::PlayerTimerManager.OnJoinedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::PlayerTimerManager::*)()>(&::GorillaTagScripts::PlayerTimerManager::OnJoinedRoom)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x5bd3720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::PlayerTimerManager*>(),
                    {::i2c::class_of<::GorillaTagScripts::PlayerTimerManager*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::PlayerTimerManager.OnLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::PlayerTimerManager::*)()>(&::GorillaTagScripts::PlayerTimerManager::OnLeftRoom)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5bd3914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::PlayerTimerManager*>(),
                    {::i2c::class_of<::GorillaTagScripts::PlayerTimerManager*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::PlayerTimerManager.UpdateAllTimerBoards
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::PlayerTimerManager::*)()>(&::GorillaTagScripts::PlayerTimerManager::UpdateAllTimerBoards)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5bd22ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerManager*>(),
                        {"UpdateAllTimerBoards", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::PlayerTimerManager.UpdateTimerBoard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::PlayerTimerManager::*)(::GorillaTagScripts::PlayerTimerBoard*)>(&::GorillaTagScripts::PlayerTimerManager::UpdateTimerBoard)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x5bd190c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerManager*>(),
                        {"UpdateTimerBoard", {}, {::i2c::type_of<::GorillaTagScripts::PlayerTimerBoard*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::PlayerTimerManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::PlayerTimerManager::*)()>(&::GorillaTagScripts::PlayerTimerManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bd3acc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Photon::Pun::PhotonView>& GorillaTagScripts::PlayerTimerManager::__cordl_internal_get_timerPV()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timerPV;
}
constexpr ::UnityW<::Photon::Pun::PhotonView> const& GorillaTagScripts::PlayerTimerManager::__cordl_internal_get_timerPV() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timerPV;
}
constexpr void GorillaTagScripts::PlayerTimerManager::__cordl_internal_set_timerPV(::UnityW<::Photon::Pun::PhotonView>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timerPV = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTagScripts::PlayerTimerManager::__cordl_internal_get_OnLocalTimerStarted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnLocalTimerStarted;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTagScripts::PlayerTimerManager::__cordl_internal_get_OnLocalTimerStarted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnLocalTimerStarted;
}
constexpr void GorillaTagScripts::PlayerTimerManager::__cordl_internal_set_OnLocalTimerStarted(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnLocalTimerStarted = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>*& GorillaTagScripts::PlayerTimerManager::__cordl_internal_get_OnTimerStartedForPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnTimerStartedForPlayer;
}
constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>* const& GorillaTagScripts::PlayerTimerManager::__cordl_internal_get_OnTimerStartedForPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnTimerStartedForPlayer;
}
constexpr void GorillaTagScripts::PlayerTimerManager::__cordl_internal_set_OnTimerStartedForPlayer(::UnityEngine::Events::UnityEvent_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnTimerStartedForPlayer = value;
}
constexpr ::UnityEngine::Events::UnityEvent_2<int32_t,int32_t>*& GorillaTagScripts::PlayerTimerManager::__cordl_internal_get_OnTimerStopped()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnTimerStopped;
}
constexpr ::UnityEngine::Events::UnityEvent_2<int32_t,int32_t>* const& GorillaTagScripts::PlayerTimerManager::__cordl_internal_get_OnTimerStopped() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnTimerStopped;
}
constexpr void GorillaTagScripts::PlayerTimerManager::__cordl_internal_set_OnTimerStopped(::UnityEngine::Events::UnityEvent_2<int32_t,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnTimerStopped = value;
}
constexpr float_t& GorillaTagScripts::PlayerTimerManager::__cordl_internal_get_requestSendTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestSendTime;
}
constexpr float_t const& GorillaTagScripts::PlayerTimerManager::__cordl_internal_get_requestSendTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestSendTime;
}
constexpr void GorillaTagScripts::PlayerTimerManager::__cordl_internal_set_requestSendTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___requestSendTime = value;
}
constexpr bool& GorillaTagScripts::PlayerTimerManager::__cordl_internal_get_localPlayerRequestedStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localPlayerRequestedStart;
}
constexpr bool const& GorillaTagScripts::PlayerTimerManager::__cordl_internal_get_localPlayerRequestedStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localPlayerRequestedStart;
}
constexpr void GorillaTagScripts::PlayerTimerManager::__cordl_internal_set_localPlayerRequestedStart(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localPlayerRequestedStart = value;
}
constexpr ::ArrayW<::GlobalNamespace::CallLimiter*>& GorillaTagScripts::PlayerTimerManager::__cordl_internal_get_callLimiters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callLimiters;
}
constexpr ::ArrayW<::GlobalNamespace::CallLimiter*> const& GorillaTagScripts::PlayerTimerManager::__cordl_internal_get_callLimiters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callLimiters;
}
constexpr void GorillaTagScripts::PlayerTimerManager::__cordl_internal_set_callLimiters(::ArrayW<::GlobalNamespace::CallLimiter*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callLimiters = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::CallLimiter*>*& GorillaTagScripts::PlayerTimerManager::__cordl_internal_get_timerToggleLimiters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timerToggleLimiters;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::CallLimiter*>* const& GorillaTagScripts::PlayerTimerManager::__cordl_internal_get_timerToggleLimiters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timerToggleLimiters;
}
constexpr void GorillaTagScripts::PlayerTimerManager::__cordl_internal_set_timerToggleLimiters(::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::CallLimiter*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timerToggleLimiters = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CallLimiter*>*& GorillaTagScripts::PlayerTimerManager::__cordl_internal_get_limiterPool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___limiterPool;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CallLimiter*>* const& GorillaTagScripts::PlayerTimerManager::__cordl_internal_get_limiterPool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___limiterPool;
}
constexpr void GorillaTagScripts::PlayerTimerManager::__cordl_internal_set_limiterPool(::System::Collections::Generic::List_1<::GlobalNamespace::CallLimiter*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___limiterPool = value;
}
constexpr bool& GorillaTagScripts::PlayerTimerManager::__cordl_internal_get_areTimersInitialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___areTimersInitialized;
}
constexpr bool const& GorillaTagScripts::PlayerTimerManager::__cordl_internal_get_areTimersInitialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___areTimersInitialized;
}
constexpr void GorillaTagScripts::PlayerTimerManager::__cordl_internal_set_areTimersInitialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___areTimersInitialized = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::PlayerTimerManager_PlayerTimerData>*& GorillaTagScripts::PlayerTimerManager::__cordl_internal_get_playerTimerData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerTimerData;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::PlayerTimerManager_PlayerTimerData>* const& GorillaTagScripts::PlayerTimerManager::__cordl_internal_get_playerTimerData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerTimerData;
}
constexpr void GorillaTagScripts::PlayerTimerManager::__cordl_internal_set_playerTimerData(::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::PlayerTimerManager_PlayerTimerData>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerTimerData = value;
}
constexpr ::ArrayW<uint8_t>& GorillaTagScripts::PlayerTimerManager::__cordl_internal_get_serializedTimerData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serializedTimerData;
}
constexpr ::ArrayW<uint8_t> const& GorillaTagScripts::PlayerTimerManager::__cordl_internal_get_serializedTimerData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serializedTimerData;
}
constexpr void GorillaTagScripts::PlayerTimerManager::__cordl_internal_set_serializedTimerData(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serializedTimerData = value;
}
constexpr bool& GorillaTagScripts::PlayerTimerManager::__cordl_internal_get_joinedRoom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joinedRoom;
}
constexpr bool const& GorillaTagScripts::PlayerTimerManager::__cordl_internal_get_joinedRoom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joinedRoom;
}
constexpr void GorillaTagScripts::PlayerTimerManager::__cordl_internal_set_joinedRoom(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___joinedRoom = value;
}
inline void GorillaTagScripts::PlayerTimerManager::setStaticF_instance(::UnityW<::GorillaTagScripts::PlayerTimerManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GorillaTagScripts::PlayerTimerManager>, "instance", ::GorillaTagScripts::PlayerTimerManager*>(std::forward<::UnityW<::GorillaTagScripts::PlayerTimerManager>>(value));
}
inline ::UnityW<::GorillaTagScripts::PlayerTimerManager> GorillaTagScripts::PlayerTimerManager::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GorillaTagScripts::PlayerTimerManager>, "instance", ::GorillaTagScripts::PlayerTimerManager*>();
}
inline void GorillaTagScripts::PlayerTimerManager::setStaticF_timerBoards(::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::PlayerTimerBoard>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::PlayerTimerBoard>>*, "timerBoards", ::GorillaTagScripts::PlayerTimerManager*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::PlayerTimerBoard>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::PlayerTimerBoard>>* GorillaTagScripts::PlayerTimerManager::getStaticF_timerBoards()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::PlayerTimerBoard>>*, "timerBoards", ::GorillaTagScripts::PlayerTimerManager*>();
}
inline void GorillaTagScripts::PlayerTimerManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CallLimiter* GorillaTagScripts::PlayerTimerManager::CreateLimiterFromPool()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerManager*>(),
                        {"CreateLimiterFromPool", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CallLimiter*>(this, ___internal_method);
}
inline void GorillaTagScripts::PlayerTimerManager::ReturnCallLimiterToPool(::GlobalNamespace::CallLimiter*  limiter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerManager*>(),
                        {"ReturnCallLimiterToPool", {}, {::i2c::type_of<::GlobalNamespace::CallLimiter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, limiter);
}
inline void GorillaTagScripts::PlayerTimerManager::RegisterTimerBoard(::GorillaTagScripts::PlayerTimerBoard*  board)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerManager*>(),
                        {"RegisterTimerBoard", {}, {::i2c::type_of<::GorillaTagScripts::PlayerTimerBoard*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, board);
}
inline void GorillaTagScripts::PlayerTimerManager::UnregisterTimerBoard(::GorillaTagScripts::PlayerTimerBoard*  board)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerManager*>(),
                        {"UnregisterTimerBoard", {}, {::i2c::type_of<::GorillaTagScripts::PlayerTimerBoard*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, board);
}
inline bool GorillaTagScripts::PlayerTimerManager::IsLocalTimerStarted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerManager*>(),
                        {"IsLocalTimerStarted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t GorillaTagScripts::PlayerTimerManager::GetTimeForPlayer(int32_t  actorNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerManager*>(),
                        {"GetTimeForPlayer", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, actorNumber);
}
inline float_t GorillaTagScripts::PlayerTimerManager::GetLastDurationForPlayer(int32_t  actorNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerManager*>(),
                        {"GetLastDurationForPlayer", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, actorNumber);
}
inline void GorillaTagScripts::PlayerTimerManager::InitTimersMasterRPC(int32_t  numBytes, ::ArrayW<uint8_t>  bytes, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerManager*>(),
                        {"InitTimersMasterRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, numBytes, bytes, info);
}
inline int32_t GorillaTagScripts::PlayerTimerManager::SerializeTimerState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerManager*>(),
                        {"SerializeTimerState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GorillaTagScripts::PlayerTimerManager::DeserializeTimerState(int32_t  numBytes, ::ArrayW<uint8_t>  bytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerManager*>(),
                        {"DeserializeTimerState", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, numBytes, bytes);
}
inline void GorillaTagScripts::PlayerTimerManager::ClearOldPlayerData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerManager*>(),
                        {"ClearOldPlayerData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::PlayerTimerManager::RequestTimerToggle(bool  startTimer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerManager*>(),
                        {"RequestTimerToggle", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, startTimer);
}
inline void GorillaTagScripts::PlayerTimerManager::RequestTimerToggleRPC(bool  startTimer, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerManager*>(),
                        {"RequestTimerToggleRPC", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, startTimer, info);
}
inline void GorillaTagScripts::PlayerTimerManager::TimerToggledMasterRPC(bool  startTimer, int32_t  toggleTimeStamp, ::Photon::Realtime::Player*  player, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerManager*>(),
                        {"TimerToggledMasterRPC", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, startTimer, toggleTimeStamp, player, info);
}
inline void GorillaTagScripts::PlayerTimerManager::OnToggleTimerForPlayer(bool  startTimer, ::Photon::Realtime::Player*  player, int32_t  toggleTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerManager*>(),
                        {"OnToggleTimerForPlayer", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, startTimer, player, toggleTime);
}
inline bool GorillaTagScripts::PlayerTimerManager::ValidateCallLimits(::GlobalNamespace::PlayerTimerManager_RPC  rpcCall, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerManager*>(),
                        {"ValidateCallLimits", {}, {::i2c::type_of<::GlobalNamespace::PlayerTimerManager_RPC>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, rpcCall, info);
}
inline void GorillaTagScripts::PlayerTimerManager::OnMasterClientSwitched(::Photon::Realtime::Player*  newMasterClient)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::PlayerTimerManager*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newMasterClient);
}
inline void GorillaTagScripts::PlayerTimerManager::OnPlayerEnteredRoom(::Photon::Realtime::Player*  newPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::PlayerTimerManager*>(), 43}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newPlayer);
}
inline void GorillaTagScripts::PlayerTimerManager::OnPlayerLeftRoom(::Photon::Realtime::Player*  otherPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::PlayerTimerManager*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, otherPlayer);
}
inline void GorillaTagScripts::PlayerTimerManager::OnJoinedRoom()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::PlayerTimerManager*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::PlayerTimerManager::OnLeftRoom()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::PlayerTimerManager*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::PlayerTimerManager::UpdateAllTimerBoards()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerManager*>(),
                        {"UpdateAllTimerBoards", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::PlayerTimerManager::UpdateTimerBoard(::GorillaTagScripts::PlayerTimerBoard*  board)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerManager*>(),
                        {"UpdateTimerBoard", {}, {::i2c::type_of<::GorillaTagScripts::PlayerTimerBoard*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, board);
}
inline void GorillaTagScripts::PlayerTimerManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::PlayerTimerManager* GorillaTagScripts::PlayerTimerManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::PlayerTimerManager*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::PlayerTimerManager::PlayerTimerManager()   {
}
//  Writing Method size for method: ::GorillaTagScripts::PlayerTimerManager___c__DisplayClass30_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::PlayerTimerManager___c__DisplayClass30_0::*)()>(&::GorillaTagScripts::PlayerTimerManager___c__DisplayClass30_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bd2b78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerManager___c__DisplayClass30_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::PlayerTimerManager___c__DisplayClass30_0._ClearOldPlayerData_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::PlayerTimerManager___c__DisplayClass30_0::*)(::Photon::Realtime::Player*)>(&::GorillaTagScripts::PlayerTimerManager___c__DisplayClass30_0::_ClearOldPlayerData_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5bd3b88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerManager___c__DisplayClass30_0*>(),
                        {"<ClearOldPlayerData>b__0", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaTagScripts::PlayerTimerManager___c__DisplayClass30_0::__cordl_internal_get_actorNum()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actorNum;
}
constexpr int32_t const& GorillaTagScripts::PlayerTimerManager___c__DisplayClass30_0::__cordl_internal_get_actorNum() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actorNum;
}
constexpr void GorillaTagScripts::PlayerTimerManager___c__DisplayClass30_0::__cordl_internal_set_actorNum(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___actorNum = value;
}
inline void GorillaTagScripts::PlayerTimerManager___c__DisplayClass30_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerManager___c__DisplayClass30_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTagScripts::PlayerTimerManager___c__DisplayClass30_0::_ClearOldPlayerData_b__0(::Photon::Realtime::Player*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerManager___c__DisplayClass30_0*>(),
                        {"<ClearOldPlayerData>b__0", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::GorillaTagScripts::PlayerTimerManager___c__DisplayClass30_0* GorillaTagScripts::PlayerTimerManager___c__DisplayClass30_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::PlayerTimerManager___c__DisplayClass30_0*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::PlayerTimerManager___c__DisplayClass30_0::PlayerTimerManager___c__DisplayClass30_0()   {
}
//  Writing Method size for method: ::GorillaTagScripts::PlayerTimerManager___c__DisplayClass29_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::PlayerTimerManager___c__DisplayClass29_0::*)()>(&::GorillaTagScripts::PlayerTimerManager___c__DisplayClass29_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bd2b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerManager___c__DisplayClass29_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::PlayerTimerManager___c__DisplayClass29_0._DeserializeTimerState_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::PlayerTimerManager___c__DisplayClass29_0::*)(::Photon::Realtime::Player*)>(&::GorillaTagScripts::PlayerTimerManager___c__DisplayClass29_0::_DeserializeTimerState_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5bd3b68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerManager___c__DisplayClass29_0*>(),
                        {"<DeserializeTimerState>b__0", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaTagScripts::PlayerTimerManager___c__DisplayClass29_0::__cordl_internal_get_actorNum()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actorNum;
}
constexpr int32_t const& GorillaTagScripts::PlayerTimerManager___c__DisplayClass29_0::__cordl_internal_get_actorNum() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actorNum;
}
constexpr void GorillaTagScripts::PlayerTimerManager___c__DisplayClass29_0::__cordl_internal_set_actorNum(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___actorNum = value;
}
inline void GorillaTagScripts::PlayerTimerManager___c__DisplayClass29_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerManager___c__DisplayClass29_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTagScripts::PlayerTimerManager___c__DisplayClass29_0::_DeserializeTimerState_b__0(::Photon::Realtime::Player*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerManager___c__DisplayClass29_0*>(),
                        {"<DeserializeTimerState>b__0", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::GorillaTagScripts::PlayerTimerManager___c__DisplayClass29_0* GorillaTagScripts::PlayerTimerManager___c__DisplayClass29_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::PlayerTimerManager___c__DisplayClass29_0*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::PlayerTimerManager___c__DisplayClass29_0::PlayerTimerManager___c__DisplayClass29_0()   {
}
