#pragma once
// IWYU pragma private; include "GorillaNetworking/GorillaNetworkJoinTrigger.hpp"
#include "GlobalNamespace/zzzz__GTZone_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaTriggerBox_impl.hpp"
#include "GlobalNamespace/zzzz__GroupJoinZoneA_impl.hpp"
#include "GlobalNamespace/zzzz__GroupJoinZoneB_impl.hpp"
#include "GorillaNetworking/zzzz__AdditionalCustomProperty_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "GorillaNetworking/zzzz__GorillaNetworkJoinTrigger_def.hpp"
#include "GlobalNamespace/zzzz__GorillaFriendCollider_def.hpp"
#include "GlobalNamespace/zzzz__GroupJoinZoneAB_def.hpp"
#include "GlobalNamespace/zzzz__JoinTriggerUI_def.hpp"
#include "GorillaGameModes/zzzz__GameModeType_def.hpp"
//  Writing Method size for method: ::GorillaNetworking::GorillaNetworkJoinTrigger.get_groupJoinRequiredZonesAB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GroupJoinZoneAB (::GorillaNetworking::GorillaNetworkJoinTrigger::*)()>(&::GorillaNetworking::GorillaNetworkJoinTrigger::get_groupJoinRequiredZonesAB)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c89b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>(),
                        {"get_groupJoinRequiredZonesAB", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaNetworkJoinTrigger.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaNetworkJoinTrigger::*)()>(&::GorillaNetworking::GorillaNetworkJoinTrigger::Start)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x5c89b28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaNetworkJoinTrigger.RegisterUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaNetworkJoinTrigger::*)(::GlobalNamespace::JoinTriggerUI*)>(&::GorillaNetworking::GorillaNetworkJoinTrigger::RegisterUI)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5c89dfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>(),
                        {"RegisterUI", {}, {::i2c::type_of<::GlobalNamespace::JoinTriggerUI*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaNetworkJoinTrigger.UnregisterUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaNetworkJoinTrigger::*)(::GlobalNamespace::JoinTriggerUI*)>(&::GorillaNetworking::GorillaNetworkJoinTrigger::UnregisterUI)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c8a7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>(),
                        {"UnregisterUI", {}, {::i2c::type_of<::GlobalNamespace::JoinTriggerUI*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaNetworkJoinTrigger.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaNetworkJoinTrigger::*)()>(&::GorillaNetworking::GorillaNetworkJoinTrigger::OnDestroy)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5c8a7fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaNetworkJoinTrigger.OnGroupPositionsChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaNetworkJoinTrigger::*)(::GlobalNamespace::GroupJoinZoneAB)>(&::GorillaNetworking::GorillaNetworkJoinTrigger::OnGroupPositionsChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c8a900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>(),
                        {"OnGroupPositionsChanged", {}, {::i2c::type_of<::GlobalNamespace::GroupJoinZoneAB>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaNetworkJoinTrigger.UpdateUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaNetworkJoinTrigger::*)()>(&::GorillaNetworking::GorillaNetworkJoinTrigger::UpdateUI)> {
  constexpr static std::size_t size = 0x854;
  constexpr static std::size_t addrs = 0x5c89f9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>(),
                        {"UpdateUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaNetworkJoinTrigger.GetActiveNetworkZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaNetworking::GorillaNetworkJoinTrigger::*)()>(&::GorillaNetworking::GorillaNetworkJoinTrigger::GetActiveNetworkZone)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5c8a9b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>(),
                        {"GetActiveNetworkZone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaNetworkJoinTrigger.GetDesiredNetworkZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaNetworking::GorillaNetworkJoinTrigger::*)()>(&::GorillaNetworking::GorillaNetworkJoinTrigger::GetDesiredNetworkZone)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5c8aa1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>(),
                        {"GetDesiredNetworkZone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaNetworkJoinTrigger.GetActiveGameType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::GorillaNetworking::GorillaNetworkJoinTrigger::GetActiveGameType)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5c8aa34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>(),
                        {"GetActiveGameType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaNetworkJoinTrigger.GetDesiredGameModeType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaGameModes::GameModeType (::GorillaNetworking::GorillaNetworkJoinTrigger::*)()>(&::GorillaNetworking::GorillaNetworkJoinTrigger::GetDesiredGameModeType)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x5c8aaf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>(),
                        {"GetDesiredGameModeType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaNetworkJoinTrigger.GetDesiredGameType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaNetworking::GorillaNetworkJoinTrigger::*)()>(&::GorillaNetworking::GorillaNetworkJoinTrigger::GetDesiredGameType)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5c88340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>(),
                        {"GetDesiredGameType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaNetworkJoinTrigger.GetDesiredGameTypeLocalized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaNetworking::GorillaNetworkJoinTrigger::*)()>(&::GorillaNetworking::GorillaNetworkJoinTrigger::GetDesiredGameTypeLocalized)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c8ace8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>(),
                        {"GetDesiredGameTypeLocalized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaNetworkJoinTrigger.GetFullDesiredGameModeString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaNetworking::GorillaNetworkJoinTrigger::*)()>(&::GorillaNetworking::GorillaNetworkJoinTrigger::GetFullDesiredGameModeString)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5c8acfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>(),
                    {::i2c::class_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaNetworkJoinTrigger.SameZoneAsOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::GorillaNetworkJoinTrigger::*)()>(&::GorillaNetworking::GorillaNetworkJoinTrigger::SameZoneAsOverride)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5c8add4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>(),
                    {::i2c::class_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaNetworkJoinTrigger.GetRoomSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::GorillaNetworking::GorillaNetworkJoinTrigger::*)(bool)>(&::GorillaNetworking::GorillaNetworkJoinTrigger::GetRoomSize)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5c8ae48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>(),
                    {::i2c::class_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaNetworkJoinTrigger.CanPartyJoin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::GorillaNetworkJoinTrigger::*)()>(&::GorillaNetworking::GorillaNetworkJoinTrigger::CanPartyJoin)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5c8a904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>(),
                        {"CanPartyJoin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaNetworkJoinTrigger.CanPartyJoin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::GorillaNetworkJoinTrigger::*)(::GlobalNamespace::GroupJoinZoneAB)>(&::GorillaNetworking::GorillaNetworkJoinTrigger::CanPartyJoin)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5c8aecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>(),
                        {"CanPartyJoin", {}, {::i2c::type_of<::GlobalNamespace::GroupJoinZoneAB>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaNetworkJoinTrigger.OnBoxTriggered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaNetworkJoinTrigger::*)()>(&::GorillaNetworking::GorillaNetworkJoinTrigger::OnBoxTriggered)> {
  constexpr static std::size_t size = 0x8b8;
  constexpr static std::size_t addrs = 0x5c8aef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>(),
                    {::i2c::class_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaNetworkJoinTrigger.SubsPublicJoin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaNetworkJoinTrigger::*)()>(&::GorillaNetworking::GorillaNetworkJoinTrigger::SubsPublicJoin)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5c8b7a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>(),
                        {"SubsPublicJoin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaNetworkJoinTrigger.DisableTriggerJoins
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GorillaNetworking::GorillaNetworkJoinTrigger::DisableTriggerJoins)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5c8b964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>(),
                        {"DisableTriggerJoins", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaNetworkJoinTrigger.EnableTriggerJoins
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GorillaNetworking::GorillaNetworkJoinTrigger::EnableTriggerJoins)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5c8b9f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>(),
                        {"EnableTriggerJoins", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaNetworkJoinTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaNetworkJoinTrigger::*)()>(&::GorillaNetworking::GorillaNetworkJoinTrigger::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c88404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GorillaNetworking::GorillaNetworkJoinTrigger::__cordl_internal_get_makeSureThisIsDisabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___makeSureThisIsDisabled;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GorillaNetworking::GorillaNetworkJoinTrigger::__cordl_internal_get_makeSureThisIsDisabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___makeSureThisIsDisabled;
}
constexpr void GorillaNetworking::GorillaNetworkJoinTrigger::__cordl_internal_set_makeSureThisIsDisabled(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___makeSureThisIsDisabled = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GorillaNetworking::GorillaNetworkJoinTrigger::__cordl_internal_get_makeSureThisIsEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___makeSureThisIsEnabled;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GorillaNetworking::GorillaNetworkJoinTrigger::__cordl_internal_get_makeSureThisIsEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___makeSureThisIsEnabled;
}
constexpr void GorillaNetworking::GorillaNetworkJoinTrigger::__cordl_internal_set_makeSureThisIsEnabled(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___makeSureThisIsEnabled = value;
}
constexpr ::GlobalNamespace::GTZone& GorillaNetworking::GorillaNetworkJoinTrigger::__cordl_internal_get_zone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zone;
}
constexpr ::GlobalNamespace::GTZone const& GorillaNetworking::GorillaNetworkJoinTrigger::__cordl_internal_get_zone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zone;
}
constexpr void GorillaNetworking::GorillaNetworkJoinTrigger::__cordl_internal_set_zone(::GlobalNamespace::GTZone  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zone = value;
}
constexpr ::GlobalNamespace::GroupJoinZoneA& GorillaNetworking::GorillaNetworkJoinTrigger::__cordl_internal_get_groupJoinRequiredZones()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groupJoinRequiredZones;
}
constexpr ::GlobalNamespace::GroupJoinZoneA const& GorillaNetworking::GorillaNetworkJoinTrigger::__cordl_internal_get_groupJoinRequiredZones() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groupJoinRequiredZones;
}
constexpr void GorillaNetworking::GorillaNetworkJoinTrigger::__cordl_internal_set_groupJoinRequiredZones(::GlobalNamespace::GroupJoinZoneA  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___groupJoinRequiredZones = value;
}
constexpr ::GlobalNamespace::GroupJoinZoneB& GorillaNetworking::GorillaNetworkJoinTrigger::__cordl_internal_get_groupJoinRequiredZonesB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groupJoinRequiredZonesB;
}
constexpr ::GlobalNamespace::GroupJoinZoneB const& GorillaNetworking::GorillaNetworkJoinTrigger::__cordl_internal_get_groupJoinRequiredZonesB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groupJoinRequiredZonesB;
}
constexpr void GorillaNetworking::GorillaNetworkJoinTrigger::__cordl_internal_set_groupJoinRequiredZonesB(::GlobalNamespace::GroupJoinZoneB  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___groupJoinRequiredZonesB = value;
}
constexpr ::StringW& GorillaNetworking::GorillaNetworkJoinTrigger::__cordl_internal_get_networkZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkZone;
}
constexpr ::StringW const& GorillaNetworking::GorillaNetworkJoinTrigger::__cordl_internal_get_networkZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkZone;
}
constexpr void GorillaNetworking::GorillaNetworkJoinTrigger::__cordl_internal_set_networkZone(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___networkZone = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaFriendCollider>& GorillaNetworking::GorillaNetworkJoinTrigger::__cordl_internal_get_myCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myCollider;
}
constexpr ::UnityW<::GlobalNamespace::GorillaFriendCollider> const& GorillaNetworking::GorillaNetworkJoinTrigger::__cordl_internal_get_myCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myCollider;
}
constexpr void GorillaNetworking::GorillaNetworkJoinTrigger::__cordl_internal_set_myCollider(::UnityW<::GlobalNamespace::GorillaFriendCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myCollider = value;
}
constexpr ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>& GorillaNetworking::GorillaNetworkJoinTrigger::__cordl_internal_get_primaryTriggerForMyZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___primaryTriggerForMyZone;
}
constexpr ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger> const& GorillaNetworking::GorillaNetworkJoinTrigger::__cordl_internal_get_primaryTriggerForMyZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___primaryTriggerForMyZone;
}
constexpr void GorillaNetworking::GorillaNetworkJoinTrigger::__cordl_internal_set_primaryTriggerForMyZone(::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___primaryTriggerForMyZone = value;
}
constexpr bool& GorillaNetworking::GorillaNetworkJoinTrigger::__cordl_internal_get_ignoredIfInParty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignoredIfInParty;
}
constexpr bool const& GorillaNetworking::GorillaNetworkJoinTrigger::__cordl_internal_get_ignoredIfInParty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignoredIfInParty;
}
constexpr void GorillaNetworking::GorillaNetworkJoinTrigger::__cordl_internal_set_ignoredIfInParty(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ignoredIfInParty = value;
}
constexpr bool& GorillaNetworking::GorillaNetworkJoinTrigger::__cordl_internal_get_isSubsOnly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSubsOnly;
}
constexpr bool const& GorillaNetworking::GorillaNetworkJoinTrigger::__cordl_internal_get_isSubsOnly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSubsOnly;
}
constexpr void GorillaNetworking::GorillaNetworkJoinTrigger::__cordl_internal_set_isSubsOnly(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isSubsOnly = value;
}
constexpr ::UnityW<::GlobalNamespace::JoinTriggerUI>& GorillaNetworking::GorillaNetworkJoinTrigger::__cordl_internal_get_ui()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ui;
}
constexpr ::UnityW<::GlobalNamespace::JoinTriggerUI> const& GorillaNetworking::GorillaNetworkJoinTrigger::__cordl_internal_get_ui() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ui;
}
constexpr void GorillaNetworking::GorillaNetworkJoinTrigger::__cordl_internal_set_ui(::UnityW<::GlobalNamespace::JoinTriggerUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ui = value;
}
constexpr bool& GorillaNetworking::GorillaNetworkJoinTrigger::__cordl_internal_get_didRegisterForCallbacks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___didRegisterForCallbacks;
}
constexpr bool const& GorillaNetworking::GorillaNetworkJoinTrigger::__cordl_internal_get_didRegisterForCallbacks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___didRegisterForCallbacks;
}
constexpr void GorillaNetworking::GorillaNetworkJoinTrigger::__cordl_internal_set_didRegisterForCallbacks(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___didRegisterForCallbacks = value;
}
constexpr ::ArrayW<::GorillaNetworking::AdditionalCustomProperty>& GorillaNetworking::GorillaNetworkJoinTrigger::__cordl_internal_get_additionalJoinCustomProperties()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___additionalJoinCustomProperties;
}
constexpr ::ArrayW<::GorillaNetworking::AdditionalCustomProperty> const& GorillaNetworking::GorillaNetworkJoinTrigger::__cordl_internal_get_additionalJoinCustomProperties() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___additionalJoinCustomProperties;
}
constexpr void GorillaNetworking::GorillaNetworkJoinTrigger::__cordl_internal_set_additionalJoinCustomProperties(::ArrayW<::GorillaNetworking::AdditionalCustomProperty>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___additionalJoinCustomProperties = value;
}
inline void GorillaNetworking::GorillaNetworkJoinTrigger::setStaticF_triggerJoinsDisabled(bool  value)  {
::cordl_internals::setStaticField<bool, "triggerJoinsDisabled", ::GorillaNetworking::GorillaNetworkJoinTrigger*>(std::forward<bool>(value));
}
inline bool GorillaNetworking::GorillaNetworkJoinTrigger::getStaticF_triggerJoinsDisabled()  {
return ::cordl_internals::getStaticField<bool, "triggerJoinsDisabled", ::GorillaNetworking::GorillaNetworkJoinTrigger*>();
}
inline ::GlobalNamespace::GroupJoinZoneAB GorillaNetworking::GorillaNetworkJoinTrigger::get_groupJoinRequiredZonesAB()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>(),
                        {"get_groupJoinRequiredZonesAB", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GroupJoinZoneAB>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaNetworkJoinTrigger::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaNetworkJoinTrigger::RegisterUI(::GlobalNamespace::JoinTriggerUI*  ui)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>(),
                        {"RegisterUI", {}, {::i2c::type_of<::GlobalNamespace::JoinTriggerUI*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ui);
}
inline void GorillaNetworking::GorillaNetworkJoinTrigger::UnregisterUI(::GlobalNamespace::JoinTriggerUI*  ui)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>(),
                        {"UnregisterUI", {}, {::i2c::type_of<::GlobalNamespace::JoinTriggerUI*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ui);
}
inline void GorillaNetworking::GorillaNetworkJoinTrigger::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaNetworkJoinTrigger::OnGroupPositionsChanged(::GlobalNamespace::GroupJoinZoneAB  groupZone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>(),
                        {"OnGroupPositionsChanged", {}, {::i2c::type_of<::GlobalNamespace::GroupJoinZoneAB>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, groupZone);
}
inline void GorillaNetworking::GorillaNetworkJoinTrigger::UpdateUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>(),
                        {"UpdateUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GorillaNetworking::GorillaNetworkJoinTrigger::GetActiveNetworkZone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>(),
                        {"GetActiveNetworkZone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GorillaNetworking::GorillaNetworkJoinTrigger::GetDesiredNetworkZone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>(),
                        {"GetDesiredNetworkZone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GorillaNetworking::GorillaNetworkJoinTrigger::GetActiveGameType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>(),
                        {"GetActiveGameType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::GorillaGameModes::GameModeType GorillaNetworking::GorillaNetworkJoinTrigger::GetDesiredGameModeType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>(),
                        {"GetDesiredGameModeType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaGameModes::GameModeType>(this, ___internal_method);
}
inline ::StringW GorillaNetworking::GorillaNetworkJoinTrigger::GetDesiredGameType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>(),
                        {"GetDesiredGameType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GorillaNetworking::GorillaNetworkJoinTrigger::GetDesiredGameTypeLocalized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>(),
                        {"GetDesiredGameTypeLocalized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GorillaNetworking::GorillaNetworkJoinTrigger::GetFullDesiredGameModeString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GorillaNetworking::GorillaNetworkJoinTrigger::SameZoneAsOverride()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline uint8_t GorillaNetworking::GorillaNetworkJoinTrigger::GetRoomSize(bool  subscribed)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method, subscribed);
}
inline bool GorillaNetworking::GorillaNetworkJoinTrigger::CanPartyJoin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>(),
                        {"CanPartyJoin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaNetworking::GorillaNetworkJoinTrigger::CanPartyJoin(::GlobalNamespace::GroupJoinZoneAB  zone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>(),
                        {"CanPartyJoin", {}, {::i2c::type_of<::GlobalNamespace::GroupJoinZoneAB>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, zone);
}
inline void GorillaNetworking::GorillaNetworkJoinTrigger::OnBoxTriggered()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaNetworkJoinTrigger::SubsPublicJoin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>(),
                        {"SubsPublicJoin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaNetworkJoinTrigger::DisableTriggerJoins()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>(),
                        {"DisableTriggerJoins", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GorillaNetworking::GorillaNetworkJoinTrigger::EnableTriggerJoins()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>(),
                        {"EnableTriggerJoins", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GorillaNetworking::GorillaNetworkJoinTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaNetworking::GorillaNetworkJoinTrigger* GorillaNetworking::GorillaNetworkJoinTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::GorillaNetworkJoinTrigger*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::GorillaNetworkJoinTrigger::GorillaNetworkJoinTrigger()   {
}
