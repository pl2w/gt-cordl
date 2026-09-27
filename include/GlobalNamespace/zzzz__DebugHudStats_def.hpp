#pragma once
// IWYU pragma private; include "GlobalNamespace/DebugHudStats.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__DebugHudStats_State_def.hpp"
#include "GlobalNamespace/zzzz__GroupJoinZoneAB_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerRecorder_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugHudStats)
namespace GlobalNamespace {
struct DebugHudStats_State;
}
namespace GlobalNamespace {
struct DebugHudStats__updateLogTitle_d__54;
}
namespace GlobalNamespace {
class ZoneData;
}
namespace GorillaUtil {
class StringTable;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class Array;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
struct LogType;
}
// Forward declare root types
namespace GlobalNamespace {
class DebugHudStats;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DebugHudStats*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DebugHudStats*, "", "DebugHudStats");
// Dependencies DebugHudStats::State, GroupJoinZoneAB, Unity.Profiling.ProfilerRecorder, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: DebugHudStats
class CORDL_TYPE DebugHudStats : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using State = ::GlobalNamespace::DebugHudStats_State;

using _updateLogTitle_d__54 = ::GlobalNamespace::DebugHudStats__updateLogTitle_d__54;

/// @brief Field FPS_THRESHOLD, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_FPS_THRESHOLD, put=setStaticF_FPS_THRESHOLD)) int32_t  FPS_THRESHOLD;

/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::UnityW<::GlobalNamespace::DebugHudStats>  _instance;

/// @brief Field averagedVelocity, offset 0x68, size 0xc 
 __declspec(property(get=__cordl_internal_get_averagedVelocity, put=__cordl_internal_set_averagedVelocity)) ::UnityEngine::Vector3  averagedVelocity;

/// @brief Field betaTitleDataOveride, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_betaTitleDataOveride, put=__cordl_internal_set_betaTitleDataOveride)) ::UnityW<::GorillaUtil::StringTable>  betaTitleDataOveride;

/// @brief Field btnDownTime, offset 0x104, size 0x4 
 __declspec(property(get=__cordl_internal_get_btnDownTime, put=__cordl_internal_set_btnDownTime)) float_t  btnDownTime;

/// @brief Field builder, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_builder, put=__cordl_internal_set_builder)) ::System::Text::StringBuilder*  builder;

/// @brief Field button1Down, offset 0xe8, size 0x1 
 __declspec(property(get=__cordl_internal_get_button1Down, put=__cordl_internal_set_button1Down)) bool  button1Down;

/// @brief Field button2Down, offset 0xe9, size 0x1 
 __declspec(property(get=__cordl_internal_get_button2Down, put=__cordl_internal_set_button2Down)) bool  button2Down;

/// @brief Field button3Down, offset 0xea, size 0x1 
 __declspec(property(get=__cordl_internal_get_button3Down, put=__cordl_internal_set_button3Down)) bool  button3Down;

/// @brief Field button5Down, offset 0xeb, size 0x1 
 __declspec(property(get=__cordl_internal_get_button5Down, put=__cordl_internal_set_button5Down)) bool  button5Down;

/// @brief Field button6Down, offset 0xec, size 0x1 
 __declspec(property(get=__cordl_internal_get_button6Down, put=__cordl_internal_set_button6Down)) bool  button6Down;

/// @brief Field button7Down, offset 0xed, size 0x1 
 __declspec(property(get=__cordl_internal_get_button7Down, put=__cordl_internal_set_button7Down)) bool  button7Down;

/// @brief Field button8Down, offset 0xee, size 0x1 
 __declspec(property(get=__cordl_internal_get_button8Down, put=__cordl_internal_set_button8Down)) bool  button8Down;

/// @brief Field buttonDown, offset 0xb0, size 0x1 
 __declspec(property(get=__cordl_internal_get_buttonDown, put=__cordl_internal_set_buttonDown)) bool  buttonDown;

/// @brief Field buttonDownBack, offset 0xb1, size 0x1 
 __declspec(property(get=__cordl_internal_get_buttonDownBack, put=__cordl_internal_set_buttonDownBack)) bool  buttonDownBack;

