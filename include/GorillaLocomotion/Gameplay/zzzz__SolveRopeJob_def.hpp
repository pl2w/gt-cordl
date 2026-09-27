#pragma once
// IWYU pragma private; include "GorillaLocomotion/Gameplay/SolveRopeJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaLocomotion/Gameplay/zzzz__BurstRopeNode_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(SolveRopeJob)
namespace Unity::Jobs {
class IJob;
}
// Forward declare root types
namespace GorillaLocomotion::Gameplay {
struct SolveRopeJob;
}
// Write type traits
MARK_VAL_T(::GorillaLocomotion::Gameplay::SolveRopeJob);
DEFINE_IL2CPP_CLASS(::GorillaLocomotion::Gameplay::SolveRopeJob, "GorillaLocomotion.Gameplay", "SolveRopeJob");
// [BurstCompile]
// Dependencies GorillaLocomotion.Gameplay.BurstRopeNode, Unity.Collections.NativeArray`1<T>, UnityEngine.Vector3
namespace GorillaLocomotion::Gameplay {
// Is value type: true
// CS Name: GorillaLocomotion.Gameplay.SolveRopeJob
struct CORDL_TYPE SolveRopeJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr operator  ::Unity::Jobs::IJob*() ;

/// @brief Method ApplyConstraint, addr 0x5ce91d0, size 0x2f0, virtual false, abstract: false, final false
inline void ApplyConstraint() ;

/// @brief Method Execute, addr 0x5ce9120, size 0x30, virtual true, abstract: false, final true
inline void Execute() ;

/// @brief Method Simulate, addr 0x5ce9150, size 0x80, virtual false, abstract: false, final false
inline void Simulate() ;

/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob() ;

// Ctor Parameters []
// @brief default ctor
constexpr SolveRopeJob() ;

// Ctor Parameters [CppParam { name: "fixedDeltaTime", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "nodes", ty: "::Unity::Collections::NativeArray_1<::GorillaLocomotion::Gameplay::BurstRopeNode>", modifiers: "", def_value: None, comment: None }, CppParam { name: "gravity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "rootPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "nodeDistance", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr SolveRopeJob(float_t  fixedDeltaTime, ::Unity::Collections::NativeArray_1<::GorillaLocomotion::Gameplay::BurstRopeNode>  nodes, ::UnityEngine::Vector3  gravity, ::UnityEngine::Vector3  rootPos, float_t  nodeDistance) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4526};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// [ReadOnly]
/// @brief Field fixedDeltaTime, offset: 0x0, size: 0x4, def value: None
 float_t  fixedDeltaTime;

/// [WriteOnly]
/// @brief Field nodes, offset: 0x8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::GorillaLocomotion::Gameplay::BurstRopeNode>  nodes;

/// [ReadOnly]
/// @brief Field gravity, offset: 0x18, size: 0xc, def value: None
 ::UnityEngine::Vector3  gravity;

/// [ReadOnly]
/// @brief Field rootPos, offset: 0x24, size: 0xc, def value: None
 ::UnityEngine::Vector3  rootPos;

/// [ReadOnly]
/// @brief Field nodeDistance, offset: 0x30, size: 0x4, def value: None
 float_t  nodeDistance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GorillaLocomotion::Gameplay::SolveRopeJob, fixedDeltaTime) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::SolveRopeJob, nodes) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::SolveRopeJob, gravity) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::SolveRopeJob, rootPos) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::SolveRopeJob, nodeDistance) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GorillaLocomotion::Gameplay::SolveRopeJob) == 0x38, "Size mismatch!");

} // namespace end def GorillaLocomotion::Gameplay
