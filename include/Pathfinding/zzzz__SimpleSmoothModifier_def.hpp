#pragma once
// IWYU pragma private; include "Pathfinding/SimpleSmoothModifier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__MonoModifier_def.hpp"
#include "Pathfinding/zzzz__SimpleSmoothModifier_SmoothType_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SimpleSmoothModifier)
namespace GlobalNamespace {
struct SimpleSmoothModifier_SmoothType;
}
namespace Pathfinding {
class Path;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding {
class SimpleSmoothModifier;
}
// Write type traits
MARK_REF_T(::Pathfinding::SimpleSmoothModifier*);
DEFINE_IL2CPP_CLASS(::Pathfinding::SimpleSmoothModifier*, "Pathfinding", "SimpleSmoothModifier");
// [AddComponentMenu("Pathfinding/Modifiers/Simple Smooth")]
// [RequireComponent(typeof(Pathfinding.Seeker))]
// [HelpURL("http://arongranberg.com/astar/documentation/stable/class_pathfinding_1_1_simple_smooth_modifier.php")]
// Dependencies Pathfinding.MonoModifier, Pathfinding.SimpleSmoothModifier::SmoothType
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.SimpleSmoothModifier
class CORDL_TYPE SimpleSmoothModifier : public ::Pathfinding::MonoModifier {
public:
// Declarations
using SmoothType = ::GlobalNamespace::SimpleSmoothModifier_SmoothType;

