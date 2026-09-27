#pragma once
// IWYU pragma private; include "GlobalNamespace/HangingClaw.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__HangingClaw_RopeSegment_def.hpp"
#include "GlobalNamespace/zzzz__MonoBehaviourPostTick_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HangingClaw)
namespace GlobalNamespace {
struct HangingClaw_RopeSegment;
}
namespace UnityEngine {
class LineRenderer;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class HangingClaw;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HangingClaw*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HangingClaw*, "", "HangingClaw");
// [RequireComponent(typeof(UnityEngine.LineRenderer))]
// Dependencies HangingClaw::RopeSegment, MonoBehaviourPostTick, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: HangingClaw
class CORDL_TYPE HangingClaw : public ::GlobalNamespace::MonoBehaviourPostTick {
public:
// Declarations
using RopeSegment = ::GlobalNamespace::HangingClaw_RopeSegment;

/// @brief Field baseSegLen, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_baseSegLen, put=__cordl_internal_set_baseSegLen)) float_t  baseSegLen;

/// @brief Field endMassKg, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_endMassKg, put=__cordl_internal_set_endMassKg)) float_t  endMassKg;

/// @brief Field endTransform, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_endTransform, put=__cordl_internal_set_endTransform)) ::UnityW<::UnityEngine::Transform>  endTransform;

/// @brief Field gravity, offset 0x4c, size 0xc 
 __declspec(property(get=__cordl_internal_get_gravity, put=__cordl_internal_set_gravity)) ::UnityEngine::Vector3  gravity;

/// @brief Field heightCap, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_heightCap, put=__cordl_internal_set_heightCap)) ::UnityW<::UnityEngine::Transform>  heightCap;

/// @brief Field invMass, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_invMass, put=__cordl_internal_set_invMass)) ::ArrayW<float_t>  invMass;

/// @brief Field lineRenderer, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_lineRenderer, put=__cordl_internal_set_lineRenderer)) ::UnityW<::UnityEngine::LineRenderer>  lineRenderer;

/// @brief Field maxY, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxY, put=__cordl_internal_set_maxY)) float_t  maxY;

/// @brief Field ropeSegs, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_ropeSegs, put=__cordl_internal_set_ropeSegs)) ::ArrayW<::GlobalNamespace::HangingClaw_RopeSegment>  ropeSegs;

/// @brief Field ropeStiffness, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_ropeStiffness, put=__cordl_internal_set_ropeStiffness)) float_t  ropeStiffness;

/// @brief Field segmentCount, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_segmentCount, put=__cordl_internal_set_segmentCount)) int32_t  segmentCount;

/// @brief Field segmentMassKg, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_segmentMassKg, put=__cordl_internal_set_segmentMassKg)) float_t  segmentMassKg;

/// @brief Field slackFraction, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_slackFraction, put=__cordl_internal_set_slackFraction)) float_t  slackFraction;

/// @brief Field targetSegLenScaled, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_targetSegLenScaled, put=__cordl_internal_set_targetSegLenScaled)) float_t  targetSegLenScaled;

/// @brief Field velocityDamping, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_velocityDamping, put=__cordl_internal_set_velocityDamping)) float_t  velocityDamping;

/// @brief Method ApplyConstraintSegment, addr 0x589d2ec, size 0x148, virtual false, abstract: false, final false
inline void ApplyConstraintSegment(::by_ref<::GlobalNamespace::HangingClaw_RopeSegment>  a, ::by_ref<::GlobalNamespace::HangingClaw_RopeSegment>  b, float_t  wA, float_t  wB, float_t  stiffness) ;

/// @brief Method ApplyConstraints, addr 0x589d1e8, size 0x104, virtual false, abstract: false, final false
inline void ApplyConstraints(::UnityEngine::Vector3  topPos) ;

/// @brief Method Awake, addr 0x589cb84, size 0x2e4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DrawRope, addr 0x589d090, size 0x158, virtual false, abstract: false, final false
inline void DrawRope() ;

static inline ::GlobalNamespace::HangingClaw* New_ctor() ;

/// @brief Method PostTick, addr 0x589ce78, size 0x5c, virtual true, abstract: false, final false
inline void PostTick() ;

/// @brief Method Simulate, addr 0x589ced4, size 0x1bc, virtual false, abstract: false, final false
inline void Simulate() ;

constexpr float_t const& __cordl_internal_get_baseSegLen() const;

constexpr float_t& __cordl_internal_get_baseSegLen() ;

constexpr float_t const& __cordl_internal_get_endMassKg() const;

constexpr float_t& __cordl_internal_get_endMassKg() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_endTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_endTransform() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_gravity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_gravity() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_heightCap() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_heightCap() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_invMass() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_invMass() ;

constexpr ::UnityW<::UnityEngine::LineRenderer> const& __cordl_internal_get_lineRenderer() const;

constexpr ::UnityW<::UnityEngine::LineRenderer>& __cordl_internal_get_lineRenderer() ;

constexpr float_t const& __cordl_internal_get_maxY() const;

constexpr float_t& __cordl_internal_get_maxY() ;

constexpr ::ArrayW<::GlobalNamespace::HangingClaw_RopeSegment> const& __cordl_internal_get_ropeSegs() const;

constexpr ::ArrayW<::GlobalNamespace::HangingClaw_RopeSegment>& __cordl_internal_get_ropeSegs() ;

constexpr float_t const& __cordl_internal_get_ropeStiffness() const;

constexpr float_t& __cordl_internal_get_ropeStiffness() ;

constexpr int32_t const& __cordl_internal_get_segmentCount() const;

constexpr int32_t& __cordl_internal_get_segmentCount() ;

constexpr float_t const& __cordl_internal_get_segmentMassKg() const;

constexpr float_t& __cordl_internal_get_segmentMassKg() ;

constexpr float_t const& __cordl_internal_get_slackFraction() const;

constexpr float_t& __cordl_internal_get_slackFraction() ;

constexpr float_t const& __cordl_internal_get_targetSegLenScaled() const;

constexpr float_t& __cordl_internal_get_targetSegLenScaled() ;

constexpr float_t const& __cordl_internal_get_velocityDamping() const;

constexpr float_t& __cordl_internal_get_velocityDamping() ;

constexpr void __cordl_internal_set_baseSegLen(float_t  value) ;

constexpr void __cordl_internal_set_endMassKg(float_t  value) ;

constexpr void __cordl_internal_set_endTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_gravity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_heightCap(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_invMass(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_lineRenderer(::UnityW<::UnityEngine::LineRenderer>  value) ;

constexpr void __cordl_internal_set_maxY(float_t  value) ;

constexpr void __cordl_internal_set_ropeSegs(::ArrayW<::GlobalNamespace::HangingClaw_RopeSegment>  value) ;

constexpr void __cordl_internal_set_ropeStiffness(float_t  value) ;

constexpr void __cordl_internal_set_segmentCount(int32_t  value) ;

constexpr void __cordl_internal_set_segmentMassKg(float_t  value) ;

constexpr void __cordl_internal_set_slackFraction(float_t  value) ;

constexpr void __cordl_internal_set_targetSegLenScaled(float_t  value) ;

constexpr void __cordl_internal_set_velocityDamping(float_t  value) ;

/// @brief Method .ctor, addr 0x589d434, size 0x28, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HangingClaw() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HangingClaw", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HangingClaw(HangingClaw && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HangingClaw", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HangingClaw(HangingClaw const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1981};

/// @brief Field endTransform, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___endTransform;

/// @brief Field heightCap, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___heightCap;

/// @brief Field segmentCount, offset: 0x38, size: 0x4, def value: None
 int32_t  ___segmentCount;

/// @brief Field segmentMassKg, offset: 0x3c, size: 0x4, def value: None
 float_t  ___segmentMassKg;

/// @brief Field endMassKg, offset: 0x40, size: 0x4, def value: None
 float_t  ___endMassKg;

/// @brief Field ropeStiffness, offset: 0x44, size: 0x4, def value: None
 float_t  ___ropeStiffness;

/// @brief Field slackFraction, offset: 0x48, size: 0x4, def value: None
 float_t  ___slackFraction;

/// @brief Field gravity, offset: 0x4c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___gravity;

/// @brief Field velocityDamping, offset: 0x58, size: 0x4, def value: None
 float_t  ___velocityDamping;

/// @brief Field maxY, offset: 0x5c, size: 0x4, def value: None
 float_t  ___maxY;

/// @brief Field lineRenderer, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::LineRenderer>  ___lineRenderer;

/// @brief Field ropeSegs, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::HangingClaw_RopeSegment>  ___ropeSegs;

/// @brief Field baseSegLen, offset: 0x70, size: 0x4, def value: None
 float_t  ___baseSegLen;

/// @brief Field targetSegLenScaled, offset: 0x74, size: 0x4, def value: None
 float_t  ___targetSegLenScaled;

/// @brief Field invMass, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<float_t>  ___invMass;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HangingClaw, ___endTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HangingClaw, ___heightCap) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HangingClaw, ___segmentCount) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HangingClaw, ___segmentMassKg) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HangingClaw, ___endMassKg) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HangingClaw, ___ropeStiffness) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HangingClaw, ___slackFraction) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HangingClaw, ___gravity) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HangingClaw, ___velocityDamping) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HangingClaw, ___maxY) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HangingClaw, ___lineRenderer) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HangingClaw, ___ropeSegs) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HangingClaw, ___baseSegLen) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HangingClaw, ___targetSegLenScaled) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HangingClaw, ___invMass) == 0x78, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HangingClaw) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
