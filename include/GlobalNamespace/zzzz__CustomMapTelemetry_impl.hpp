#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomMapTelemetry.hpp"
#include "GlobalNamespace/zzzz__GTMapLoadSource_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerRecorder_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CustomMapTelemetry_def.hpp"
#include "GlobalNamespace/zzzz__CustomMapTelemetry_def.hpp"
#include "GlobalNamespace/zzzz__GTMapLoadSource_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "Modio/Mods/zzzz__Mod_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CustomMapTelemetry.get_IsActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::CustomMapTelemetry::get_IsActive)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x59befec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapTelemetry*>(),
                        {"get_IsActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapTelemetry.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapTelemetry::*)()>(&::GlobalNamespace::CustomMapTelemetry::Awake)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x59bf070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapTelemetry*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapTelemetry.get_CurrentMapIdString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::GlobalNamespace::CustomMapTelemetry::get_CurrentMapIdString)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x59bf1c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapTelemetry*>(),
                        {"get_CurrentMapIdString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapTelemetry.get_CurrentMapSourceString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::GlobalNamespace::CustomMapTelemetry::get_CurrentMapSourceString)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x59bf298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapTelemetry*>(),
                        {"get_CurrentMapSourceString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapTelemetry.SetLoadingMapInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Modio::Mods::Mod*, ::GlobalNamespace::GTMapLoadSource)>(&::GlobalNamespace::CustomMapTelemetry::SetLoadingMapInfo)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x59bf308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapTelemetry*>(),
                        {"SetLoadingMapInfo", {}, {::i2c::type_of<::Modio::Mods::Mod*>(), ::i2c::type_of<::GlobalNamespace::GTMapLoadSource>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapTelemetry.ClearLoadingMapInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::CustomMapTelemetry::ClearLoadingMapInfo)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x59bf384;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapTelemetry*>(),
                        {"ClearLoadingMapInfo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapTelemetry.OnMapLoadCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::CustomMapTelemetry::OnMapLoadCompleted)> {
  constexpr static std::size_t size = 0x4e4;
  constexpr static std::size_t addrs = 0x59bf468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapTelemetry*>(),
                        {"OnMapLoadCompleted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapTelemetry.OnMapUnloaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::CustomMapTelemetry::OnMapUnloaded)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x59be6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapTelemetry*>(),
                        {"OnMapUnloaded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapTelemetry.OnPlayerEnteredMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::CustomMapTelemetry::OnPlayerEnteredMap)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x59bfa04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapTelemetry*>(),
                        {"OnPlayerEnteredMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapTelemetry.OnPlayerLeftMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::CustomMapTelemetry::OnPlayerLeftMap)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x59bf94c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapTelemetry*>(),
                        {"OnPlayerLeftMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapTelemetry.OnPlayerJoinedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::CustomMapTelemetry::OnPlayerJoinedRoom)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x59bfb94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapTelemetry*>(),
                        {"OnPlayerJoinedRoom", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapTelemetry.OnPlayerLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::CustomMapTelemetry::OnPlayerLeftRoom)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x59bfc38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapTelemetry*>(),
                        {"OnPlayerLeftRoom", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapTelemetry.StartMapTracking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::CustomMapTelemetry::StartMapTracking)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x59bfcd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapTelemetry*>(),
                        {"StartMapTracking", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapTelemetry.EndMapTracking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::CustomMapTelemetry::EndMapTracking)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x59be6f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapTelemetry*>(),
                        {"EndMapTracking", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapTelemetry.StartMetricsCapture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::CustomMapTelemetry::StartMetricsCapture)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x59c0080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapTelemetry*>(),
                        {"StartMetricsCapture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapTelemetry.EndMetricsCapture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::CustomMapTelemetry::EndMetricsCapture)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x59c0484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapTelemetry*>(),
                        {"EndMetricsCapture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapTelemetry.StartPerfCapture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::CustomMapTelemetry::StartPerfCapture)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x59c030c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapTelemetry*>(),
                        {"StartPerfCapture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapTelemetry.EndPerfCapture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::CustomMapTelemetry::EndPerfCapture)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x59c08dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapTelemetry*>(),
                        {"EndPerfCapture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapTelemetry.CaptureMapPerformance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::CustomMapTelemetry::*)()>(&::GlobalNamespace::CustomMapTelemetry::CaptureMapPerformance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x59c0c8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapTelemetry*>(),
                        {"CaptureMapPerformance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapTelemetry.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapTelemetry::*)()>(&::GlobalNamespace::CustomMapTelemetry::OnDestroy)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x59c0d0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapTelemetry*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapTelemetry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapTelemetry::*)()>(&::GlobalNamespace::CustomMapTelemetry::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59c0d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapTelemetry*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Coroutine*& GlobalNamespace::CustomMapTelemetry::__cordl_internal_get_perfCaptureCoroutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___perfCaptureCoroutine;
}
constexpr ::UnityEngine::Coroutine* const& GlobalNamespace::CustomMapTelemetry::__cordl_internal_get_perfCaptureCoroutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___perfCaptureCoroutine;
}
constexpr void GlobalNamespace::CustomMapTelemetry::__cordl_internal_set_perfCaptureCoroutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___perfCaptureCoroutine = value;
}
inline void GlobalNamespace::CustomMapTelemetry::setStaticF_instance(::UnityW<::GlobalNamespace::CustomMapTelemetry>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::CustomMapTelemetry>, "instance", ::GlobalNamespace::CustomMapTelemetry*>(std::forward<::UnityW<::GlobalNamespace::CustomMapTelemetry>>(value));
}
inline ::UnityW<::GlobalNamespace::CustomMapTelemetry> GlobalNamespace::CustomMapTelemetry::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::CustomMapTelemetry>, "instance", ::GlobalNamespace::CustomMapTelemetry*>();
}
inline void GlobalNamespace::CustomMapTelemetry::setStaticF_mapName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "mapName", ::GlobalNamespace::CustomMapTelemetry*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::CustomMapTelemetry::getStaticF_mapName()  {
return ::cordl_internals::getStaticField<::StringW, "mapName", ::GlobalNamespace::CustomMapTelemetry*>();
}
inline void GlobalNamespace::CustomMapTelemetry::setStaticF_mapModId(int64_t  value)  {
::cordl_internals::setStaticField<int64_t, "mapModId", ::GlobalNamespace::CustomMapTelemetry*>(std::forward<int64_t>(value));
}
inline int64_t GlobalNamespace::CustomMapTelemetry::getStaticF_mapModId()  {
return ::cordl_internals::getStaticField<int64_t, "mapModId", ::GlobalNamespace::CustomMapTelemetry*>();
}
inline void GlobalNamespace::CustomMapTelemetry::setStaticF_mapCreatorUsername(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "mapCreatorUsername", ::GlobalNamespace::CustomMapTelemetry*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::CustomMapTelemetry::getStaticF_mapCreatorUsername()  {
return ::cordl_internals::getStaticField<::StringW, "mapCreatorUsername", ::GlobalNamespace::CustomMapTelemetry*>();
}
inline void GlobalNamespace::CustomMapTelemetry::setStaticF_currentMapMod(::Modio::Mods::Mod*  value)  {
::cordl_internals::setStaticField<::Modio::Mods::Mod*, "currentMapMod", ::GlobalNamespace::CustomMapTelemetry*>(std::forward<::Modio::Mods::Mod*>(value));
}
inline ::Modio::Mods::Mod* GlobalNamespace::CustomMapTelemetry::getStaticF_currentMapMod()  {
return ::cordl_internals::getStaticField<::Modio::Mods::Mod*, "currentMapMod", ::GlobalNamespace::CustomMapTelemetry*>();
}
inline void GlobalNamespace::CustomMapTelemetry::setStaticF_currentMapSource(::GlobalNamespace::GTMapLoadSource  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::GTMapLoadSource, "currentMapSource", ::GlobalNamespace::CustomMapTelemetry*>(std::forward<::GlobalNamespace::GTMapLoadSource>(value));
}
inline ::GlobalNamespace::GTMapLoadSource GlobalNamespace::CustomMapTelemetry::getStaticF_currentMapSource()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::GTMapLoadSource, "currentMapSource", ::GlobalNamespace::CustomMapTelemetry*>();
}
inline void GlobalNamespace::CustomMapTelemetry::setStaticF_playerInMap(bool  value)  {
::cordl_internals::setStaticField<bool, "playerInMap", ::GlobalNamespace::CustomMapTelemetry*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::CustomMapTelemetry::getStaticF_playerInMap()  {
return ::cordl_internals::getStaticField<bool, "playerInMap", ::GlobalNamespace::CustomMapTelemetry*>();
}
inline void GlobalNamespace::CustomMapTelemetry::setStaticF_enteredMapId(int64_t  value)  {
::cordl_internals::setStaticField<int64_t, "enteredMapId", ::GlobalNamespace::CustomMapTelemetry*>(std::forward<int64_t>(value));
}
inline int64_t GlobalNamespace::CustomMapTelemetry::getStaticF_enteredMapId()  {
return ::cordl_internals::getStaticField<int64_t, "enteredMapId", ::GlobalNamespace::CustomMapTelemetry*>();
}
inline void GlobalNamespace::CustomMapTelemetry::setStaticF_enteredMapSource(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "enteredMapSource", ::GlobalNamespace::CustomMapTelemetry*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::CustomMapTelemetry::getStaticF_enteredMapSource()  {
return ::cordl_internals::getStaticField<::StringW, "enteredMapSource", ::GlobalNamespace::CustomMapTelemetry*>();
}
inline void GlobalNamespace::CustomMapTelemetry::setStaticF_metricsCaptureStarted(bool  value)  {
::cordl_internals::setStaticField<bool, "metricsCaptureStarted", ::GlobalNamespace::CustomMapTelemetry*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::CustomMapTelemetry::getStaticF_metricsCaptureStarted()  {
return ::cordl_internals::getStaticField<bool, "metricsCaptureStarted", ::GlobalNamespace::CustomMapTelemetry*>();
}
inline void GlobalNamespace::CustomMapTelemetry::setStaticF_mapEnterTime(float_t  value)  {
::cordl_internals::setStaticField<float_t, "mapEnterTime", ::GlobalNamespace::CustomMapTelemetry*>(std::forward<float_t>(value));
}
inline float_t GlobalNamespace::CustomMapTelemetry::getStaticF_mapEnterTime()  {
return ::cordl_internals::getStaticField<float_t, "mapEnterTime", ::GlobalNamespace::CustomMapTelemetry*>();
}
inline void GlobalNamespace::CustomMapTelemetry::setStaticF_runningPlayerCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "runningPlayerCount", ::GlobalNamespace::CustomMapTelemetry*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::CustomMapTelemetry::getStaticF_runningPlayerCount()  {
return ::cordl_internals::getStaticField<int32_t, "runningPlayerCount", ::GlobalNamespace::CustomMapTelemetry*>();
}
inline void GlobalNamespace::CustomMapTelemetry::setStaticF_minPlayersInMap(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "minPlayersInMap", ::GlobalNamespace::CustomMapTelemetry*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::CustomMapTelemetry::getStaticF_minPlayersInMap()  {
return ::cordl_internals::getStaticField<int32_t, "minPlayersInMap", ::GlobalNamespace::CustomMapTelemetry*>();
}
inline void GlobalNamespace::CustomMapTelemetry::setStaticF_maxPlayersInMap(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "maxPlayersInMap", ::GlobalNamespace::CustomMapTelemetry*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::CustomMapTelemetry::getStaticF_maxPlayersInMap()  {
return ::cordl_internals::getStaticField<int32_t, "maxPlayersInMap", ::GlobalNamespace::CustomMapTelemetry*>();
}
inline void GlobalNamespace::CustomMapTelemetry::setStaticF_inPrivateRoom(bool  value)  {
::cordl_internals::setStaticField<bool, "inPrivateRoom", ::GlobalNamespace::CustomMapTelemetry*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::CustomMapTelemetry::getStaticF_inPrivateRoom()  {
return ::cordl_internals::getStaticField<bool, "inPrivateRoom", ::GlobalNamespace::CustomMapTelemetry*>();
}
inline void GlobalNamespace::CustomMapTelemetry::setStaticF_LowestFPS(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "LowestFPS", ::GlobalNamespace::CustomMapTelemetry*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::CustomMapTelemetry::getStaticF_LowestFPS()  {
return ::cordl_internals::getStaticField<int32_t, "LowestFPS", ::GlobalNamespace::CustomMapTelemetry*>();
}
inline void GlobalNamespace::CustomMapTelemetry::setStaticF_LowestFPSDrawCalls(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "LowestFPSDrawCalls", ::GlobalNamespace::CustomMapTelemetry*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::CustomMapTelemetry::getStaticF_LowestFPSDrawCalls()  {
return ::cordl_internals::getStaticField<int32_t, "LowestFPSDrawCalls", ::GlobalNamespace::CustomMapTelemetry*>();
}
inline void GlobalNamespace::CustomMapTelemetry::setStaticF_LowestFPSPlayerCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "LowestFPSPlayerCount", ::GlobalNamespace::CustomMapTelemetry*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::CustomMapTelemetry::getStaticF_LowestFPSPlayerCount()  {
return ::cordl_internals::getStaticField<int32_t, "LowestFPSPlayerCount", ::GlobalNamespace::CustomMapTelemetry*>();
}
inline void GlobalNamespace::CustomMapTelemetry::setStaticF_AverageFPS(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "AverageFPS", ::GlobalNamespace::CustomMapTelemetry*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::CustomMapTelemetry::getStaticF_AverageFPS()  {
return ::cordl_internals::getStaticField<int32_t, "AverageFPS", ::GlobalNamespace::CustomMapTelemetry*>();
}
inline void GlobalNamespace::CustomMapTelemetry::setStaticF_AverageDrawCalls(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "AverageDrawCalls", ::GlobalNamespace::CustomMapTelemetry*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::CustomMapTelemetry::getStaticF_AverageDrawCalls()  {
return ::cordl_internals::getStaticField<int32_t, "AverageDrawCalls", ::GlobalNamespace::CustomMapTelemetry*>();
}
inline void GlobalNamespace::CustomMapTelemetry::setStaticF_AveragePlayerCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "AveragePlayerCount", ::GlobalNamespace::CustomMapTelemetry*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::CustomMapTelemetry::getStaticF_AveragePlayerCount()  {
return ::cordl_internals::getStaticField<int32_t, "AveragePlayerCount", ::GlobalNamespace::CustomMapTelemetry*>();
}
inline void GlobalNamespace::CustomMapTelemetry::setStaticF_HighestFPS(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "HighestFPS", ::GlobalNamespace::CustomMapTelemetry*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::CustomMapTelemetry::getStaticF_HighestFPS()  {
return ::cordl_internals::getStaticField<int32_t, "HighestFPS", ::GlobalNamespace::CustomMapTelemetry*>();
}
inline void GlobalNamespace::CustomMapTelemetry::setStaticF_HighestFPSDrawCalls(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "HighestFPSDrawCalls", ::GlobalNamespace::CustomMapTelemetry*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::CustomMapTelemetry::getStaticF_HighestFPSDrawCalls()  {
return ::cordl_internals::getStaticField<int32_t, "HighestFPSDrawCalls", ::GlobalNamespace::CustomMapTelemetry*>();
}
inline void GlobalNamespace::CustomMapTelemetry::setStaticF_HighestFPSPlayerCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "HighestFPSPlayerCount", ::GlobalNamespace::CustomMapTelemetry*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::CustomMapTelemetry::getStaticF_HighestFPSPlayerCount()  {
return ::cordl_internals::getStaticField<int32_t, "HighestFPSPlayerCount", ::GlobalNamespace::CustomMapTelemetry*>();
}
inline void GlobalNamespace::CustomMapTelemetry::setStaticF_totalFPS(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "totalFPS", ::GlobalNamespace::CustomMapTelemetry*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::CustomMapTelemetry::getStaticF_totalFPS()  {
return ::cordl_internals::getStaticField<int32_t, "totalFPS", ::GlobalNamespace::CustomMapTelemetry*>();
}
inline void GlobalNamespace::CustomMapTelemetry::setStaticF_totalDrawCalls(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "totalDrawCalls", ::GlobalNamespace::CustomMapTelemetry*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::CustomMapTelemetry::getStaticF_totalDrawCalls()  {
return ::cordl_internals::getStaticField<int32_t, "totalDrawCalls", ::GlobalNamespace::CustomMapTelemetry*>();
}
inline void GlobalNamespace::CustomMapTelemetry::setStaticF_totalPlayerCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "totalPlayerCount", ::GlobalNamespace::CustomMapTelemetry*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::CustomMapTelemetry::getStaticF_totalPlayerCount()  {
return ::cordl_internals::getStaticField<int32_t, "totalPlayerCount", ::GlobalNamespace::CustomMapTelemetry*>();
}
inline void GlobalNamespace::CustomMapTelemetry::setStaticF_frameCounter(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "frameCounter", ::GlobalNamespace::CustomMapTelemetry*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::CustomMapTelemetry::getStaticF_frameCounter()  {
return ::cordl_internals::getStaticField<int32_t, "frameCounter", ::GlobalNamespace::CustomMapTelemetry*>();
}
inline void GlobalNamespace::CustomMapTelemetry::setStaticF_drawCallsRecorder(::Unity::Profiling::ProfilerRecorder  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerRecorder, "drawCallsRecorder", ::GlobalNamespace::CustomMapTelemetry*>(std::forward<::Unity::Profiling::ProfilerRecorder>(value));
}
inline ::Unity::Profiling::ProfilerRecorder GlobalNamespace::CustomMapTelemetry::getStaticF_drawCallsRecorder()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerRecorder, "drawCallsRecorder", ::GlobalNamespace::CustomMapTelemetry*>();
}
inline void GlobalNamespace::CustomMapTelemetry::setStaticF_perfCaptureStarted(bool  value)  {
::cordl_internals::setStaticField<bool, "perfCaptureStarted", ::GlobalNamespace::CustomMapTelemetry*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::CustomMapTelemetry::getStaticF_perfCaptureStarted()  {
return ::cordl_internals::getStaticField<bool, "perfCaptureStarted", ::GlobalNamespace::CustomMapTelemetry*>();
}
inline bool GlobalNamespace::CustomMapTelemetry::get_IsActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapTelemetry*>(),
                        {"get_IsActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GlobalNamespace::CustomMapTelemetry::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapTelemetry*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::CustomMapTelemetry::get_CurrentMapIdString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapTelemetry*>(),
                        {"get_CurrentMapIdString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW GlobalNamespace::CustomMapTelemetry::get_CurrentMapSourceString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapTelemetry*>(),
                        {"get_CurrentMapSourceString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void GlobalNamespace::CustomMapTelemetry::SetLoadingMapInfo(::Modio::Mods::Mod*  mod, ::GlobalNamespace::GTMapLoadSource  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapTelemetry*>(),
                        {"SetLoadingMapInfo", {}, {::i2c::type_of<::Modio::Mods::Mod*>(), ::i2c::type_of<::GlobalNamespace::GTMapLoadSource>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mod, source);
}
inline void GlobalNamespace::CustomMapTelemetry::ClearLoadingMapInfo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapTelemetry*>(),
                        {"ClearLoadingMapInfo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::CustomMapTelemetry::OnMapLoadCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapTelemetry*>(),
                        {"OnMapLoadCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::CustomMapTelemetry::OnMapUnloaded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapTelemetry*>(),
                        {"OnMapUnloaded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::CustomMapTelemetry::OnPlayerEnteredMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapTelemetry*>(),
                        {"OnPlayerEnteredMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::CustomMapTelemetry::OnPlayerLeftMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapTelemetry*>(),
                        {"OnPlayerLeftMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::CustomMapTelemetry::OnPlayerJoinedRoom(::GlobalNamespace::NetPlayer*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapTelemetry*>(),
                        {"OnPlayerJoinedRoom", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::CustomMapTelemetry::OnPlayerLeftRoom(::GlobalNamespace::NetPlayer*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapTelemetry*>(),
                        {"OnPlayerLeftRoom", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::CustomMapTelemetry::StartMapTracking()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapTelemetry*>(),
                        {"StartMapTracking", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::CustomMapTelemetry::EndMapTracking()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapTelemetry*>(),
                        {"EndMapTracking", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::CustomMapTelemetry::StartMetricsCapture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapTelemetry*>(),
                        {"StartMetricsCapture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::CustomMapTelemetry::EndMetricsCapture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapTelemetry*>(),
                        {"EndMetricsCapture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::CustomMapTelemetry::StartPerfCapture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapTelemetry*>(),
                        {"StartPerfCapture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::CustomMapTelemetry::EndPerfCapture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapTelemetry*>(),
                        {"EndPerfCapture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::CustomMapTelemetry::CaptureMapPerformance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapTelemetry*>(),
                        {"CaptureMapPerformance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapTelemetry::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapTelemetry*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapTelemetry::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapTelemetry*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CustomMapTelemetry* GlobalNamespace::CustomMapTelemetry::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CustomMapTelemetry*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomMapTelemetry::CustomMapTelemetry()   {
}
//  Writing Method size for method: ::GlobalNamespace::CustomMapTelemetry__CaptureMapPerformance_d__53._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapTelemetry__CaptureMapPerformance_d__53::*)(int32_t)>(&::GlobalNamespace::CustomMapTelemetry__CaptureMapPerformance_d__53::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x59c0ce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapTelemetry__CaptureMapPerformance_d__53*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapTelemetry__CaptureMapPerformance_d__53.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapTelemetry__CaptureMapPerformance_d__53::*)()>(&::GlobalNamespace::CustomMapTelemetry__CaptureMapPerformance_d__53::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59c0e0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapTelemetry__CaptureMapPerformance_d__53*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapTelemetry__CaptureMapPerformance_d__53.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CustomMapTelemetry__CaptureMapPerformance_d__53::*)()>(&::GlobalNamespace::CustomMapTelemetry__CaptureMapPerformance_d__53::MoveNext)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x59c0e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapTelemetry__CaptureMapPerformance_d__53*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapTelemetry__CaptureMapPerformance_d__53.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::CustomMapTelemetry__CaptureMapPerformance_d__53::*)()>(&::GlobalNamespace::CustomMapTelemetry__CaptureMapPerformance_d__53::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59c1140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapTelemetry__CaptureMapPerformance_d__53*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapTelemetry__CaptureMapPerformance_d__53.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapTelemetry__CaptureMapPerformance_d__53::*)()>(&::GlobalNamespace::CustomMapTelemetry__CaptureMapPerformance_d__53::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x59c1148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapTelemetry__CaptureMapPerformance_d__53*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapTelemetry__CaptureMapPerformance_d__53.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::CustomMapTelemetry__CaptureMapPerformance_d__53::*)()>(&::GlobalNamespace::CustomMapTelemetry__CaptureMapPerformance_d__53::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59c1180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapTelemetry__CaptureMapPerformance_d__53*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::CustomMapTelemetry__CaptureMapPerformance_d__53::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::CustomMapTelemetry__CaptureMapPerformance_d__53::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::CustomMapTelemetry__CaptureMapPerformance_d__53::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::CustomMapTelemetry__CaptureMapPerformance_d__53::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::CustomMapTelemetry__CaptureMapPerformance_d__53::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::CustomMapTelemetry__CaptureMapPerformance_d__53::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
inline void GlobalNamespace::CustomMapTelemetry__CaptureMapPerformance_d__53::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapTelemetry__CaptureMapPerformance_d__53*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::CustomMapTelemetry__CaptureMapPerformance_d__53::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapTelemetry__CaptureMapPerformance_d__53*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::CustomMapTelemetry__CaptureMapPerformance_d__53::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapTelemetry__CaptureMapPerformance_d__53*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::CustomMapTelemetry__CaptureMapPerformance_d__53::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapTelemetry__CaptureMapPerformance_d__53*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapTelemetry__CaptureMapPerformance_d__53::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapTelemetry__CaptureMapPerformance_d__53*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::CustomMapTelemetry__CaptureMapPerformance_d__53::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapTelemetry__CaptureMapPerformance_d__53*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::CustomMapTelemetry__CaptureMapPerformance_d__53* GlobalNamespace::CustomMapTelemetry__CaptureMapPerformance_d__53::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CustomMapTelemetry__CaptureMapPerformance_d__53*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::CustomMapTelemetry__CaptureMapPerformance_d__53::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::CustomMapTelemetry__CaptureMapPerformance_d__53::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::CustomMapTelemetry__CaptureMapPerformance_d__53::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::CustomMapTelemetry__CaptureMapPerformance_d__53::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::CustomMapTelemetry__CaptureMapPerformance_d__53::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::CustomMapTelemetry__CaptureMapPerformance_d__53::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomMapTelemetry__CaptureMapPerformance_d__53::CustomMapTelemetry__CaptureMapPerformance_d__53()   {
}
