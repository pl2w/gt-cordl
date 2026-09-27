#pragma once
// IWYU pragma private; include "Pathfinding/RVO/Sampled/Agent_VO.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(Agent_VO)
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
struct Agent_VO;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Agent_VO);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Agent_VO, "Pathfinding.RVO.Sampled", "Agent/VO");
// Dependencies UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: true
// CS Name: Pathfinding.RVO.Sampled.Agent/VO
struct CORDL_TYPE Agent_VO {
public:
// Declarations
/// @brief Method Gradient, addr 0x5eed45c, size 0x224, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 Gradient(::UnityEngine::Vector2  p, ::by_ref<float_t>  weight) ;

/// @brief Method ScaledGradient, addr 0x5eed8ac, size 0x58, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 ScaledGradient(::UnityEngine::Vector2  p, ::by_ref<float_t>  weight) ;

/// @brief Method SegmentObstacle, addr 0x5eec5b0, size 0x560, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Agent_VO SegmentObstacle(::UnityEngine::Vector2  segmentStart, ::UnityEngine::Vector2  segmentEnd, ::UnityEngine::Vector2  offset, float_t  radius, float_t  inverseDt, float_t  inverseDeltaTime) ;

/// @brief Method SignedDistanceFromLine, addr 0x5eec598, size 0x18, virtual false, abstract: false, final false
static inline float_t SignedDistanceFromLine(::UnityEngine::Vector2  a, ::UnityEngine::Vector2  dir, ::UnityEngine::Vector2  p) ;

/// @brief Method .ctor, addr 0x5eecc28, size 0x59c, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector2  center, ::UnityEngine::Vector2  offset, float_t  radius, float_t  inverseDt, float_t  inverseDeltaTime) ;

// Ctor Parameters []
// @brief default ctor
constexpr Agent_VO() ;

// Ctor Parameters [CppParam { name: "line1", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "line2", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "dir1", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "dir2", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "cutoffLine", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "cutoffDir", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "circleCenter", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "colliding", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "radius", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "weightFactor", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "weightBonus", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "segmentStart", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "segmentEnd", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "segment", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr Agent_VO(::UnityEngine::Vector2  line1, ::UnityEngine::Vector2  line2, ::UnityEngine::Vector2  dir1, ::UnityEngine::Vector2  dir2, ::UnityEngine::Vector2  cutoffLine, ::UnityEngine::Vector2  cutoffDir, ::UnityEngine::Vector2  circleCenter, bool  colliding, float_t  radius, float_t  weightFactor, float_t  weightBonus, ::UnityEngine::Vector2  segmentStart, ::UnityEngine::Vector2  segmentEnd, bool  segment) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21511};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x5c};

/// @brief Field line1, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::Vector2  line1;

/// @brief Field line2, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::Vector2  line2;

/// @brief Field dir1, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Vector2  dir1;

/// @brief Field dir2, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Vector2  dir2;

/// @brief Field cutoffLine, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Vector2  cutoffLine;

/// @brief Field cutoffDir, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Vector2  cutoffDir;

/// @brief Field circleCenter, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Vector2  circleCenter;

/// @brief Field colliding, offset: 0x38, size: 0x1, def value: None
 bool  colliding;

/// @brief Field radius, offset: 0x3c, size: 0x4, def value: None
 float_t  radius;

/// @brief Field weightFactor, offset: 0x40, size: 0x4, def value: None
 float_t  weightFactor;

/// @brief Field weightBonus, offset: 0x44, size: 0x4, def value: None
 float_t  weightBonus;

/// @brief Field segmentStart, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Vector2  segmentStart;

/// @brief Field segmentEnd, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Vector2  segmentEnd;

/// @brief Field segment, offset: 0x58, size: 0x1, def value: None
 bool  segment;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Agent_VO, line1) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Agent_VO, line2) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Agent_VO, dir1) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Agent_VO, dir2) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Agent_VO, cutoffLine) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Agent_VO, cutoffDir) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Agent_VO, circleCenter) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Agent_VO, colliding) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Agent_VO, radius) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Agent_VO, weightFactor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Agent_VO, weightBonus) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Agent_VO, segmentStart) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Agent_VO, segmentEnd) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Agent_VO, segment) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Agent_VO) == 0x5c, "Size mismatch!");

} // namespace end def GlobalNamespace