/// @brief Field centerHeadPos, offset 0x80, size 0xc 
 __declspec(property(get=__cordl_internal_get_centerHeadPos, put=__cordl_internal_set_centerHeadPos)) ::UnityEngine::Vector3  centerHeadPos;

/// @brief Field currentState, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentState, put=__cordl_internal_set_currentState)) ::GlobalNamespace::DebugHudStats_State  currentState;

/// @brief Field delayUpdateRate, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_delayUpdateRate, put=__cordl_internal_set_delayUpdateRate)) float_t  delayUpdateRate;

/// @brief Field dismiss, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_dismiss, put=__cordl_internal_set_dismiss)) ::UnityW<::TMPro::TMP_Text>  dismiss;

/// @brief Field distanceMoved, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_distanceMoved, put=__cordl_internal_set_distanceMoved)) float_t  distanceMoved;

/// @brief Field distanceSwam, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_distanceSwam, put=__cordl_internal_set_distanceSwam)) float_t  distanceSwam;

/// @brief Field drawCallsRecorder, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_drawCallsRecorder, put=__cordl_internal_set_drawCallsRecorder)) ::Unity::Profiling::ProfilerRecorder  drawCallsRecorder;

/// @brief Field firstAwake, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_firstAwake, put=__cordl_internal_set_firstAwake)) float_t  firstAwake;

/// @brief Field fixedWeatherIndex, offset 0x100, size 0x4 
 __declspec(property(get=__cordl_internal_get_fixedWeatherIndex, put=__cordl_internal_set_fixedWeatherIndex)) int32_t  fixedWeatherIndex;

/// @brief Field fixedWeathers, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_fixedWeathers, put=__cordl_internal_set_fixedWeathers)) ::System::Array*  fixedWeathers;

/// @brief Field fpsWarning, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_fpsWarning, put=__cordl_internal_set_fpsWarning)) ::UnityW<::TMPro::TMP_Text>  fpsWarning;

/// @brief Field groundVelocity, offset 0x74, size 0xc 
 __declspec(property(get=__cordl_internal_get_groundVelocity, put=__cordl_internal_set_groundVelocity)) ::UnityEngine::Vector3  groundVelocity;

/// @brief Field last30SecondsTrackingLost, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_last30SecondsTrackingLost, put=__cordl_internal_set_last30SecondsTrackingLost)) float_t  last30SecondsTrackingLost;

/// @brief Field lastGroupJoinZone, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastGroupJoinZone, put=__cordl_internal_set_lastGroupJoinZone)) ::GlobalNamespace::GroupJoinZoneAB  lastGroupJoinZone;

/// @brief Field leftHandTracked, offset 0x5c, size 0x1 
 __declspec(property(get=__cordl_internal_get_leftHandTracked, put=__cordl_internal_set_leftHandTracked)) bool  leftHandTracked;

/// @brief Field logError, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_logError, put=__cordl_internal_set_logError)) ::System::Collections::Generic::List_1<::StringW>*  logError;

/// @brief Field logMessage, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_logMessage, put=__cordl_internal_set_logMessage)) ::System::Collections::Generic::List_1<::StringW>*  logMessage;

/// @brief Field logPage, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_logPage, put=__cordl_internal_set_logPage)) ::UnityW<::TMPro::TMP_Text>  logPage;

/// @brief Field logTD, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_logTD, put=__cordl_internal_set_logTD)) ::System::Collections::Generic::List_1<::StringW>*  logTD;

/// @brief Field logging, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_logging, put=__cordl_internal_set_logging)) ::UnityW<::TMPro::TMP_Text>  logging;

/// @brief Field lowFps, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get_lowFps, put=__cordl_internal_set_lowFps)) int32_t  lowFps;

/// @brief Field pLog, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_pLog, put=__cordl_internal_set_pLog)) ::StringW  pLog;

/// @brief Field rightHandTracked, offset 0x5d, size 0x1 
 __declspec(property(get=__cordl_internal_get_rightHandTracked, put=__cordl_internal_set_rightHandTracked)) bool  rightHandTracked;

