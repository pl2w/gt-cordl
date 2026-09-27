#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomMapTelemetry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GTMapLoadSource_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerRecorder_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CustomMapTelemetry)
namespace GlobalNamespace {
class CustomMapTelemetry__CaptureMapPerformance_d__53;
}
namespace GlobalNamespace {
struct GTMapLoadSource;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace Modio::Mods {
class Mod;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Coroutine;
}
// Forward declare root types
namespace GlobalNamespace {
class CustomMapTelemetry;
}
namespace GlobalNamespace {
class CustomMapTelemetry__CaptureMapPerformance_d__53;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CustomMapTelemetry*);
MARK_REF_T(::GlobalNamespace::CustomMapTelemetry__CaptureMapPerformance_d__53*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMapTelemetry*, "", "CustomMapTelemetry");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMapTelemetry__CaptureMapPerformance_d__53*, "", "CustomMapTelemetry/<CaptureMapPerformance>d__53");
// Dependencies GTMapLoadSource, Unity.Profiling.ProfilerRecorder, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomMapTelemetry
class CORDL_TYPE CustomMapTelemetry : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _CaptureMapPerformance_d__53 = ::GlobalNamespace::CustomMapTelemetry__CaptureMapPerformance_d__53;

/// @brief Field AverageDrawCalls, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_AverageDrawCalls, put=setStaticF_AverageDrawCalls)) int32_t  AverageDrawCalls;

/// @brief Field AverageFPS, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_AverageFPS, put=setStaticF_AverageFPS)) int32_t  AverageFPS;

/// @brief Field AveragePlayerCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_AveragePlayerCount, put=setStaticF_AveragePlayerCount)) int32_t  AveragePlayerCount;

/// @brief Field HighestFPS, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_HighestFPS, put=setStaticF_HighestFPS)) int32_t  HighestFPS;

/// @brief Field HighestFPSDrawCalls, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_HighestFPSDrawCalls, put=setStaticF_HighestFPSDrawCalls)) int32_t  HighestFPSDrawCalls;

/// @brief Field HighestFPSPlayerCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_HighestFPSPlayerCount, put=setStaticF_HighestFPSPlayerCount)) int32_t  HighestFPSPlayerCount;

/// @brief Field LowestFPS, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_LowestFPS, put=setStaticF_LowestFPS)) int32_t  LowestFPS;

/// @brief Field LowestFPSDrawCalls, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_LowestFPSDrawCalls, put=setStaticF_LowestFPSDrawCalls)) int32_t  LowestFPSDrawCalls;

/// @brief Field LowestFPSPlayerCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_LowestFPSPlayerCount, put=setStaticF_LowestFPSPlayerCount)) int32_t  LowestFPSPlayerCount;

/// @brief Field currentMapMod, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_currentMapMod, put=setStaticF_currentMapMod)) ::Modio::Mods::Mod*  currentMapMod;

/// @brief Field currentMapSource, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_currentMapSource, put=setStaticF_currentMapSource)) ::GlobalNamespace::GTMapLoadSource  currentMapSource;

/// @brief Field drawCallsRecorder, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_drawCallsRecorder, put=setStaticF_drawCallsRecorder)) ::Unity::Profiling::ProfilerRecorder  drawCallsRecorder;

/// @brief Field enteredMapId, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_enteredMapId, put=setStaticF_enteredMapId)) int64_t  enteredMapId;

/// @brief Field enteredMapSource, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_enteredMapSource, put=setStaticF_enteredMapSource)) ::StringW  enteredMapSource;

/// @brief Field frameCounter, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_frameCounter, put=setStaticF_frameCounter)) int32_t  frameCounter;

/// @brief Field inPrivateRoom, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_inPrivateRoom, put=setStaticF_inPrivateRoom)) bool  inPrivateRoom;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GlobalNamespace::CustomMapTelemetry>  instance;

