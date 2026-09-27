#pragma once
// IWYU pragma private; include "GlobalNamespace/DebugHudStats.hpp"
#include "GlobalNamespace/zzzz__DebugHudStats_State_impl.hpp"
#include "GlobalNamespace/zzzz__GroupJoinZoneAB_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerRecorder_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__DebugHudStats_def.hpp"
#include "GlobalNamespace/zzzz__DebugHudStats_State_def.hpp"
#include "GlobalNamespace/zzzz__DebugHudStats__updateLogTitle_d__54_def.hpp"
#include "GlobalNamespace/zzzz__ZoneData_def.hpp"
#include "GorillaUtil/zzzz__StringTable_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/zzzz__LogType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DebugHudStats.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::DebugHudStats> (*)()>(&::GlobalNamespace::DebugHudStats::get_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5b0407c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugHudStats*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugHudStats.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DebugHudStats::*)()>(&::GlobalNamespace::DebugHudStats::Awake)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5b040d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugHudStats*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugHudStats.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DebugHudStats::*)()>(&::GlobalNamespace::DebugHudStats::OnDestroy)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5b0429c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugHudStats*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugHudStats.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DebugHudStats::*)()>(&::GlobalNamespace::DebugHudStats::LateUpdate)> {
  constexpr static std::size_t size = 0x1d18;
  constexpr static std::size_t addrs = 0x5b04398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugHudStats*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugHudStats.ChangeTOD
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DebugHudStats::*)(int32_t)>(&::GlobalNamespace::DebugHudStats::ChangeTOD)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5b060b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugHudStats*>(),
                        {"ChangeTOD", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugHudStats.ChangeWeather
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DebugHudStats::*)(int32_t)>(&::GlobalNamespace::DebugHudStats::ChangeWeather)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5b06254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugHudStats*>(),
                        {"ChangeWeather", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugHudStats.NextState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DebugHudStats::*)(bool)>(&::GlobalNamespace::DebugHudStats::NextState)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x5b06414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugHudStats*>(),
                        {"NextState", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugHudStats.DisplayLog
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DebugHudStats::*)(::System::Collections::Generic::List_1<::StringW>*)>(&::GlobalNamespace::DebugHudStats::DisplayLog)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5b06738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugHudStats*>(),
                        {"DisplayLog", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugHudStats.updateLogTitle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DebugHudStats::*)()>(&::GlobalNamespace::DebugHudStats::updateLogTitle)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5b0636c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugHudStats*>(),
                        {"updateLogTitle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugHudStats.logTitleFromState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::DebugHudStats::*)(::GlobalNamespace::DebugHudStats_State)>(&::GlobalNamespace::DebugHudStats::logTitleFromState)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5b06878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugHudStats*>(),
                        {"logTitleFromState", {}, {::i2c::type_of<::GlobalNamespace::DebugHudStats_State>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugHudStats.colorFromState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::DebugHudStats::*)(::GlobalNamespace::DebugHudStats_State)>(&::GlobalNamespace::DebugHudStats::colorFromState)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5b06918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugHudStats*>(),
                        {"colorFromState", {}, {::i2c::type_of<::GlobalNamespace::DebugHudStats_State>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugHudStats.OnPlayerSwam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DebugHudStats::*)(float_t, float_t)>(&::GlobalNamespace::DebugHudStats::OnPlayerSwam)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b069c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugHudStats*>(),
                        {"OnPlayerSwam", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugHudStats.OnPlayerMoved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DebugHudStats::*)(float_t, float_t)>(&::GlobalNamespace::DebugHudStats::OnPlayerMoved)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b069e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugHudStats*>(),
                        {"OnPlayerMoved", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugHudStats.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DebugHudStats::*)()>(&::GlobalNamespace::DebugHudStats::OnEnable)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x5b06a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugHudStats*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugHudStats.TDValueRetrieved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DebugHudStats::*)(::StringW, ::StringW)>(&::GlobalNamespace::DebugHudStats::TDValueRetrieved)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5b06c48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugHudStats*>(),
                        {"TDValueRetrieved", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugHudStats.TDCachedValueRetrieved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DebugHudStats::*)(::StringW, ::StringW)>(&::GlobalNamespace::DebugHudStats::TDCachedValueRetrieved)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5b06d9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugHudStats*>(),
                        {"TDCachedValueRetrieved", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugHudStats.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DebugHudStats::*)()>(&::GlobalNamespace::DebugHudStats::OnDisable)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x5b06ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugHudStats*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugHudStats.LogMessageReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DebugHudStats::*)(::StringW, ::StringW, ::UnityEngine::LogType)>(&::GlobalNamespace::DebugHudStats::LogMessageReceived)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x5b07124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugHudStats*>(),
                        {"LogMessageReceived", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugHudStats.UpdateLog
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DebugHudStats::*)()>(&::GlobalNamespace::DebugHudStats::UpdateLog)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5b066fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugHudStats*>(),
                        {"UpdateLog", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugHudStats.getColorStringFromLogType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::DebugHudStats::*)(::UnityEngine::LogType)>(&::GlobalNamespace::DebugHudStats::getColorStringFromLogType)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b073c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugHudStats*>(),
                        {"getColorStringFromLogType", {}, {::i2c::type_of<::UnityEngine::LogType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugHudStats.OnZoneChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DebugHudStats::*)(::ArrayW<::GlobalNamespace::ZoneData*>)>(&::GlobalNamespace::DebugHudStats::OnZoneChanged)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5b07438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugHudStats*>(),
                        {"OnZoneChanged", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::ZoneData*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugHudStats._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DebugHudStats::*)()>(&::GlobalNamespace::DebugHudStats::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5b07564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugHudStats*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::DebugHudStats::__cordl_internal_get_text()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___text;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::DebugHudStats::__cordl_internal_get_text() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___text;
}
constexpr void GlobalNamespace::DebugHudStats::__cordl_internal_set_text(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___text = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::DebugHudStats::__cordl_internal_get_logging()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logging;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::DebugHudStats::__cordl_internal_get_logging() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logging;
}
constexpr void GlobalNamespace::DebugHudStats::__cordl_internal_set_logging(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logging = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::DebugHudStats::__cordl_internal_get_logPage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logPage;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::DebugHudStats::__cordl_internal_get_logPage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logPage;
}
constexpr void GlobalNamespace::DebugHudStats::__cordl_internal_set_logPage(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logPage = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::DebugHudStats::__cordl_internal_get_fpsWarning()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fpsWarning;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::DebugHudStats::__cordl_internal_get_fpsWarning() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fpsWarning;
}
constexpr void GlobalNamespace::DebugHudStats::__cordl_internal_set_fpsWarning(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fpsWarning = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::DebugHudStats::__cordl_internal_get_dismiss()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dismiss;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::DebugHudStats::__cordl_internal_get_dismiss() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dismiss;
}
constexpr void GlobalNamespace::DebugHudStats::__cordl_internal_set_dismiss(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dismiss = value;
}
constexpr float_t& GlobalNamespace::DebugHudStats::__cordl_internal_get_delayUpdateRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delayUpdateRate;
}
constexpr float_t const& GlobalNamespace::DebugHudStats::__cordl_internal_get_delayUpdateRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delayUpdateRate;
}
constexpr void GlobalNamespace::DebugHudStats::__cordl_internal_set_delayUpdateRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___delayUpdateRate = value;
}
constexpr float_t& GlobalNamespace::DebugHudStats::__cordl_internal_get_updateTimer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateTimer;
}
constexpr float_t const& GlobalNamespace::DebugHudStats::__cordl_internal_get_updateTimer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateTimer;
}
constexpr void GlobalNamespace::DebugHudStats::__cordl_internal_set_updateTimer(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___updateTimer = value;
}
constexpr float_t& GlobalNamespace::DebugHudStats::__cordl_internal_get_sessionAnytrackingLost()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionAnytrackingLost;
}
constexpr float_t const& GlobalNamespace::DebugHudStats::__cordl_internal_get_sessionAnytrackingLost() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionAnytrackingLost;
}
constexpr void GlobalNamespace::DebugHudStats::__cordl_internal_set_sessionAnytrackingLost(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sessionAnytrackingLost = value;
}
constexpr float_t& GlobalNamespace::DebugHudStats::__cordl_internal_get_last30SecondsTrackingLost()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___last30SecondsTrackingLost;
}
constexpr float_t const& GlobalNamespace::DebugHudStats::__cordl_internal_get_last30SecondsTrackingLost() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___last30SecondsTrackingLost;
}
constexpr void GlobalNamespace::DebugHudStats::__cordl_internal_set_last30SecondsTrackingLost(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___last30SecondsTrackingLost = value;
}
constexpr float_t& GlobalNamespace::DebugHudStats::__cordl_internal_get_firstAwake()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firstAwake;
}
constexpr float_t const& GlobalNamespace::DebugHudStats::__cordl_internal_get_firstAwake() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firstAwake;
}
constexpr void GlobalNamespace::DebugHudStats::__cordl_internal_set_firstAwake(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___firstAwake = value;
}
constexpr bool& GlobalNamespace::DebugHudStats::__cordl_internal_get_leftHandTracked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandTracked;
}
constexpr bool const& GlobalNamespace::DebugHudStats::__cordl_internal_get_leftHandTracked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandTracked;
}
constexpr void GlobalNamespace::DebugHudStats::__cordl_internal_set_leftHandTracked(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftHandTracked = value;
}
constexpr bool& GlobalNamespace::DebugHudStats::__cordl_internal_get_rightHandTracked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandTracked;
}
constexpr bool const& GlobalNamespace::DebugHudStats::__cordl_internal_get_rightHandTracked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandTracked;
}
constexpr void GlobalNamespace::DebugHudStats::__cordl_internal_set_rightHandTracked(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightHandTracked = value;
}
constexpr ::System::Text::StringBuilder*& GlobalNamespace::DebugHudStats::__cordl_internal_get_builder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___builder;
}
constexpr ::System::Text::StringBuilder* const& GlobalNamespace::DebugHudStats::__cordl_internal_get_builder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___builder;
}
constexpr void GlobalNamespace::DebugHudStats::__cordl_internal_set_builder(::System::Text::StringBuilder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___builder = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::DebugHudStats::__cordl_internal_get_averagedVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___averagedVelocity;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::DebugHudStats::__cordl_internal_get_averagedVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___averagedVelocity;
}
constexpr void GlobalNamespace::DebugHudStats::__cordl_internal_set_averagedVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___averagedVelocity = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::DebugHudStats::__cordl_internal_get_groundVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groundVelocity;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::DebugHudStats::__cordl_internal_get_groundVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groundVelocity;
}
constexpr void GlobalNamespace::DebugHudStats::__cordl_internal_set_groundVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___groundVelocity = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::DebugHudStats::__cordl_internal_get_centerHeadPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___centerHeadPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::DebugHudStats::__cordl_internal_get_centerHeadPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___centerHeadPos;
}
constexpr void GlobalNamespace::DebugHudStats::__cordl_internal_set_centerHeadPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___centerHeadPos = value;
}
constexpr float_t& GlobalNamespace::DebugHudStats::__cordl_internal_get_distanceMoved()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distanceMoved;
}
constexpr float_t const& GlobalNamespace::DebugHudStats::__cordl_internal_get_distanceMoved() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distanceMoved;
}
constexpr void GlobalNamespace::DebugHudStats::__cordl_internal_set_distanceMoved(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___distanceMoved = value;
}
constexpr float_t& GlobalNamespace::DebugHudStats::__cordl_internal_get_distanceSwam()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distanceSwam;
}
constexpr float_t const& GlobalNamespace::DebugHudStats::__cordl_internal_get_distanceSwam() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distanceSwam;
}
constexpr void GlobalNamespace::DebugHudStats::__cordl_internal_set_distanceSwam(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___distanceSwam = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::DebugHudStats::__cordl_internal_get_logMessage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logMessage;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::DebugHudStats::__cordl_internal_get_logMessage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logMessage;
}
constexpr void GlobalNamespace::DebugHudStats::__cordl_internal_set_logMessage(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logMessage = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::DebugHudStats::__cordl_internal_get_logError()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logError;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::DebugHudStats::__cordl_internal_get_logError() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logError;
}
constexpr void GlobalNamespace::DebugHudStats::__cordl_internal_set_logError(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logError = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::DebugHudStats::__cordl_internal_get_logTD()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logTD;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::DebugHudStats::__cordl_internal_get_logTD() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logTD;
}
constexpr void GlobalNamespace::DebugHudStats::__cordl_internal_set_logTD(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logTD = value;
}
constexpr bool& GlobalNamespace::DebugHudStats::__cordl_internal_get_buttonDown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonDown;
}
constexpr bool const& GlobalNamespace::DebugHudStats::__cordl_internal_get_buttonDown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonDown;
}
constexpr void GlobalNamespace::DebugHudStats::__cordl_internal_set_buttonDown(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonDown = value;
}
constexpr bool& GlobalNamespace::DebugHudStats::__cordl_internal_get_buttonDownBack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonDownBack;
}
constexpr bool const& GlobalNamespace::DebugHudStats::__cordl_internal_get_buttonDownBack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonDownBack;
}
constexpr void GlobalNamespace::DebugHudStats::__cordl_internal_set_buttonDownBack(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonDownBack = value;
}
constexpr bool& GlobalNamespace::DebugHudStats::__cordl_internal_get_spoofIds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spoofIds;
}
constexpr bool const& GlobalNamespace::DebugHudStats::__cordl_internal_get_spoofIds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spoofIds;
}
constexpr void GlobalNamespace::DebugHudStats::__cordl_internal_set_spoofIds(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spoofIds = value;
}
constexpr int32_t& GlobalNamespace::DebugHudStats::__cordl_internal_get_lowFps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lowFps;
}
constexpr int32_t const& GlobalNamespace::DebugHudStats::__cordl_internal_get_lowFps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lowFps;
}
constexpr void GlobalNamespace::DebugHudStats::__cordl_internal_set_lowFps(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lowFps = value;
}
constexpr ::StringW& GlobalNamespace::DebugHudStats::__cordl_internal_get_zones()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zones;
}
constexpr ::StringW const& GlobalNamespace::DebugHudStats::__cordl_internal_get_zones() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zones;
}
constexpr void GlobalNamespace::DebugHudStats::__cordl_internal_set_zones(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zones = value;
}
constexpr ::GlobalNamespace::GroupJoinZoneAB& GlobalNamespace::DebugHudStats::__cordl_internal_get_lastGroupJoinZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastGroupJoinZone;
}
constexpr ::GlobalNamespace::GroupJoinZoneAB const& GlobalNamespace::DebugHudStats::__cordl_internal_get_lastGroupJoinZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastGroupJoinZone;
}
constexpr void GlobalNamespace::DebugHudStats::__cordl_internal_set_lastGroupJoinZone(::GlobalNamespace::GroupJoinZoneAB  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastGroupJoinZone = value;
}
constexpr ::GlobalNamespace::DebugHudStats_State& GlobalNamespace::DebugHudStats::__cordl_internal_get_currentState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr ::GlobalNamespace::DebugHudStats_State const& GlobalNamespace::DebugHudStats::__cordl_internal_get_currentState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr void GlobalNamespace::DebugHudStats::__cordl_internal_set_currentState(::GlobalNamespace::DebugHudStats_State  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentState = value;
}
constexpr ::Unity::Profiling::ProfilerRecorder& GlobalNamespace::DebugHudStats::__cordl_internal_get_drawCallsRecorder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drawCallsRecorder;
}
constexpr ::Unity::Profiling::ProfilerRecorder const& GlobalNamespace::DebugHudStats::__cordl_internal_get_drawCallsRecorder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drawCallsRecorder;
}
constexpr void GlobalNamespace::DebugHudStats::__cordl_internal_set_drawCallsRecorder(::Unity::Profiling::ProfilerRecorder  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___drawCallsRecorder = value;
}
constexpr ::Unity::Profiling::ProfilerRecorder& GlobalNamespace::DebugHudStats::__cordl_internal_get_trisRecorder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trisRecorder;
}
constexpr ::Unity::Profiling::ProfilerRecorder const& GlobalNamespace::DebugHudStats::__cordl_internal_get_trisRecorder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trisRecorder;
}
constexpr void GlobalNamespace::DebugHudStats::__cordl_internal_set_trisRecorder(::Unity::Profiling::ProfilerRecorder  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trisRecorder = value;
}
constexpr ::StringW& GlobalNamespace::DebugHudStats::__cordl_internal_get_pLog()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pLog;
}
constexpr ::StringW const& GlobalNamespace::DebugHudStats::__cordl_internal_get_pLog() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pLog;
}
constexpr void GlobalNamespace::DebugHudStats::__cordl_internal_set_pLog(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pLog = value;
}
constexpr bool& GlobalNamespace::DebugHudStats::__cordl_internal_get_button1Down()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___button1Down;
}
constexpr bool const& GlobalNamespace::DebugHudStats::__cordl_internal_get_button1Down() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___button1Down;
}
constexpr void GlobalNamespace::DebugHudStats::__cordl_internal_set_button1Down(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___button1Down = value;
}
constexpr bool& GlobalNamespace::DebugHudStats::__cordl_internal_get_button2Down()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___button2Down;
}
constexpr bool const& GlobalNamespace::DebugHudStats::__cordl_internal_get_button2Down() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___button2Down;
}
constexpr void GlobalNamespace::DebugHudStats::__cordl_internal_set_button2Down(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___button2Down = value;
}
constexpr bool& GlobalNamespace::DebugHudStats::__cordl_internal_get_button3Down()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___button3Down;
}
constexpr bool const& GlobalNamespace::DebugHudStats::__cordl_internal_get_button3Down() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___button3Down;
}
constexpr void GlobalNamespace::DebugHudStats::__cordl_internal_set_button3Down(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___button3Down = value;
}
constexpr bool& GlobalNamespace::DebugHudStats::__cordl_internal_get_button5Down()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___button5Down;
}
constexpr bool const& GlobalNamespace::DebugHudStats::__cordl_internal_get_button5Down() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___button5Down;
}
constexpr void GlobalNamespace::DebugHudStats::__cordl_internal_set_button5Down(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___button5Down = value;
}
constexpr bool& GlobalNamespace::DebugHudStats::__cordl_internal_get_button6Down()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___button6Down;
}
constexpr bool const& GlobalNamespace::DebugHudStats::__cordl_internal_get_button6Down() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___button6Down;
}
constexpr void GlobalNamespace::DebugHudStats::__cordl_internal_set_button6Down(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___button6Down = value;
}
constexpr bool& GlobalNamespace::DebugHudStats::__cordl_internal_get_button7Down()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___button7Down;
}
constexpr bool const& GlobalNamespace::DebugHudStats::__cordl_internal_get_button7Down() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___button7Down;
}
constexpr void GlobalNamespace::DebugHudStats::__cordl_internal_set_button7Down(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___button7Down = value;
}
constexpr bool& GlobalNamespace::DebugHudStats::__cordl_internal_get_button8Down()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___button8Down;
}
constexpr bool const& GlobalNamespace::DebugHudStats::__cordl_internal_get_button8Down() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___button8Down;
}
constexpr void GlobalNamespace::DebugHudStats::__cordl_internal_set_button8Down(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___button8Down = value;
}
constexpr ::UnityW<::GorillaUtil::StringTable>& GlobalNamespace::DebugHudStats::__cordl_internal_get_betaTitleDataOveride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___betaTitleDataOveride;
}
constexpr ::UnityW<::GorillaUtil::StringTable> const& GlobalNamespace::DebugHudStats::__cordl_internal_get_betaTitleDataOveride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___betaTitleDataOveride;
}
constexpr void GlobalNamespace::DebugHudStats::__cordl_internal_set_betaTitleDataOveride(::UnityW<::GorillaUtil::StringTable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___betaTitleDataOveride = value;
}
constexpr ::System::Array*& GlobalNamespace::DebugHudStats::__cordl_internal_get_fixedWeathers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fixedWeathers;
}
constexpr ::System::Array* const& GlobalNamespace::DebugHudStats::__cordl_internal_get_fixedWeathers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fixedWeathers;
}
constexpr void GlobalNamespace::DebugHudStats::__cordl_internal_set_fixedWeathers(::System::Array*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fixedWeathers = value;
}
constexpr int32_t& GlobalNamespace::DebugHudStats::__cordl_internal_get_fixedWeatherIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fixedWeatherIndex;
}
constexpr int32_t const& GlobalNamespace::DebugHudStats::__cordl_internal_get_fixedWeatherIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fixedWeatherIndex;
}
constexpr void GlobalNamespace::DebugHudStats::__cordl_internal_set_fixedWeatherIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fixedWeatherIndex = value;
}
constexpr float_t& GlobalNamespace::DebugHudStats::__cordl_internal_get_btnDownTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___btnDownTime;
}
constexpr float_t const& GlobalNamespace::DebugHudStats::__cordl_internal_get_btnDownTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___btnDownTime;
}
constexpr void GlobalNamespace::DebugHudStats::__cordl_internal_set_btnDownTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___btnDownTime = value;
}
inline void GlobalNamespace::DebugHudStats::setStaticF_FPS_THRESHOLD(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "FPS_THRESHOLD", ::GlobalNamespace::DebugHudStats*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::DebugHudStats::getStaticF_FPS_THRESHOLD()  {
return ::cordl_internals::getStaticField<int32_t, "FPS_THRESHOLD", ::GlobalNamespace::DebugHudStats*>();
}
inline void GlobalNamespace::DebugHudStats::setStaticF__instance(::UnityW<::GlobalNamespace::DebugHudStats>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::DebugHudStats>, "_instance", ::GlobalNamespace::DebugHudStats*>(std::forward<::UnityW<::GlobalNamespace::DebugHudStats>>(value));
}
inline ::UnityW<::GlobalNamespace::DebugHudStats> GlobalNamespace::DebugHudStats::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::DebugHudStats>, "_instance", ::GlobalNamespace::DebugHudStats*>();
}
inline ::UnityW<::GlobalNamespace::DebugHudStats> GlobalNamespace::DebugHudStats::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugHudStats*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::DebugHudStats>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::DebugHudStats::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugHudStats*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DebugHudStats::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugHudStats*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DebugHudStats::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugHudStats*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DebugHudStats::ChangeTOD(int32_t  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugHudStats*>(),
                        {"ChangeTOD", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, v);
}
inline void GlobalNamespace::DebugHudStats::ChangeWeather(int32_t  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugHudStats*>(),
                        {"ChangeWeather", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, v);
}
inline void GlobalNamespace::DebugHudStats::NextState(bool  fwd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugHudStats*>(),
                        {"NextState", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fwd);
}
inline void GlobalNamespace::DebugHudStats::DisplayLog(::System::Collections::Generic::List_1<::StringW>*  log)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugHudStats*>(),
                        {"DisplayLog", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, log);
}
inline void GlobalNamespace::DebugHudStats::updateLogTitle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugHudStats*>(),
                        {"updateLogTitle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::DebugHudStats::logTitleFromState(::GlobalNamespace::DebugHudStats_State  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugHudStats*>(),
                        {"logTitleFromState", {}, {::i2c::type_of<::GlobalNamespace::DebugHudStats_State>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, s);
}
inline ::StringW GlobalNamespace::DebugHudStats::colorFromState(::GlobalNamespace::DebugHudStats_State  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugHudStats*>(),
                        {"colorFromState", {}, {::i2c::type_of<::GlobalNamespace::DebugHudStats_State>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, s);
}
inline void GlobalNamespace::DebugHudStats::OnPlayerSwam(float_t  distance, float_t  speed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugHudStats*>(),
                        {"OnPlayerSwam", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, distance, speed);
}
inline void GlobalNamespace::DebugHudStats::OnPlayerMoved(float_t  distance, float_t  speed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugHudStats*>(),
                        {"OnPlayerMoved", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, distance, speed);
}
inline void GlobalNamespace::DebugHudStats::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugHudStats*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DebugHudStats::TDValueRetrieved(::StringW  arg1, ::StringW  arg2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugHudStats*>(),
                        {"TDValueRetrieved", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arg1, arg2);
}
inline void GlobalNamespace::DebugHudStats::TDCachedValueRetrieved(::StringW  arg1, ::StringW  arg2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugHudStats*>(),
                        {"TDCachedValueRetrieved", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arg1, arg2);
}
inline void GlobalNamespace::DebugHudStats::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugHudStats*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DebugHudStats::LogMessageReceived(::StringW  condition, ::StringW  stackTrace, ::UnityEngine::LogType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugHudStats*>(),
                        {"LogMessageReceived", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, condition, stackTrace, type);
}
inline void GlobalNamespace::DebugHudStats::UpdateLog()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugHudStats*>(),
                        {"UpdateLog", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::DebugHudStats::getColorStringFromLogType(::UnityEngine::LogType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugHudStats*>(),
                        {"getColorStringFromLogType", {}, {::i2c::type_of<::UnityEngine::LogType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, type);
}
inline void GlobalNamespace::DebugHudStats::OnZoneChanged(::ArrayW<::GlobalNamespace::ZoneData*>  zoneData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugHudStats*>(),
                        {"OnZoneChanged", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::ZoneData*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, zoneData);
}
inline void GlobalNamespace::DebugHudStats::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugHudStats*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DebugHudStats* GlobalNamespace::DebugHudStats::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DebugHudStats*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DebugHudStats::DebugHudStats()   {
}