/// @brief Field sessionAnytrackingLost, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_sessionAnytrackingLost, put=__cordl_internal_set_sessionAnytrackingLost)) float_t  sessionAnytrackingLost;

/// @brief Field spoofIds, offset 0xb2, size 0x1 
 __declspec(property(get=__cordl_internal_get_spoofIds, put=__cordl_internal_set_spoofIds)) bool  spoofIds;

/// @brief Field text, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_text, put=__cordl_internal_set_text)) ::UnityW<::TMPro::TMP_Text>  text;

/// @brief Field trisRecorder, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_trisRecorder, put=__cordl_internal_set_trisRecorder)) ::Unity::Profiling::ProfilerRecorder  trisRecorder;

/// @brief Field updateTimer, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_updateTimer, put=__cordl_internal_set_updateTimer)) float_t  updateTimer;

/// @brief Field zones, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_zones, put=__cordl_internal_set_zones)) ::StringW  zones;

/// @brief Method Awake, addr 0x5b040d4, size 0x1c8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ChangeTOD, addr 0x5b060b0, size 0x1a4, virtual false, abstract: false, final false
inline void ChangeTOD(int32_t  v) ;

/// @brief Method ChangeWeather, addr 0x5b06254, size 0x118, virtual false, abstract: false, final false
inline void ChangeWeather(int32_t  v) ;

/// @brief Method DisplayLog, addr 0x5b06738, size 0x140, virtual false, abstract: false, final false
inline void DisplayLog(::System::Collections::Generic::List_1<::StringW>*  log) ;

/// @brief Method LateUpdate, addr 0x5b04398, size 0x1d18, virtual false, abstract: false, final false
inline void LateUpdate() ;

/// @brief Method LogMessageReceived, addr 0x5b07124, size 0x2a0, virtual false, abstract: false, final false
inline void LogMessageReceived(::StringW  condition, ::StringW  stackTrace, ::UnityEngine::LogType  type) ;

static inline ::GlobalNamespace::DebugHudStats* New_ctor() ;

/// @brief Method NextState, addr 0x5b06414, size 0x2e8, virtual false, abstract: false, final false
inline void NextState(bool  fwd) ;

/// @brief Method OnDestroy, addr 0x5b0429c, size 0xfc, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x5b06ef0, size 0x234, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5b06a00, size 0x248, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnPlayerMoved, addr 0x5b069e0, size 0x20, virtual false, abstract: false, final false
inline void OnPlayerMoved(float_t  distance, float_t  speed) ;

/// @brief Method OnPlayerSwam, addr 0x5b069c0, size 0x20, virtual false, abstract: false, final false
inline void OnPlayerSwam(float_t  distance, float_t  speed) ;

/// @brief Method OnZoneChanged, addr 0x5b07438, size 0x12c, virtual false, abstract: false, final false
inline void OnZoneChanged(::ArrayW<::GlobalNamespace::ZoneData*>  zoneData) ;

/// @brief Method TDCachedValueRetrieved, addr 0x5b06d9c, size 0x154, virtual false, abstract: false, final false
inline void TDCachedValueRetrieved(::StringW  arg1, ::StringW  arg2) ;

/// @brief Method TDValueRetrieved, addr 0x5b06c48, size 0x154, virtual false, abstract: false, final false
inline void TDValueRetrieved(::StringW  arg1, ::StringW  arg2) ;

/// @brief Method UpdateLog, addr 0x5b066fc, size 0x3c, virtual false, abstract: false, final false
inline void UpdateLog() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_averagedVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_averagedVelocity() ;

constexpr ::UnityW<::GorillaUtil::StringTable> const& __cordl_internal_get_betaTitleDataOveride() const;

constexpr ::UnityW<::GorillaUtil::StringTable>& __cordl_internal_get_betaTitleDataOveride() ;

constexpr float_t const& __cordl_internal_get_btnDownTime() const;

constexpr float_t& __cordl_internal_get_btnDownTime() ;