/// @brief Field mapCreatorUsername, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_mapCreatorUsername, put=setStaticF_mapCreatorUsername)) ::StringW  mapCreatorUsername;

/// @brief Field mapEnterTime, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_mapEnterTime, put=setStaticF_mapEnterTime)) float_t  mapEnterTime;

/// @brief Field mapModId, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_mapModId, put=setStaticF_mapModId)) int64_t  mapModId;

/// @brief Field mapName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_mapName, put=setStaticF_mapName)) ::StringW  mapName;

/// @brief Field maxPlayersInMap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_maxPlayersInMap, put=setStaticF_maxPlayersInMap)) int32_t  maxPlayersInMap;

/// @brief Field metricsCaptureStarted, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_metricsCaptureStarted, put=setStaticF_metricsCaptureStarted)) bool  metricsCaptureStarted;

/// @brief Field minPlayersInMap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_minPlayersInMap, put=setStaticF_minPlayersInMap)) int32_t  minPlayersInMap;

/// @brief Field perfCaptureCoroutine, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_perfCaptureCoroutine, put=__cordl_internal_set_perfCaptureCoroutine)) ::UnityEngine::Coroutine*  perfCaptureCoroutine;

/// @brief Field perfCaptureStarted, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_perfCaptureStarted, put=setStaticF_perfCaptureStarted)) bool  perfCaptureStarted;

/// @brief Field playerInMap, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_playerInMap, put=setStaticF_playerInMap)) bool  playerInMap;

/// @brief Field runningPlayerCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_runningPlayerCount, put=setStaticF_runningPlayerCount)) int32_t  runningPlayerCount;

/// @brief Field totalDrawCalls, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_totalDrawCalls, put=setStaticF_totalDrawCalls)) int32_t  totalDrawCalls;

/// @brief Field totalFPS, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_totalFPS, put=setStaticF_totalFPS)) int32_t  totalFPS;

/// @brief Field totalPlayerCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_totalPlayerCount, put=setStaticF_totalPlayerCount)) int32_t  totalPlayerCount;

/// @brief Method Awake, addr 0x59bf070, size 0x158, virtual false, abstract: false, final false
inline void Awake() ;

/// [IteratorStateMachine(typeof(CustomMapTelemetry::<CaptureMapPerformance>d__53))]
/// @brief Method CaptureMapPerformance, addr 0x59c0c8c, size 0x58, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* CaptureMapPerformance() ;

/// @brief Method ClearLoadingMapInfo, addr 0x59bf384, size 0xe4, virtual false, abstract: false, final false
static inline void ClearLoadingMapInfo() ;

/// @brief Method EndMapTracking, addr 0x59be6f0, size 0xa4, virtual false, abstract: false, final false
static inline void EndMapTracking() ;

/// @brief Method EndMetricsCapture, addr 0x59c0484, size 0x458, virtual false, abstract: false, final false
static inline void EndMetricsCapture() ;

/// @brief Method EndPerfCapture, addr 0x59c08dc, size 0x3b0, virtual false, abstract: false, final false
static inline void EndPerfCapture() ;

static inline ::GlobalNamespace::CustomMapTelemetry* New_ctor() ;

/// @brief Method OnDestroy, addr 0x59c0d0c, size 0x64, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnMapLoadCompleted, addr 0x59bf468, size 0x4e4, virtual false, abstract: false, final false
static inline void OnMapLoadCompleted() ;

/// @brief Method OnMapUnloaded, addr 0x59be6a0, size 0x50, virtual false, abstract: false, final false
static inline void OnMapUnloaded() ;

/// @brief Method OnPlayerEnteredMap, addr 0x59bfa04, size 0x190, virtual false, abstract: false, final false
static inline void OnPlayerEnteredMap() ;

/// @brief Method OnPlayerJoinedRoom, addr 0x59bfb94, size 0xa4, virtual false, abstract: false, final false
static inline void OnPlayerJoinedRoom(::GlobalNamespace::NetPlayer*  obj) ;

