#pragma once
// IWYU pragma private; include "Pathfinding/Examples/MecanimBridge.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__VersionedMonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MecanimBridge)
namespace Pathfinding {
class IAstarAI;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding::Examples {
class MecanimBridge;
}
// Write type traits
MARK_REF_T(::Pathfinding::Examples::MecanimBridge*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Examples::MecanimBridge*, "Pathfinding.Examples", "MecanimBridge");
// [HelpURL("http://arongranberg.com/astar/documentation/stable/class_pathfinding_1_1_examples_1_1_mecanim_bridge.php")]
// Dependencies Pathfinding.VersionedMonoBehaviour, UnityEngine.Transform, UnityEngine.Vector3
namespace Pathfinding::Examples {
// Is value type: false
// CS Name: Pathfinding.Examples.MecanimBridge
class CORDL_TYPE MecanimBridge : public ::Pathfinding::VersionedMonoBehaviour {
public:
// Declarations
/// @brief Field ai, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_ai, put=__cordl_internal_set_ai)) ::Pathfinding::IAstarAI*  ai;

/// @brief Field anim, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_anim, put=__cordl_internal_set_anim)) ::UnityW<::UnityEngine::Animator>  anim;

/// @brief Field footTransforms, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_footTransforms, put=__cordl_internal_set_footTransforms)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  footTransforms;

/// @brief Field prevFootPos, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_prevFootPos, put=__cordl_internal_set_prevFootPos)) ::ArrayW<::UnityEngine::Vector3>  prevFootPos;

/// @brief Field smoothedVelocity, offset 0x40, size 0xc 
 __declspec(property(get=__cordl_internal_get_smoothedVelocity, put=__cordl_internal_set_smoothedVelocity)) ::UnityEngine::Vector3  smoothedVelocity;

/// @brief Field tr, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_tr, put=__cordl_internal_set_tr)) ::UnityW<::UnityEngine::Transform>  tr;

/// @brief Field velocitySmoothing, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_velocitySmoothing, put=__cordl_internal_set_velocitySmoothing)) float_t  velocitySmoothing;

/// @brief Method Awake, addr 0x5ef6784, size 0x1a0, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CalculateBlendPoint, addr 0x5ef69a0, size 0x340, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 CalculateBlendPoint() ;

static inline ::Pathfinding::Examples::MecanimBridge* New_ctor() ;

/// @brief Method OnAnimatorMove, addr 0x5ef6ce0, size 0x848, virtual false, abstract: false, final false
inline void OnAnimatorMove() ;

/// @brief Method RotatePointAround, addr 0x5ef7528, size 0x50, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 RotatePointAround(::UnityEngine::Vector3  point, ::UnityEngine::Vector3  around, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method RotateTowards, addr 0x5ef7578, size 0x1cc, virtual true, abstract: false, final false
inline ::UnityEngine::Quaternion RotateTowards(::UnityEngine::Vector3  direction, float_t  maxDegrees) ;

/// @brief Method Update, addr 0x5ef6924, size 0x7c, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::Pathfinding::IAstarAI* const& __cordl_internal_get_ai() const;

constexpr ::Pathfinding::IAstarAI*& __cordl_internal_get_ai() ;

constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get_anim() const;

constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get_anim() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get_footTransforms() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get_footTransforms() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_prevFootPos() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_prevFootPos() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_smoothedVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_smoothedVelocity() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_tr() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_tr() ;

constexpr float_t const& __cordl_internal_get_velocitySmoothing() const;

constexpr float_t& __cordl_internal_get_velocitySmoothing() ;

constexpr void __cordl_internal_set_ai(::Pathfinding::IAstarAI*  value) ;

constexpr void __cordl_internal_set_anim(::UnityW<::UnityEngine::Animator>  value) ;

constexpr void __cordl_internal_set_footTransforms(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

constexpr void __cordl_internal_set_prevFootPos(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_smoothedVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_tr(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_velocitySmoothing(float_t  value) ;

/// @brief Method .ctor, addr 0x5ef7744, size 0x6c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MecanimBridge() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MecanimBridge", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MecanimBridge(MecanimBridge && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MecanimBridge", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MecanimBridge(MecanimBridge const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21539};

/// @brief Field velocitySmoothing, offset: 0x24, size: 0x4, def value: None
 float_t  ___velocitySmoothing;

/// @brief Field ai, offset: 0x28, size: 0x8, def value: None
 ::Pathfinding::IAstarAI*  ___ai;

/// @brief Field anim, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animator>  ___anim;

/// @brief Field tr, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___tr;

/// @brief Field smoothedVelocity, offset: 0x40, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___smoothedVelocity;

/// @brief Field prevFootPos, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___prevFootPos;

/// @brief Field footTransforms, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ___footTransforms;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Examples::MecanimBridge, ___velocitySmoothing) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::MecanimBridge, ___ai) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::MecanimBridge, ___anim) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::MecanimBridge, ___tr) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::MecanimBridge, ___smoothedVelocity) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::MecanimBridge, ___prevFootPos) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::MecanimBridge, ___footTransforms) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Examples::MecanimBridge) == 0x60, "Size mismatch!");

} // namespace end def Pathfinding::Examples
