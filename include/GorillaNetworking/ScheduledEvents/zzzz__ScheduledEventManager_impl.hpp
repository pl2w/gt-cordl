#pragma once
// IWYU pragma private; include "GorillaNetworking/ScheduledEvents/ScheduledEventManager.hpp"
#include "GorillaNetworking/ScheduledEvents/zzzz__ScheduledEventManager_StartKind_impl.hpp"
#include "GorillaNetworking/ScheduledEvents/zzzz__ScheduledEventPhase_impl.hpp"
#include "GorillaNetworking/zzzz__PhotonTimestamp_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaNetworking/ScheduledEvents/zzzz__ScheduledEventManager_def.hpp"
#include "ExitGames/Client/Photon/zzzz__Hashtable_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSliceableSimple_def.hpp"
#include "GorillaNetworking/ScheduledEvents/zzzz__ScheduledEventControlledObject_def.hpp"
#include "GorillaNetworking/ScheduledEvents/zzzz__ScheduledEventInfo_def.hpp"
#include "GorillaNetworking/ScheduledEvents/zzzz__ScheduledEventManager_StartKind_def.hpp"
#include "GorillaNetworking/ScheduledEvents/zzzz__ScheduledEventManager__FetchReferenceDate_d__69_def.hpp"
#include "GorillaNetworking/ScheduledEvents/zzzz__ScheduledEventManager__Start_d__55_def.hpp"
#include "GorillaNetworking/ScheduledEvents/zzzz__ScheduledEventPhase_def.hpp"
#include "GorillaNetworking/zzzz__PhotonTimestamp_def.hpp"
#include "Photon/Pun/zzzz__IPunObservable_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "Photon/Realtime/zzzz__IInRoomCallbacks_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "PlayFab/zzzz__PlayFabError_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventManager.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GorillaNetworking::ScheduledEvents::ScheduledEventManager> (*)()>(&::GorillaNetworking::ScheduledEvents::ScheduledEventManager::get_Instance)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5c9ed44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventManager.set_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GorillaNetworking::ScheduledEvents::ScheduledEventManager*)>(&::GorillaNetworking::ScheduledEvents::ScheduledEventManager::set_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5c9ed8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"set_Instance", {}, {::i2c::type_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventManager.get_GracePeriod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::GorillaNetworking::ScheduledEvents::ScheduledEventManager::*)()>(&::GorillaNetworking::ScheduledEvents::ScheduledEventManager::get_GracePeriod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c9ede4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"get_GracePeriod", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventManager.get_DataReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::ScheduledEvents::ScheduledEventManager::*)()>(&::GorillaNetworking::ScheduledEvents::ScheduledEventManager::get_DataReady)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c9edec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"get_DataReady", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventManager.get_IsResolved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::ScheduledEvents::ScheduledEventManager::*)()>(&::GorillaNetworking::ScheduledEvents::ScheduledEventManager::get_IsResolved)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c9edfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"get_IsResolved", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventManager.get_HasEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::ScheduledEvents::ScheduledEventManager::*)()>(&::GorillaNetworking::ScheduledEvents::ScheduledEventManager::get_HasEvent)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c9ee0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"get_HasEvent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventManager.get_SecondsUntilEventStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GorillaNetworking::ScheduledEvents::ScheduledEventManager::*)()>(&::GorillaNetworking::ScheduledEvents::ScheduledEventManager::get_SecondsUntilEventStart)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5c9ee1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"get_SecondsUntilEventStart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventManager.get_CurrentPhase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaNetworking::ScheduledEvents::ScheduledEventPhase (::GorillaNetworking::ScheduledEvents::ScheduledEventManager::*)()>(&::GorillaNetworking::ScheduledEvents::ScheduledEventManager::get_CurrentPhase)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c9ee80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"get_CurrentPhase", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventManager.get_EventSubphase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaNetworking::ScheduledEvents::ScheduledEventManager::*)()>(&::GorillaNetworking::ScheduledEvents::ScheduledEventManager::get_EventSubphase)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c9ee88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"get_EventSubphase", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventManager.get_PreviousEventSubphaseStartTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::GorillaNetworking::ScheduledEvents::ScheduledEventManager::*)()>(&::GorillaNetworking::ScheduledEvents::ScheduledEventManager::get_PreviousEventSubphaseStartTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c9ee90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"get_PreviousEventSubphaseStartTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventManager.set_PreviousEventSubphaseStartTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::ScheduledEventManager::*)(::System::DateTime)>(&::GorillaNetworking::ScheduledEvents::ScheduledEventManager::set_PreviousEventSubphaseStartTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c9ee98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"set_PreviousEventSubphaseStartTime", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventManager.get_EventSubphaseStartTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::GorillaNetworking::ScheduledEvents::ScheduledEventManager::*)()>(&::GorillaNetworking::ScheduledEvents::ScheduledEventManager::get_EventSubphaseStartTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c9eea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"get_EventSubphaseStartTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventManager.set_EventSubphaseStartTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::ScheduledEventManager::*)(::System::DateTime)>(&::GorillaNetworking::ScheduledEvents::ScheduledEventManager::set_EventSubphaseStartTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c9eea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"set_EventSubphaseStartTime", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventManager.add_OnChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::ScheduledEventManager::*)(::System::Action*)>(&::GorillaNetworking::ScheduledEvents::ScheduledEventManager::add_OnChanged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c9eeb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"add_OnChanged", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventManager.remove_OnChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::ScheduledEventManager::*)(::System::Action*)>(&::GorillaNetworking::ScheduledEvents::ScheduledEventManager::remove_OnChanged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c9ef4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"remove_OnChanged", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventManager.add_OnPhaseChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::ScheduledEventManager::*)(::System::Action_1<::GorillaNetworking::ScheduledEvents::ScheduledEventPhase>*)>(&::GorillaNetworking::ScheduledEvents::ScheduledEventManager::add_OnPhaseChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5c9e270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"add_OnPhaseChanged", {}, {::i2c::type_of<::System::Action_1<::GorillaNetworking::ScheduledEvents::ScheduledEventPhase>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventManager.remove_OnPhaseChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::ScheduledEventManager::*)(::System::Action_1<::GorillaNetworking::ScheduledEvents::ScheduledEventPhase>*)>(&::GorillaNetworking::ScheduledEvents::ScheduledEventManager::remove_OnPhaseChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5c9e5d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"remove_OnPhaseChanged", {}, {::i2c::type_of<::System::Action_1<::GorillaNetworking::ScheduledEvents::ScheduledEventPhase>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventManager.add_OnSubphaseChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::ScheduledEventManager::*)(::System::Action_1<int32_t>*)>(&::GorillaNetworking::ScheduledEvents::ScheduledEventManager::add_OnSubphaseChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5c9e320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"add_OnSubphaseChanged", {}, {::i2c::type_of<::System::Action_1<int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventManager.remove_OnSubphaseChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::ScheduledEventManager::*)(::System::Action_1<int32_t>*)>(&::GorillaNetworking::ScheduledEvents::ScheduledEventManager::remove_OnSubphaseChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5c9e688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"remove_OnSubphaseChanged", {}, {::i2c::type_of<::System::Action_1<int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventManager.SetEventSubphase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::ScheduledEventManager::*)(int32_t)>(&::GorillaNetworking::ScheduledEvents::ScheduledEventManager::SetEventSubphase)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5c9efe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"SetEventSubphase", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::ScheduledEventManager::*)()>(&::GorillaNetworking::ScheduledEvents::ScheduledEventManager::Awake)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5c9f0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventManager.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::ScheduledEventManager::*)()>(&::GorillaNetworking::ScheduledEvents::ScheduledEventManager::Start)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5c9f228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventManager.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::ScheduledEventManager::*)()>(&::GorillaNetworking::ScheduledEvents::ScheduledEventManager::OnDestroy)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x5c9f2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventManager.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::ScheduledEventManager::*)()>(&::GorillaNetworking::ScheduledEvents::ScheduledEventManager::OnEnable)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5c9f668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventManager.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::ScheduledEventManager::*)()>(&::GorillaNetworking::ScheduledEvents::ScheduledEventManager::OnDisable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c9f718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventManager.SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::ScheduledEventManager::*)()>(&::GorillaNetworking::ScheduledEvents::ScheduledEventManager::SliceUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c9f724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"SliceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventManager.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::ScheduledEventManager::*)(::GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject*)>(&::GorillaNetworking::ScheduledEvents::ScheduledEventManager::Register)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5c9eaf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"Register", {}, {::i2c::type_of<::GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventManager.Unregister
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::ScheduledEventManager::*)(::GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject*)>(&::GorillaNetworking::ScheduledEvents::ScheduledEventManager::Unregister)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5c9ec90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"Unregister", {}, {::i2c::type_of<::GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventManager.ApplyPhaseTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::ScheduledEventManager::*)(::GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject*)>(&::GorillaNetworking::ScheduledEvents::ScheduledEventManager::ApplyPhaseTo)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5c9f8ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"ApplyPhaseTo", {}, {::i2c::type_of<::GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventManager.ApplyPhaseToAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::ScheduledEventManager::*)()>(&::GorillaNetworking::ScheduledEvents::ScheduledEventManager::ApplyPhaseToAll)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5c9f9fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"ApplyPhaseToAll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventManager.RefreshPhase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::ScheduledEventManager::*)()>(&::GorillaNetworking::ScheduledEvents::ScheduledEventManager::RefreshPhase)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5c9f728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"RefreshPhase", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventManager.ComputePhase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaNetworking::ScheduledEvents::ScheduledEventPhase (::GorillaNetworking::ScheduledEvents::ScheduledEventManager::*)()>(&::GorillaNetworking::ScheduledEvents::ScheduledEventManager::ComputePhase)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5c9fcec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"ComputePhase", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventManager.ComputeOfflinePhase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaNetworking::ScheduledEvents::ScheduledEventPhase (::GorillaNetworking::ScheduledEvents::ScheduledEventManager::*)()>(&::GorillaNetworking::ScheduledEvents::ScheduledEventManager::ComputeOfflinePhase)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5c9ff9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"ComputeOfflinePhase", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventManager.OnServerTimeUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::ScheduledEventManager::*)()>(&::GorillaNetworking::ScheduledEvents::ScheduledEventManager::OnServerTimeUpdated)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5ca0154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"OnServerTimeUpdated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventManager.ApplyForcedEventTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::ScheduledEventManager::*)()>(&::GorillaNetworking::ScheduledEvents::ScheduledEventManager::ApplyForcedEventTime)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5ca0268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"ApplyForcedEventTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventManager.FetchReferenceDate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GorillaNetworking::ScheduledEvents::ScheduledEventManager::*)()>(&::GorillaNetworking::ScheduledEvents::ScheduledEventManager::FetchReferenceDate)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5ca0190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"FetchReferenceDate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventManager.OnTitleData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::ScheduledEventManager::*)(::StringW)>(&::GorillaNetworking::ScheduledEvents::ScheduledEventManager::OnTitleData)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5ca0428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"OnTitleData", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventManager.OnTitleDataError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::ScheduledEventManager::*)(::PlayFab::PlayFabError*)>(&::GorillaNetworking::ScheduledEvents::ScheduledEventManager::OnTitleDataError)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5ca058c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"OnTitleDataError", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventManager.OnGraceTitleData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::ScheduledEventManager::*)(::StringW)>(&::GorillaNetworking::ScheduledEvents::ScheduledEventManager::OnGraceTitleData)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5ca0620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"OnGraceTitleData", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventManager.OnGraceTitleDataError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::ScheduledEventManager::*)(::PlayFab::PlayFabError*)>(&::GorillaNetworking::ScheduledEvents::ScheduledEventManager::OnGraceTitleDataError)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5ca0718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"OnGraceTitleDataError", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventManager.GetCurrent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaNetworking::ScheduledEvents::ScheduledEventInfo (::GorillaNetworking::ScheduledEvents::ScheduledEventManager::*)(::System::DateTime)>(&::GorillaNetworking::ScheduledEvents::ScheduledEventManager::GetCurrent)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5ca00b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"GetCurrent", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventManager.OnMultiplayerStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::ScheduledEventManager::*)()>(&::GorillaNetworking::ScheduledEvents::ScheduledEventManager::OnMultiplayerStarted)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5ca07e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"OnMultiplayerStarted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventManager.OnReturnedToSinglePlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::ScheduledEventManager::*)()>(&::GorillaNetworking::ScheduledEvents::ScheduledEventManager::OnReturnedToSinglePlayer)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5ca0c54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"OnReturnedToSinglePlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventManager.OnShowEnded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::ScheduledEventManager::*)()>(&::GorillaNetworking::ScheduledEvents::ScheduledEventManager::OnShowEnded)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5ca0c88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"OnShowEnded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventManager.DebugStartCountdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::ScheduledEventManager::*)()>(&::GorillaNetworking::ScheduledEvents::ScheduledEventManager::DebugStartCountdown)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5ca0d98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"DebugStartCountdown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventManager.ReadRoomState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaNetworking::ScheduledEvents::ScheduledEventManager::*)()>(&::GorillaNetworking::ScheduledEvents::ScheduledEventManager::ReadRoomState)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5ca0920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"ReadRoomState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventManager.SetRoomState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::ScheduledEventManager::*)(::StringW)>(&::GorillaNetworking::ScheduledEvents::ScheduledEventManager::SetRoomState)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5c9fe98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"SetRoomState", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventManager.Photon_Realtime_IInRoomCallbacks_OnRoomPropertiesUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::ScheduledEventManager::*)(::ExitGames::Client::Photon::Hashtable*)>(&::GorillaNetworking::ScheduledEvents::ScheduledEventManager::Photon_Realtime_IInRoomCallbacks_OnRoomPropertiesUpdate)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5ca0ebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"Photon.Realtime.IInRoomCallbacks.OnRoomPropertiesUpdate", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventManager.Photon_Realtime_IInRoomCallbacks_OnMasterClientSwitched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::ScheduledEventManager::*)(::Photon::Realtime::Player*)>(&::GorillaNetworking::ScheduledEvents::ScheduledEventManager::Photon_Realtime_IInRoomCallbacks_OnMasterClientSwitched)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ca1060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"Photon.Realtime.IInRoomCallbacks.OnMasterClientSwitched", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventManager.Photon_Realtime_IInRoomCallbacks_OnPlayerEnteredRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::ScheduledEventManager::*)(::Photon::Realtime::Player*)>(&::GorillaNetworking::ScheduledEvents::ScheduledEventManager::Photon_Realtime_IInRoomCallbacks_OnPlayerEnteredRoom)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ca1064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"Photon.Realtime.IInRoomCallbacks.OnPlayerEnteredRoom", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventManager.Photon_Realtime_IInRoomCallbacks_OnPlayerLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::ScheduledEventManager::*)(::Photon::Realtime::Player*)>(&::GorillaNetworking::ScheduledEvents::ScheduledEventManager::Photon_Realtime_IInRoomCallbacks_OnPlayerLeftRoom)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ca1068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"Photon.Realtime.IInRoomCallbacks.OnPlayerLeftRoom", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventManager.Photon_Realtime_IInRoomCallbacks_OnPlayerPropertiesUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::ScheduledEventManager::*)(::Photon::Realtime::Player*, ::ExitGames::Client::Photon::Hashtable*)>(&::GorillaNetworking::ScheduledEvents::ScheduledEventManager::Photon_Realtime_IInRoomCallbacks_OnPlayerPropertiesUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ca106c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"Photon.Realtime.IInRoomCallbacks.OnPlayerPropertiesUpdate", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventManager.MaintainRoomStateAsMaster
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::ScheduledEventManager::*)()>(&::GorillaNetworking::ScheduledEvents::ScheduledEventManager::MaintainRoomStateAsMaster)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5c9fb28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"MaintainRoomStateAsMaster", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventManager.ComputeStartTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::GorillaNetworking::PhotonTimestamp> (::GorillaNetworking::ScheduledEvents::ScheduledEventManager::*)()>(&::GorillaNetworking::ScheduledEvents::ScheduledEventManager::ComputeStartTime)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x5ca0a08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"ComputeStartTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventManager.Photon_Pun_IPunObservable_OnPhotonSerializeView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::ScheduledEventManager::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaNetworking::ScheduledEvents::ScheduledEventManager::Photon_Pun_IPunObservable_OnPhotonSerializeView)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x5ca1070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"Photon.Pun.IPunObservable.OnPhotonSerializeView", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventManager.SetStartState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::ScheduledEventManager::*)(::GlobalNamespace::ScheduledEventManager_StartKind, ::GorillaNetworking::PhotonTimestamp)>(&::GorillaNetworking::ScheduledEvents::ScheduledEventManager::SetStartState)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ca0bf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"SetStartState", {}, {::i2c::type_of<::GlobalNamespace::ScheduledEventManager_StartKind>(), ::i2c::type_of<::GorillaNetworking::PhotonTimestamp>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::ScheduledEventManager::*)()>(&::GorillaNetworking::ScheduledEvents::ScheduledEventManager::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5ca122c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GorillaNetworking::ScheduledEvents::ScheduledEventManager::__cordl_internal_get_titleDataKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___titleDataKey;
}
constexpr ::StringW const& GorillaNetworking::ScheduledEvents::ScheduledEventManager::__cordl_internal_get_titleDataKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___titleDataKey;
}
constexpr void GorillaNetworking::ScheduledEvents::ScheduledEventManager::__cordl_internal_set_titleDataKey(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___titleDataKey = value;
}
constexpr ::StringW& GorillaNetworking::ScheduledEvents::ScheduledEventManager::__cordl_internal_get_graceTitleDataKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graceTitleDataKey;
}
constexpr ::StringW const& GorillaNetworking::ScheduledEvents::ScheduledEventManager::__cordl_internal_get_graceTitleDataKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graceTitleDataKey;
}
constexpr void GorillaNetworking::ScheduledEvents::ScheduledEventManager::__cordl_internal_set_graceTitleDataKey(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___graceTitleDataKey = value;
}
constexpr bool& GorillaNetworking::ScheduledEvents::ScheduledEventManager::__cordl_internal_get_useForcedEventTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useForcedEventTime;
}
constexpr bool const& GorillaNetworking::ScheduledEvents::ScheduledEventManager::__cordl_internal_get_useForcedEventTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useForcedEventTime;
}
constexpr void GorillaNetworking::ScheduledEvents::ScheduledEventManager::__cordl_internal_set_useForcedEventTime(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useForcedEventTime = value;
}
constexpr ::StringW& GorillaNetworking::ScheduledEvents::ScheduledEventManager::__cordl_internal_get_forceEventTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forceEventTime;
}
constexpr ::StringW const& GorillaNetworking::ScheduledEvents::ScheduledEventManager::__cordl_internal_get_forceEventTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forceEventTime;
}
constexpr void GorillaNetworking::ScheduledEvents::ScheduledEventManager::__cordl_internal_set_forceEventTime(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___forceEventTime = value;
}
constexpr ::System::DateTime& GorillaNetworking::ScheduledEvents::ScheduledEventManager::__cordl_internal_get_scheduledStartUtc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scheduledStartUtc;
}
constexpr ::System::DateTime const& GorillaNetworking::ScheduledEvents::ScheduledEventManager::__cordl_internal_get_scheduledStartUtc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scheduledStartUtc;
}
constexpr void GorillaNetworking::ScheduledEvents::ScheduledEventManager::__cordl_internal_set_scheduledStartUtc(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scheduledStartUtc = value;
}
constexpr ::System::TimeSpan& GorillaNetworking::ScheduledEvents::ScheduledEventManager::__cordl_internal_get_gracePeriodDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gracePeriodDuration;
}
constexpr ::System::TimeSpan const& GorillaNetworking::ScheduledEvents::ScheduledEventManager::__cordl_internal_get_gracePeriodDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gracePeriodDuration;
}
constexpr void GorillaNetworking::ScheduledEvents::ScheduledEventManager::__cordl_internal_set_gracePeriodDuration(::System::TimeSpan  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gracePeriodDuration = value;
}
constexpr bool& GorillaNetworking::ScheduledEvents::ScheduledEventManager::__cordl_internal_get_scheduledStartKnown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scheduledStartKnown;
}
constexpr bool const& GorillaNetworking::ScheduledEvents::ScheduledEventManager::__cordl_internal_get_scheduledStartKnown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scheduledStartKnown;
}
constexpr void GorillaNetworking::ScheduledEvents::ScheduledEventManager::__cordl_internal_set_scheduledStartKnown(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scheduledStartKnown = value;
}
constexpr bool& GorillaNetworking::ScheduledEvents::ScheduledEventManager::__cordl_internal_get_fetchInFlight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fetchInFlight;
}
constexpr bool const& GorillaNetworking::ScheduledEvents::ScheduledEventManager::__cordl_internal_get_fetchInFlight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fetchInFlight;
}
constexpr void GorillaNetworking::ScheduledEvents::ScheduledEventManager::__cordl_internal_set_fetchInFlight(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fetchInFlight = value;
}
constexpr ::GlobalNamespace::ScheduledEventManager_StartKind& GorillaNetworking::ScheduledEvents::ScheduledEventManager::__cordl_internal_get_startKind()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startKind;
}
constexpr ::GlobalNamespace::ScheduledEventManager_StartKind const& GorillaNetworking::ScheduledEvents::ScheduledEventManager::__cordl_internal_get_startKind() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startKind;
}
constexpr void GorillaNetworking::ScheduledEvents::ScheduledEventManager::__cordl_internal_set_startKind(::GlobalNamespace::ScheduledEventManager_StartKind  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startKind = value;
}
constexpr ::GorillaNetworking::PhotonTimestamp& GorillaNetworking::ScheduledEvents::ScheduledEventManager::__cordl_internal_get_scheduledStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scheduledStart;
}
constexpr ::GorillaNetworking::PhotonTimestamp const& GorillaNetworking::ScheduledEvents::ScheduledEventManager::__cordl_internal_get_scheduledStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scheduledStart;
}
constexpr void GorillaNetworking::ScheduledEvents::ScheduledEventManager::__cordl_internal_set_scheduledStart(::GorillaNetworking::PhotonTimestamp  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scheduledStart = value;
}
constexpr ::StringW& GorillaNetworking::ScheduledEvents::ScheduledEventManager::__cordl_internal_get_lastKnownState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastKnownState;
}
constexpr ::StringW const& GorillaNetworking::ScheduledEvents::ScheduledEventManager::__cordl_internal_get_lastKnownState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastKnownState;
}
constexpr void GorillaNetworking::ScheduledEvents::ScheduledEventManager::__cordl_internal_set_lastKnownState(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastKnownState = value;
}
constexpr bool& GorillaNetworking::ScheduledEvents::ScheduledEventManager::__cordl_internal_get_showEndedInRoom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showEndedInRoom;
}
constexpr bool const& GorillaNetworking::ScheduledEvents::ScheduledEventManager::__cordl_internal_get_showEndedInRoom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showEndedInRoom;
}
constexpr void GorillaNetworking::ScheduledEvents::ScheduledEventManager::__cordl_internal_set_showEndedInRoom(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showEndedInRoom = value;
}
constexpr ::GorillaNetworking::ScheduledEvents::ScheduledEventPhase& GorillaNetworking::ScheduledEvents::ScheduledEventManager::__cordl_internal_get_currentPhase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentPhase;
}
constexpr ::GorillaNetworking::ScheduledEvents::ScheduledEventPhase const& GorillaNetworking::ScheduledEvents::ScheduledEventManager::__cordl_internal_get_currentPhase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentPhase;
}
constexpr void GorillaNetworking::ScheduledEvents::ScheduledEventManager::__cordl_internal_set_currentPhase(::GorillaNetworking::ScheduledEvents::ScheduledEventPhase  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentPhase = value;
}
constexpr int32_t& GorillaNetworking::ScheduledEvents::ScheduledEventManager::__cordl_internal_get_eventSubphase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eventSubphase;
}
constexpr int32_t const& GorillaNetworking::ScheduledEvents::ScheduledEventManager::__cordl_internal_get_eventSubphase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eventSubphase;
}
constexpr void GorillaNetworking::ScheduledEvents::ScheduledEventManager::__cordl_internal_set_eventSubphase(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eventSubphase = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject>>*& GorillaNetworking::ScheduledEvents::ScheduledEventManager::__cordl_internal_get_registered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___registered;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject>>* const& GorillaNetworking::ScheduledEvents::ScheduledEventManager::__cordl_internal_get_registered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___registered;
}
constexpr void GorillaNetworking::ScheduledEvents::ScheduledEventManager::__cordl_internal_set_registered(::System::Collections::Generic::HashSet_1<::UnityW<::GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___registered = value;
}
constexpr ::System::DateTime& GorillaNetworking::ScheduledEvents::ScheduledEventManager::__cordl_internal_get__PreviousEventSubphaseStartTime_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PreviousEventSubphaseStartTime_k__BackingField;
}
constexpr ::System::DateTime const& GorillaNetworking::ScheduledEvents::ScheduledEventManager::__cordl_internal_get__PreviousEventSubphaseStartTime_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PreviousEventSubphaseStartTime_k__BackingField;
}
constexpr void GorillaNetworking::ScheduledEvents::ScheduledEventManager::__cordl_internal_set__PreviousEventSubphaseStartTime_k__BackingField(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PreviousEventSubphaseStartTime_k__BackingField = value;
}
constexpr ::System::DateTime& GorillaNetworking::ScheduledEvents::ScheduledEventManager::__cordl_internal_get__EventSubphaseStartTime_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EventSubphaseStartTime_k__BackingField;
}
constexpr ::System::DateTime const& GorillaNetworking::ScheduledEvents::ScheduledEventManager::__cordl_internal_get__EventSubphaseStartTime_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EventSubphaseStartTime_k__BackingField;
}
constexpr void GorillaNetworking::ScheduledEvents::ScheduledEventManager::__cordl_internal_set__EventSubphaseStartTime_k__BackingField(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EventSubphaseStartTime_k__BackingField = value;
}
constexpr ::System::Action*& GorillaNetworking::ScheduledEvents::ScheduledEventManager::__cordl_internal_get_OnChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnChanged;
}
constexpr ::System::Action* const& GorillaNetworking::ScheduledEvents::ScheduledEventManager::__cordl_internal_get_OnChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnChanged;
}
constexpr void GorillaNetworking::ScheduledEvents::ScheduledEventManager::__cordl_internal_set_OnChanged(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnChanged = value;
}
constexpr ::System::Action_1<::GorillaNetworking::ScheduledEvents::ScheduledEventPhase>*& GorillaNetworking::ScheduledEvents::ScheduledEventManager::__cordl_internal_get_OnPhaseChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPhaseChanged;
}
constexpr ::System::Action_1<::GorillaNetworking::ScheduledEvents::ScheduledEventPhase>* const& GorillaNetworking::ScheduledEvents::ScheduledEventManager::__cordl_internal_get_OnPhaseChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPhaseChanged;
}
constexpr void GorillaNetworking::ScheduledEvents::ScheduledEventManager::__cordl_internal_set_OnPhaseChanged(::System::Action_1<::GorillaNetworking::ScheduledEvents::ScheduledEventPhase>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnPhaseChanged = value;
}
constexpr ::System::Action_1<int32_t>*& GorillaNetworking::ScheduledEvents::ScheduledEventManager::__cordl_internal_get_OnSubphaseChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSubphaseChanged;
}
constexpr ::System::Action_1<int32_t>* const& GorillaNetworking::ScheduledEvents::ScheduledEventManager::__cordl_internal_get_OnSubphaseChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSubphaseChanged;
}
constexpr void GorillaNetworking::ScheduledEvents::ScheduledEventManager::__cordl_internal_set_OnSubphaseChanged(::System::Action_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnSubphaseChanged = value;
}
inline void GorillaNetworking::ScheduledEvents::ScheduledEventManager::setStaticF__Instance_k__BackingField(::UnityW<::GorillaNetworking::ScheduledEvents::ScheduledEventManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GorillaNetworking::ScheduledEvents::ScheduledEventManager>, "<Instance>k__BackingField", ::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(std::forward<::UnityW<::GorillaNetworking::ScheduledEvents::ScheduledEventManager>>(value));
}
inline ::UnityW<::GorillaNetworking::ScheduledEvents::ScheduledEventManager> GorillaNetworking::ScheduledEvents::ScheduledEventManager::getStaticF__Instance_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityW<::GorillaNetworking::ScheduledEvents::ScheduledEventManager>, "<Instance>k__BackingField", ::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>();
}
inline ::UnityW<::GorillaNetworking::ScheduledEvents::ScheduledEventManager> GorillaNetworking::ScheduledEvents::ScheduledEventManager::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GorillaNetworking::ScheduledEvents::ScheduledEventManager>>(nullptr, ___internal_method);
}
inline void GorillaNetworking::ScheduledEvents::ScheduledEventManager::set_Instance(::GorillaNetworking::ScheduledEvents::ScheduledEventManager*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"set_Instance", {}, {::i2c::type_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::System::TimeSpan GorillaNetworking::ScheduledEvents::ScheduledEventManager::get_GracePeriod()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"get_GracePeriod", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method);
}
inline bool GorillaNetworking::ScheduledEvents::ScheduledEventManager::get_DataReady()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"get_DataReady", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaNetworking::ScheduledEvents::ScheduledEventManager::get_IsResolved()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"get_IsResolved", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaNetworking::ScheduledEvents::ScheduledEventManager::get_HasEvent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"get_HasEvent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline double_t GorillaNetworking::ScheduledEvents::ScheduledEventManager::get_SecondsUntilEventStart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"get_SecondsUntilEventStart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline ::GorillaNetworking::ScheduledEvents::ScheduledEventPhase GorillaNetworking::ScheduledEvents::ScheduledEventManager::get_CurrentPhase()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"get_CurrentPhase", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaNetworking::ScheduledEvents::ScheduledEventPhase>(this, ___internal_method);
}
inline int32_t GorillaNetworking::ScheduledEvents::ScheduledEventManager::get_EventSubphase()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"get_EventSubphase", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::DateTime GorillaNetworking::ScheduledEvents::ScheduledEventManager::get_PreviousEventSubphaseStartTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"get_PreviousEventSubphaseStartTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline void GorillaNetworking::ScheduledEvents::ScheduledEventManager::set_PreviousEventSubphaseStartTime(::System::DateTime  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"set_PreviousEventSubphaseStartTime", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::DateTime GorillaNetworking::ScheduledEvents::ScheduledEventManager::get_EventSubphaseStartTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"get_EventSubphaseStartTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline void GorillaNetworking::ScheduledEvents::ScheduledEventManager::set_EventSubphaseStartTime(::System::DateTime  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"set_EventSubphaseStartTime", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaNetworking::ScheduledEvents::ScheduledEventManager::add_OnChanged(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"add_OnChanged", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaNetworking::ScheduledEvents::ScheduledEventManager::remove_OnChanged(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"remove_OnChanged", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaNetworking::ScheduledEvents::ScheduledEventManager::add_OnPhaseChanged(::System::Action_1<::GorillaNetworking::ScheduledEvents::ScheduledEventPhase>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"add_OnPhaseChanged", {}, {::i2c::type_of<::System::Action_1<::GorillaNetworking::ScheduledEvents::ScheduledEventPhase>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaNetworking::ScheduledEvents::ScheduledEventManager::remove_OnPhaseChanged(::System::Action_1<::GorillaNetworking::ScheduledEvents::ScheduledEventPhase>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"remove_OnPhaseChanged", {}, {::i2c::type_of<::System::Action_1<::GorillaNetworking::ScheduledEvents::ScheduledEventPhase>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaNetworking::ScheduledEvents::ScheduledEventManager::add_OnSubphaseChanged(::System::Action_1<int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"add_OnSubphaseChanged", {}, {::i2c::type_of<::System::Action_1<int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaNetworking::ScheduledEvents::ScheduledEventManager::remove_OnSubphaseChanged(::System::Action_1<int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"remove_OnSubphaseChanged", {}, {::i2c::type_of<::System::Action_1<int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaNetworking::ScheduledEvents::ScheduledEventManager::SetEventSubphase(int32_t  subphase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"SetEventSubphase", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, subphase);
}
inline void GorillaNetworking::ScheduledEvents::ScheduledEventManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::ScheduledEvents::ScheduledEventManager::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::ScheduledEvents::ScheduledEventManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::ScheduledEvents::ScheduledEventManager::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::ScheduledEvents::ScheduledEventManager::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::ScheduledEvents::ScheduledEventManager::SliceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"SliceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::ScheduledEvents::ScheduledEventManager::Register(::GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"Register", {}, {::i2c::type_of<::GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void GorillaNetworking::ScheduledEvents::ScheduledEventManager::Unregister(::GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"Unregister", {}, {::i2c::type_of<::GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void GorillaNetworking::ScheduledEvents::ScheduledEventManager::ApplyPhaseTo(::GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"ApplyPhaseTo", {}, {::i2c::type_of<::GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void GorillaNetworking::ScheduledEvents::ScheduledEventManager::ApplyPhaseToAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"ApplyPhaseToAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::ScheduledEvents::ScheduledEventManager::RefreshPhase()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"RefreshPhase", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaNetworking::ScheduledEvents::ScheduledEventPhase GorillaNetworking::ScheduledEvents::ScheduledEventManager::ComputePhase()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"ComputePhase", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaNetworking::ScheduledEvents::ScheduledEventPhase>(this, ___internal_method);
}
inline ::GorillaNetworking::ScheduledEvents::ScheduledEventPhase GorillaNetworking::ScheduledEvents::ScheduledEventManager::ComputeOfflinePhase()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"ComputeOfflinePhase", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaNetworking::ScheduledEvents::ScheduledEventPhase>(this, ___internal_method);
}
inline void GorillaNetworking::ScheduledEvents::ScheduledEventManager::OnServerTimeUpdated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"OnServerTimeUpdated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::ScheduledEvents::ScheduledEventManager::ApplyForcedEventTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"ApplyForcedEventTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GorillaNetworking::ScheduledEvents::ScheduledEventManager::FetchReferenceDate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"FetchReferenceDate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void GorillaNetworking::ScheduledEvents::ScheduledEventManager::OnTitleData(::StringW  raw)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"OnTitleData", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, raw);
}
inline void GorillaNetworking::ScheduledEvents::ScheduledEventManager::OnTitleDataError(::PlayFab::PlayFabError*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"OnTitleDataError", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline void GorillaNetworking::ScheduledEvents::ScheduledEventManager::OnGraceTitleData(::StringW  raw)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"OnGraceTitleData", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, raw);
}
inline void GorillaNetworking::ScheduledEvents::ScheduledEventManager::OnGraceTitleDataError(::PlayFab::PlayFabError*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"OnGraceTitleDataError", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline ::GorillaNetworking::ScheduledEvents::ScheduledEventInfo GorillaNetworking::ScheduledEvents::ScheduledEventManager::GetCurrent(::System::DateTime  serverNow)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"GetCurrent", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaNetworking::ScheduledEvents::ScheduledEventInfo>(this, ___internal_method, serverNow);
}
inline void GorillaNetworking::ScheduledEvents::ScheduledEventManager::OnMultiplayerStarted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"OnMultiplayerStarted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::ScheduledEvents::ScheduledEventManager::OnReturnedToSinglePlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"OnReturnedToSinglePlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::ScheduledEvents::ScheduledEventManager::OnShowEnded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"OnShowEnded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::ScheduledEvents::ScheduledEventManager::DebugStartCountdown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"DebugStartCountdown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GorillaNetworking::ScheduledEvents::ScheduledEventManager::ReadRoomState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"ReadRoomState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GorillaNetworking::ScheduledEvents::ScheduledEventManager::SetRoomState(::StringW  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"SetRoomState", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void GorillaNetworking::ScheduledEvents::ScheduledEventManager::Photon_Realtime_IInRoomCallbacks_OnRoomPropertiesUpdate(::ExitGames::Client::Photon::Hashtable*  propertiesThatChanged)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"Photon.Realtime.IInRoomCallbacks.OnRoomPropertiesUpdate", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propertiesThatChanged);
}
inline void GorillaNetworking::ScheduledEvents::ScheduledEventManager::Photon_Realtime_IInRoomCallbacks_OnMasterClientSwitched(::Photon::Realtime::Player*  newMasterClient)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"Photon.Realtime.IInRoomCallbacks.OnMasterClientSwitched", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newMasterClient);
}
inline void GorillaNetworking::ScheduledEvents::ScheduledEventManager::Photon_Realtime_IInRoomCallbacks_OnPlayerEnteredRoom(::Photon::Realtime::Player*  newPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"Photon.Realtime.IInRoomCallbacks.OnPlayerEnteredRoom", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newPlayer);
}
inline void GorillaNetworking::ScheduledEvents::ScheduledEventManager::Photon_Realtime_IInRoomCallbacks_OnPlayerLeftRoom(::Photon::Realtime::Player*  otherPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"Photon.Realtime.IInRoomCallbacks.OnPlayerLeftRoom", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, otherPlayer);
}
inline void GorillaNetworking::ScheduledEvents::ScheduledEventManager::Photon_Realtime_IInRoomCallbacks_OnPlayerPropertiesUpdate(::Photon::Realtime::Player*  targetPlayer, ::ExitGames::Client::Photon::Hashtable*  changedProps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"Photon.Realtime.IInRoomCallbacks.OnPlayerPropertiesUpdate", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetPlayer, changedProps);
}
inline void GorillaNetworking::ScheduledEvents::ScheduledEventManager::MaintainRoomStateAsMaster()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"MaintainRoomStateAsMaster", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Nullable_1<::GorillaNetworking::PhotonTimestamp> GorillaNetworking::ScheduledEvents::ScheduledEventManager::ComputeStartTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"ComputeStartTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::GorillaNetworking::PhotonTimestamp>>(this, ___internal_method);
}
inline void GorillaNetworking::ScheduledEvents::ScheduledEventManager::Photon_Pun_IPunObservable_OnPhotonSerializeView(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"Photon.Pun.IPunObservable.OnPhotonSerializeView", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GorillaNetworking::ScheduledEvents::ScheduledEventManager::SetStartState(::GlobalNamespace::ScheduledEventManager_StartKind  kind, ::GorillaNetworking::PhotonTimestamp  ts)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {"SetStartState", {}, {::i2c::type_of<::GlobalNamespace::ScheduledEventManager_StartKind>(), ::i2c::type_of<::GorillaNetworking::PhotonTimestamp>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, kind, ts);
}
inline void GorillaNetworking::ScheduledEvents::ScheduledEventManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaNetworking::ScheduledEvents::ScheduledEventManager* GorillaNetworking::ScheduledEvents::ScheduledEventManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::ScheduledEvents::ScheduledEventManager*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr  GorillaNetworking::ScheduledEvents::ScheduledEventManager::operator ::GlobalNamespace::IGorillaSliceableSimple*() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* GorillaNetworking::ScheduledEvents::ScheduledEventManager::i___GlobalNamespace__IGorillaSliceableSimple() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Photon::Realtime::IInRoomCallbacks"
constexpr  GorillaNetworking::ScheduledEvents::ScheduledEventManager::operator ::Photon::Realtime::IInRoomCallbacks*() noexcept {
return static_cast<::Photon::Realtime::IInRoomCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Realtime::IInRoomCallbacks"
constexpr ::Photon::Realtime::IInRoomCallbacks* GorillaNetworking::ScheduledEvents::ScheduledEventManager::i___Photon__Realtime__IInRoomCallbacks() noexcept {
return static_cast<::Photon::Realtime::IInRoomCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Photon::Pun::IPunObservable"
constexpr  GorillaNetworking::ScheduledEvents::ScheduledEventManager::operator ::Photon::Pun::IPunObservable*() noexcept {
return static_cast<::Photon::Pun::IPunObservable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Pun::IPunObservable"
constexpr ::Photon::Pun::IPunObservable* GorillaNetworking::ScheduledEvents::ScheduledEventManager::i___Photon__Pun__IPunObservable() noexcept {
return static_cast<::Photon::Pun::IPunObservable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaNetworking::ScheduledEvents::ScheduledEventManager::ScheduledEventManager()   {
}