/// @brief Method OnPlayerLeftMap, addr 0x59bf94c, size 0xb8, virtual false, abstract: false, final false
static inline void OnPlayerLeftMap() ;

/// @brief Method OnPlayerLeftRoom, addr 0x59bfc38, size 0xa0, virtual false, abstract: false, final false
static inline void OnPlayerLeftRoom(::GlobalNamespace::NetPlayer*  obj) ;

/// @brief Method SetLoadingMapInfo, addr 0x59bf308, size 0x7c, virtual false, abstract: false, final false
static inline void SetLoadingMapInfo(::Modio::Mods::Mod*  mod, ::GlobalNamespace::GTMapLoadSource  source) ;

/// @brief Method StartMapTracking, addr 0x59bfcd8, size 0x3a8, virtual false, abstract: false, final false
static inline void StartMapTracking() ;

/// @brief Method StartMetricsCapture, addr 0x59c0080, size 0x28c, virtual false, abstract: false, final false
static inline void StartMetricsCapture() ;

/// @brief Method StartPerfCapture, addr 0x59c030c, size 0x178, virtual false, abstract: false, final false
static inline void StartPerfCapture() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_perfCaptureCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_perfCaptureCoroutine() ;

constexpr void __cordl_internal_set_perfCaptureCoroutine(::UnityEngine::Coroutine*  value) ;

/// @brief Method .ctor, addr 0x59c0d70, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF_AverageDrawCalls() ;

static inline int32_t getStaticF_AverageFPS() ;

static inline int32_t getStaticF_AveragePlayerCount() ;

static inline int32_t getStaticF_HighestFPS() ;

static inline int32_t getStaticF_HighestFPSDrawCalls() ;

static inline int32_t getStaticF_HighestFPSPlayerCount() ;

static inline int32_t getStaticF_LowestFPS() ;

static inline int32_t getStaticF_LowestFPSDrawCalls() ;

static inline int32_t getStaticF_LowestFPSPlayerCount() ;

static inline ::Modio::Mods::Mod* getStaticF_currentMapMod() ;

static inline ::GlobalNamespace::GTMapLoadSource getStaticF_currentMapSource() ;

static inline ::Unity::Profiling::ProfilerRecorder getStaticF_drawCallsRecorder() ;

static inline int64_t getStaticF_enteredMapId() ;

static inline ::StringW getStaticF_enteredMapSource() ;

static inline int32_t getStaticF_frameCounter() ;

static inline bool getStaticF_inPrivateRoom() ;

static inline ::UnityW<::GlobalNamespace::CustomMapTelemetry> getStaticF_instance() ;

static inline ::StringW getStaticF_mapCreatorUsername() ;

static inline float_t getStaticF_mapEnterTime() ;

static inline int64_t getStaticF_mapModId() ;

static inline ::StringW getStaticF_mapName() ;

static inline int32_t getStaticF_maxPlayersInMap() ;

static inline bool getStaticF_metricsCaptureStarted() ;

static inline int32_t getStaticF_minPlayersInMap() ;

static inline bool getStaticF_perfCaptureStarted() ;

static inline bool getStaticF_playerInMap() ;

static inline int32_t getStaticF_runningPlayerCount() ;

static inline int32_t getStaticF_totalDrawCalls() ;

static inline int32_t getStaticF_totalFPS() ;

static inline int32_t getStaticF_totalPlayerCount() ;

/// @brief Method get_CurrentMapIdString, addr 0x59bf1c8, size 0xd0, virtual false, abstract: false, final false
static inline ::StringW get_CurrentMapIdString() ;

/// @brief Method get_CurrentMapSourceString, addr 0x59bf298, size 0x70, virtual false, abstract: false, final false
static inline ::StringW get_CurrentMapSourceString() ;

