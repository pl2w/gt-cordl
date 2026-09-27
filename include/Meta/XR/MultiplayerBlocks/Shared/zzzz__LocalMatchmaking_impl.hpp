#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Shared/LocalMatchmaking.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__LocalMatchmaking_def.hpp"
#include "GlobalNamespace/zzzz__OVRColocationSession_Data_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__CustomMatchmaking_RoomOperationResult_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__CustomMatchmaking_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__LocalMatchmaking__HostOrJoinSessionAutomatically_d__16_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__LocalMatchmaking__OnColocationSessionFound_d__18_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__LocalMatchmaking__StartAdvertisingColocationSession_d__19_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__LocalMatchmaking__StartAsGuest_d__15_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__LocalMatchmaking__StartAsHost_d__14_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__LocalMatchmaking__StartDiscoveringColocationSessions_d__21_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__LocalMatchmaking__StopAdvertisingColocationSession_d__20_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__LocalMatchmaking__StopDiscoveringColocationSessions_d__22_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::*)()>(&::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::Awake)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9f6eeac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::*)()>(&::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::OnEnable)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x9f6ef84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::*)()>(&::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::OnDisable)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x9f6f070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::*)()>(&::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::Start)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9f6f15c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking.StartAsHost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::*)()>(&::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::StartAsHost)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x9f6f214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>(),
                        {"StartAsHost", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking.StartAsGuest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::*)(bool)>(&::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::StartAsGuest)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x9f6f2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>(),
                        {"StartAsGuest", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking.HostOrJoinSessionAutomatically
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::*)()>(&::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::HostOrJoinSessionAutomatically)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9f6f16c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>(),
                        {"HostOrJoinSessionAutomatically", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking.OnRoomCreationFinished
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::*)(::GlobalNamespace::CustomMatchmaking_RoomOperationResult)>(&::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::OnRoomCreationFinished)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x9f6f3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>(),
                        {"OnRoomCreationFinished", {}, {::i2c::type_of<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking.OnColocationSessionFound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::*)(::GlobalNamespace::OVRColocationSession_Data)>(&::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::OnColocationSessionFound)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x9f6f548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>(),
                        {"OnColocationSessionFound", {}, {::i2c::type_of<::GlobalNamespace::OVRColocationSession_Data>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking.StartAdvertisingColocationSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>)>(&::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::StartAdvertisingColocationSession)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9f6f4a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>(),
                        {"StartAdvertisingColocationSession", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking.StopAdvertisingColocationSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::StopAdvertisingColocationSession)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9f6f61c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>(),
                        {"StopAdvertisingColocationSession", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking.StartDiscoveringColocationSessions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>*)>(&::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::StartDiscoveringColocationSessions)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9f6f6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>(),
                        {"StartDiscoveringColocationSessions", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking.StopDiscoveringColocationSessions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>*)>(&::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::StopDiscoveringColocationSessions)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9f6f754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>(),
                        {"StopDiscoveringColocationSessions", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking.ReportDiscoverEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::OVRColocationSession_Data)>(&::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::ReportDiscoverEvent)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9f6f7f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>(),
                        {"ReportDiscoverEvent", {}, {::i2c::type_of<::GlobalNamespace::OVRColocationSession_Data>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::*)()>(&::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9f6f880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::__cordl_internal_get_automaticHostOrJoin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___automaticHostOrJoin;
}
constexpr bool const& Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::__cordl_internal_get_automaticHostOrJoin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___automaticHostOrJoin;
}
constexpr void Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::__cordl_internal_set_automaticHostOrJoin(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___automaticHostOrJoin = value;
}
constexpr int32_t& Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::__cordl_internal_get_timeDiscoveringInSec()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeDiscoveringInSec;
}
constexpr int32_t const& Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::__cordl_internal_get_timeDiscoveringInSec() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeDiscoveringInSec;
}
constexpr void Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::__cordl_internal_set_timeDiscoveringInSec(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeDiscoveringInSec = value;
}
constexpr ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking>& Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::__cordl_internal_get__customMatchmaking()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____customMatchmaking;
}
constexpr ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking> const& Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::__cordl_internal_get__customMatchmaking() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____customMatchmaking;
}
constexpr void Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::__cordl_internal_set__customMatchmaking(::UnityW<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____customMatchmaking = value;
}
constexpr bool& Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::__cordl_internal_get__discoveredLocalSessionAsGuest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____discoveredLocalSessionAsGuest;
}
constexpr bool const& Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::__cordl_internal_get__discoveredLocalSessionAsGuest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____discoveredLocalSessionAsGuest;
}
constexpr void Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::__cordl_internal_set__discoveredLocalSessionAsGuest(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____discoveredLocalSessionAsGuest = value;
}
inline void Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::setStaticF_OnSessionCreateSucceeded(::UnityEngine::Events::UnityEvent_1<::System::Guid>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Events::UnityEvent_1<::System::Guid>*, "OnSessionCreateSucceeded", ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>(std::forward<::UnityEngine::Events::UnityEvent_1<::System::Guid>*>(value));
}
inline ::UnityEngine::Events::UnityEvent_1<::System::Guid>* Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::getStaticF_OnSessionCreateSucceeded()  {
return ::cordl_internals::getStaticField<::UnityEngine::Events::UnityEvent_1<::System::Guid>*, "OnSessionCreateSucceeded", ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>();
}
inline void Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::setStaticF_OnSessionCreateFailed(::UnityEngine::Events::UnityEvent_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Events::UnityEvent_1<::StringW>*, "OnSessionCreateFailed", ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>(std::forward<::UnityEngine::Events::UnityEvent_1<::StringW>*>(value));
}
inline ::UnityEngine::Events::UnityEvent_1<::StringW>* Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::getStaticF_OnSessionCreateFailed()  {
return ::cordl_internals::getStaticField<::UnityEngine::Events::UnityEvent_1<::StringW>*, "OnSessionCreateFailed", ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>();
}
inline void Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::setStaticF_OnSessionDiscoverSucceeded(::UnityEngine::Events::UnityEvent_1<::System::Guid>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Events::UnityEvent_1<::System::Guid>*, "OnSessionDiscoverSucceeded", ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>(std::forward<::UnityEngine::Events::UnityEvent_1<::System::Guid>*>(value));
}
inline ::UnityEngine::Events::UnityEvent_1<::System::Guid>* Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::getStaticF_OnSessionDiscoverSucceeded()  {
return ::cordl_internals::getStaticField<::UnityEngine::Events::UnityEvent_1<::System::Guid>*, "OnSessionDiscoverSucceeded", ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>();
}
inline void Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::setStaticF_OnSessionDiscoverFailed(::UnityEngine::Events::UnityEvent_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Events::UnityEvent_1<::StringW>*, "OnSessionDiscoverFailed", ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>(std::forward<::UnityEngine::Events::UnityEvent_1<::StringW>*>(value));
}
inline ::UnityEngine::Events::UnityEvent_1<::StringW>* Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::getStaticF_OnSessionDiscoverFailed()  {
return ::cordl_internals::getStaticField<::UnityEngine::Events::UnityEvent_1<::StringW>*, "OnSessionDiscoverFailed", ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>();
}
inline void Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::setStaticF_BeforeStartHost(::System::Func_1<::System::Threading::Tasks::Task_1<bool>*>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::System::Threading::Tasks::Task_1<bool>*>*, "BeforeStartHost", ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>(std::forward<::System::Func_1<::System::Threading::Tasks::Task_1<bool>*>*>(value));
}
inline ::System::Func_1<::System::Threading::Tasks::Task_1<bool>*>* Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::getStaticF_BeforeStartHost()  {
return ::cordl_internals::getStaticField<::System::Func_1<::System::Threading::Tasks::Task_1<bool>*>*, "BeforeStartHost", ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>();
}
inline void Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::setStaticF_ExtraData(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "ExtraData", ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>(std::forward<::StringW>(value));
}
inline ::StringW Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::getStaticF_ExtraData()  {
return ::cordl_internals::getStaticField<::StringW, "ExtraData", ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>();
}
inline void Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::StartAsHost()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>(),
                        {"StartAsHost", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::StartAsGuest(bool  stopAfterTimeout)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>(),
                        {"StartAsGuest", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, stopAfterTimeout);
}
inline void Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::HostOrJoinSessionAutomatically()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>(),
                        {"HostOrJoinSessionAutomatically", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::OnRoomCreationFinished(::GlobalNamespace::CustomMatchmaking_RoomOperationResult  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>(),
                        {"OnRoomCreationFinished", {}, {::i2c::type_of<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::OnColocationSessionFound(::GlobalNamespace::OVRColocationSession_Data  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>(),
                        {"OnColocationSessionFound", {}, {::i2c::type_of<::GlobalNamespace::OVRColocationSession_Data>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::StartAdvertisingColocationSession(::ArrayW<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>(),
                        {"StartAdvertisingColocationSession", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
inline void Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::StopAdvertisingColocationSession()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>(),
                        {"StopAdvertisingColocationSession", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::StartDiscoveringColocationSessions(::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>*  onGroupFound)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>(),
                        {"StartDiscoveringColocationSessions", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, onGroupFound);
}
inline void Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::StopDiscoveringColocationSessions(::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>*  onGroupFound)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>(),
                        {"StopDiscoveringColocationSessions", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, onGroupFound);
}
inline void Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::ReportDiscoverEvent(::GlobalNamespace::OVRColocationSession_Data  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>(),
                        {"ReportDiscoverEvent", {}, {::i2c::type_of<::GlobalNamespace::OVRColocationSession_Data>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
inline void Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking* Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::LocalMatchmaking()   {
}
