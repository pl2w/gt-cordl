#pragma once
// IWYU pragma private; include "GlobalNamespace/BezierCurve.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BezierCurve)
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class BezierCurve;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BezierCurve*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BezierCurve*, "", "BezierCurve");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: BezierCurve
class CORDL_TYPE BezierCurve : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field points, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_points, put=__cordl_internal_set_points)) ::ArrayW<::UnityEngine::Vector3>  points;

/// @brief Field referenceTransform, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_referenceTransform, put=__cordl_internal_set_referenceTransform)) ::UnityW<::UnityEngine::Transform>  referenceTransform;

/// @brief Method GetDirection, addr 0x5b11d80, size 0xd4, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetDirection(float_t  t) ;

/// @brief Method GetPoint, addr 0x5b11a80, size 0x154, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetPoint(float_t  t) ;

/// @brief Method GetVelocity, addr 0x5b11bd4, size 0x1ac, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetVelocity(float_t  t) ;

static inline ::GlobalNamespace::BezierCurve* New_ctor() ;

/// @brief Method Reset, addr 0x5b11e54, size 0xe0, virtual false, abstract: false, final false
inline void Reset() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_points() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_points() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_referenceTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_referenceTransform() ;

constexpr void __cordl_internal_set_points(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_referenceTransform(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x5b11f34, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BezierCurve() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BezierCurve", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BezierCurve(BezierCurve && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BezierCurve", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BezierCurve(BezierCurve const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3551};

/// @brief Field referenceTransform, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___referenceTransform;

/// @brief Field points, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___points;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BezierCurve, ___referenceTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BezierCurve, ___points) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BezierCurve) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