/// @brief Method get_IsActive, addr 0x59befec, size 0x84, virtual false, abstract: false, final false
static inline bool get_IsActive() ;

static inline void setStaticF_AverageDrawCalls(int32_t  value) ;

static inline void setStaticF_AverageFPS(int32_t  value) ;

static inline void setStaticF_AveragePlayerCount(int32_t  value) ;

static inline void setStaticF_HighestFPS(int32_t  value) ;

static inline void setStaticF_HighestFPSDrawCalls(int32_t  value) ;

static inline void setStaticF_HighestFPSPlayerCount(int32_t  value) ;

static inline void setStaticF_LowestFPS(int32_t  value) ;

static inline void setStaticF_LowestFPSDrawCalls(int32_t  value) ;

static inline void setStaticF_LowestFPSPlayerCount(int32_t  value) ;

static inline void setStaticF_currentMapMod(::Modio::Mods::Mod*  value) ;

static inline void setStaticF_currentMapSource(::GlobalNamespace::GTMapLoadSource  value) ;

static inline void setStaticF_drawCallsRecorder(::Unity::Profiling::ProfilerRecorder  value) ;

static inline void setStaticF_enteredMapId(int64_t  value) ;

static inline void setStaticF_enteredMapSource(::StringW  value) ;

static inline void setStaticF_frameCounter(int32_t  value) ;

static inline void setStaticF_inPrivateRoom(bool  value) ;

static inline void setStaticF_instance(::UnityW<::GlobalNamespace::CustomMapTelemetry>  value) ;

static inline void setStaticF_mapCreatorUsername(::StringW  value) ;

static inline void setStaticF_mapEnterTime(float_t  value) ;

static inline void setStaticF_mapModId(int64_t  value) ;

static inline void setStaticF_mapName(::StringW  value) ;

static inline void setStaticF_maxPlayersInMap(int32_t  value) ;

static inline void setStaticF_metricsCaptureStarted(bool  value) ;

static inline void setStaticF_minPlayersInMap(int32_t  value) ;

static inline void setStaticF_perfCaptureStarted(bool  value) ;

static inline void setStaticF_playerInMap(bool  value) ;

static inline void setStaticF_runningPlayerCount(int32_t  value) ;

static inline void setStaticF_totalDrawCalls(int32_t  value) ;

static inline void setStaticF_totalFPS(int32_t  value) ;

static inline void setStaticF_totalPlayerCount(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomMapTelemetry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapTelemetry", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapTelemetry(CustomMapTelemetry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapTelemetry", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapTelemetry(CustomMapTelemetry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2669};

/// @brief Field minimumPlaytimeForTracking offset 0xffffffff size 0x4
static constexpr int32_t  minimumPlaytimeForTracking{static_cast<int32_t>(0x1e)};

/// @brief Field perfCaptureCoroutine, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___perfCaptureCoroutine;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomMapTelemetry, ___perfCaptureCoroutine) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomMapTelemetry) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomMapTelemetry/<CaptureMapPerformance>d__53
class CORDL_TYPE CustomMapTelemetry__CaptureMapPerformance_d__53 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x59c0e10, size 0x330, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::CustomMapTelemetry__CaptureMapPerformance_d__53* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x59c1140, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x59c1148, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x59c1180, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x59c0e0c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x59c0ce4, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomMapTelemetry__CaptureMapPerformance_d__53() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapTelemetry__CaptureMapPerformance_d__53", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapTelemetry__CaptureMapPerformance_d__53(CustomMapTelemetry__CaptureMapPerformance_d__53 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapTelemetry__CaptureMapPerformance_d__53", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapTelemetry__CaptureMapPerformance_d__53(CustomMapTelemetry__CaptureMapPerformance_d__53 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2668};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomMapTelemetry__CaptureMapPerformance_d__53, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapTelemetry__CaptureMapPerformance_d__53, _____2__current) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomMapTelemetry__CaptureMapPerformance_d__53) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