constexpr ::System::Text::StringBuilder* const& __cordl_internal_get_builder() const;

constexpr ::System::Text::StringBuilder*& __cordl_internal_get_builder() ;

constexpr bool const& __cordl_internal_get_button1Down() const;

constexpr bool& __cordl_internal_get_button1Down() ;

constexpr bool const& __cordl_internal_get_button2Down() const;

constexpr bool& __cordl_internal_get_button2Down() ;

constexpr bool const& __cordl_internal_get_button3Down() const;

constexpr bool& __cordl_internal_get_button3Down() ;

constexpr bool const& __cordl_internal_get_button5Down() const;

constexpr bool& __cordl_internal_get_button5Down() ;

constexpr bool const& __cordl_internal_get_button6Down() const;

constexpr bool& __cordl_internal_get_button6Down() ;

constexpr bool const& __cordl_internal_get_button7Down() const;

constexpr bool& __cordl_internal_get_button7Down() ;

constexpr bool const& __cordl_internal_get_button8Down() const;

constexpr bool& __cordl_internal_get_button8Down() ;

constexpr bool const& __cordl_internal_get_buttonDown() const;

constexpr bool& __cordl_internal_get_buttonDown() ;

constexpr bool const& __cordl_internal_get_buttonDownBack() const;

constexpr bool& __cordl_internal_get_buttonDownBack() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_centerHeadPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_centerHeadPos() ;

constexpr ::GlobalNamespace::DebugHudStats_State const& __cordl_internal_get_currentState() const;

constexpr ::GlobalNamespace::DebugHudStats_State& __cordl_internal_get_currentState() ;

constexpr float_t const& __cordl_internal_get_delayUpdateRate() const;

constexpr float_t& __cordl_internal_get_delayUpdateRate() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_dismiss() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_dismiss() ;

constexpr float_t const& __cordl_internal_get_distanceMoved() const;

constexpr float_t& __cordl_internal_get_distanceMoved() ;

constexpr float_t const& __cordl_internal_get_distanceSwam() const;

constexpr float_t& __cordl_internal_get_distanceSwam() ;

constexpr ::Unity::Profiling::ProfilerRecorder const& __cordl_internal_get_drawCallsRecorder() const;

constexpr ::Unity::Profiling::ProfilerRecorder& __cordl_internal_get_drawCallsRecorder() ;

constexpr float_t const& __cordl_internal_get_firstAwake() const;

constexpr float_t& __cordl_internal_get_firstAwake() ;

constexpr int32_t const& __cordl_internal_get_fixedWeatherIndex() const;

constexpr int32_t& __cordl_internal_get_fixedWeatherIndex() ;

constexpr ::System::Array* const& __cordl_internal_get_fixedWeathers() const;

constexpr ::System::Array*& __cordl_internal_get_fixedWeathers() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_fpsWarning() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_fpsWarning() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_groundVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_groundVelocity() ;

constexpr float_t const& __cordl_internal_get_last30SecondsTrackingLost() const;

constexpr float_t& __cordl_internal_get_last30SecondsTrackingLost() ;

constexpr ::GlobalNamespace::GroupJoinZoneAB const& __cordl_internal_get_lastGroupJoinZone() const;

constexpr ::GlobalNamespace::GroupJoinZoneAB& __cordl_internal_get_lastGroupJoinZone() ;

constexpr bool const& __cordl_internal_get_leftHandTracked() const;

constexpr bool& __cordl_internal_get_leftHandTracked() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_logError() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_logError() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_logMessage() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_logMessage() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_logPage() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_logPage() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_logTD() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_logTD() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_logging() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_logging() ;

constexpr int32_t const& __cordl_internal_get_lowFps() const;

constexpr int32_t& __cordl_internal_get_lowFps() ;

constexpr ::StringW const& __cordl_internal_get_pLog() const;

constexpr ::StringW& __cordl_internal_get_pLog() ;

constexpr bool const& __cordl_internal_get_rightHandTracked() const;

constexpr bool& __cordl_internal_get_rightHandTracked() ;

