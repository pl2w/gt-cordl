#pragma once
// IWYU pragma private; include "GorillaLocomotion/Climbing/GorillaVelocityTracker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaVelocityTracker)
namespace GlobalNamespace {
struct GorillaVelocityTracker___c__DisplayClass28_0;
}
namespace GlobalNamespace {
class ITickSystemTick;
}
namespace GorillaLocomotion::Climbing {
class GorillaVelocityTracker_VelocityDataPoint;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaLocomotion::Climbing {
class GorillaVelocityTracker;
}
namespace GorillaLocomotion::Climbing {
class GorillaVelocityTracker_VelocityDataPoint;
}
// Write type traits
MARK_REF_T(::GorillaLocomotion::Climbing::GorillaVelocityTracker*);
MARK_REF_T(::GorillaLocomotion::Climbing::GorillaVelocityTracker_VelocityDataPoint*);
DEFINE_IL2CPP_CLASS(::GorillaLocomotion::Climbing::GorillaVelocityTracker*, "GorillaLocomotion.Climbing", "GorillaVelocityTracker");
DEFINE_IL2CPP_CLASS(::GorillaLocomotion::Climbing::GorillaVelocityTracker_VelocityDataPoint*, "GorillaLocomotion.Climbing", "GorillaVelocityTracker/VelocityDataPoint");
// Dependencies GorillaLocomotion.Climbing.GorillaVelocityTracker::VelocityDataPoint, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GorillaLocomotion::Climbing {
// Is value type: false
// CS Name: GorillaLocomotion.Climbing.GorillaVelocityTracker
class CORDL_TYPE GorillaVelocityTracker : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c__DisplayClass28_0 = ::GlobalNamespace::GorillaVelocityTracker___c__DisplayClass28_0;

using VelocityDataPoint = ::GorillaLocomotion::Climbing::GorillaVelocityTracker_VelocityDataPoint;

/// @brief Field OnLatestAboveThreshold, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnLatestAboveThreshold, put=__cordl_internal_set_OnLatestAboveThreshold)) ::UnityEngine::Events::UnityEvent*  OnLatestAboveThreshold;

/// @brief Field OnLatestBelowThreshold, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnLatestBelowThreshold, put=__cordl_internal_set_OnLatestBelowThreshold)) ::UnityEngine::Events::UnityEvent*  OnLatestBelowThreshold;

