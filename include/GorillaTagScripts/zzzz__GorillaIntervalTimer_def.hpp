#pragma once
// IWYU pragma private; include "GorillaTagScripts/GorillaIntervalTimer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTagScripts/zzzz__GorillaIntervalTimer_IntervalSource_def.hpp"
#include "GorillaTagScripts/zzzz__GorillaIntervalTimer_RandomDistribution_def.hpp"
#include "GorillaTagScripts/zzzz__GorillaIntervalTimer_RunLength_def.hpp"
#include "GorillaTagScripts/zzzz__GorillaIntervalTimer_TimeUnit_def.hpp"
#include "Photon/Pun/zzzz__MonoBehaviourPun_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaIntervalTimer)
namespace GlobalNamespace {
struct GorillaIntervalTimer_IntervalSource;
}
namespace GlobalNamespace {
struct GorillaIntervalTimer_RandomDistribution;
}
namespace GlobalNamespace {
struct GorillaIntervalTimer_RunLength;
}
namespace GlobalNamespace {
struct GorillaIntervalTimer_TimeUnit;
}
namespace GorillaTag::Cosmetics {
class NetworkedRandomProvider;
}
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace GorillaTagScripts {
class GorillaIntervalTimer;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::GorillaIntervalTimer*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::GorillaIntervalTimer*, "GorillaTagScripts", "GorillaIntervalTimer");
// Dependencies GorillaTagScripts.GorillaIntervalTimer::IntervalSource, GorillaTagScripts.GorillaIntervalTimer::RandomDistribution, GorillaTagScripts.GorillaIntervalTimer::RunLength, GorillaTagScripts.GorillaIntervalTimer::TimeUnit, Photon.Pun.MonoBehaviourPun
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.GorillaIntervalTimer
class CORDL_TYPE GorillaIntervalTimer : public ::Photon::Pun::MonoBehaviourPun {
public:
// Declarations
using IntervalSource = ::GlobalNamespace::GorillaIntervalTimer_IntervalSource;

using RandomDistribution = ::GlobalNamespace::GorillaIntervalTimer_RandomDistribution;

using RunLength = ::GlobalNamespace::GorillaIntervalTimer_RunLength;

using TimeUnit = ::GlobalNamespace::GorillaIntervalTimer_TimeUnit;

/// @brief Field currentIntervalSeconds, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentIntervalSeconds, put=__cordl_internal_set_currentIntervalSeconds)) float_t  currentIntervalSeconds;

/// @brief Field distribution, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_distribution, put=__cordl_internal_set_distribution)) ::GlobalNamespace::GorillaIntervalTimer_RandomDistribution  distribution;

/// @brief Field elapsed, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_elapsed, put=__cordl_internal_set_elapsed)) float_t  elapsed;

/// @brief Field fixedInterval, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_fixedInterval, put=__cordl_internal_set_fixedInterval)) float_t  fixedInterval;

/// @brief Field initialDelay, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_initialDelay, put=__cordl_internal_set_initialDelay)) float_t  initialDelay;

/// @brief Field intervalSource, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_intervalSource, put=__cordl_internal_set_intervalSource)) ::GlobalNamespace::GorillaIntervalTimer_IntervalSource  intervalSource;

/// @brief Field isInPostFireDelay, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get_isInPostFireDelay, put=__cordl_internal_set_isInPostFireDelay)) bool  isInPostFireDelay;

/// @brief Field isPaused, offset 0x91, size 0x1 
 __declspec(property(get=__cordl_internal_get_isPaused, put=__cordl_internal_set_isPaused)) bool  isPaused;

/// @brief Field isRegistered, offset 0x92, size 0x1 
 __declspec(property(get=__cordl_internal_get_isRegistered, put=__cordl_internal_set_isRegistered)) bool  isRegistered;

/// @brief Field isRunning, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get_isRunning, put=__cordl_internal_set_isRunning)) bool  isRunning;

/// @brief Field maxFiresPerRun, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxFiresPerRun, put=__cordl_internal_set_maxFiresPerRun)) int32_t  maxFiresPerRun;

/// @brief Field networkProvider, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_networkProvider, put=__cordl_internal_set_networkProvider)) ::UnityW<::GorillaTag::Cosmetics::NetworkedRandomProvider>  networkProvider;

/// @brief Field onIntervalFired, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_onIntervalFired, put=__cordl_internal_set_onIntervalFired)) ::UnityEngine::Events::UnityEvent*  onIntervalFired;

/// @brief Field onTimerStarted, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_onTimerStarted, put=__cordl_internal_set_onTimerStarted)) ::UnityEngine::Events::UnityEvent*  onTimerStarted;

/// @brief Field onTimerStopped, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_onTimerStopped, put=__cordl_internal_set_onTimerStopped)) ::UnityEngine::Events::UnityEvent*  onTimerStopped;

/// @brief Field postIntervalDelay, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_postIntervalDelay, put=__cordl_internal_set_postIntervalDelay)) float_t  postIntervalDelay;

/// @brief Field randTimeMax, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_randTimeMax, put=__cordl_internal_set_randTimeMax)) float_t  randTimeMax;

/// @brief Field randTimeMin, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_randTimeMin, put=__cordl_internal_set_randTimeMin)) float_t  randTimeMin;

/// @brief Field requireManualReset, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_requireManualReset, put=__cordl_internal_set_requireManualReset)) bool  requireManualReset;

/// @brief Field runFiredSoFar, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_runFiredSoFar, put=__cordl_internal_set_runFiredSoFar)) int32_t  runFiredSoFar;

/// @brief Field runLength, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_runLength, put=__cordl_internal_set_runLength)) ::GlobalNamespace::GorillaIntervalTimer_RunLength  runLength;

/// @brief Field runOnEnable, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_runOnEnable, put=__cordl_internal_set_runOnEnable)) bool  runOnEnable;

/// @brief Field unit, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_unit, put=__cordl_internal_set_unit)) ::GlobalNamespace::GorillaIntervalTimer_TimeUnit  unit;

/// @brief Field useInitialDelay, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_useInitialDelay, put=__cordl_internal_set_useInitialDelay)) bool  useInitialDelay;

/// @brief Field usePostIntervalDelay, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_usePostIntervalDelay, put=__cordl_internal_set_usePostIntervalDelay)) bool  usePostIntervalDelay;

/// @brief Field useRandomDuration, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_useRandomDuration, put=__cordl_internal_set_useRandomDuration)) bool  useRandomDuration;

/// @brief Method Awake, addr 0x5b7b148, size 0xa4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetPassedTime, addr 0x5b7ba28, size 0x8, virtual false, abstract: false, final false
inline float_t GetPassedTime() ;

/// @brief Method GetRemainingTime, addr 0x5b7ba30, size 0x18, virtual false, abstract: false, final false
inline float_t GetRemainingTime() ;

/// @brief Method InvokeUpdate, addr 0x5b7b8ec, size 0x120, virtual false, abstract: false, final false
inline void InvokeUpdate() ;

static inline ::GorillaTagScripts::GorillaIntervalTimer* New_ctor() ;

/// @brief Method OnDisable, addr 0x5b7b374, size 0x6c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5b7b1fc, size 0x84, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OverrideNextIntervalSeconds, addr 0x5b7b8d0, size 0x1c, virtual false, abstract: false, final false
inline void OverrideNextIntervalSeconds(float_t  seconds) ;

/// @brief Method Pause, addr 0x5b7b864, size 0xc, virtual false, abstract: false, final false
inline void Pause() ;

/// @brief Method ResetElapsed, addr 0x5b7b1ec, size 0x8, virtual false, abstract: false, final false
inline void ResetElapsed() ;

/// @brief Method ResetRun, addr 0x5b7b1f4, size 0x8, virtual false, abstract: false, final false
inline void ResetRun() ;

/// @brief Method RestartTimer, addr 0x5b7ba0c, size 0x1c, virtual false, abstract: false, final false
inline void RestartTimer() ;

/// @brief Method Resume, addr 0x5b7b870, size 0x8, virtual false, abstract: false, final false
inline void Resume() ;

/// @brief Method RollNextInterval, addr 0x5b7b490, size 0x3d4, virtual false, abstract: false, final false
inline void RollNextInterval() ;

/// @brief Method SetFixedIntervalSeconds, addr 0x5b7b878, size 0x58, virtual false, abstract: false, final false
inline void SetFixedIntervalSeconds(float_t  seconds) ;

/// @brief Method StartTimer, addr 0x5b7b280, size 0xf4, virtual false, abstract: false, final false
inline void StartTimer() ;

/// @brief Method StopTimer, addr 0x5b7b3e0, size 0x84, virtual false, abstract: false, final false
inline void StopTimer() ;

/// @brief Method ToSeconds, addr 0x5b7b464, size 0x2c, virtual false, abstract: false, final false
inline float_t ToSeconds(float_t  value) ;

constexpr float_t const& __cordl_internal_get_currentIntervalSeconds() const;

constexpr float_t& __cordl_internal_get_currentIntervalSeconds() ;

constexpr ::GlobalNamespace::GorillaIntervalTimer_RandomDistribution const& __cordl_internal_get_distribution() const;

constexpr ::GlobalNamespace::GorillaIntervalTimer_RandomDistribution& __cordl_internal_get_distribution() ;

constexpr float_t const& __cordl_internal_get_elapsed() const;

constexpr float_t& __cordl_internal_get_elapsed() ;

constexpr float_t const& __cordl_internal_get_fixedInterval() const;

constexpr float_t& __cordl_internal_get_fixedInterval() ;

constexpr float_t const& __cordl_internal_get_initialDelay() const;

constexpr float_t& __cordl_internal_get_initialDelay() ;

constexpr ::GlobalNamespace::GorillaIntervalTimer_IntervalSource const& __cordl_internal_get_intervalSource() const;

constexpr ::GlobalNamespace::GorillaIntervalTimer_IntervalSource& __cordl_internal_get_intervalSource() ;

constexpr bool const& __cordl_internal_get_isInPostFireDelay() const;

constexpr bool& __cordl_internal_get_isInPostFireDelay() ;

constexpr bool const& __cordl_internal_get_isPaused() const;

constexpr bool& __cordl_internal_get_isPaused() ;

constexpr bool const& __cordl_internal_get_isRegistered() const;

constexpr bool& __cordl_internal_get_isRegistered() ;

constexpr bool const& __cordl_internal_get_isRunning() const;

constexpr bool& __cordl_internal_get_isRunning() ;

constexpr int32_t const& __cordl_internal_get_maxFiresPerRun() const;

constexpr int32_t& __cordl_internal_get_maxFiresPerRun() ;

constexpr ::UnityW<::GorillaTag::Cosmetics::NetworkedRandomProvider> const& __cordl_internal_get_networkProvider() const;

constexpr ::UnityW<::GorillaTag::Cosmetics::NetworkedRandomProvider>& __cordl_internal_get_networkProvider() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onIntervalFired() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onIntervalFired() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onTimerStarted() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onTimerStarted() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onTimerStopped() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onTimerStopped() ;

constexpr float_t const& __cordl_internal_get_postIntervalDelay() const;

constexpr float_t& __cordl_internal_get_postIntervalDelay() ;

constexpr float_t const& __cordl_internal_get_randTimeMax() const;

constexpr float_t& __cordl_internal_get_randTimeMax() ;

constexpr float_t const& __cordl_internal_get_randTimeMin() const;

constexpr float_t& __cordl_internal_get_randTimeMin() ;

constexpr bool const& __cordl_internal_get_requireManualReset() const;

constexpr bool& __cordl_internal_get_requireManualReset() ;

constexpr int32_t const& __cordl_internal_get_runFiredSoFar() const;

constexpr int32_t& __cordl_internal_get_runFiredSoFar() ;

constexpr ::GlobalNamespace::GorillaIntervalTimer_RunLength const& __cordl_internal_get_runLength() const;

constexpr ::GlobalNamespace::GorillaIntervalTimer_RunLength& __cordl_internal_get_runLength() ;

constexpr bool const& __cordl_internal_get_runOnEnable() const;

constexpr bool& __cordl_internal_get_runOnEnable() ;

constexpr ::GlobalNamespace::GorillaIntervalTimer_TimeUnit const& __cordl_internal_get_unit() const;

constexpr ::GlobalNamespace::GorillaIntervalTimer_TimeUnit& __cordl_internal_get_unit() ;

constexpr bool const& __cordl_internal_get_useInitialDelay() const;

constexpr bool& __cordl_internal_get_useInitialDelay() ;

constexpr bool const& __cordl_internal_get_usePostIntervalDelay() const;

constexpr bool& __cordl_internal_get_usePostIntervalDelay() ;

constexpr bool const& __cordl_internal_get_useRandomDuration() const;

constexpr bool& __cordl_internal_get_useRandomDuration() ;

constexpr void __cordl_internal_set_currentIntervalSeconds(float_t  value) ;

constexpr void __cordl_internal_set_distribution(::GlobalNamespace::GorillaIntervalTimer_RandomDistribution  value) ;

constexpr void __cordl_internal_set_elapsed(float_t  value) ;

constexpr void __cordl_internal_set_fixedInterval(float_t  value) ;

constexpr void __cordl_internal_set_initialDelay(float_t  value) ;

constexpr void __cordl_internal_set_intervalSource(::GlobalNamespace::GorillaIntervalTimer_IntervalSource  value) ;

constexpr void __cordl_internal_set_isInPostFireDelay(bool  value) ;

constexpr void __cordl_internal_set_isPaused(bool  value) ;

constexpr void __cordl_internal_set_isRegistered(bool  value) ;

constexpr void __cordl_internal_set_isRunning(bool  value) ;

constexpr void __cordl_internal_set_maxFiresPerRun(int32_t  value) ;

constexpr void __cordl_internal_set_networkProvider(::UnityW<::GorillaTag::Cosmetics::NetworkedRandomProvider>  value) ;

constexpr void __cordl_internal_set_onIntervalFired(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onTimerStarted(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onTimerStopped(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_postIntervalDelay(float_t  value) ;

constexpr void __cordl_internal_set_randTimeMax(float_t  value) ;

constexpr void __cordl_internal_set_randTimeMin(float_t  value) ;

constexpr void __cordl_internal_set_requireManualReset(bool  value) ;

constexpr void __cordl_internal_set_runFiredSoFar(int32_t  value) ;

constexpr void __cordl_internal_set_runLength(::GlobalNamespace::GorillaIntervalTimer_RunLength  value) ;

constexpr void __cordl_internal_set_runOnEnable(bool  value) ;

constexpr void __cordl_internal_set_unit(::GlobalNamespace::GorillaIntervalTimer_TimeUnit  value) ;

constexpr void __cordl_internal_set_useInitialDelay(bool  value) ;

constexpr void __cordl_internal_set_usePostIntervalDelay(bool  value) ;

constexpr void __cordl_internal_set_useRandomDuration(bool  value) ;

/// @brief Method .ctor, addr 0x5b7ba48, size 0x34, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaIntervalTimer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaIntervalTimer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaIntervalTimer(GorillaIntervalTimer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaIntervalTimer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaIntervalTimer(GorillaIntervalTimer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3904};

/// @brief Field minIntervalEpsilon offset 0xffffffff size 0x4
static constexpr float_t  minIntervalEpsilon{static_cast<float_t>(0.001f)};

/// [Header("Scheduling")]
/// [Tooltip("If true, the timer will automatically start when this component is enabled.")]
/// [SerializeField]
/// @brief Field runOnEnable, offset: 0x28, size: 0x1, def value: None
 bool  ___runOnEnable;

/// [Tooltip("If true, apply an initial delay before the first interval is fired.")]
/// [SerializeField]
/// @brief Field useInitialDelay, offset: 0x29, size: 0x1, def value: None
 bool  ___useInitialDelay;

/// [Tooltip("Delay (in seconds or minutes depending on Unit) before the first fire if \'Use Initial Delay\' is enabled.")]
/// [SerializeField]
/// @brief Field initialDelay, offset: 0x2c, size: 0x4, def value: None
 float_t  ___initialDelay;

/// [Header("Interval")]
/// [Tooltip("Unit of time for Fixed Interval, Min and Max values.")]
/// [SerializeField]
/// @brief Field unit, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::GorillaIntervalTimer_TimeUnit  ___unit;

/// [Tooltip("Distribution type used for generating random intervals when Interval Source = LocalRandom.")]
/// [SerializeField]
/// @brief Field distribution, offset: 0x34, size: 0x4, def value: None
 ::GlobalNamespace::GorillaIntervalTimer_RandomDistribution  ___distribution;

/// [Tooltip("Fixed interval duration (interpreted by Unit) when Use Random Duration = false.")]
/// [SerializeField]
/// @brief Field fixedInterval, offset: 0x38, size: 0x4, def value: None
 float_t  ___fixedInterval;

/// [Space]
/// [Tooltip("If false, \'Fixed Interval\' is used. If true, a random interval is sampled each cycle.")]
/// [SerializeField]
/// @brief Field useRandomDuration, offset: 0x3c, size: 0x1, def value: None
 bool  ___useRandomDuration;

/// [Tooltip("Minimum interval time (in selected Unit).")]
/// [SerializeField]
/// @brief Field randTimeMin, offset: 0x40, size: 0x4, def value: None
 float_t  ___randTimeMin;

/// [Tooltip("Maximum interval time (in selected Unit).")]
/// [SerializeField]
/// @brief Field randTimeMax, offset: 0x44, size: 0x4, def value: None
 float_t  ___randTimeMax;

/// [Tooltip("Determines whether to use a local random generator or a networked random source.")]
/// [SerializeField]
/// @brief Field intervalSource, offset: 0x48, size: 0x4, def value: None
 ::GlobalNamespace::GorillaIntervalTimer_IntervalSource  ___intervalSource;

/// [Header("Networked Interval (optional)")]
/// [Tooltip("If Interval Source = NetworkedRandom, the timer queries this component for the next interval")]
/// [SerializeField]
/// @brief Field networkProvider, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GorillaTag::Cosmetics::NetworkedRandomProvider>  ___networkProvider;

/// [Space]
/// [Tooltip("If true, wait this additional delay after onIntervalFired() before starting the next interval.")]
/// [SerializeField]
/// @brief Field usePostIntervalDelay, offset: 0x58, size: 0x1, def value: None
 bool  ___usePostIntervalDelay;

/// [Tooltip("Additional delay (in selected Unit) to wait after onIntervalFired(), before the next interval begins.")]
/// [SerializeField]
/// @brief Field postIntervalDelay, offset: 0x5c, size: 0x4, def value: None
 float_t  ___postIntervalDelay;

/// [Header("Run Length")]
/// [Tooltip("Infinite runs forever. Finite stops after Max Fires Per Run.")]
/// [SerializeField]
/// @brief Field runLength, offset: 0x60, size: 0x4, def value: None
 ::GlobalNamespace::GorillaIntervalTimer_RunLength  ___runLength;

/// [Tooltip("Number of times the timer fires before the run completes (when Run Length = Finite).")]
/// [SerializeField]
/// @brief Field maxFiresPerRun, offset: 0x64, size: 0x4, def value: None
 int32_t  ___maxFiresPerRun;

/// [Tooltip("If true, the timer stops at the end of a finite run and requires ResetRun() / StartTimer() to continue. If false, the run counter auto-resets and continues.")]
/// [SerializeField]
/// @brief Field requireManualReset, offset: 0x68, size: 0x1, def value: None
 bool  ___requireManualReset;

/// [Header("Events")]
/// @brief Field onIntervalFired, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onIntervalFired;

/// @brief Field onTimerStarted, offset: 0x78, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onTimerStarted;

/// @brief Field onTimerStopped, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onTimerStopped;

/// @brief Field currentIntervalSeconds, offset: 0x88, size: 0x4, def value: None
 float_t  ___currentIntervalSeconds;

/// @brief Field elapsed, offset: 0x8c, size: 0x4, def value: None
 float_t  ___elapsed;

/// @brief Field isRunning, offset: 0x90, size: 0x1, def value: None
 bool  ___isRunning;

/// @brief Field isPaused, offset: 0x91, size: 0x1, def value: None
 bool  ___isPaused;

/// @brief Field isRegistered, offset: 0x92, size: 0x1, def value: None
 bool  ___isRegistered;

/// @brief Field runFiredSoFar, offset: 0x94, size: 0x4, def value: None
 int32_t  ___runFiredSoFar;

/// @brief Field isInPostFireDelay, offset: 0x98, size: 0x1, def value: None
 bool  ___isInPostFireDelay;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::GorillaIntervalTimer, ___runOnEnable) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaIntervalTimer, ___useInitialDelay) == 0x29, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaIntervalTimer, ___initialDelay) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaIntervalTimer, ___unit) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaIntervalTimer, ___distribution) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaIntervalTimer, ___fixedInterval) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaIntervalTimer, ___useRandomDuration) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaIntervalTimer, ___randTimeMin) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaIntervalTimer, ___randTimeMax) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaIntervalTimer, ___intervalSource) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaIntervalTimer, ___networkProvider) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaIntervalTimer, ___usePostIntervalDelay) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaIntervalTimer, ___postIntervalDelay) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaIntervalTimer, ___runLength) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaIntervalTimer, ___maxFiresPerRun) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaIntervalTimer, ___requireManualReset) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaIntervalTimer, ___onIntervalFired) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaIntervalTimer, ___onTimerStarted) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaIntervalTimer, ___onTimerStopped) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaIntervalTimer, ___currentIntervalSeconds) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaIntervalTimer, ___elapsed) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaIntervalTimer, ___isRunning) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaIntervalTimer, ___isPaused) == 0x91, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaIntervalTimer, ___isRegistered) == 0x92, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaIntervalTimer, ___runFiredSoFar) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaIntervalTimer, ___isInPostFireDelay) == 0x98, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::GorillaIntervalTimer) == 0xa0, "Size mismatch!");

} // namespace end def GorillaTagScripts
