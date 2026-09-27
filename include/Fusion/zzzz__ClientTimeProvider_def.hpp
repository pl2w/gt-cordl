#pragma once
// IWYU pragma private; include "Fusion/ClientTimeProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__ClientTimeProviderSettings_def.hpp"
#include "Fusion/zzzz__Simulation_TimeFeedback_def.hpp"
#include "Fusion/zzzz__Tick_def.hpp"
#include "Fusion/zzzz__Timer_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ClientTimeProvider)
namespace Fusion::Statistics {
class FusionStatisticsManager;
}
namespace Fusion {
struct ClientTimeProviderSettings;
}
namespace Fusion {
class ClientTimeTrace;
}
namespace Fusion {
struct Clock;
}
namespace Fusion {
class ExponentialDecay;
}
namespace Fusion {
class Histogram;
}
namespace Fusion {
class IFeedbackController;
}
namespace Fusion {
class ITimeProvider;
}
namespace Fusion {
struct Instant;
}
namespace Fusion {
template<typename T>
class RingBuffer_1;
}
namespace Fusion {
struct SimulationRuntimeConfig;
}
namespace Fusion {
struct Tick;
}
namespace Fusion {
struct TimeAdjustment;
}
namespace Fusion {
class TimeProviderCallback;
}
namespace Fusion {
class TimeSeries;
}
namespace Fusion {
class TimeSyncConfiguration;
}
namespace GlobalNamespace {
struct Simulation_TimeFeedback;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Fusion {
class ClientTimeProvider;
}
// Write type traits
MARK_REF_T(::Fusion::ClientTimeProvider*);
DEFINE_IL2CPP_CLASS(::Fusion::ClientTimeProvider*, "Fusion", "ClientTimeProvider");
// Dependencies Fusion.ClientTimeProviderSettings, Fusion.Simulation::TimeFeedback, Fusion.Tick, Fusion.Timer, System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.ClientTimeProvider
class CORDL_TYPE ClientTimeProvider : public ::System::Object {
public:
// Declarations
/// @brief Field _clockFeedback, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__clockFeedback, put=__cordl_internal_set__clockFeedback)) ::Fusion::IFeedbackController*  _clockFeedback;

/// @brief Field _clockSyncTimer, offset 0x170, size 0x18 
 __declspec(property(get=__cordl_internal_get__clockSyncTimer, put=__cordl_internal_set__clockSyncTimer)) ::Fusion::Timer  _clockSyncTimer;

/// @brief Field _clockTimeScaleOffset, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__clockTimeScaleOffset, put=__cordl_internal_set__clockTimeScaleOffset)) double_t  _clockTimeScaleOffset;

/// @brief Field _delayFeedback, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__delayFeedback, put=__cordl_internal_set__delayFeedback)) ::Fusion::IFeedbackController*  _delayFeedback;

/// @brief Field _delayTimeScaleOffset, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__delayTimeScaleOffset, put=__cordl_internal_set__delayTimeScaleOffset)) double_t  _delayTimeScaleOffset;

/// @brief Field _frameTimeDeltaChecked, offset 0x130, size 0x1 
 __declspec(property(get=__cordl_internal_get__frameTimeDeltaChecked, put=__cordl_internal_set__frameTimeDeltaChecked)) bool  _frameTimeDeltaChecked;

/// @brief Field _frameTimeDeltaHist, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get__frameTimeDeltaHist, put=__cordl_internal_set__frameTimeDeltaHist)) ::Fusion::Histogram*  _frameTimeDeltaHist;

/// @brief Field _frameTimeDeltaHistDecay, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get__frameTimeDeltaHistDecay, put=__cordl_internal_set__frameTimeDeltaHistDecay)) ::Fusion::ExponentialDecay*  _frameTimeDeltaHistDecay;

/// @brief Field _frameTimeDeltaOutliersSeen, offset 0x131, size 0x1 
 __declspec(property(get=__cordl_internal_get__frameTimeDeltaOutliersSeen, put=__cordl_internal_set__frameTimeDeltaOutliersSeen)) bool  _frameTimeDeltaOutliersSeen;

/// @brief Field _inputOffset, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get__inputOffset, put=__cordl_internal_set__inputOffset)) ::Fusion::TimeSeries*  _inputOffset;

/// @brief Field _inputOffsetAdjust, offset 0x248, size 0x8 
 __declspec(property(get=__cordl_internal_get__inputOffsetAdjust, put=__cordl_internal_set__inputOffsetAdjust)) ::Fusion::RingBuffer_1<::Fusion::TimeAdjustment>*  _inputOffsetAdjust;

/// @brief Field _inputTime, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get__inputTime, put=__cordl_internal_set__inputTime)) double_t  _inputTime;

/// @brief Field _inputTimeReset, offset 0x204, size 0x1 
 __declspec(property(get=__cordl_internal_get__inputTimeReset, put=__cordl_internal_set__inputTimeReset)) bool  _inputTimeReset;

/// @brief Field _inputTimeResetCount, offset 0x1f8, size 0x4 
 __declspec(property(get=__cordl_internal_get__inputTimeResetCount, put=__cordl_internal_set__inputTimeResetCount)) int32_t  _inputTimeResetCount;

/// @brief Field _interpDelay, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get__interpDelay, put=__cordl_internal_set__interpDelay)) ::Fusion::TimeSeries*  _interpDelay;

/// @brief Field _interpFeedback, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__interpFeedback, put=__cordl_internal_set__interpFeedback)) ::Fusion::IFeedbackController*  _interpFeedback;

/// @brief Field _interpTime, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get__interpTime, put=__cordl_internal_set__interpTime)) double_t  _interpTime;

/// @brief Field _interpTimeReset, offset 0x206, size 0x1 
 __declspec(property(get=__cordl_internal_get__interpTimeReset, put=__cordl_internal_set__interpTimeReset)) bool  _interpTimeReset;

/// @brief Field _interpTimeResetCount, offset 0x200, size 0x4 
 __declspec(property(get=__cordl_internal_get__interpTimeResetCount, put=__cordl_internal_set__interpTimeResetCount)) int32_t  _interpTimeResetCount;

/// @brief Field _interpTimeScaleOffset, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get__interpTimeScaleOffset, put=__cordl_internal_set__interpTimeScaleOffset)) double_t  _interpTimeScaleOffset;

/// @brief Field _isRunning, offset 0x220, size 0x1 
 __declspec(property(get=__cordl_internal_get__isRunning, put=__cordl_internal_set__isRunning)) bool  _isRunning;

/// @brief Field _lastInputOffsetAdjustTick, offset 0x250, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastInputOffsetAdjustTick, put=__cordl_internal_set__lastInputOffsetAdjustTick)) ::Fusion::Tick  _lastInputOffsetAdjustTick;

/// @brief Field _lastSeenServerTime, offset 0x188, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastSeenServerTime, put=__cordl_internal_set__lastSeenServerTime)) double_t  _lastSeenServerTime;

/// @brief Field _lastSeenServerTimeScale, offset 0x190, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastSeenServerTimeScale, put=__cordl_internal_set__lastSeenServerTimeScale)) double_t  _lastSeenServerTimeScale;

/// @brief Field _latestInputDelay, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__latestInputDelay, put=__cordl_internal_set__latestInputDelay)) double_t  _latestInputDelay;

/// @brief Field _latestInputOffset, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__latestInputOffset, put=__cordl_internal_set__latestInputOffset)) double_t  _latestInputOffset;

/// @brief Field _latestInterpDelay, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__latestInterpDelay, put=__cordl_internal_set__latestInterpDelay)) double_t  _latestInterpDelay;

/// @brief Field _latestSnapshotIsOutlier, offset 0x132, size 0x1 
 __declspec(property(get=__cordl_internal_get__latestSnapshotIsOutlier, put=__cordl_internal_set__latestSnapshotIsOutlier)) bool  _latestSnapshotIsOutlier;

/// @brief Field _playerIndex, offset 0x224, size 0x4 
 __declspec(property(get=__cordl_internal_get__playerIndex, put=__cordl_internal_set__playerIndex)) int32_t  _playerIndex;

/// @brief Field _resetInputTimeCallbacks, offset 0x208, size 0x8 
 __declspec(property(get=__cordl_internal_get__resetInputTimeCallbacks, put=__cordl_internal_set__resetInputTimeCallbacks)) ::System::Collections::Generic::List_1<::Fusion::TimeProviderCallback*>*  _resetInputTimeCallbacks;

/// @brief Field _resetInputTimer, offset 0x1b0, size 0x18 
 __declspec(property(get=__cordl_internal_get__resetInputTimer, put=__cordl_internal_set__resetInputTimer)) ::Fusion::Timer  _resetInputTimer;

/// @brief Field _resetInterpTimeCallbacks, offset 0x218, size 0x8 
 __declspec(property(get=__cordl_internal_get__resetInterpTimeCallbacks, put=__cordl_internal_set__resetInterpTimeCallbacks)) ::System::Collections::Generic::List_1<::Fusion::TimeProviderCallback*>*  _resetInterpTimeCallbacks;

/// @brief Field _resetInterpTimer, offset 0x1e0, size 0x18 
 __declspec(property(get=__cordl_internal_get__resetInterpTimer, put=__cordl_internal_set__resetInterpTimer)) ::Fusion::Timer  _resetInterpTimer;

/// @brief Field _resetSimulationTimeCallbacks, offset 0x210, size 0x8 
 __declspec(property(get=__cordl_internal_get__resetSimulationTimeCallbacks, put=__cordl_internal_set__resetSimulationTimeCallbacks)) ::System::Collections::Generic::List_1<::Fusion::TimeProviderCallback*>*  _resetSimulationTimeCallbacks;

/// @brief Field _resetSimulationTimer, offset 0x1c8, size 0x18 
 __declspec(property(get=__cordl_internal_get__resetSimulationTimer, put=__cordl_internal_set__resetSimulationTimer)) ::Fusion::Timer  _resetSimulationTimer;

/// @brief Field _roundTripTime, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get__roundTripTime, put=__cordl_internal_set__roundTripTime)) ::Fusion::TimeSeries*  _roundTripTime;

/// @brief Field _sampleTimer, offset 0x198, size 0x18 
 __declspec(property(get=__cordl_internal_get__sampleTimer, put=__cordl_internal_set__sampleTimer)) ::Fusion::Timer  _sampleTimer;

/// @brief Field _serverFeedback, offset 0x238, size 0x10 
 __declspec(property(get=__cordl_internal_get__serverFeedback, put=__cordl_internal_set__serverFeedback)) ::GlobalNamespace::Simulation_TimeFeedback  _serverFeedback;

/// @brief Field _settings, offset 0x10, size 0x80 
 __declspec(property(get=__cordl_internal_get__settings, put=__cordl_internal_set__settings)) ::Fusion::ClientTimeProviderSettings  _settings;

/// @brief Field _simulationTime, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get__simulationTime, put=__cordl_internal_set__simulationTime)) double_t  _simulationTime;

/// @brief Field _simulationTimeReset, offset 0x205, size 0x1 
 __declspec(property(get=__cordl_internal_get__simulationTimeReset, put=__cordl_internal_set__simulationTimeReset)) bool  _simulationTimeReset;

/// @brief Field _simulationTimeResetCount, offset 0x1fc, size 0x4 
 __declspec(property(get=__cordl_internal_get__simulationTimeResetCount, put=__cordl_internal_set__simulationTimeResetCount)) int32_t  _simulationTimeResetCount;

/// @brief Field _snapshot, offset 0x168, size 0x4 
 __declspec(property(get=__cordl_internal_get__snapshot, put=__cordl_internal_set__snapshot)) ::Fusion::Tick  _snapshot;

/// @brief Field _snapshotExceededFrames, offset 0x228, size 0x4 
 __declspec(property(get=__cordl_internal_get__snapshotExceededFrames, put=__cordl_internal_set__snapshotExceededFrames)) int32_t  _snapshotExceededFrames;

/// @brief Field _snapshotExceededTime, offset 0x230, size 0x8 
 __declspec(property(get=__cordl_internal_get__snapshotExceededTime, put=__cordl_internal_set__snapshotExceededTime)) double_t  _snapshotExceededTime;

/// @brief Field _snapshotTimeDelta, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get__snapshotTimeDelta, put=__cordl_internal_set__snapshotTimeDelta)) ::Fusion::TimeSeries*  _snapshotTimeDelta;

/// @brief Field _snapshotTimeDeltaHist, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get__snapshotTimeDeltaHist, put=__cordl_internal_set__snapshotTimeDeltaHist)) ::Fusion::Histogram*  _snapshotTimeDeltaHist;

/// @brief Field _snapshotTimeDeltaHistDecay, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get__snapshotTimeDeltaHistDecay, put=__cordl_internal_set__snapshotTimeDeltaHistDecay)) ::Fusion::ExponentialDecay*  _snapshotTimeDeltaHistDecay;

/// @brief Field _snapshotTimer, offset 0x148, size 0x18 
 __declspec(property(get=__cordl_internal_get__snapshotTimer, put=__cordl_internal_set__snapshotTimer)) ::Fusion::Timer  _snapshotTimer;

/// @brief Field _targetInputDelay, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__targetInputDelay, put=__cordl_internal_set__targetInputDelay)) double_t  _targetInputDelay;

/// @brief Field _targetInputOffset, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__targetInputOffset, put=__cordl_internal_set__targetInputOffset)) double_t  _targetInputOffset;

/// @brief Field _targetInterpDelay, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get__targetInterpDelay, put=__cordl_internal_set__targetInterpDelay)) double_t  _targetInterpDelay;

/// @brief Field _timeTrace, offset 0x268, size 0x8 
 __declspec(property(get=__cordl_internal_get__timeTrace, put=__cordl_internal_set__timeTrace)) ::Fusion::ClientTimeTrace*  _timeTrace;

/// @brief Field _totalInputOffsetAdjust, offset 0x258, size 0x8 
 __declspec(property(get=__cordl_internal_get__totalInputOffsetAdjust, put=__cordl_internal_set__totalInputOffsetAdjust)) double_t  _totalInputOffsetAdjust;

/// @brief Field _trace, offset 0x260, size 0x1 
 __declspec(property(get=__cordl_internal_get__trace, put=__cordl_internal_set__trace)) bool  _trace;

/// @brief Convert operator to "::Fusion::ITimeProvider"
constexpr operator  ::Fusion::ITimeProvider*() noexcept;

/// @brief Method AddInputOffsetAdjustment, addr 0x6008b10, size 0x228, virtual false, abstract: false, final false
inline void AddInputOffsetAdjustment(double_t  amount) ;

/// @brief Method Configure, addr 0x6006f7c, size 0x8c, virtual false, abstract: false, final false
inline void Configure(::Fusion::SimulationRuntimeConfig  src) ;

/// @brief Method Configure, addr 0x6006ed8, size 0xa4, virtual false, abstract: false, final false
inline void Configure(::Fusion::TimeSyncConfiguration*  tsc) ;

/// @brief Method FrameTimeDeltaCheck, addr 0x6008f9c, size 0x84, virtual false, abstract: false, final false
inline void FrameTimeDeltaCheck(double_t  dt) ;

/// @brief Method FrameTimeDeltaCheckReset, addr 0x6009098, size 0x8, virtual false, abstract: false, final false
inline void FrameTimeDeltaCheckReset() ;

/// @brief Method FrameTimeDeltaSeemsLikeAnExtremeOutlier, addr 0x6009020, size 0x78, virtual false, abstract: false, final false
inline bool FrameTimeDeltaSeemsLikeAnExtremeOutlier(double_t  dt) ;

/// @brief Method Fusion.ITimeProvider.Configure, addr 0x6009cd0, size 0x4c, virtual true, abstract: false, final true
inline void Fusion_ITimeProvider_Configure(::Fusion::SimulationRuntimeConfig  src) ;

/// @brief Method Fusion.ITimeProvider.Configure, addr 0x6009d1c, size 0x4, virtual true, abstract: false, final true
inline void Fusion_ITimeProvider_Configure(::Fusion::TimeSyncConfiguration*  tsc) ;

/// @brief Method Fusion.ITimeProvider.IsRunning, addr 0x6009cc8, size 0x8, virtual true, abstract: false, final true
inline bool Fusion_ITimeProvider_IsRunning() ;

/// @brief Method Fusion.ITimeProvider.Log, addr 0x6009fe0, size 0x1d4, virtual true, abstract: false, final true
inline void Fusion_ITimeProvider_Log(::Fusion::Statistics::FusionStatisticsManager*  stats) ;

/// @brief Method Fusion.ITimeProvider.Now, addr 0x6009fd4, size 0xc, virtual true, abstract: false, final true
inline ::Fusion::Instant Fusion_ITimeProvider_Now() ;

/// @brief Method Fusion.ITimeProvider.OnFeedbackReceived, addr 0x6009e80, size 0x100, virtual true, abstract: false, final true
inline void Fusion_ITimeProvider_OnFeedbackReceived(::GlobalNamespace::Simulation_TimeFeedback  feedback) ;

/// @brief Method Fusion.ITimeProvider.OnSnapshotReceived, addr 0x6009d40, size 0x140, virtual true, abstract: false, final true
inline void Fusion_ITimeProvider_OnSnapshotReceived(double_t  roundTripTime, ::Fusion::Tick  snapshot) ;

/// @brief Method Fusion.ITimeProvider.Reset, addr 0x6009d20, size 0x18, virtual true, abstract: false, final true
inline void Fusion_ITimeProvider_Reset(double_t  roundTripTime, ::Fusion::Tick  snapshot) ;

/// @brief Method Fusion.ITimeProvider.ResetFeedback, addr 0x6009f8c, size 0x48, virtual true, abstract: false, final true
inline void Fusion_ITimeProvider_ResetFeedback() ;

/// @brief Method Fusion.ITimeProvider.SetPlayerIndex, addr 0x600a1b4, size 0x8, virtual true, abstract: false, final true
inline void Fusion_ITimeProvider_SetPlayerIndex(int32_t  index) ;

/// @brief Method Fusion.ITimeProvider.Snap, addr 0x6009d38, size 0x4, virtual true, abstract: false, final true
inline void Fusion_ITimeProvider_Snap() ;

/// @brief Method Fusion.ITimeProvider.StartTrace, addr 0x600a1bc, size 0xd0, virtual true, abstract: false, final true
inline void Fusion_ITimeProvider_StartTrace() ;

/// @brief Method Fusion.ITimeProvider.StopTrace, addr 0x600a378, size 0x8, virtual true, abstract: false, final true
inline void Fusion_ITimeProvider_StopTrace() ;

/// @brief Method Fusion.ITimeProvider.Update, addr 0x6009d3c, size 0x4, virtual true, abstract: false, final true
inline void Fusion_ITimeProvider_Update(double_t  unscaledDeltaTime) ;

/// @brief Method GetInputOffset, addr 0x6008afc, size 0x14, virtual false, abstract: false, final false
inline double_t GetInputOffset() ;

/// @brief Method GetInputOffsetLegacy, addr 0x6008adc, size 0x20, virtual false, abstract: false, final false
inline double_t GetInputOffsetLegacy() ;

/// @brief Method GetServerTime, addr 0x6008904, size 0xf8, virtual false, abstract: false, final false
inline double_t GetServerTime() ;

/// @brief Method GetSnapshotTime, addr 0x60089fc, size 0xe0, virtual false, abstract: false, final false
inline double_t GetSnapshotTime() ;

/// @brief Method Initialize, addr 0x6006a68, size 0x378, virtual false, abstract: false, final false
inline void Initialize() ;

static inline ::Fusion::ClientTimeProvider* New_ctor() ;

static inline ::Fusion::ClientTimeProvider* New_ctor(::Fusion::ClientTimeProviderSettings  settings) ;

/// @brief Method OnReset, addr 0x6006de0, size 0xf8, virtual false, abstract: false, final false
inline void OnReset(::Fusion::Clock  clock, ::Fusion::TimeProviderCallback*  callback) ;

/// @brief Method RemoveInputOffsetAdjustmentsOlderThan, addr 0x6008d38, size 0x264, virtual false, abstract: false, final false
inline void RemoveInputOffsetAdjustmentsOlderThan(::Fusion::Tick  snapshot) ;

/// @brief Method Reset, addr 0x600714c, size 0x428, virtual false, abstract: false, final false
inline void Reset(double_t  roundTripTime, ::Fusion::Tick  snapshot, double_t  time, double_t  timeScale) ;

/// @brief Method ResetInputTime, addr 0x6007e40, size 0x25c, virtual false, abstract: false, final false
inline void ResetInputTime() ;

/// @brief Method ResetInterpolationTime, addr 0x6008398, size 0x56c, virtual false, abstract: false, final false
inline void ResetInterpolationTime(bool  resetMayBeCausedByFalseOutlier) ;

/// @brief Method ResetSimulationTime, addr 0x600809c, size 0x2fc, virtual false, abstract: false, final false
inline void ResetSimulationTime() ;

/// @brief Method RoundToNearestMultiple, addr 0x60091ec, size 0xec, virtual false, abstract: false, final false
inline double_t RoundToNearestMultiple(double_t  x, double_t  round, bool  minimumOne) ;

/// @brief Method SaveInterpDelaySample, addr 0x60090a0, size 0x14c, virtual false, abstract: false, final false
inline void SaveInterpDelaySample(double_t  interpDelay) ;

/// @brief Method Snap, addr 0x6007e1c, size 0x24, virtual false, abstract: false, final false
inline void Snap() ;

/// @brief Method Update, addr 0x60092d8, size 0x9c8, virtual false, abstract: false, final false
inline void Update(double_t  unscaledDeltaTime) ;

/// @brief Method UpdateIncomingTargets, addr 0x6007bb8, size 0xb4, virtual false, abstract: false, final false
inline void UpdateIncomingTargets(bool  snap) ;

/// @brief Method UpdateOutgoingTargets, addr 0x6007c6c, size 0x1b0, virtual false, abstract: false, final false
inline void UpdateOutgoingTargets(bool  snap) ;

/// @brief Method UpdateServerStats, addr 0x6007a98, size 0x120, virtual false, abstract: false, final false
inline void UpdateServerStats(double_t  roundTripTime, double_t  time, double_t  timeScale) ;

/// @brief Method UpdateSnapshot, addr 0x6007590, size 0x508, virtual false, abstract: false, final false
inline void UpdateSnapshot(::Fusion::Tick  snapshot) ;

constexpr ::Fusion::IFeedbackController* const& __cordl_internal_get__clockFeedback() const;

constexpr ::Fusion::IFeedbackController*& __cordl_internal_get__clockFeedback() ;

constexpr ::Fusion::Timer const& __cordl_internal_get__clockSyncTimer() const;

constexpr ::Fusion::Timer& __cordl_internal_get__clockSyncTimer() ;

constexpr double_t const& __cordl_internal_get__clockTimeScaleOffset() const;

constexpr double_t& __cordl_internal_get__clockTimeScaleOffset() ;

constexpr ::Fusion::IFeedbackController* const& __cordl_internal_get__delayFeedback() const;

constexpr ::Fusion::IFeedbackController*& __cordl_internal_get__delayFeedback() ;

constexpr double_t const& __cordl_internal_get__delayTimeScaleOffset() const;

constexpr double_t& __cordl_internal_get__delayTimeScaleOffset() ;

constexpr bool const& __cordl_internal_get__frameTimeDeltaChecked() const;

constexpr bool& __cordl_internal_get__frameTimeDeltaChecked() ;

constexpr ::Fusion::Histogram* const& __cordl_internal_get__frameTimeDeltaHist() const;

constexpr ::Fusion::Histogram*& __cordl_internal_get__frameTimeDeltaHist() ;

constexpr ::Fusion::ExponentialDecay* const& __cordl_internal_get__frameTimeDeltaHistDecay() const;

constexpr ::Fusion::ExponentialDecay*& __cordl_internal_get__frameTimeDeltaHistDecay() ;

constexpr bool const& __cordl_internal_get__frameTimeDeltaOutliersSeen() const;

constexpr bool& __cordl_internal_get__frameTimeDeltaOutliersSeen() ;

constexpr ::Fusion::TimeSeries* const& __cordl_internal_get__inputOffset() const;

constexpr ::Fusion::TimeSeries*& __cordl_internal_get__inputOffset() ;

constexpr ::Fusion::RingBuffer_1<::Fusion::TimeAdjustment>* const& __cordl_internal_get__inputOffsetAdjust() const;

constexpr ::Fusion::RingBuffer_1<::Fusion::TimeAdjustment>*& __cordl_internal_get__inputOffsetAdjust() ;

constexpr double_t const& __cordl_internal_get__inputTime() const;

constexpr double_t& __cordl_internal_get__inputTime() ;

constexpr bool const& __cordl_internal_get__inputTimeReset() const;

constexpr bool& __cordl_internal_get__inputTimeReset() ;

constexpr int32_t const& __cordl_internal_get__inputTimeResetCount() const;

constexpr int32_t& __cordl_internal_get__inputTimeResetCount() ;

constexpr ::Fusion::TimeSeries* const& __cordl_internal_get__interpDelay() const;

constexpr ::Fusion::TimeSeries*& __cordl_internal_get__interpDelay() ;

constexpr ::Fusion::IFeedbackController* const& __cordl_internal_get__interpFeedback() const;

constexpr ::Fusion::IFeedbackController*& __cordl_internal_get__interpFeedback() ;

constexpr double_t const& __cordl_internal_get__interpTime() const;

constexpr double_t& __cordl_internal_get__interpTime() ;

constexpr bool const& __cordl_internal_get__interpTimeReset() const;

constexpr bool& __cordl_internal_get__interpTimeReset() ;

constexpr int32_t const& __cordl_internal_get__interpTimeResetCount() const;

constexpr int32_t& __cordl_internal_get__interpTimeResetCount() ;

constexpr double_t const& __cordl_internal_get__interpTimeScaleOffset() const;

constexpr double_t& __cordl_internal_get__interpTimeScaleOffset() ;

constexpr bool const& __cordl_internal_get__isRunning() const;

constexpr bool& __cordl_internal_get__isRunning() ;

constexpr ::Fusion::Tick const& __cordl_internal_get__lastInputOffsetAdjustTick() const;

constexpr ::Fusion::Tick& __cordl_internal_get__lastInputOffsetAdjustTick() ;

constexpr double_t const& __cordl_internal_get__lastSeenServerTime() const;

constexpr double_t& __cordl_internal_get__lastSeenServerTime() ;

constexpr double_t const& __cordl_internal_get__lastSeenServerTimeScale() const;

constexpr double_t& __cordl_internal_get__lastSeenServerTimeScale() ;

constexpr double_t const& __cordl_internal_get__latestInputDelay() const;

constexpr double_t& __cordl_internal_get__latestInputDelay() ;

constexpr double_t const& __cordl_internal_get__latestInputOffset() const;

constexpr double_t& __cordl_internal_get__latestInputOffset() ;

constexpr double_t const& __cordl_internal_get__latestInterpDelay() const;

constexpr double_t& __cordl_internal_get__latestInterpDelay() ;

constexpr bool const& __cordl_internal_get__latestSnapshotIsOutlier() const;

constexpr bool& __cordl_internal_get__latestSnapshotIsOutlier() ;

constexpr int32_t const& __cordl_internal_get__playerIndex() const;

constexpr int32_t& __cordl_internal_get__playerIndex() ;

constexpr ::System::Collections::Generic::List_1<::Fusion::TimeProviderCallback*>* const& __cordl_internal_get__resetInputTimeCallbacks() const;

constexpr ::System::Collections::Generic::List_1<::Fusion::TimeProviderCallback*>*& __cordl_internal_get__resetInputTimeCallbacks() ;

constexpr ::Fusion::Timer const& __cordl_internal_get__resetInputTimer() const;

constexpr ::Fusion::Timer& __cordl_internal_get__resetInputTimer() ;

constexpr ::System::Collections::Generic::List_1<::Fusion::TimeProviderCallback*>* const& __cordl_internal_get__resetInterpTimeCallbacks() const;

constexpr ::System::Collections::Generic::List_1<::Fusion::TimeProviderCallback*>*& __cordl_internal_get__resetInterpTimeCallbacks() ;

constexpr ::Fusion::Timer const& __cordl_internal_get__resetInterpTimer() const;

constexpr ::Fusion::Timer& __cordl_internal_get__resetInterpTimer() ;

constexpr ::System::Collections::Generic::List_1<::Fusion::TimeProviderCallback*>* const& __cordl_internal_get__resetSimulationTimeCallbacks() const;

constexpr ::System::Collections::Generic::List_1<::Fusion::TimeProviderCallback*>*& __cordl_internal_get__resetSimulationTimeCallbacks() ;

constexpr ::Fusion::Timer const& __cordl_internal_get__resetSimulationTimer() const;

constexpr ::Fusion::Timer& __cordl_internal_get__resetSimulationTimer() ;

constexpr ::Fusion::TimeSeries* const& __cordl_internal_get__roundTripTime() const;

constexpr ::Fusion::TimeSeries*& __cordl_internal_get__roundTripTime() ;

constexpr ::Fusion::Timer const& __cordl_internal_get__sampleTimer() const;

constexpr ::Fusion::Timer& __cordl_internal_get__sampleTimer() ;

constexpr ::GlobalNamespace::Simulation_TimeFeedback const& __cordl_internal_get__serverFeedback() const;

constexpr ::GlobalNamespace::Simulation_TimeFeedback& __cordl_internal_get__serverFeedback() ;

constexpr ::Fusion::ClientTimeProviderSettings const& __cordl_internal_get__settings() const;

constexpr ::Fusion::ClientTimeProviderSettings& __cordl_internal_get__settings() ;

constexpr double_t const& __cordl_internal_get__simulationTime() const;

constexpr double_t& __cordl_internal_get__simulationTime() ;

constexpr bool const& __cordl_internal_get__simulationTimeReset() const;

constexpr bool& __cordl_internal_get__simulationTimeReset() ;

constexpr int32_t const& __cordl_internal_get__simulationTimeResetCount() const;

constexpr int32_t& __cordl_internal_get__simulationTimeResetCount() ;

constexpr ::Fusion::Tick const& __cordl_internal_get__snapshot() const;

constexpr ::Fusion::Tick& __cordl_internal_get__snapshot() ;

constexpr int32_t const& __cordl_internal_get__snapshotExceededFrames() const;

constexpr int32_t& __cordl_internal_get__snapshotExceededFrames() ;

constexpr double_t const& __cordl_internal_get__snapshotExceededTime() const;

constexpr double_t& __cordl_internal_get__snapshotExceededTime() ;

constexpr ::Fusion::TimeSeries* const& __cordl_internal_get__snapshotTimeDelta() const;

constexpr ::Fusion::TimeSeries*& __cordl_internal_get__snapshotTimeDelta() ;

constexpr ::Fusion::Histogram* const& __cordl_internal_get__snapshotTimeDeltaHist() const;

constexpr ::Fusion::Histogram*& __cordl_internal_get__snapshotTimeDeltaHist() ;

constexpr ::Fusion::ExponentialDecay* const& __cordl_internal_get__snapshotTimeDeltaHistDecay() const;

constexpr ::Fusion::ExponentialDecay*& __cordl_internal_get__snapshotTimeDeltaHistDecay() ;

constexpr ::Fusion::Timer const& __cordl_internal_get__snapshotTimer() const;

constexpr ::Fusion::Timer& __cordl_internal_get__snapshotTimer() ;

constexpr double_t const& __cordl_internal_get__targetInputDelay() const;

constexpr double_t& __cordl_internal_get__targetInputDelay() ;

constexpr double_t const& __cordl_internal_get__targetInputOffset() const;

constexpr double_t& __cordl_internal_get__targetInputOffset() ;

constexpr double_t const& __cordl_internal_get__targetInterpDelay() const;

constexpr double_t& __cordl_internal_get__targetInterpDelay() ;

constexpr ::Fusion::ClientTimeTrace* const& __cordl_internal_get__timeTrace() const;

constexpr ::Fusion::ClientTimeTrace*& __cordl_internal_get__timeTrace() ;

constexpr double_t const& __cordl_internal_get__totalInputOffsetAdjust() const;

constexpr double_t& __cordl_internal_get__totalInputOffsetAdjust() ;

constexpr bool const& __cordl_internal_get__trace() const;

constexpr bool& __cordl_internal_get__trace() ;

constexpr void __cordl_internal_set__clockFeedback(::Fusion::IFeedbackController*  value) ;

constexpr void __cordl_internal_set__clockSyncTimer(::Fusion::Timer  value) ;

constexpr void __cordl_internal_set__clockTimeScaleOffset(double_t  value) ;

constexpr void __cordl_internal_set__delayFeedback(::Fusion::IFeedbackController*  value) ;

constexpr void __cordl_internal_set__delayTimeScaleOffset(double_t  value) ;

constexpr void __cordl_internal_set__frameTimeDeltaChecked(bool  value) ;

constexpr void __cordl_internal_set__frameTimeDeltaHist(::Fusion::Histogram*  value) ;

constexpr void __cordl_internal_set__frameTimeDeltaHistDecay(::Fusion::ExponentialDecay*  value) ;

constexpr void __cordl_internal_set__frameTimeDeltaOutliersSeen(bool  value) ;

constexpr void __cordl_internal_set__inputOffset(::Fusion::TimeSeries*  value) ;

constexpr void __cordl_internal_set__inputOffsetAdjust(::Fusion::RingBuffer_1<::Fusion::TimeAdjustment>*  value) ;

constexpr void __cordl_internal_set__inputTime(double_t  value) ;

constexpr void __cordl_internal_set__inputTimeReset(bool  value) ;

constexpr void __cordl_internal_set__inputTimeResetCount(int32_t  value) ;

constexpr void __cordl_internal_set__interpDelay(::Fusion::TimeSeries*  value) ;

constexpr void __cordl_internal_set__interpFeedback(::Fusion::IFeedbackController*  value) ;

constexpr void __cordl_internal_set__interpTime(double_t  value) ;

constexpr void __cordl_internal_set__interpTimeReset(bool  value) ;

constexpr void __cordl_internal_set__interpTimeResetCount(int32_t  value) ;

constexpr void __cordl_internal_set__interpTimeScaleOffset(double_t  value) ;

constexpr void __cordl_internal_set__isRunning(bool  value) ;

constexpr void __cordl_internal_set__lastInputOffsetAdjustTick(::Fusion::Tick  value) ;

constexpr void __cordl_internal_set__lastSeenServerTime(double_t  value) ;

constexpr void __cordl_internal_set__lastSeenServerTimeScale(double_t  value) ;

constexpr void __cordl_internal_set__latestInputDelay(double_t  value) ;

constexpr void __cordl_internal_set__latestInputOffset(double_t  value) ;

constexpr void __cordl_internal_set__latestInterpDelay(double_t  value) ;

constexpr void __cordl_internal_set__latestSnapshotIsOutlier(bool  value) ;

constexpr void __cordl_internal_set__playerIndex(int32_t  value) ;

constexpr void __cordl_internal_set__resetInputTimeCallbacks(::System::Collections::Generic::List_1<::Fusion::TimeProviderCallback*>*  value) ;

constexpr void __cordl_internal_set__resetInputTimer(::Fusion::Timer  value) ;

constexpr void __cordl_internal_set__resetInterpTimeCallbacks(::System::Collections::Generic::List_1<::Fusion::TimeProviderCallback*>*  value) ;

constexpr void __cordl_internal_set__resetInterpTimer(::Fusion::Timer  value) ;

constexpr void __cordl_internal_set__resetSimulationTimeCallbacks(::System::Collections::Generic::List_1<::Fusion::TimeProviderCallback*>*  value) ;

constexpr void __cordl_internal_set__resetSimulationTimer(::Fusion::Timer  value) ;

constexpr void __cordl_internal_set__roundTripTime(::Fusion::TimeSeries*  value) ;

constexpr void __cordl_internal_set__sampleTimer(::Fusion::Timer  value) ;

constexpr void __cordl_internal_set__serverFeedback(::GlobalNamespace::Simulation_TimeFeedback  value) ;

constexpr void __cordl_internal_set__settings(::Fusion::ClientTimeProviderSettings  value) ;

constexpr void __cordl_internal_set__simulationTime(double_t  value) ;

constexpr void __cordl_internal_set__simulationTimeReset(bool  value) ;

constexpr void __cordl_internal_set__simulationTimeResetCount(int32_t  value) ;

constexpr void __cordl_internal_set__snapshot(::Fusion::Tick  value) ;

constexpr void __cordl_internal_set__snapshotExceededFrames(int32_t  value) ;

constexpr void __cordl_internal_set__snapshotExceededTime(double_t  value) ;

constexpr void __cordl_internal_set__snapshotTimeDelta(::Fusion::TimeSeries*  value) ;

constexpr void __cordl_internal_set__snapshotTimeDeltaHist(::Fusion::Histogram*  value) ;

constexpr void __cordl_internal_set__snapshotTimeDeltaHistDecay(::Fusion::ExponentialDecay*  value) ;

constexpr void __cordl_internal_set__snapshotTimer(::Fusion::Timer  value) ;

constexpr void __cordl_internal_set__targetInputDelay(double_t  value) ;

constexpr void __cordl_internal_set__targetInputOffset(double_t  value) ;

constexpr void __cordl_internal_set__targetInterpDelay(double_t  value) ;

constexpr void __cordl_internal_set__timeTrace(::Fusion::ClientTimeTrace*  value) ;

constexpr void __cordl_internal_set__totalInputOffsetAdjust(double_t  value) ;

constexpr void __cordl_internal_set__trace(bool  value) ;

/// @brief Method .ctor, addr 0x6006950, size 0x2c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x600697c, size 0xec, virtual false, abstract: false, final false
inline void _ctor(::Fusion::ClientTimeProviderSettings  settings) ;

/// @brief Convert to "::Fusion::ITimeProvider"
constexpr ::Fusion::ITimeProvider* i___Fusion__ITimeProvider() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ClientTimeProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ClientTimeProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ClientTimeProvider(ClientTimeProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClientTimeProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClientTimeProvider(ClientTimeProvider const& ) = delete;

/// @brief Field BumpFraction offset 0xffffffff size 0x8
static constexpr double_t  BumpFraction{static_cast<double_t>(0.125)};

/// @brief Field FeedbackSmoothingFactor offset 0xffffffff size 0x4
static constexpr float_t  FeedbackSmoothingFactor{static_cast<float_t>(0.5f)};

/// @brief Field FrameTimeDeltaHighQuantile offset 0xffffffff size 0x8
static constexpr double_t  FrameTimeDeltaHighQuantile{static_cast<double_t>(0.95)};

/// @brief Field FrameTimeDeltaHistogramDecayFraction offset 0xffffffff size 0x8
static constexpr double_t  FrameTimeDeltaHistogramDecayFraction{static_cast<double_t>(0.5)};

/// @brief Field FrameTimeDeltaHistogramDecayTime offset 0xffffffff size 0x8
static constexpr double_t  FrameTimeDeltaHistogramDecayTime{static_cast<double_t>(2.0)};

/// @brief Field FrameTimeDeltaOutlierTest1Quantile offset 0xffffffff size 0x8
static constexpr double_t  FrameTimeDeltaOutlierTest1Quantile{static_cast<double_t>(0.95)};

/// @brief Field FrameTimeDeltaOutlierTest1Threshold offset 0xffffffff size 0x8
static constexpr double_t  FrameTimeDeltaOutlierTest1Threshold{static_cast<double_t>(0.1)};

/// @brief Field FrameTimeDeltaOutlierTest2Threshold offset 0xffffffff size 0x8
static constexpr double_t  FrameTimeDeltaOutlierTest2Threshold{static_cast<double_t>(0.25)};

/// @brief Field InitialServerFeedbackJitter offset 0xffffffff size 0x8
static constexpr double_t  InitialServerFeedbackJitter{static_cast<double_t>(0.025)};

/// @brief Field InputDelaySmoothingFactor offset 0xffffffff size 0x8
static constexpr double_t  InputDelaySmoothingFactor{static_cast<double_t>(0.5)};

/// @brief Field InputOffsetSmoothingFactor offset 0xffffffff size 0x8
static constexpr double_t  InputOffsetSmoothingFactor{static_cast<double_t>(0.5)};

/// @brief Field InterpDelaySmoothingFactor offset 0xffffffff size 0x8
static constexpr double_t  InterpDelaySmoothingFactor{static_cast<double_t>(0.5)};

/// @brief Field InterpDelayTempSmoothingFactor offset 0xffffffff size 0x8
static constexpr double_t  InterpDelayTempSmoothingFactor{static_cast<double_t>(0.125)};

/// @brief Field Kd offset 0xffffffff size 0x8
static constexpr double_t  Kd{static_cast<double_t>(0.0)};

/// @brief Field Ki offset 0xffffffff size 0x8
static constexpr double_t  Ki{static_cast<double_t>(0.0)};

/// @brief Field Kp offset 0xffffffff size 0x8
static constexpr double_t  Kp{static_cast<double_t>(0.3)};

/// @brief Field NegativeResetThreshold offset 0xffffffff size 0x8
static constexpr double_t  NegativeResetThreshold{static_cast<double_t>(-0.5)};

/// @brief Field PositiveBumpThreshold offset 0xffffffff size 0x8
static constexpr double_t  PositiveBumpThreshold{static_cast<double_t>(0.05)};

/// @brief Field PositiveResetThreshold offset 0xffffffff size 0x8
static constexpr double_t  PositiveResetThreshold{static_cast<double_t>(1.0)};

/// @brief Field ResetCooldownSeconds offset 0xffffffff size 0x8
static constexpr double_t  ResetCooldownSeconds{static_cast<double_t>(1.0)};

/// @brief Field RttSmoothingFactor offset 0xffffffff size 0x8
static constexpr double_t  RttSmoothingFactor{static_cast<double_t>(0.25)};

/// @brief Field SnapshotTimeDeltaHighQuantile offset 0xffffffff size 0x8
static constexpr double_t  SnapshotTimeDeltaHighQuantile{static_cast<double_t>(0.95)};

/// @brief Field SnapshotTimeDeltaHistogramDecayFraction offset 0xffffffff size 0x8
static constexpr double_t  SnapshotTimeDeltaHistogramDecayFraction{static_cast<double_t>(0.5)};

/// @brief Field SnapshotTimeDeltaHistogramDecayTime offset 0xffffffff size 0x8
static constexpr double_t  SnapshotTimeDeltaHistogramDecayTime{static_cast<double_t>(2.0)};

/// @brief Field TargetInputDelaySmoothingFactor offset 0xffffffff size 0x8
static constexpr double_t  TargetInputDelaySmoothingFactor{static_cast<double_t>(0.2)};

/// @brief Field TargetInputOffsetSmoothingFactor offset 0xffffffff size 0x8
static constexpr double_t  TargetInputOffsetSmoothingFactor{static_cast<double_t>(0.2)};

/// @brief Field TargetInterpDelaySmoothingFactor offset 0xffffffff size 0x8
static constexpr double_t  TargetInterpDelaySmoothingFactor{static_cast<double_t>(0.2)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19362};

/// @brief Field _settings, offset: 0x10, size: 0x80, def value: None
 ::Fusion::ClientTimeProviderSettings  ____settings;

/// @brief Field _clockFeedback, offset: 0x90, size: 0x8, def value: None
 ::Fusion::IFeedbackController*  ____clockFeedback;

/// @brief Field _latestInputOffset, offset: 0x98, size: 0x8, def value: None
 double_t  ____latestInputOffset;

/// @brief Field _targetInputOffset, offset: 0xa0, size: 0x8, def value: None
 double_t  ____targetInputOffset;

/// @brief Field _clockTimeScaleOffset, offset: 0xa8, size: 0x8, def value: None
 double_t  ____clockTimeScaleOffset;

/// @brief Field _delayFeedback, offset: 0xb0, size: 0x8, def value: None
 ::Fusion::IFeedbackController*  ____delayFeedback;

/// @brief Field _latestInputDelay, offset: 0xb8, size: 0x8, def value: None
 double_t  ____latestInputDelay;

/// @brief Field _targetInputDelay, offset: 0xc0, size: 0x8, def value: None
 double_t  ____targetInputDelay;

/// @brief Field _delayTimeScaleOffset, offset: 0xc8, size: 0x8, def value: None
 double_t  ____delayTimeScaleOffset;

/// @brief Field _interpFeedback, offset: 0xd0, size: 0x8, def value: None
 ::Fusion::IFeedbackController*  ____interpFeedback;

/// @brief Field _latestInterpDelay, offset: 0xd8, size: 0x8, def value: None
 double_t  ____latestInterpDelay;

/// @brief Field _targetInterpDelay, offset: 0xe0, size: 0x8, def value: None
 double_t  ____targetInterpDelay;

/// @brief Field _interpTimeScaleOffset, offset: 0xe8, size: 0x8, def value: None
 double_t  ____interpTimeScaleOffset;

/// @brief Field _inputTime, offset: 0xf0, size: 0x8, def value: None
 double_t  ____inputTime;

/// @brief Field _simulationTime, offset: 0xf8, size: 0x8, def value: None
 double_t  ____simulationTime;

/// @brief Field _interpTime, offset: 0x100, size: 0x8, def value: None
 double_t  ____interpTime;

/// @brief Field _roundTripTime, offset: 0x108, size: 0x8, def value: None
 ::Fusion::TimeSeries*  ____roundTripTime;

/// @brief Field _inputOffset, offset: 0x110, size: 0x8, def value: None
 ::Fusion::TimeSeries*  ____inputOffset;

/// @brief Field _interpDelay, offset: 0x118, size: 0x8, def value: None
 ::Fusion::TimeSeries*  ____interpDelay;

/// @brief Field _frameTimeDeltaHist, offset: 0x120, size: 0x8, def value: None
 ::Fusion::Histogram*  ____frameTimeDeltaHist;

/// @brief Field _frameTimeDeltaHistDecay, offset: 0x128, size: 0x8, def value: None
 ::Fusion::ExponentialDecay*  ____frameTimeDeltaHistDecay;

/// @brief Field _frameTimeDeltaChecked, offset: 0x130, size: 0x1, def value: None
 bool  ____frameTimeDeltaChecked;

/// @brief Field _frameTimeDeltaOutliersSeen, offset: 0x131, size: 0x1, def value: None
 bool  ____frameTimeDeltaOutliersSeen;

/// @brief Field _latestSnapshotIsOutlier, offset: 0x132, size: 0x1, def value: None
 bool  ____latestSnapshotIsOutlier;

/// @brief Field _snapshotTimeDeltaHist, offset: 0x138, size: 0x8, def value: None
 ::Fusion::Histogram*  ____snapshotTimeDeltaHist;

/// @brief Field _snapshotTimeDeltaHistDecay, offset: 0x140, size: 0x8, def value: None
 ::Fusion::ExponentialDecay*  ____snapshotTimeDeltaHistDecay;

/// @brief Field _snapshotTimer, offset: 0x148, size: 0x18, def value: None
 ::Fusion::Timer  ____snapshotTimer;

/// @brief Field _snapshotTimeDelta, offset: 0x160, size: 0x8, def value: None
 ::Fusion::TimeSeries*  ____snapshotTimeDelta;

/// @brief Field _snapshot, offset: 0x168, size: 0x4, def value: None
 ::Fusion::Tick  ____snapshot;

/// @brief Field _clockSyncTimer, offset: 0x170, size: 0x18, def value: None
 ::Fusion::Timer  ____clockSyncTimer;

/// @brief Field _lastSeenServerTime, offset: 0x188, size: 0x8, def value: None
 double_t  ____lastSeenServerTime;

/// @brief Field _lastSeenServerTimeScale, offset: 0x190, size: 0x8, def value: None
 double_t  ____lastSeenServerTimeScale;

/// @brief Field _sampleTimer, offset: 0x198, size: 0x18, def value: None
 ::Fusion::Timer  ____sampleTimer;

/// @brief Field _resetInputTimer, offset: 0x1b0, size: 0x18, def value: None
 ::Fusion::Timer  ____resetInputTimer;

/// @brief Field _resetSimulationTimer, offset: 0x1c8, size: 0x18, def value: None
 ::Fusion::Timer  ____resetSimulationTimer;

/// @brief Field _resetInterpTimer, offset: 0x1e0, size: 0x18, def value: None
 ::Fusion::Timer  ____resetInterpTimer;

/// @brief Field _inputTimeResetCount, offset: 0x1f8, size: 0x4, def value: None
 int32_t  ____inputTimeResetCount;

/// @brief Field _simulationTimeResetCount, offset: 0x1fc, size: 0x4, def value: None
 int32_t  ____simulationTimeResetCount;

/// @brief Field _interpTimeResetCount, offset: 0x200, size: 0x4, def value: None
 int32_t  ____interpTimeResetCount;

/// @brief Field _inputTimeReset, offset: 0x204, size: 0x1, def value: None
 bool  ____inputTimeReset;

/// @brief Field _simulationTimeReset, offset: 0x205, size: 0x1, def value: None
 bool  ____simulationTimeReset;

/// @brief Field _interpTimeReset, offset: 0x206, size: 0x1, def value: None
 bool  ____interpTimeReset;

/// @brief Field _resetInputTimeCallbacks, offset: 0x208, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Fusion::TimeProviderCallback*>*  ____resetInputTimeCallbacks;

/// @brief Field _resetSimulationTimeCallbacks, offset: 0x210, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Fusion::TimeProviderCallback*>*  ____resetSimulationTimeCallbacks;

/// @brief Field _resetInterpTimeCallbacks, offset: 0x218, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Fusion::TimeProviderCallback*>*  ____resetInterpTimeCallbacks;

/// @brief Field _isRunning, offset: 0x220, size: 0x1, def value: None
 bool  ____isRunning;

/// @brief Field _playerIndex, offset: 0x224, size: 0x4, def value: None
 int32_t  ____playerIndex;

/// @brief Field _snapshotExceededFrames, offset: 0x228, size: 0x4, def value: None
 int32_t  ____snapshotExceededFrames;

/// @brief Field _snapshotExceededTime, offset: 0x230, size: 0x8, def value: None
 double_t  ____snapshotExceededTime;

/// @brief Field _serverFeedback, offset: 0x238, size: 0x10, def value: None
 ::GlobalNamespace::Simulation_TimeFeedback  ____serverFeedback;

/// @brief Field _inputOffsetAdjust, offset: 0x248, size: 0x8, def value: None
 ::Fusion::RingBuffer_1<::Fusion::TimeAdjustment>*  ____inputOffsetAdjust;

/// @brief Field _lastInputOffsetAdjustTick, offset: 0x250, size: 0x4, def value: None
 ::Fusion::Tick  ____lastInputOffsetAdjustTick;

/// @brief Field _totalInputOffsetAdjust, offset: 0x258, size: 0x8, def value: None
 double_t  ____totalInputOffsetAdjust;

/// @brief Field _trace, offset: 0x260, size: 0x1, def value: None
 bool  ____trace;

/// @brief Field _timeTrace, offset: 0x268, size: 0x8, def value: None
 ::Fusion::ClientTimeTrace*  ____timeTrace;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::ClientTimeProvider, ____settings) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProvider, ____clockFeedback) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProvider, ____latestInputOffset) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProvider, ____targetInputOffset) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProvider, ____clockTimeScaleOffset) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProvider, ____delayFeedback) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProvider, ____latestInputDelay) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProvider, ____targetInputDelay) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProvider, ____delayTimeScaleOffset) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProvider, ____interpFeedback) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProvider, ____latestInterpDelay) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProvider, ____targetInterpDelay) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProvider, ____interpTimeScaleOffset) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProvider, ____inputTime) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProvider, ____simulationTime) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProvider, ____interpTime) == 0x100, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProvider, ____roundTripTime) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProvider, ____inputOffset) == 0x110, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProvider, ____interpDelay) == 0x118, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProvider, ____frameTimeDeltaHist) == 0x120, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProvider, ____frameTimeDeltaHistDecay) == 0x128, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProvider, ____frameTimeDeltaChecked) == 0x130, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProvider, ____frameTimeDeltaOutliersSeen) == 0x131, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProvider, ____latestSnapshotIsOutlier) == 0x132, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProvider, ____snapshotTimeDeltaHist) == 0x138, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProvider, ____snapshotTimeDeltaHistDecay) == 0x140, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProvider, ____snapshotTimer) == 0x148, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProvider, ____snapshotTimeDelta) == 0x160, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProvider, ____snapshot) == 0x168, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProvider, ____clockSyncTimer) == 0x170, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProvider, ____lastSeenServerTime) == 0x188, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProvider, ____lastSeenServerTimeScale) == 0x190, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProvider, ____sampleTimer) == 0x198, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProvider, ____resetInputTimer) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProvider, ____resetSimulationTimer) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProvider, ____resetInterpTimer) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProvider, ____inputTimeResetCount) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProvider, ____simulationTimeResetCount) == 0x1fc, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProvider, ____interpTimeResetCount) == 0x200, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProvider, ____inputTimeReset) == 0x204, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProvider, ____simulationTimeReset) == 0x205, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProvider, ____interpTimeReset) == 0x206, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProvider, ____resetInputTimeCallbacks) == 0x208, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProvider, ____resetSimulationTimeCallbacks) == 0x210, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProvider, ____resetInterpTimeCallbacks) == 0x218, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProvider, ____isRunning) == 0x220, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProvider, ____playerIndex) == 0x224, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProvider, ____snapshotExceededFrames) == 0x228, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProvider, ____snapshotExceededTime) == 0x230, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProvider, ____serverFeedback) == 0x238, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProvider, ____inputOffsetAdjust) == 0x248, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProvider, ____lastInputOffsetAdjustTick) == 0x250, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProvider, ____totalInputOffsetAdjust) == 0x258, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProvider, ____trace) == 0x260, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProvider, ____timeTrace) == 0x268, "Offset mismatch!");

static_assert(sizeof(::Fusion::ClientTimeProvider) == 0x270, "Size mismatch!");

} // namespace end def Fusion
