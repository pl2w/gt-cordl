#pragma once
// IWYU pragma private; include "Pathfinding/Examples/BezierMover.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BezierMover)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding::Examples {
class BezierMover;
}
// Write type traits
MARK_REF_T(::Pathfinding::Examples::BezierMover*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Examples::BezierMover*, "Pathfinding.Examples", "BezierMover");
// [HelpURL("http://arongranberg.com/astar/documentation/stable/class_pathfinding_1_1_examples_1_1_bezier_mover.php")]
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Transform
namespace Pathfinding::Examples {
// Is value type: false
// CS Name: Pathfinding.Examples.BezierMover
class CORDL_TYPE BezierMover : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field points, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_points, put=__cordl_internal_set_points)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  points;

/// @brief Field speed, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_speed, put=__cordl_internal_set_speed)) float_t  speed;

/// @brief Field tiltAmount, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_tiltAmount, put=__cordl_internal_set_tiltAmount)) float_t  tiltAmount;

/// @brief Field time, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_time, put=__cordl_internal_set_time)) float_t  time;

static inline ::Pathfinding::Examples::BezierMover* New_ctor() ;

/// @brief Method OnDrawGizmos, addr 0x5ef4a30, size 0x194, virtual false, abstract: false, final false
inline void OnDrawGizmos() ;

/// @brief Method Position, addr 0x5ef43c0, size 0x230, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 Position(float_t  t) ;

/// @brief Method Update, addr 0x5ef45f0, size 0x440, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get_points() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get_points() ;

constexpr float_t const& __cordl_internal_get_speed() const;

constexpr float_t& __cordl_internal_get_speed() ;

constexpr float_t const& __cordl_internal_get_tiltAmount() const;

constexpr float_t& __cordl_internal_get_tiltAmount() ;

constexpr float_t const& __cordl_internal_get_time() const;

constexpr float_t& __cordl_internal_get_time() ;

constexpr void __cordl_internal_set_points(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

constexpr void __cordl_internal_set_speed(float_t  value) ;

constexpr void __cordl_internal_set_tiltAmount(float_t  value) ;

constexpr void __cordl_internal_set_time(float_t  value) ;

/// @brief Method .ctor, addr 0x5ef4bc4, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BezierMover() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BezierMover", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BezierMover(BezierMover && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BezierMover", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BezierMover(BezierMover const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21528};

/// @brief Field points, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ___points;

/// @brief Field speed, offset: 0x28, size: 0x4, def value: None
 float_t  ___speed;

/// @brief Field tiltAmount, offset: 0x2c, size: 0x4, def value: None
 float_t  ___tiltAmount;

/// @brief Field time, offset: 0x30, size: 0x4, def value: None
 float_t  ___time;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Examples::BezierMover, ___points) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::BezierMover, ___speed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::BezierMover, ___tiltAmount) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::BezierMover, ___time) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Examples::BezierMover) == 0x38, "Size mismatch!");

} // namespace end def Pathfinding::Examples
