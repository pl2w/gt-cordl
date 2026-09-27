#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaScoreboardTotalUpdater.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaScoreboardTotalUpdater_def.hpp"
#include "GlobalNamespace/zzzz__GorillaPlayerScoreboardLine_def.hpp"
#include "GlobalNamespace/zzzz__GorillaScoreBoard_def.hpp"
#include "GlobalNamespace/zzzz__GorillaScoreboardTotalUpdater_PlayerReports_def.hpp"
#include "GlobalNamespace/zzzz__GorillaScoreboardTotalUpdater_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSliceableSimple_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GorillaTag/zzzz__ObjectPool_1_def.hpp"
#include "GorillaTag/zzzz__ReportMuteTimer_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaScoreboardTotalUpdater.get_instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GorillaScoreboardTotalUpdater> (*)()>(&::GlobalNamespace::GorillaScoreboardTotalUpdater::get_instance)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5994618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreboardTotalUpdater*>(),
                        {"get_instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaScoreboardTotalUpdater.get_hasInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::GorillaScoreboardTotalUpdater::get_hasInstance)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x599fe10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreboardTotalUpdater*>(),
                        {"get_hasInstance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaScoreboardTotalUpdater.UpdateLineState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaScoreboardTotalUpdater::*)(::GlobalNamespace::GorillaPlayerScoreboardLine*)>(&::GlobalNamespace::GorillaScoreboardTotalUpdater::UpdateLineState)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x599cd38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreboardTotalUpdater*>(),
                        {"UpdateLineState", {}, {::i2c::type_of<::GlobalNamespace::GorillaPlayerScoreboardLine*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaScoreboardTotalUpdater.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaScoreboardTotalUpdater::*)()>(&::GlobalNamespace::GorillaScoreboardTotalUpdater::Awake)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x599fe98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreboardTotalUpdater*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaScoreboardTotalUpdater.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaScoreboardTotalUpdater::*)()>(&::GlobalNamespace::GorillaScoreboardTotalUpdater::Start)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x59a0028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreboardTotalUpdater*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaScoreboardTotalUpdater.CreateManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GorillaScoreboardTotalUpdater> (*)()>(&::GlobalNamespace::GorillaScoreboardTotalUpdater::CreateManager)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x599fd14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreboardTotalUpdater*>(),
                        {"CreateManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaScoreboardTotalUpdater.RegisterSL
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GorillaPlayerScoreboardLine*)>(&::GlobalNamespace::GorillaScoreboardTotalUpdater::RegisterSL)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x599cf78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreboardTotalUpdater*>(),
                        {"RegisterSL", {}, {::i2c::type_of<::GlobalNamespace::GorillaPlayerScoreboardLine*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaScoreboardTotalUpdater.UnregisterSL
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GorillaPlayerScoreboardLine*)>(&::GlobalNamespace::GorillaScoreboardTotalUpdater::UnregisterSL)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x599d0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreboardTotalUpdater*>(),
                        {"UnregisterSL", {}, {::i2c::type_of<::GlobalNamespace::GorillaPlayerScoreboardLine*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaScoreboardTotalUpdater.RegisterScoreboard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GorillaScoreBoard*)>(&::GlobalNamespace::GorillaScoreboardTotalUpdater::RegisterScoreboard)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x59a0274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreboardTotalUpdater*>(),
                        {"RegisterScoreboard", {}, {::i2c::type_of<::GlobalNamespace::GorillaScoreBoard*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaScoreboardTotalUpdater.UnregisterScoreboard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GorillaScoreBoard*)>(&::GlobalNamespace::GorillaScoreboardTotalUpdater::UnregisterScoreboard)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x59a06b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreboardTotalUpdater*>(),
                        {"UnregisterScoreboard", {}, {::i2c::type_of<::GlobalNamespace::GorillaScoreBoard*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaScoreboardTotalUpdater.UpdateActiveScoreboards
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaScoreboardTotalUpdater::*)()>(&::GlobalNamespace::GorillaScoreboardTotalUpdater::UpdateActiveScoreboards)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x59946a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreboardTotalUpdater*>(),
                        {"UpdateActiveScoreboards", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaScoreboardTotalUpdater.SetOfflineFailureText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaScoreboardTotalUpdater::*)(::StringW)>(&::GlobalNamespace::GorillaScoreboardTotalUpdater::SetOfflineFailureText)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x59a0784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreboardTotalUpdater*>(),
                        {"SetOfflineFailureText", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaScoreboardTotalUpdater.ClearOfflineFailureText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaScoreboardTotalUpdater::*)()>(&::GlobalNamespace::GorillaScoreboardTotalUpdater::ClearOfflineFailureText)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x59a07a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreboardTotalUpdater*>(),
                        {"ClearOfflineFailureText", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaScoreboardTotalUpdater.UpdateScoreboard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaScoreboardTotalUpdater::*)(::GlobalNamespace::GorillaScoreBoard*)>(&::GlobalNamespace::GorillaScoreboardTotalUpdater::UpdateScoreboard)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x59a03a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreboardTotalUpdater*>(),
                        {"UpdateScoreboard", {}, {::i2c::type_of<::GlobalNamespace::GorillaScoreBoard*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaScoreboardTotalUpdater.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaScoreboardTotalUpdater::*)()>(&::GlobalNamespace::GorillaScoreboardTotalUpdater::OnEnable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x59a07c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreboardTotalUpdater*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaScoreboardTotalUpdater.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaScoreboardTotalUpdater::*)()>(&::GlobalNamespace::GorillaScoreboardTotalUpdater::OnDisable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x59a07cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreboardTotalUpdater*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaScoreboardTotalUpdater.SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaScoreboardTotalUpdater::*)()>(&::GlobalNamespace::GorillaScoreboardTotalUpdater::SliceUpdate)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x59a07d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreboardTotalUpdater*>(),
                        {"SliceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaScoreboardTotalUpdater.OnPlayerEnteredRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaScoreboardTotalUpdater::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaScoreboardTotalUpdater::OnPlayerEnteredRoom)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x59a09d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreboardTotalUpdater*>(),
                        {"OnPlayerEnteredRoom", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaScoreboardTotalUpdater.OnPlayerLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaScoreboardTotalUpdater::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaScoreboardTotalUpdater::OnPlayerLeftRoom)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x59a0af4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreboardTotalUpdater*>(),
                        {"OnPlayerLeftRoom", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaScoreboardTotalUpdater.JoinedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaScoreboardTotalUpdater::*)()>(&::GlobalNamespace::GorillaScoreboardTotalUpdater::JoinedRoom)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x59a0ca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreboardTotalUpdater*>(),
                        {"JoinedRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaScoreboardTotalUpdater.OnLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaScoreboardTotalUpdater::*)()>(&::GlobalNamespace::GorillaScoreboardTotalUpdater::OnLeftRoom)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x59a0fc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreboardTotalUpdater*>(),
                        {"OnLeftRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaScoreboardTotalUpdater.ReportMute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::NetPlayer*, int32_t)>(&::GlobalNamespace::GorillaScoreboardTotalUpdater::ReportMute)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x599be0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreboardTotalUpdater*>(),
                        {"ReportMute", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaScoreboardTotalUpdater._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaScoreboardTotalUpdater::*)()>(&::GlobalNamespace::GorillaScoreboardTotalUpdater::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x59a1328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreboardTotalUpdater*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*& GlobalNamespace::GorillaScoreboardTotalUpdater::__cordl_internal_get_playersInRoom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playersInRoom;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>* const& GlobalNamespace::GorillaScoreboardTotalUpdater::__cordl_internal_get_playersInRoom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playersInRoom;
}
constexpr void GlobalNamespace::GorillaScoreboardTotalUpdater::__cordl_internal_set_playersInRoom(::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playersInRoom = value;
}
constexpr bool& GlobalNamespace::GorillaScoreboardTotalUpdater::__cordl_internal_get_joinedRoom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joinedRoom;
}
constexpr bool const& GlobalNamespace::GorillaScoreboardTotalUpdater::__cordl_internal_get_joinedRoom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joinedRoom;
}
constexpr void GlobalNamespace::GorillaScoreboardTotalUpdater::__cordl_internal_set_joinedRoom(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___joinedRoom = value;
}
constexpr bool& GlobalNamespace::GorillaScoreboardTotalUpdater::__cordl_internal_get_wasGameManagerNull()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasGameManagerNull;
}
constexpr bool const& GlobalNamespace::GorillaScoreboardTotalUpdater::__cordl_internal_get_wasGameManagerNull() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasGameManagerNull;
}
constexpr void GlobalNamespace::GorillaScoreboardTotalUpdater::__cordl_internal_set_wasGameManagerNull(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasGameManagerNull = value;
}
constexpr ::StringW& GlobalNamespace::GorillaScoreboardTotalUpdater::__cordl_internal_get_offlineTextErrorString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offlineTextErrorString;
}
constexpr ::StringW const& GlobalNamespace::GorillaScoreboardTotalUpdater::__cordl_internal_get_offlineTextErrorString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offlineTextErrorString;
}
constexpr void GlobalNamespace::GorillaScoreboardTotalUpdater::__cordl_internal_set_offlineTextErrorString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offlineTextErrorString = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::GorillaScoreboardTotalUpdater_PlayerReports>*& GlobalNamespace::GorillaScoreboardTotalUpdater::__cordl_internal_get_reportDict()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reportDict;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::GorillaScoreboardTotalUpdater_PlayerReports>* const& GlobalNamespace::GorillaScoreboardTotalUpdater::__cordl_internal_get_reportDict() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reportDict;
}
constexpr void GlobalNamespace::GorillaScoreboardTotalUpdater::__cordl_internal_set_reportDict(::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::GorillaScoreboardTotalUpdater_PlayerReports>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reportDict = value;
}
inline void GlobalNamespace::GorillaScoreboardTotalUpdater::setStaticF__instance(::UnityW<::GlobalNamespace::GorillaScoreboardTotalUpdater>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::GorillaScoreboardTotalUpdater>, "_instance", ::GlobalNamespace::GorillaScoreboardTotalUpdater*>(std::forward<::UnityW<::GlobalNamespace::GorillaScoreboardTotalUpdater>>(value));
}
inline ::UnityW<::GlobalNamespace::GorillaScoreboardTotalUpdater> GlobalNamespace::GorillaScoreboardTotalUpdater::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::GorillaScoreboardTotalUpdater>, "_instance", ::GlobalNamespace::GorillaScoreboardTotalUpdater*>();
}
inline void GlobalNamespace::GorillaScoreboardTotalUpdater::setStaticF_allScoreboardLines(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaPlayerScoreboardLine>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaPlayerScoreboardLine>>*, "allScoreboardLines", ::GlobalNamespace::GorillaScoreboardTotalUpdater*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaPlayerScoreboardLine>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaPlayerScoreboardLine>>* GlobalNamespace::GorillaScoreboardTotalUpdater::getStaticF_allScoreboardLines()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaPlayerScoreboardLine>>*, "allScoreboardLines", ::GlobalNamespace::GorillaScoreboardTotalUpdater*>();
}
inline void GlobalNamespace::GorillaScoreboardTotalUpdater::setStaticF_lineIndex(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "lineIndex", ::GlobalNamespace::GorillaScoreboardTotalUpdater*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::GorillaScoreboardTotalUpdater::getStaticF_lineIndex()  {
return ::cordl_internals::getStaticField<int32_t, "lineIndex", ::GlobalNamespace::GorillaScoreboardTotalUpdater*>();
}
inline void GlobalNamespace::GorillaScoreboardTotalUpdater::setStaticF_allScoreboards(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaScoreBoard>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaScoreBoard>>*, "allScoreboards", ::GlobalNamespace::GorillaScoreboardTotalUpdater*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaScoreBoard>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaScoreBoard>>* GlobalNamespace::GorillaScoreboardTotalUpdater::getStaticF_allScoreboards()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaScoreBoard>>*, "allScoreboards", ::GlobalNamespace::GorillaScoreboardTotalUpdater*>();
}
inline void GlobalNamespace::GorillaScoreboardTotalUpdater::setStaticF_m_reportMuteTimerDict(::System::Collections::Generic::Dictionary_2<int32_t,::GorillaTag::ReportMuteTimer*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::GorillaTag::ReportMuteTimer*>*, "m_reportMuteTimerDict", ::GlobalNamespace::GorillaScoreboardTotalUpdater*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::GorillaTag::ReportMuteTimer*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::GorillaTag::ReportMuteTimer*>* GlobalNamespace::GorillaScoreboardTotalUpdater::getStaticF_m_reportMuteTimerDict()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::GorillaTag::ReportMuteTimer*>*, "m_reportMuteTimerDict", ::GlobalNamespace::GorillaScoreboardTotalUpdater*>();
}
inline void GlobalNamespace::GorillaScoreboardTotalUpdater::setStaticF_m_reportMuteTimerPool(::GorillaTag::ObjectPool_1<::GorillaTag::ReportMuteTimer*>*  value)  {
::cordl_internals::setStaticField<::GorillaTag::ObjectPool_1<::GorillaTag::ReportMuteTimer*>*, "m_reportMuteTimerPool", ::GlobalNamespace::GorillaScoreboardTotalUpdater*>(std::forward<::GorillaTag::ObjectPool_1<::GorillaTag::ReportMuteTimer*>*>(value));
}
inline ::GorillaTag::ObjectPool_1<::GorillaTag::ReportMuteTimer*>* GlobalNamespace::GorillaScoreboardTotalUpdater::getStaticF_m_reportMuteTimerPool()  {
return ::cordl_internals::getStaticField<::GorillaTag::ObjectPool_1<::GorillaTag::ReportMuteTimer*>*, "m_reportMuteTimerPool", ::GlobalNamespace::GorillaScoreboardTotalUpdater*>();
}
inline ::UnityW<::GlobalNamespace::GorillaScoreboardTotalUpdater> GlobalNamespace::GorillaScoreboardTotalUpdater::get_instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreboardTotalUpdater*>(),
                        {"get_instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GorillaScoreboardTotalUpdater>>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::GorillaScoreboardTotalUpdater::get_hasInstance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreboardTotalUpdater*>(),
                        {"get_hasInstance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GlobalNamespace::GorillaScoreboardTotalUpdater::UpdateLineState(::GlobalNamespace::GorillaPlayerScoreboardLine*  line)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreboardTotalUpdater*>(),
                        {"UpdateLineState", {}, {::i2c::type_of<::GlobalNamespace::GorillaPlayerScoreboardLine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, line);
}
inline void GlobalNamespace::GorillaScoreboardTotalUpdater::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreboardTotalUpdater*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaScoreboardTotalUpdater::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreboardTotalUpdater*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::GorillaScoreboardTotalUpdater> GlobalNamespace::GorillaScoreboardTotalUpdater::CreateManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreboardTotalUpdater*>(),
                        {"CreateManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GorillaScoreboardTotalUpdater>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::GorillaScoreboardTotalUpdater::RegisterSL(::GlobalNamespace::GorillaPlayerScoreboardLine*  sL)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreboardTotalUpdater*>(),
                        {"RegisterSL", {}, {::i2c::type_of<::GlobalNamespace::GorillaPlayerScoreboardLine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sL);
}
inline void GlobalNamespace::GorillaScoreboardTotalUpdater::UnregisterSL(::GlobalNamespace::GorillaPlayerScoreboardLine*  sL)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreboardTotalUpdater*>(),
                        {"UnregisterSL", {}, {::i2c::type_of<::GlobalNamespace::GorillaPlayerScoreboardLine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sL);
}
inline void GlobalNamespace::GorillaScoreboardTotalUpdater::RegisterScoreboard(::GlobalNamespace::GorillaScoreBoard*  sB)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreboardTotalUpdater*>(),
                        {"RegisterScoreboard", {}, {::i2c::type_of<::GlobalNamespace::GorillaScoreBoard*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sB);
}
inline void GlobalNamespace::GorillaScoreboardTotalUpdater::UnregisterScoreboard(::GlobalNamespace::GorillaScoreBoard*  sB)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreboardTotalUpdater*>(),
                        {"UnregisterScoreboard", {}, {::i2c::type_of<::GlobalNamespace::GorillaScoreBoard*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sB);
}
inline void GlobalNamespace::GorillaScoreboardTotalUpdater::UpdateActiveScoreboards()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreboardTotalUpdater*>(),
                        {"UpdateActiveScoreboards", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaScoreboardTotalUpdater::SetOfflineFailureText(::StringW  failureText)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreboardTotalUpdater*>(),
                        {"SetOfflineFailureText", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, failureText);
}
inline void GlobalNamespace::GorillaScoreboardTotalUpdater::ClearOfflineFailureText()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreboardTotalUpdater*>(),
                        {"ClearOfflineFailureText", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaScoreboardTotalUpdater::UpdateScoreboard(::GlobalNamespace::GorillaScoreBoard*  sB)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreboardTotalUpdater*>(),
                        {"UpdateScoreboard", {}, {::i2c::type_of<::GlobalNamespace::GorillaScoreBoard*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sB);
}
inline void GlobalNamespace::GorillaScoreboardTotalUpdater::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreboardTotalUpdater*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaScoreboardTotalUpdater::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreboardTotalUpdater*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaScoreboardTotalUpdater::SliceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreboardTotalUpdater*>(),
                        {"SliceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaScoreboardTotalUpdater::OnPlayerEnteredRoom(::GlobalNamespace::NetPlayer*  netPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreboardTotalUpdater*>(),
                        {"OnPlayerEnteredRoom", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, netPlayer);
}
inline void GlobalNamespace::GorillaScoreboardTotalUpdater::OnPlayerLeftRoom(::GlobalNamespace::NetPlayer*  netPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreboardTotalUpdater*>(),
                        {"OnPlayerLeftRoom", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, netPlayer);
}
inline void GlobalNamespace::GorillaScoreboardTotalUpdater::JoinedRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreboardTotalUpdater*>(),
                        {"JoinedRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaScoreboardTotalUpdater::OnLeftRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreboardTotalUpdater*>(),
                        {"OnLeftRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaScoreboardTotalUpdater::ReportMute(::GlobalNamespace::NetPlayer*  player, int32_t  muted)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreboardTotalUpdater*>(),
                        {"ReportMute", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, player, muted);
}
inline void GlobalNamespace::GorillaScoreboardTotalUpdater::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreboardTotalUpdater*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaScoreboardTotalUpdater* GlobalNamespace::GorillaScoreboardTotalUpdater::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaScoreboardTotalUpdater*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr  GlobalNamespace::GorillaScoreboardTotalUpdater::operator ::GlobalNamespace::IGorillaSliceableSimple*() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* GlobalNamespace::GorillaScoreboardTotalUpdater::i___GlobalNamespace__IGorillaSliceableSimple() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaScoreboardTotalUpdater::GorillaScoreboardTotalUpdater()   {
}
//  Writing Method size for method: ::GlobalNamespace::GorillaScoreboardTotalUpdater___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaScoreboardTotalUpdater___c::*)()>(&::GlobalNamespace::GorillaScoreboardTotalUpdater___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59a16c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreboardTotalUpdater___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaScoreboardTotalUpdater___c._JoinedRoom_b__32_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GorillaScoreboardTotalUpdater___c::*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaScoreboardTotalUpdater___c::_JoinedRoom_b__32_0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x59a16cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreboardTotalUpdater___c*>(),
                        {"<JoinedRoom>b__32_0", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GorillaScoreboardTotalUpdater___c::setStaticF___9(::GlobalNamespace::GorillaScoreboardTotalUpdater___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::GorillaScoreboardTotalUpdater___c*, "<>9", ::GlobalNamespace::GorillaScoreboardTotalUpdater___c*>(std::forward<::GlobalNamespace::GorillaScoreboardTotalUpdater___c*>(value));
}
inline ::GlobalNamespace::GorillaScoreboardTotalUpdater___c* GlobalNamespace::GorillaScoreboardTotalUpdater___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::GorillaScoreboardTotalUpdater___c*, "<>9", ::GlobalNamespace::GorillaScoreboardTotalUpdater___c*>();
}
inline void GlobalNamespace::GorillaScoreboardTotalUpdater___c::setStaticF___9__32_0(::System::Comparison_1<::GlobalNamespace::NetPlayer*>*  value)  {
::cordl_internals::setStaticField<::System::Comparison_1<::GlobalNamespace::NetPlayer*>*, "<>9__32_0", ::GlobalNamespace::GorillaScoreboardTotalUpdater___c*>(std::forward<::System::Comparison_1<::GlobalNamespace::NetPlayer*>*>(value));
}
inline ::System::Comparison_1<::GlobalNamespace::NetPlayer*>* GlobalNamespace::GorillaScoreboardTotalUpdater___c::getStaticF___9__32_0()  {
return ::cordl_internals::getStaticField<::System::Comparison_1<::GlobalNamespace::NetPlayer*>*, "<>9__32_0", ::GlobalNamespace::GorillaScoreboardTotalUpdater___c*>();
}
inline void GlobalNamespace::GorillaScoreboardTotalUpdater___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreboardTotalUpdater___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::GorillaScoreboardTotalUpdater___c::_JoinedRoom_b__32_0(::GlobalNamespace::NetPlayer*  x, ::GlobalNamespace::NetPlayer*  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreboardTotalUpdater___c*>(),
                        {"<JoinedRoom>b__32_0", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x, y);
}
inline ::GlobalNamespace::GorillaScoreboardTotalUpdater___c* GlobalNamespace::GorillaScoreboardTotalUpdater___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaScoreboardTotalUpdater___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaScoreboardTotalUpdater___c::GorillaScoreboardTotalUpdater___c()   {
}
