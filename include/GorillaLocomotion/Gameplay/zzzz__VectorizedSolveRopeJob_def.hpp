#pragma once
// IWYU pragma private; include "GorillaLocomotion/Gameplay/VectorizedSolveRopeJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaLocomotion/Gameplay/zzzz__VectorizedBurstRopeData_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VectorizedSolveRopeJob)
namespace Unity::Jobs {
class IJob;
}
namespace Unity::Mathematics {
struct float4;
}
// Forward declare root types
namespace GorillaLocomotion::Gameplay {
struct VectorizedSolveRopeJob;
}
// Write type traits
MARK_VAL_T(::GorillaLocomotion::Gameplay::VectorizedSolveRopeJob);
DEFINE_IL2CPP_CLASS(::GorillaLocomotion::Gameplay::VectorizedSolveRopeJob, "GorillaLocomotion.Gameplay", "VectorizedSolveRopeJob");
// [BurstCompile((Unity.Burst.FloatPrecision)3, (Unity.Burst.FloatMode)3)]
// Dependencies GorillaLocomotion.Gameplay.VectorizedBurstRopeData
namespace GorillaLocomotion::Gameplay {
// Is value type: true
// CS Name: GorillaLocomotion.Gameplay.VectorizedSolveRopeJob
struct CORDL_TYPE VectorizedSolveRopeJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr operator  ::Unity::Jobs::IJob*() ;

/// @brief Method ApplyConstraint, addr 0x5cf2de0, size 0x2d0, virtual false, abstract: false, final false
inline void ApplyConstraint() ;

/// @brief Method ConstrainRoots, addr 0x5cf33d0, size 0x11c, virtual false, abstract: false, final false
inline void ConstrainRoots() ;

/// @brief Method Execute, addr 0x5cf2bdc, size 0x6c, virtual true, abstract: false, final true
inline void Execute() ;

/// @brief Method FinalPass, addr 0x5cf30b0, size 0x228, virtual false, abstract: false, final false
inline void FinalPass() ;

/// @brief Method Simulate, addr 0x5cf2c48, size 0x198, virtual false, abstract: false, final false
inline void Simulate() ;

/// @brief Method dot4, addr 0x5cf32d8, size 0x34, virtual false, abstract: false, final false
static inline void dot4(::by_ref<::Unity::Mathematics::float4>  ax, ::by_ref<::Unity::Mathematics::float4>  ay, ::by_ref<::Unity::Mathematics::float4>  az, ::by_ref<::Unity::Mathematics::float4>  bx, ::by_ref<::Unity::Mathematics::float4>  by, ::by_ref<::Unity::Mathematics::float4>  bz, ::by_ref<::Unity::Mathematics::float4>  output) ;

/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob() ;

/// @brief Method length4, addr 0x5cf330c, size 0xc4, virtual false, abstract: false, final false
static inline void length4(::by_ref<::Unity::Mathematics::float4>  xVals, ::by_ref<::Unity::Mathematics::float4>  yVals, ::by_ref<::Unity::Mathematics::float4>  zVals, ::by_ref<::Unity::Mathematics::float4>  output) ;

// Ctor Parameters []
// @brief default ctor
constexpr VectorizedSolveRopeJob() ;

// Ctor Parameters [CppParam { name: "applyConstraintIterations", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "finalPassIterations", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "deltaTime", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "lastDeltaTime", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ropeCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "data", ty: "::GorillaLocomotion::Gameplay::VectorizedBurstRopeData", modifiers: "", def_value: None, comment: None }, CppParam { name: "gravity", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "nodeDistance", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr VectorizedSolveRopeJob(int32_t  applyConstraintIterations, int32_t  finalPassIterations, float_t  deltaTime, float_t  lastDeltaTime, int32_t  ropeCount, ::GorillaLocomotion::Gameplay::VectorizedBurstRopeData  data, float_t  gravity, float_t  nodeDistance) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4545};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xb0};

/// [ReadOnly]
/// @brief Field applyConstraintIterations, offset: 0x0, size: 0x4, def value: None
 int32_t  applyConstraintIterations;

/// [ReadOnly]
/// @brief Field finalPassIterations, offset: 0x4, size: 0x4, def value: None
 int32_t  finalPassIterations;

/// [ReadOnly]
/// @brief Field deltaTime, offset: 0x8, size: 0x4, def value: None
 float_t  deltaTime;

/// [ReadOnly]
/// @brief Field lastDeltaTime, offset: 0xc, size: 0x4, def value: None
 float_t  lastDeltaTime;

/// [ReadOnly]
/// @brief Field ropeCount, offset: 0x10, size: 0x4, def value: None
 int32_t  ropeCount;

/// @brief Field data, offset: 0x18, size: 0x90, def value: None
 ::GorillaLocomotion::Gameplay::VectorizedBurstRopeData  data;

/// [ReadOnly]
/// @brief Field gravity, offset: 0xa8, size: 0x4, def value: None
 float_t  gravity;

/// [ReadOnly]
/// @brief Field nodeDistance, offset: 0xac, size: 0x4, def value: None
 float_t  nodeDistance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GorillaLocomotion::Gameplay::VectorizedSolveRopeJob, applyConstraintIterations) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::VectorizedSolveRopeJob, finalPassIterations) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::VectorizedSolveRopeJob, deltaTime) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::VectorizedSolveRopeJob, lastDeltaTime) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::VectorizedSolveRopeJob, ropeCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::VectorizedSolveRopeJob, data) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::VectorizedSolveRopeJob, gravity) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::VectorizedSolveRopeJob, nodeDistance) == 0xac, "Offset mismatch!");

static_assert(sizeof(::GorillaLocomotion::Gameplay::VectorizedSolveRopeJob) == 0xb0, "Size mismatch!");

} // namespace end def GorillaLocomotion::Gameplay
