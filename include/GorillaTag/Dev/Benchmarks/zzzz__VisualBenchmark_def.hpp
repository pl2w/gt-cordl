#pragma once
// IWYU pragma private; include "GorillaTag/Dev/Benchmarks/VisualBenchmark.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/Dev/Benchmarks/zzzz__VisualBenchmark_EState_def.hpp"
#include "GorillaTag/Dev/Benchmarks/zzzz__VisualBenchmark_StatInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerRecorder_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VisualBenchmark)
namespace GlobalNamespace {
struct VisualBenchmark_EState;
}
namespace GlobalNamespace {
struct VisualBenchmark_StatInfo;
}
namespace GorillaTag::Dev::Benchmarks {
class VisualBenchmark___c;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class Action;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GorillaTag::Dev::Benchmarks {
class VisualBenchmark;
}
namespace GorillaTag::Dev::Benchmarks {
class VisualBenchmark___c;
}
// Write type traits
MARK_REF_T(::GorillaTag::Dev::Benchmarks::VisualBenchmark*);
MARK_REF_T(::GorillaTag::Dev::Benchmarks::VisualBenchmark___c*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Dev::Benchmarks::VisualBenchmark*, "GorillaTag.Dev.Benchmarks", "VisualBenchmark");
DEFINE_IL2CPP_CLASS(::GorillaTag::Dev::Benchmarks::VisualBenchmark___c*, "GorillaTag.Dev.Benchmarks", "VisualBenchmark/<>c");
// Dependencies GorillaTag.Dev.Benchmarks.VisualBenchmark::EState, GorillaTag.Dev.Benchmarks.VisualBenchmark::StatInfo, Unity.Profiling.ProfilerRecorder, UnityEngine.MonoBehaviour, UnityEngine.Transform
namespace GorillaTag::Dev::Benchmarks {
// Is value type: false
// CS Name: GorillaTag.Dev.Benchmarks.VisualBenchmark
class CORDL_TYPE VisualBenchmark : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using EState = ::GlobalNamespace::VisualBenchmark_EState;

using StatInfo = ::GlobalNamespace::VisualBenchmark_StatInfo;

using __c = ::GorillaTag::Dev::Benchmarks::VisualBenchmark___c;

/// @brief Field availableRenderStats, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_availableRenderStats, put=__cordl_internal_set_availableRenderStats)) ::ArrayW<::GlobalNamespace::VisualBenchmark_StatInfo>  availableRenderStats;

/// @brief Field benchmarkLocations, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_benchmarkLocations, put=__cordl_internal_set_benchmarkLocations)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  benchmarkLocations;

/// @brief Field cam, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_cam, put=__cordl_internal_set_cam)) ::UnityW<::UnityEngine::Camera>  cam;

/// @brief Field collectGarbageDelay, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_collectGarbageDelay, put=__cordl_internal_set_collectGarbageDelay)) float_t  collectGarbageDelay;

/// @brief Field currentLocationIndex, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentLocationIndex, put=__cordl_internal_set_currentLocationIndex)) int32_t  currentLocationIndex;

/// @brief Field isQuitting, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_isQuitting, put=setStaticF_isQuitting)) bool  isQuitting;

/// @brief Field lastTime, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastTime, put=__cordl_internal_set_lastTime)) float_t  lastTime;

/// @brief Field recordStatsDelay, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_recordStatsDelay, put=__cordl_internal_set_recordStatsDelay)) float_t  recordStatsDelay;

/// @brief Field renderStatsRecorders, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_renderStatsRecorders, put=__cordl_internal_set_renderStatsRecorders)) ::ArrayW<::Unity::Profiling::ProfilerRecorder>  renderStatsRecorders;

/// @brief Field sb, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_sb, put=__cordl_internal_set_sb)) ::System::Text::StringBuilder*  sb;

/// @brief Field state, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) ::GlobalNamespace::VisualBenchmark_EState  state;

/// @brief Method Awake, addr 0x5d45a80, size 0x5c0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method LateUpdate, addr 0x5d461ac, size 0x2fc, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GorillaTag::Dev::Benchmarks::VisualBenchmark* New_ctor() ;

/// @brief Method OnDisable, addr 0x5d46138, size 0x74, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5d46040, size 0xf8, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RecordLocationStats, addr 0x5d464a8, size 0x478, virtual false, abstract: false, final false
inline void RecordLocationStats(::UnityEngine::Transform*  xform) ;

constexpr ::ArrayW<::GlobalNamespace::VisualBenchmark_StatInfo> const& __cordl_internal_get_availableRenderStats() const;

constexpr ::ArrayW<::GlobalNamespace::VisualBenchmark_StatInfo>& __cordl_internal_get_availableRenderStats() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get_benchmarkLocations() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get_benchmarkLocations() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_cam() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_cam() ;

constexpr float_t const& __cordl_internal_get_collectGarbageDelay() const;

constexpr float_t& __cordl_internal_get_collectGarbageDelay() ;

constexpr int32_t const& __cordl_internal_get_currentLocationIndex() const;

constexpr int32_t& __cordl_internal_get_currentLocationIndex() ;

constexpr float_t const& __cordl_internal_get_lastTime() const;

constexpr float_t& __cordl_internal_get_lastTime() ;

constexpr float_t const& __cordl_internal_get_recordStatsDelay() const;

constexpr float_t& __cordl_internal_get_recordStatsDelay() ;

constexpr ::ArrayW<::Unity::Profiling::ProfilerRecorder> const& __cordl_internal_get_renderStatsRecorders() const;

constexpr ::ArrayW<::Unity::Profiling::ProfilerRecorder>& __cordl_internal_get_renderStatsRecorders() ;

constexpr ::System::Text::StringBuilder* const& __cordl_internal_get_sb() const;

constexpr ::System::Text::StringBuilder*& __cordl_internal_get_sb() ;

constexpr ::GlobalNamespace::VisualBenchmark_EState const& __cordl_internal_get_state() const;

constexpr ::GlobalNamespace::VisualBenchmark_EState& __cordl_internal_get_state() ;

constexpr void __cordl_internal_set_availableRenderStats(::ArrayW<::GlobalNamespace::VisualBenchmark_StatInfo>  value) ;

constexpr void __cordl_internal_set_benchmarkLocations(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

constexpr void __cordl_internal_set_cam(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set_collectGarbageDelay(float_t  value) ;

constexpr void __cordl_internal_set_currentLocationIndex(int32_t  value) ;

constexpr void __cordl_internal_set_lastTime(float_t  value) ;

constexpr void __cordl_internal_set_recordStatsDelay(float_t  value) ;

constexpr void __cordl_internal_set_renderStatsRecorders(::ArrayW<::Unity::Profiling::ProfilerRecorder>  value) ;

constexpr void __cordl_internal_set_sb(::System::Text::StringBuilder*  value) ;

constexpr void __cordl_internal_set_state(::GlobalNamespace::VisualBenchmark_EState  value) ;

/// @brief Method .ctor, addr 0x5d46920, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF_isQuitting() ;

static inline void setStaticF_isQuitting(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VisualBenchmark() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VisualBenchmark", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VisualBenchmark(VisualBenchmark && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VisualBenchmark", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VisualBenchmark(VisualBenchmark const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4740};

/// [Tooltip("the camera will be moved and rotated to these spots and record stats.")]
/// @brief Field benchmarkLocations, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ___benchmarkLocations;

/// [Tooltip("How long to wait before calling GC.Collect() to clean up memory.")]
/// @brief Field collectGarbageDelay, offset: 0x28, size: 0x4, def value: None
 float_t  ___collectGarbageDelay;

/// [Tooltip("How long to wait before recording stats after the camera was moved to a new location.\nThis + collectGarbageDelay is the total time spent at each location.")]
/// @brief Field recordStatsDelay, offset: 0x2c, size: 0x4, def value: None
 float_t  ___recordStatsDelay;

/// [Tooltip("The camera to use for profiling. If null, a new camera will be created.")]
/// @brief Field cam, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ___cam;

/// @brief Field availableRenderStats, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::VisualBenchmark_StatInfo>  ___availableRenderStats;

/// @brief Field renderStatsRecorders, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::Unity::Profiling::ProfilerRecorder>  ___renderStatsRecorders;

/// @brief Field currentLocationIndex, offset: 0x48, size: 0x4, def value: None
 int32_t  ___currentLocationIndex;

/// @brief Field state, offset: 0x4c, size: 0x4, def value: None
 ::GlobalNamespace::VisualBenchmark_EState  ___state;

/// @brief Field lastTime, offset: 0x50, size: 0x4, def value: None
 float_t  ___lastTime;

/// @brief Field sb, offset: 0x58, size: 0x8, def value: None
 ::System::Text::StringBuilder*  ___sb;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Dev::Benchmarks::VisualBenchmark, ___benchmarkLocations) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Dev::Benchmarks::VisualBenchmark, ___collectGarbageDelay) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Dev::Benchmarks::VisualBenchmark, ___recordStatsDelay) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Dev::Benchmarks::VisualBenchmark, ___cam) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Dev::Benchmarks::VisualBenchmark, ___availableRenderStats) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Dev::Benchmarks::VisualBenchmark, ___renderStatsRecorders) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Dev::Benchmarks::VisualBenchmark, ___currentLocationIndex) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Dev::Benchmarks::VisualBenchmark, ___state) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Dev::Benchmarks::VisualBenchmark, ___lastTime) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Dev::Benchmarks::VisualBenchmark, ___sb) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Dev::Benchmarks::VisualBenchmark) == 0x60, "Size mismatch!");

} // namespace end def GorillaTag::Dev::Benchmarks
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaTag::Dev::Benchmarks {
// Is value type: false
// CS Name: GorillaTag.Dev.Benchmarks.VisualBenchmark/<>c
class CORDL_TYPE VisualBenchmark___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GorillaTag::Dev::Benchmarks::VisualBenchmark___c*  __9;

/// @brief Field <>9__13_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__13_0, put=setStaticF___9__13_0)) ::System::Action*  __9__13_0;

static inline ::GorillaTag::Dev::Benchmarks::VisualBenchmark___c* New_ctor() ;

/// @brief Method <Awake>b__13_0, addr 0x5d46a5c, size 0x5c, virtual false, abstract: false, final false
inline void _Awake_b__13_0() ;

/// @brief Method .ctor, addr 0x5d46a54, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GorillaTag::Dev::Benchmarks::VisualBenchmark___c* getStaticF___9() ;

static inline ::System::Action* getStaticF___9__13_0() ;

static inline void setStaticF___9(::GorillaTag::Dev::Benchmarks::VisualBenchmark___c*  value) ;

static inline void setStaticF___9__13_0(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VisualBenchmark___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VisualBenchmark___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VisualBenchmark___c(VisualBenchmark___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VisualBenchmark___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VisualBenchmark___c(VisualBenchmark___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4739};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTag::Dev::Benchmarks::VisualBenchmark___c) == 0x10, "Size mismatch!");

} // namespace end def GorillaTag::Dev::Benchmarks