constexpr float_t const& __cordl_internal_get_sessionAnytrackingLost() const;

constexpr float_t& __cordl_internal_get_sessionAnytrackingLost() ;

constexpr bool const& __cordl_internal_get_spoofIds() const;

constexpr bool& __cordl_internal_get_spoofIds() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_text() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_text() ;

constexpr ::Unity::Profiling::ProfilerRecorder const& __cordl_internal_get_trisRecorder() const;

constexpr ::Unity::Profiling::ProfilerRecorder& __cordl_internal_get_trisRecorder() ;

constexpr float_t const& __cordl_internal_get_updateTimer() const;

constexpr float_t& __cordl_internal_get_updateTimer() ;

constexpr ::StringW const& __cordl_internal_get_zones() const;

constexpr ::StringW& __cordl_internal_get_zones() ;

constexpr void __cordl_internal_set_averagedVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_betaTitleDataOveride(::UnityW<::GorillaUtil::StringTable>  value) ;

constexpr void __cordl_internal_set_btnDownTime(float_t  value) ;

constexpr void __cordl_internal_set_builder(::System::Text::StringBuilder*  value) ;

constexpr void __cordl_internal_set_button1Down(bool  value) ;

constexpr void __cordl_internal_set_button2Down(bool  value) ;

constexpr void __cordl_internal_set_button3Down(bool  value) ;

constexpr void __cordl_internal_set_button5Down(bool  value) ;

constexpr void __cordl_internal_set_button6Down(bool  value) ;

constexpr void __cordl_internal_set_button7Down(bool  value) ;

constexpr void __cordl_internal_set_button8Down(bool  value) ;

constexpr void __cordl_internal_set_buttonDown(bool  value) ;

constexpr void __cordl_internal_set_buttonDownBack(bool  value) ;

constexpr void __cordl_internal_set_centerHeadPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_currentState(::GlobalNamespace::DebugHudStats_State  value) ;

constexpr void __cordl_internal_set_delayUpdateRate(float_t  value) ;