 __declspec(property(get=get_TickRunning, put=set_TickRunning)) bool  TickRunning;

/// @brief Field <TickRunning>k__BackingField, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get__TickRunning_k__BackingField, put=__cordl_internal_set__TickRunning_k__BackingField)) bool  _TickRunning_k__BackingField;

/// @brief Field currentDataPointIndex, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentDataPointIndex, put=__cordl_internal_set_currentDataPointIndex)) int32_t  currentDataPointIndex;

/// @brief Field isRelativeTo, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get_isRelativeTo, put=__cordl_internal_set_isRelativeTo)) bool  isRelativeTo;

/// @brief Field lastLocalSpacePos, offset 0x74, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastLocalSpacePos, put=__cordl_internal_set_lastLocalSpacePos)) ::UnityEngine::Vector3  lastLocalSpacePos;

/// @brief Field lastTickedFrame, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastTickedFrame, put=__cordl_internal_set_lastTickedFrame)) int32_t  lastTickedFrame;

/// @brief Field lastWorldSpacePos, offset 0x68, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastWorldSpacePos, put=__cordl_internal_set_lastWorldSpacePos)) ::UnityEngine::Vector3  lastWorldSpacePos;

/// @brief Field latestVelocityThreshold, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_latestVelocityThreshold, put=__cordl_internal_set_latestVelocityThreshold)) float_t  latestVelocityThreshold;

/// @brief Field localSpaceData, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_localSpaceData, put=__cordl_internal_set_localSpaceData)) ::ArrayW<::GorillaLocomotion::Climbing::GorillaVelocityTracker_VelocityDataPoint*>  localSpaceData;

/// @brief Field maxDataPoints, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxDataPoints, put=__cordl_internal_set_maxDataPoints)) int32_t  maxDataPoints;

/// @brief Field relativeTo, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_relativeTo, put=__cordl_internal_set_relativeTo)) ::UnityW<::UnityEngine::Transform>  relativeTo;

/// @brief Field trans, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_trans, put=__cordl_internal_set_trans)) ::UnityW<::UnityEngine::Transform>  trans;

/// @brief Field useVelocityEvents, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_useVelocityEvents, put=__cordl_internal_set_useVelocityEvents)) bool  useVelocityEvents;

/// @brief Field useWorldSpaceForEvents, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_useWorldSpaceForEvents, put=__cordl_internal_set_useWorldSpaceForEvents)) bool  useWorldSpaceForEvents;

/// @brief Field wasAboveThreshold, offset 0x49, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasAboveThreshold, put=__cordl_internal_set_wasAboveThreshold)) bool  wasAboveThreshold;

/// @brief Field worldSpaceData, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_worldSpaceData, put=__cordl_internal_set_worldSpaceData)) ::ArrayW<::GorillaLocomotion::Climbing::GorillaVelocityTracker_VelocityDataPoint*>  worldSpaceData;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr operator  ::GlobalNamespace::ITickSystemTick*() noexcept;

/// @brief Method AddToQueue, addr 0x5cf451c, size 0x108, virtual false, abstract: false, final false
inline void AddToQueue(::by_ref<::System::Collections::Generic::List_1<::GorillaLocomotion::Climbing::GorillaVelocityTracker_VelocityDataPoint*>*>  dataPoints, ::GorillaLocomotion::Climbing::GorillaVelocityTracker_VelocityDataPoint*  newData) ;

/// @brief Method Awake, addr 0x5cf43b4, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetAverageSpeedChangeMagnitudeInDirection, addr 0x5cf494c, size 0x158, virtual false, abstract: false, final false
inline float_t GetAverageSpeedChangeMagnitudeInDirection(::UnityEngine::Vector3  dir, bool  worldSpace, float_t  maxTimeFromPast) ;

/// @brief Method GetAverageVelocity, addr 0x5cf4624, size 0x268, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetAverageVelocity(bool  worldSpace, float_t  maxTimeFromPast, bool  doMagnitudeCheck) ;

/// @brief Method GetLatestVelocity, addr 0x5ceab54, size 0x1a0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetLatestVelocity(bool  worldSpace) ;

/// @brief Method GetPosition, addr 0x5cf434c, size 0x68, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetPosition(bool  worldSpace) ;

static inline ::GorillaLocomotion::Climbing::GorillaVelocityTracker* New_ctor() ;

/// @brief Method OnDisable, addr 0x5cf4424, size 0x74, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5cf43b8, size 0x6c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ResetState, addr 0x5cebdec, size 0x130, virtual false, abstract: false, final false
inline void ResetState() ;

/// @brief Method SetRelativeTo, addr 0x5cf4498, size 0x84, virtual false, abstract: false, final false
inline void SetRelativeTo(::UnityEngine::Transform*  tf) ;

/// @brief Method Tick, addr 0x5cebf1c, size 0x21c, virtual true, abstract: false, final true
inline void Tick() ;

/// [CompilerGenerated]
/// @brief Method <GetAverageVelocity>g__AddPoint|28_0, addr 0x5cf488c, size 0xc0, virtual false, abstract: false, final false
static inline void _GetAverageVelocity_g__AddPoint_28_0(::GorillaLocomotion::Climbing::GorillaVelocityTracker_VelocityDataPoint*  point, ::by_ref<::GlobalNamespace::GorillaVelocityTracker___c__DisplayClass28_0>  _cordl_fixed_empty_name_whitespace) ;

/// [CompilerGenerated]
/// @brief Method <ResetState>g__PopulateArray|20_0, addr 0x5cf4260, size 0xec, virtual false, abstract: false, final false
inline void _ResetState_g__PopulateArray_20_0(::ArrayW<::GorillaLocomotion::Climbing::GorillaVelocityTracker_VelocityDataPoint*>  array) ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnLatestAboveThreshold() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnLatestAboveThreshold() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnLatestBelowThreshold() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnLatestBelowThreshold() ;

constexpr bool const& __cordl_internal_get__TickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__TickRunning_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get_currentDataPointIndex() const;

constexpr int32_t& __cordl_internal_get_currentDataPointIndex() ;

constexpr bool const& __cordl_internal_get_isRelativeTo() const;

constexpr bool& __cordl_internal_get_isRelativeTo() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastLocalSpacePos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastLocalSpacePos() ;

constexpr int32_t const& __cordl_internal_get_lastTickedFrame() const;

constexpr int32_t& __cordl_internal_get_lastTickedFrame() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastWorldSpacePos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastWorldSpacePos() ;

constexpr float_t const& __cordl_internal_get_latestVelocityThreshold() const;

constexpr float_t& __cordl_internal_get_latestVelocityThreshold() ;

constexpr ::ArrayW<::GorillaLocomotion::Climbing::GorillaVelocityTracker_VelocityDataPoint*> const& __cordl_internal_get_localSpaceData() const;

constexpr ::ArrayW<::GorillaLocomotion::Climbing::GorillaVelocityTracker_VelocityDataPoint*>& __cordl_internal_get_localSpaceData() ;

constexpr int32_t const& __cordl_internal_get_maxDataPoints() const;

constexpr int32_t& __cordl_internal_get_maxDataPoints() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_relativeTo() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_relativeTo() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_trans() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_trans() ;

constexpr bool const& __cordl_internal_get_useVelocityEvents() const;

constexpr bool& __cordl_internal_get_useVelocityEvents() ;

constexpr bool const& __cordl_internal_get_useWorldSpaceForEvents() const;

constexpr bool& __cordl_internal_get_useWorldSpaceForEvents() ;

constexpr bool const& __cordl_internal_get_wasAboveThreshold() const;

constexpr bool& __cordl_internal_get_wasAboveThreshold() ;

constexpr ::ArrayW<::GorillaLocomotion::Climbing::GorillaVelocityTracker_VelocityDataPoint*> const& __cordl_internal_get_worldSpaceData() const;

constexpr ::ArrayW<::GorillaLocomotion::Climbing::GorillaVelocityTracker_VelocityDataPoint*>& __cordl_internal_get_worldSpaceData() ;

constexpr void __cordl_internal_set_OnLatestAboveThreshold(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OnLatestBelowThreshold(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__TickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_currentDataPointIndex(int32_t  value) ;

constexpr void __cordl_internal_set_isRelativeTo(bool  value) ;

constexpr void __cordl_internal_set_lastLocalSpacePos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastTickedFrame(int32_t  value) ;

constexpr void __cordl_internal_set_lastWorldSpacePos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_latestVelocityThreshold(float_t  value) ;

constexpr void __cordl_internal_set_localSpaceData(::ArrayW<::GorillaLocomotion::Climbing::GorillaVelocityTracker_VelocityDataPoint*>  value) ;

constexpr void __cordl_internal_set_maxDataPoints(int32_t  value) ;

constexpr void __cordl_internal_set_relativeTo(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_trans(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_useVelocityEvents(bool  value) ;

constexpr void __cordl_internal_set_useWorldSpaceForEvents(bool  value) ;

constexpr void __cordl_internal_set_wasAboveThreshold(bool  value) ;

constexpr void __cordl_internal_set_worldSpaceData(::ArrayW<::GorillaLocomotion::Climbing::GorillaVelocityTracker_VelocityDataPoint*>  value) ;

/// @brief Method .ctor, addr 0x5cf4aa4, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_TickRunning, addr 0x5cf4250, size 0x8, virtual true, abstract: false, final true
inline bool get_TickRunning() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* i___GlobalNamespace__ITickSystemTick() noexcept;

/// [CompilerGenerated]
/// @brief Method set_TickRunning, addr 0x5cf4258, size 0x8, virtual true, abstract: false, final true
inline void set_TickRunning(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaVelocityTracker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaVelocityTracker", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaVelocityTracker(GorillaVelocityTracker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaVelocityTracker", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaVelocityTracker(GorillaVelocityTracker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4552};

/// [SerializeField]
/// @brief Field maxDataPoints, offset: 0x20, size: 0x4, def value: None
 int32_t  ___maxDataPoints;

/// [SerializeField]
/// @brief Field relativeTo, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___relativeTo;

/// [Tooltip("Use in Editor to trigger events when above or higher than a desired latest velocity.")]
/// [SerializeField]
/// @brief Field useVelocityEvents, offset: 0x30, size: 0x1, def value: None
 bool  ___useVelocityEvents;

/// [SerializeField]
/// @brief Field latestVelocityThreshold, offset: 0x34, size: 0x4, def value: None
 float_t  ___latestVelocityThreshold;

/// @brief Field OnLatestBelowThreshold, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnLatestBelowThreshold;

/// @brief Field OnLatestAboveThreshold, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnLatestAboveThreshold;

/// [SerializeField]
/// @brief Field useWorldSpaceForEvents, offset: 0x48, size: 0x1, def value: None
 bool  ___useWorldSpaceForEvents;

/// @brief Field wasAboveThreshold, offset: 0x49, size: 0x1, def value: None
 bool  ___wasAboveThreshold;

/// @brief Field currentDataPointIndex, offset: 0x4c, size: 0x4, def value: None
 int32_t  ___currentDataPointIndex;

/// @brief Field localSpaceData, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::GorillaLocomotion::Climbing::GorillaVelocityTracker_VelocityDataPoint*>  ___localSpaceData;

/// @brief Field worldSpaceData, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::GorillaLocomotion::Climbing::GorillaVelocityTracker_VelocityDataPoint*>  ___worldSpaceData;

/// @brief Field trans, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___trans;

/// @brief Field lastWorldSpacePos, offset: 0x68, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastWorldSpacePos;

/// @brief Field lastLocalSpacePos, offset: 0x74, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastLocalSpacePos;

/// @brief Field isRelativeTo, offset: 0x80, size: 0x1, def value: None
 bool  ___isRelativeTo;

/// @brief Field lastTickedFrame, offset: 0x84, size: 0x4, def value: None
 int32_t  ___lastTickedFrame;

/// [CompilerGenerated]
/// @brief Field <TickRunning>k__BackingField, offset: 0x88, size: 0x1, def value: None
 bool  ____TickRunning_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaLocomotion::Climbing::GorillaVelocityTracker, ___maxDataPoints) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Climbing::GorillaVelocityTracker, ___relativeTo) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Climbing::GorillaVelocityTracker, ___useVelocityEvents) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Climbing::GorillaVelocityTracker, ___latestVelocityThreshold) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Climbing::GorillaVelocityTracker, ___OnLatestBelowThreshold) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Climbing::GorillaVelocityTracker, ___OnLatestAboveThreshold) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Climbing::GorillaVelocityTracker, ___useWorldSpaceForEvents) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Climbing::GorillaVelocityTracker, ___wasAboveThreshold) == 0x49, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Climbing::GorillaVelocityTracker, ___currentDataPointIndex) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Climbing::GorillaVelocityTracker, ___localSpaceData) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Climbing::GorillaVelocityTracker, ___worldSpaceData) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Climbing::GorillaVelocityTracker, ___trans) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Climbing::GorillaVelocityTracker, ___lastWorldSpacePos) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Climbing::GorillaVelocityTracker, ___lastLocalSpacePos) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Climbing::GorillaVelocityTracker, ___isRelativeTo) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Climbing::GorillaVelocityTracker, ___lastTickedFrame) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Climbing::GorillaVelocityTracker, ____TickRunning_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(sizeof(::GorillaLocomotion::Climbing::GorillaVelocityTracker) == 0x90, "Size mismatch!");

} // namespace end def GorillaLocomotion::Climbing
// Dependencies System.Object, UnityEngine.Vector3
namespace GorillaLocomotion::Climbing {
// Is value type: false
// CS Name: GorillaLocomotion.Climbing.GorillaVelocityTracker/VelocityDataPoint
class CORDL_TYPE GorillaVelocityTracker_VelocityDataPoint : public ::System::Object {
public:
// Declarations
/// @brief Field delta, offset 0x10, size 0xc 
 __declspec(property(get=__cordl_internal_get_delta, put=__cordl_internal_set_delta)) ::UnityEngine::Vector3  delta;

/// @brief Field time, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_time, put=__cordl_internal_set_time)) float_t  time;

static inline ::GorillaLocomotion::Climbing::GorillaVelocityTracker_VelocityDataPoint* New_ctor() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_delta() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_delta() ;

constexpr float_t const& __cordl_internal_get_time() const;

constexpr float_t& __cordl_internal_get_time() ;

constexpr void __cordl_internal_set_delta(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_time(float_t  value) ;

/// @brief Method .ctor, addr 0x5cf4abc, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaVelocityTracker_VelocityDataPoint() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaVelocityTracker_VelocityDataPoint", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaVelocityTracker_VelocityDataPoint(GorillaVelocityTracker_VelocityDataPoint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaVelocityTracker_VelocityDataPoint", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaVelocityTracker_VelocityDataPoint(GorillaVelocityTracker_VelocityDataPoint const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4550};

/// @brief Field delta, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___delta;

/// @brief Field time, offset: 0x1c, size: 0x4, def value: None
 float_t  ___time;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaLocomotion::Climbing::GorillaVelocityTracker_VelocityDataPoint, ___delta) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Climbing::GorillaVelocityTracker_VelocityDataPoint, ___time) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::GorillaLocomotion::Climbing::GorillaVelocityTracker_VelocityDataPoint) == 0x20, "Size mismatch!");

} // namespace end def GorillaLocomotion::Climbing
