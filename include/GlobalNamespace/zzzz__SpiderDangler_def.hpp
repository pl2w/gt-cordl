#pragma once
// IWYU pragma private; include "GlobalNamespace/SpiderDangler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SpiderDangler_RopeSegment_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SpiderDangler)
namespace GlobalNamespace {
struct SpiderDangler_RopeSegment;
}
namespace UnityEngine {
class LineRenderer;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class SpiderDangler;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SpiderDangler*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SpiderDangler*, "", "SpiderDangler");
// Dependencies SpiderDangler::RopeSegment, UnityEngine.MonoBehaviour, UnityEngine.Vector4
namespace GlobalNamespace {
// Is value type: false
// CS Name: SpiderDangler
class CORDL_TYPE SpiderDangler : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using RopeSegment = ::GlobalNamespace::SpiderDangler_RopeSegment;

/// @brief Field endTransform, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_endTransform, put=__cordl_internal_set_endTransform)) ::UnityW<::UnityEngine::Transform>  endTransform;

/// @brief Field lineRenderer, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_lineRenderer, put=__cordl_internal_set_lineRenderer)) ::UnityW<::UnityEngine::LineRenderer>  lineRenderer;

/// @brief Field ropeSegLen, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_ropeSegLen, put=__cordl_internal_set_ropeSegLen)) float_t  ropeSegLen;

/// @brief Field ropeSegLenScaled, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_ropeSegLenScaled, put=__cordl_internal_set_ropeSegLenScaled)) float_t  ropeSegLenScaled;

/// @brief Field ropeSegs, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_ropeSegs, put=__cordl_internal_set_ropeSegs)) ::ArrayW<::GlobalNamespace::SpiderDangler_RopeSegment>  ropeSegs;

/// @brief Field spinScales, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_spinScales, put=__cordl_internal_set_spinScales)) ::UnityEngine::Vector4  spinScales;

/// @brief Field spinSpeeds, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_spinSpeeds, put=__cordl_internal_set_spinSpeeds)) ::UnityEngine::Vector4  spinSpeeds;

/// @brief Method ApplyConstraint, addr 0x5dfda48, size 0xcc, virtual false, abstract: false, final false
inline void ApplyConstraint() ;

/// @brief Method ApplyConstraintSegment, addr 0x5dfdb14, size 0x1cc, virtual false, abstract: false, final false
inline void ApplyConstraintSegment(::by_ref<::GlobalNamespace::SpiderDangler_RopeSegment>  segA, ::by_ref<::GlobalNamespace::SpiderDangler_RopeSegment>  segB, float_t  dampenA, float_t  dampenB) ;

/// @brief Method Awake, addr 0x5dfd414, size 0x1a4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DrawRope, addr 0x5dfd978, size 0xd0, virtual false, abstract: false, final false
inline void DrawRope() ;

/// @brief Method FixedUpdate, addr 0x5dfd5c8, size 0x4, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method LateUpdate, addr 0x5dfd718, size 0x260, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::SpiderDangler* New_ctor() ;

/// @brief Method Simulate, addr 0x5dfd5cc, size 0x14c, virtual false, abstract: false, final false
inline void Simulate() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_endTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_endTransform() ;

constexpr ::UnityW<::UnityEngine::LineRenderer> const& __cordl_internal_get_lineRenderer() const;

constexpr ::UnityW<::UnityEngine::LineRenderer>& __cordl_internal_get_lineRenderer() ;

constexpr float_t const& __cordl_internal_get_ropeSegLen() const;

constexpr float_t& __cordl_internal_get_ropeSegLen() ;

constexpr float_t const& __cordl_internal_get_ropeSegLenScaled() const;

constexpr float_t& __cordl_internal_get_ropeSegLenScaled() ;

constexpr ::ArrayW<::GlobalNamespace::SpiderDangler_RopeSegment> const& __cordl_internal_get_ropeSegs() const;

constexpr ::ArrayW<::GlobalNamespace::SpiderDangler_RopeSegment>& __cordl_internal_get_ropeSegs() ;

constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_spinScales() const;

constexpr ::UnityEngine::Vector4& __cordl_internal_get_spinScales() ;

constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_spinSpeeds() const;

constexpr ::UnityEngine::Vector4& __cordl_internal_get_spinSpeeds() ;

constexpr void __cordl_internal_set_endTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_lineRenderer(::UnityW<::UnityEngine::LineRenderer>  value) ;

constexpr void __cordl_internal_set_ropeSegLen(float_t  value) ;

constexpr void __cordl_internal_set_ropeSegLenScaled(float_t  value) ;

constexpr void __cordl_internal_set_ropeSegs(::ArrayW<::GlobalNamespace::SpiderDangler_RopeSegment>  value) ;

constexpr void __cordl_internal_set_spinScales(::UnityEngine::Vector4  value) ;

constexpr void __cordl_internal_set_spinSpeeds(::UnityEngine::Vector4  value) ;

/// @brief Method .ctor, addr 0x5dfdce0, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpiderDangler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpiderDangler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SpiderDangler(SpiderDangler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpiderDangler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpiderDangler(SpiderDangler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{510};

/// @brief Field kConstraintCalculationIterations offset 0xffffffff size 0x4
static constexpr int32_t  kConstraintCalculationIterations{static_cast<int32_t>(0x8)};

/// @brief Field kSegmentCount offset 0xffffffff size 0x4
static constexpr int32_t  kSegmentCount{static_cast<int32_t>(0x6)};

/// @brief Field kVelocityDamper offset 0xffffffff size 0x4
static constexpr float_t  kVelocityDamper{static_cast<float_t>(0.95f)};

/// @brief Field endTransform, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___endTransform;

/// @brief Field spinSpeeds, offset: 0x28, size: 0x10, def value: None
 ::UnityEngine::Vector4  ___spinSpeeds;

/// @brief Field spinScales, offset: 0x38, size: 0x10, def value: None
 ::UnityEngine::Vector4  ___spinScales;

/// @brief Field lineRenderer, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::LineRenderer>  ___lineRenderer;

/// @brief Field ropeSegs, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::SpiderDangler_RopeSegment>  ___ropeSegs;

/// @brief Field ropeSegLen, offset: 0x58, size: 0x4, def value: None
 float_t  ___ropeSegLen;

/// @brief Field ropeSegLenScaled, offset: 0x5c, size: 0x4, def value: None
 float_t  ___ropeSegLenScaled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SpiderDangler, ___endTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpiderDangler, ___spinSpeeds) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpiderDangler, ___spinScales) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpiderDangler, ___lineRenderer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpiderDangler, ___ropeSegs) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpiderDangler, ___ropeSegLen) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpiderDangler, ___ropeSegLenScaled) == 0x5c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SpiderDangler) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