constexpr void __cordl_internal_set_dismiss(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_distanceMoved(float_t  value) ;

constexpr void __cordl_internal_set_distanceSwam(float_t  value) ;

constexpr void __cordl_internal_set_drawCallsRecorder(::Unity::Profiling::ProfilerRecorder  value) ;

constexpr void __cordl_internal_set_firstAwake(float_t  value) ;

constexpr void __cordl_internal_set_fixedWeatherIndex(int32_t  value) ;

constexpr void __cordl_internal_set_fixedWeathers(::System::Array*  value) ;

constexpr void __cordl_internal_set_fpsWarning(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_groundVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_last30SecondsTrackingLost(float_t  value) ;

constexpr void __cordl_internal_set_lastGroupJoinZone(::GlobalNamespace::GroupJoinZoneAB  value) ;

constexpr void __cordl_internal_set_leftHandTracked(bool  value) ;

constexpr void __cordl_internal_set_logError(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_logMessage(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_logPage(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_logTD(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_logging(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_lowFps(int32_t  value) ;

constexpr void __cordl_internal_set_pLog(::StringW  value) ;

constexpr void __cordl_internal_set_rightHandTracked(bool  value) ;

constexpr void __cordl_internal_set_sessionAnytrackingLost(float_t  value) ;

constexpr void __cordl_internal_set_spoofIds(bool  value) ;

constexpr void __cordl_internal_set_text(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_trisRecorder(::Unity::Profiling::ProfilerRecorder  value) ;

constexpr void __cordl_internal_set_updateTimer(float_t  value) ;

constexpr void __cordl_internal_set_zones(::StringW  value) ;

/// @brief Method .ctor, addr 0x5b07564, size 0xe0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method colorFromState, addr 0x5b06918, size 0xa8, virtual false, abstract: false, final false
inline ::StringW colorFromState(::GlobalNamespace::DebugHudStats_State  s) ;

/// @brief Method getColorStringFromLogType, addr 0x5b073c4, size 0x74, virtual false, abstract: false, final false
inline ::StringW getColorStringFromLogType(::UnityEngine::LogType  type) ;

static inline int32_t getStaticF_FPS_THRESHOLD() ;

static inline ::UnityW<::GlobalNamespace::DebugHudStats> getStaticF__instance() ;

/// @brief Method get_Instance, addr 0x5b0407c, size 0x58, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::DebugHudStats> get_Instance() ;

/// @brief Method logTitleFromState, addr 0x5b06878, size 0xa0, virtual false, abstract: false, final false
inline ::StringW logTitleFromState(::GlobalNamespace::DebugHudStats_State  s) ;

static inline void setStaticF_FPS_THRESHOLD(int32_t  value) ;

static inline void setStaticF__instance(::UnityW<::GlobalNamespace::DebugHudStats>  value) ;

/// [AsyncStateMachine(typeof(DebugHudStats::<updateLogTitle>d__54))]
/// @brief Method updateLogTitle, addr 0x5b0636c, size 0xa8, virtual false, abstract: false, final false
inline void updateLogTitle() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DebugHudStats() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DebugHudStats", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DebugHudStats(DebugHudStats && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DebugHudStats", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DebugHudStats(DebugHudStats const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3489};

/// [SerializeField]
/// @brief Field text, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___text;

/// [SerializeField]
/// @brief Field logging, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___logging;

/// [SerializeField]
/// @brief Field logPage, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___logPage;

/// [SerializeField]
/// @brief Field fpsWarning, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___fpsWarning;

/// [SerializeField]
/// @brief Field dismiss, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___dismiss;

/// [SerializeField]
/// @brief Field delayUpdateRate, offset: 0x48, size: 0x4, def value: None
 float_t  ___delayUpdateRate;

/// @brief Field updateTimer, offset: 0x4c, size: 0x4, def value: None
 float_t  ___updateTimer;

/// @brief Field sessionAnytrackingLost, offset: 0x50, size: 0x4, def value: None
 float_t  ___sessionAnytrackingLost;

/// @brief Field last30SecondsTrackingLost, offset: 0x54, size: 0x4, def value: None
 float_t  ___last30SecondsTrackingLost;

/// @brief Field firstAwake, offset: 0x58, size: 0x4, def value: None
 float_t  ___firstAwake;

/// @brief Field leftHandTracked, offset: 0x5c, size: 0x1, def value: None
 bool  ___leftHandTracked;

/// @brief Field rightHandTracked, offset: 0x5d, size: 0x1, def value: None
 bool  ___rightHandTracked;

/// @brief Field builder, offset: 0x60, size: 0x8, def value: None
 ::System::Text::StringBuilder*  ___builder;

/// @brief Field averagedVelocity, offset: 0x68, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___averagedVelocity;

/// @brief Field groundVelocity, offset: 0x74, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___groundVelocity;

/// @brief Field centerHeadPos, offset: 0x80, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___centerHeadPos;

/// @brief Field distanceMoved, offset: 0x8c, size: 0x4, def value: None
 float_t  ___distanceMoved;

/// @brief Field distanceSwam, offset: 0x90, size: 0x4, def value: None
 float_t  ___distanceSwam;

/// @brief Field logMessage, offset: 0x98, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___logMessage;

/// @brief Field logError, offset: 0xa0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___logError;

/// @brief Field logTD, offset: 0xa8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___logTD;

/// @brief Field buttonDown, offset: 0xb0, size: 0x1, def value: None
 bool  ___buttonDown;

/// @brief Field buttonDownBack, offset: 0xb1, size: 0x1, def value: None
 bool  ___buttonDownBack;

/// @brief Field spoofIds, offset: 0xb2, size: 0x1, def value: None
 bool  ___spoofIds;

/// @brief Field lowFps, offset: 0xb4, size: 0x4, def value: None
 int32_t  ___lowFps;

/// @brief Field zones, offset: 0xb8, size: 0x8, def value: None
 ::StringW  ___zones;

/// @brief Field lastGroupJoinZone, offset: 0xc0, size: 0x8, def value: None
 ::GlobalNamespace::GroupJoinZoneAB  ___lastGroupJoinZone;

/// @brief Field currentState, offset: 0xc8, size: 0x4, def value: None
 ::GlobalNamespace::DebugHudStats_State  ___currentState;

/// @brief Field drawCallsRecorder, offset: 0xd0, size: 0x8, def value: None
 ::Unity::Profiling::ProfilerRecorder  ___drawCallsRecorder;

/// @brief Field trisRecorder, offset: 0xd8, size: 0x8, def value: None
 ::Unity::Profiling::ProfilerRecorder  ___trisRecorder;

/// @brief Field pLog, offset: 0xe0, size: 0x8, def value: None
 ::StringW  ___pLog;

/// @brief Field button1Down, offset: 0xe8, size: 0x1, def value: None
 bool  ___button1Down;

/// @brief Field button2Down, offset: 0xe9, size: 0x1, def value: None
 bool  ___button2Down;

/// @brief Field button3Down, offset: 0xea, size: 0x1, def value: None
 bool  ___button3Down;

/// @brief Field button5Down, offset: 0xeb, size: 0x1, def value: None
 bool  ___button5Down;

/// @brief Field button6Down, offset: 0xec, size: 0x1, def value: None
 bool  ___button6Down;

/// @brief Field button7Down, offset: 0xed, size: 0x1, def value: None
 bool  ___button7Down;

/// @brief Field button8Down, offset: 0xee, size: 0x1, def value: None
 bool  ___button8Down;

/// [SerializeField]
/// @brief Field betaTitleDataOveride, offset: 0xf0, size: 0x8, def value: None
 ::UnityW<::GorillaUtil::StringTable>  ___betaTitleDataOveride;

/// @brief Field fixedWeathers, offset: 0xf8, size: 0x8, def value: None
 ::System::Array*  ___fixedWeathers;

/// @brief Field fixedWeatherIndex, offset: 0x100, size: 0x4, def value: None
 int32_t  ___fixedWeatherIndex;

/// @brief Field btnDownTime, offset: 0x104, size: 0x4, def value: None
 float_t  ___btnDownTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DebugHudStats, ___text) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugHudStats, ___logging) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugHudStats, ___logPage) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugHudStats, ___fpsWarning) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugHudStats, ___dismiss) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugHudStats, ___delayUpdateRate) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugHudStats, ___updateTimer) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugHudStats, ___sessionAnytrackingLost) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugHudStats, ___last30SecondsTrackingLost) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugHudStats, ___firstAwake) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugHudStats, ___leftHandTracked) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugHudStats, ___rightHandTracked) == 0x5d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugHudStats, ___builder) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugHudStats, ___averagedVelocity) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugHudStats, ___groundVelocity) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugHudStats, ___centerHeadPos) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugHudStats, ___distanceMoved) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugHudStats, ___distanceSwam) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugHudStats, ___logMessage) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugHudStats, ___logError) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugHudStats, ___logTD) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugHudStats, ___buttonDown) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugHudStats, ___buttonDownBack) == 0xb1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugHudStats, ___spoofIds) == 0xb2, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugHudStats, ___lowFps) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugHudStats, ___zones) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugHudStats, ___lastGroupJoinZone) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugHudStats, ___currentState) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugHudStats, ___drawCallsRecorder) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugHudStats, ___trisRecorder) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugHudStats, ___pLog) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugHudStats, ___button1Down) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugHudStats, ___button2Down) == 0xe9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugHudStats, ___button3Down) == 0xea, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugHudStats, ___button5Down) == 0xeb, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugHudStats, ___button6Down) == 0xec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugHudStats, ___button7Down) == 0xed, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugHudStats, ___button8Down) == 0xee, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugHudStats, ___betaTitleDataOveride) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugHudStats, ___fixedWeathers) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugHudStats, ___fixedWeatherIndex) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugHudStats, ___btnDownTime) == 0x104, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DebugHudStats) == 0x108, "Size mismatch!");

} // namespace end def GlobalNamespace
