#pragma once
// IWYU pragma private; include "Pathfinding/Examples/AstarSmoothFollow2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AstarSmoothFollow2)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Pathfinding::Examples {
class AstarSmoothFollow2;
}
// Write type traits
MARK_REF_T(::Pathfinding::Examples::AstarSmoothFollow2*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Examples::AstarSmoothFollow2*, "Pathfinding.Examples", "AstarSmoothFollow2");
// [HelpURL("http://arongranberg.com/astar/documentation/stable/class_pathfinding_1_1_examples_1_1_astar_smooth_follow2.php")]
// Dependencies UnityEngine.MonoBehaviour
namespace Pathfinding::Examples {
// Is value type: false
// CS Name: Pathfinding.Examples.AstarSmoothFollow2
class CORDL_TYPE AstarSmoothFollow2 : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field damping, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_damping, put=__cordl_internal_set_damping)) float_t  damping;

/// @brief Field distance, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_distance, put=__cordl_internal_set_distance)) float_t  distance;

/// @brief Field followBehind, offset 0x35, size 0x1 
 __declspec(property(get=__cordl_internal_get_followBehind, put=__cordl_internal_set_followBehind)) bool  followBehind;

/// @brief Field height, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_height, put=__cordl_internal_set_height)) float_t  height;

/// @brief Field rotationDamping, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotationDamping, put=__cordl_internal_set_rotationDamping)) float_t  rotationDamping;

/// @brief Field smoothRotation, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_smoothRotation, put=__cordl_internal_set_smoothRotation)) bool  smoothRotation;

/// @brief Field staticOffset, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_staticOffset, put=__cordl_internal_set_staticOffset)) bool  staticOffset;

/// @brief Field target, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::Transform>  target;

/// @brief Method LateUpdate, addr 0x5efa20c, size 0x29c, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::Pathfinding::Examples::AstarSmoothFollow2* New_ctor() ;

constexpr float_t const& __cordl_internal_get_damping() const;

constexpr float_t& __cordl_internal_get_damping() ;

constexpr float_t const& __cordl_internal_get_distance() const;

constexpr float_t& __cordl_internal_get_distance() ;

constexpr bool const& __cordl_internal_get_followBehind() const;

constexpr bool& __cordl_internal_get_followBehind() ;

constexpr float_t const& __cordl_internal_get_height() const;

constexpr float_t& __cordl_internal_get_height() ;

constexpr float_t const& __cordl_internal_get_rotationDamping() const;

constexpr float_t& __cordl_internal_get_rotationDamping() ;

constexpr bool const& __cordl_internal_get_smoothRotation() const;

constexpr bool& __cordl_internal_get_smoothRotation() ;

constexpr bool const& __cordl_internal_get_staticOffset() const;

constexpr bool& __cordl_internal_get_staticOffset() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_damping(float_t  value) ;

constexpr void __cordl_internal_set_distance(float_t  value) ;

constexpr void __cordl_internal_set_followBehind(bool  value) ;

constexpr void __cordl_internal_set_height(float_t  value) ;

constexpr void __cordl_internal_set_rotationDamping(float_t  value) ;

constexpr void __cordl_internal_set_smoothRotation(bool  value) ;

constexpr void __cordl_internal_set_staticOffset(bool  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x5efa4a8, size 0x28, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AstarSmoothFollow2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AstarSmoothFollow2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AstarSmoothFollow2(AstarSmoothFollow2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AstarSmoothFollow2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AstarSmoothFollow2(AstarSmoothFollow2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21544};

/// @brief Field target, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___target;

/// @brief Field distance, offset: 0x28, size: 0x4, def value: None
 float_t  ___distance;

/// @brief Field height, offset: 0x2c, size: 0x4, def value: None
 float_t  ___height;

/// @brief Field damping, offset: 0x30, size: 0x4, def value: None
 float_t  ___damping;

/// @brief Field smoothRotation, offset: 0x34, size: 0x1, def value: None
 bool  ___smoothRotation;

/// @brief Field followBehind, offset: 0x35, size: 0x1, def value: None
 bool  ___followBehind;

/// @brief Field rotationDamping, offset: 0x38, size: 0x4, def value: None
 float_t  ___rotationDamping;

/// @brief Field staticOffset, offset: 0x3c, size: 0x1, def value: None
 bool  ___staticOffset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Examples::AstarSmoothFollow2, ___target) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::AstarSmoothFollow2, ___distance) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::AstarSmoothFollow2, ___height) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::AstarSmoothFollow2, ___damping) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::AstarSmoothFollow2, ___smoothRotation) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::AstarSmoothFollow2, ___followBehind) == 0x35, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::AstarSmoothFollow2, ___rotationDamping) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::AstarSmoothFollow2, ___staticOffset) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Examples::AstarSmoothFollow2) == 0x40, "Size mismatch!");

} // namespace end def Pathfinding::Examples