 __declspec(property(get=get_Order)) int32_t  Order;

/// @brief Field bezierTangentLength, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_bezierTangentLength, put=__cordl_internal_set_bezierTangentLength)) float_t  bezierTangentLength;

/// @brief Field factor, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_factor, put=__cordl_internal_set_factor)) float_t  factor;

/// @brief Field iterations, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_iterations, put=__cordl_internal_set_iterations)) int32_t  iterations;

/// @brief Field maxSegmentLength, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxSegmentLength, put=__cordl_internal_set_maxSegmentLength)) float_t  maxSegmentLength;

/// @brief Field offset, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_offset, put=__cordl_internal_set_offset)) float_t  offset;

/// @brief Field smoothType, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_smoothType, put=__cordl_internal_set_smoothType)) ::GlobalNamespace::SimpleSmoothModifier_SmoothType  smoothType;

/// @brief Field strength, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_strength, put=__cordl_internal_set_strength)) float_t  strength;

/// @brief Field subdivisions, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_subdivisions, put=__cordl_internal_set_subdivisions)) int32_t  subdivisions;

/// @brief Field uniformLength, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_uniformLength, put=__cordl_internal_set_uniformLength)) bool  uniformLength;

/// @brief Method Apply, addr 0x5ea4114, size 0x150, virtual true, abstract: false, final false
inline void Apply(::Pathfinding::Path*  p) ;

/// @brief Method CurvedNonuniform, addr 0x5ea54b4, size 0x884, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* CurvedNonuniform(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  path) ;

/// @brief Method GetPointOnCubic, addr 0x5ea5d38, size 0xa0, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GetPointOnCubic(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, ::UnityEngine::Vector3  tan1, ::UnityEngine::Vector3  tan2, float_t  t) ;

static inline ::Pathfinding::SimpleSmoothModifier* New_ctor() ;

/// @brief Method SmoothBezier, addr 0x5ea48d8, size 0x3c0, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* SmoothBezier(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  path) ;

/// @brief Method SmoothOffsetSimple, addr 0x5ea4c98, size 0x81c, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* SmoothOffsetSimple(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  path) ;

/// @brief Method SmoothSimple, addr 0x5ea4264, size 0x674, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* SmoothSimple(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  path) ;

constexpr float_t const& __cordl_internal_get_bezierTangentLength() const;

constexpr float_t& __cordl_internal_get_bezierTangentLength() ;

constexpr float_t const& __cordl_internal_get_factor() const;

constexpr float_t& __cordl_internal_get_factor() ;

constexpr int32_t const& __cordl_internal_get_iterations() const;

constexpr int32_t& __cordl_internal_get_iterations() ;

constexpr float_t const& __cordl_internal_get_maxSegmentLength() const;

constexpr float_t& __cordl_internal_get_maxSegmentLength() ;

constexpr float_t const& __cordl_internal_get_offset() const;

constexpr float_t& __cordl_internal_get_offset() ;

constexpr ::GlobalNamespace::SimpleSmoothModifier_SmoothType const& __cordl_internal_get_smoothType() const;

constexpr ::GlobalNamespace::SimpleSmoothModifier_SmoothType& __cordl_internal_get_smoothType() ;

constexpr float_t const& __cordl_internal_get_strength() const;

constexpr float_t& __cordl_internal_get_strength() ;

constexpr int32_t const& __cordl_internal_get_subdivisions() const;

constexpr int32_t& __cordl_internal_get_subdivisions() ;

constexpr bool const& __cordl_internal_get_uniformLength() const;

constexpr bool& __cordl_internal_get_uniformLength() ;

constexpr void __cordl_internal_set_bezierTangentLength(float_t  value) ;

constexpr void __cordl_internal_set_factor(float_t  value) ;

constexpr void __cordl_internal_set_iterations(int32_t  value) ;

constexpr void __cordl_internal_set_maxSegmentLength(float_t  value) ;

constexpr void __cordl_internal_set_offset(float_t  value) ;

constexpr void __cordl_internal_set_smoothType(::GlobalNamespace::SimpleSmoothModifier_SmoothType  value) ;

constexpr void __cordl_internal_set_strength(float_t  value) ;

constexpr void __cordl_internal_set_subdivisions(int32_t  value) ;

constexpr void __cordl_internal_set_uniformLength(bool  value) ;

/// @brief Method .ctor, addr 0x5ea5dd8, size 0x2c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Order, addr 0x5ea410c, size 0x8, virtual true, abstract: false, final false
inline int32_t get_Order() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SimpleSmoothModifier() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SimpleSmoothModifier", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SimpleSmoothModifier(SimpleSmoothModifier && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimpleSmoothModifier", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimpleSmoothModifier(SimpleSmoothModifier const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21373};

/// @brief Field smoothType, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::SimpleSmoothModifier_SmoothType  ___smoothType;

/// [Tooltip("The number of times to subdivide (divide in half) the path segments. [0...inf] (recommended [1...10])")]
/// @brief Field subdivisions, offset: 0x34, size: 0x4, def value: None
 int32_t  ___subdivisions;

/// [Tooltip("Number of times to apply smoothing")]
/// @brief Field iterations, offset: 0x38, size: 0x4, def value: None
 int32_t  ___iterations;

/// [Tooltip("Determines how much smoothing to apply in each smooth iteration. 0.5 usually produces the nicest looking curves")]
/// [Range(0, 1)]
/// @brief Field strength, offset: 0x3c, size: 0x4, def value: None
 float_t  ___strength;

/// [Tooltip("Toggle to divide all lines in equal length segments")]
/// @brief Field uniformLength, offset: 0x40, size: 0x1, def value: None
 bool  ___uniformLength;

/// [Tooltip("The length of each segment in the smoothed path. A high value yields rough paths and low value yields very smooth paths, but is slower")]
/// @brief Field maxSegmentLength, offset: 0x44, size: 0x4, def value: None
 float_t  ___maxSegmentLength;

/// [Tooltip("Length factor of the bezier curves\' tangents")]
/// @brief Field bezierTangentLength, offset: 0x48, size: 0x4, def value: None
 float_t  ___bezierTangentLength;

/// [Tooltip("Offset to apply in each smoothing iteration when using Offset Simple")]
/// @brief Field offset, offset: 0x4c, size: 0x4, def value: None
 float_t  ___offset;

/// [Tooltip("How much to smooth the path. A higher value will give a smoother path, but might take the character far off the optimal path.")]
/// @brief Field factor, offset: 0x50, size: 0x4, def value: None
 float_t  ___factor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::SimpleSmoothModifier, ___smoothType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::SimpleSmoothModifier, ___subdivisions) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::SimpleSmoothModifier, ___iterations) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::SimpleSmoothModifier, ___strength) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::SimpleSmoothModifier, ___uniformLength) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::SimpleSmoothModifier, ___maxSegmentLength) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::SimpleSmoothModifier, ___bezierTangentLength) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::SimpleSmoothModifier, ___offset) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::SimpleSmoothModifier, ___factor) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::SimpleSmoothModifier) == 0x58, "Size mismatch!");

} // namespace end def Pathfinding
