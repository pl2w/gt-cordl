#pragma once
// IWYU pragma private; include "Pathfinding/Poly2Tri/PolygonPoint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/Poly2Tri/zzzz__TriangulationPoint_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PolygonPoint)
// Forward declare root types
namespace Pathfinding::Poly2Tri {
class PolygonPoint;
}
// Write type traits
MARK_REF_T(::Pathfinding::Poly2Tri::PolygonPoint*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Poly2Tri::PolygonPoint*, "Pathfinding.Poly2Tri", "PolygonPoint");
// Dependencies Pathfinding.Poly2Tri.TriangulationPoint
namespace Pathfinding::Poly2Tri {
// Is value type: false
// CS Name: Pathfinding.Poly2Tri.PolygonPoint
class CORDL_TYPE PolygonPoint : public ::Pathfinding::Poly2Tri::TriangulationPoint {
public:
// Declarations
 __declspec(property(get=get_Next, put=set_Next)) ::Pathfinding::Poly2Tri::PolygonPoint*  Next;

 __declspec(property(put=set_Previous)) ::Pathfinding::Poly2Tri::PolygonPoint*  Previous;

/// @brief Field <Next>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Next_k__BackingField, put=__cordl_internal_set__Next_k__BackingField)) ::Pathfinding::Poly2Tri::PolygonPoint*  _Next_k__BackingField;

/// @brief Field <Previous>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__Previous_k__BackingField, put=__cordl_internal_set__Previous_k__BackingField)) ::Pathfinding::Poly2Tri::PolygonPoint*  _Previous_k__BackingField;

static inline ::Pathfinding::Poly2Tri::PolygonPoint* New_ctor(double_t  x, double_t  y) ;

constexpr ::Pathfinding::Poly2Tri::PolygonPoint* const& __cordl_internal_get__Next_k__BackingField() const;

constexpr ::Pathfinding::Poly2Tri::PolygonPoint*& __cordl_internal_get__Next_k__BackingField() ;

constexpr ::Pathfinding::Poly2Tri::PolygonPoint* const& __cordl_internal_get__Previous_k__BackingField() const;

constexpr ::Pathfinding::Poly2Tri::PolygonPoint*& __cordl_internal_get__Previous_k__BackingField() ;

constexpr void __cordl_internal_set__Next_k__BackingField(::Pathfinding::Poly2Tri::PolygonPoint*  value) ;

constexpr void __cordl_internal_set__Previous_k__BackingField(::Pathfinding::Poly2Tri::PolygonPoint*  value) ;

/// @brief Method .ctor, addr 0xa6b1298, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(double_t  x, double_t  y) ;

/// [CompilerGenerated]
/// @brief Method get_Next, addr 0xa6b12f0, size 0x8, virtual false, abstract: false, final false
inline ::Pathfinding::Poly2Tri::PolygonPoint* get_Next() ;

/// [CompilerGenerated]
/// @brief Method set_Next, addr 0xa6b12f8, size 0x8, virtual false, abstract: false, final false
inline void set_Next(::Pathfinding::Poly2Tri::PolygonPoint*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Previous, addr 0xa6b1300, size 0x8, virtual false, abstract: false, final false
inline void set_Previous(::Pathfinding::Poly2Tri::PolygonPoint*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PolygonPoint() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PolygonPoint", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PolygonPoint(PolygonPoint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PolygonPoint", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PolygonPoint(PolygonPoint const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32329};

/// [CompilerGenerated]
/// @brief Field <Next>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Pathfinding::Poly2Tri::PolygonPoint*  ____Next_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Previous>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::Pathfinding::Poly2Tri::PolygonPoint*  ____Previous_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Poly2Tri::PolygonPoint, ____Next_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Poly2Tri::PolygonPoint, ____Previous_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Poly2Tri::PolygonPoint) == 0x38, "Size mismatch!");

} // namespace end def Pathfinding::Poly2Tri
