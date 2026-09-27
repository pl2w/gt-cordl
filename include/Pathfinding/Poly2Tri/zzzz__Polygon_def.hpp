#pragma once
// IWYU pragma private; include "Pathfinding/Poly2Tri/Polygon.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Polygon)
namespace Pathfinding::Poly2Tri {
class DelaunayTriangle;
}
namespace Pathfinding::Poly2Tri {
class PolygonPoint;
}
namespace Pathfinding::Poly2Tri {
class Triangulatable;
}
namespace Pathfinding::Poly2Tri {
class TriangulationContext;
}
namespace Pathfinding::Poly2Tri {
struct TriangulationMode;
}
namespace Pathfinding::Poly2Tri {
class TriangulationPoint;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Pathfinding::Poly2Tri {
class Polygon;
}
// Write type traits
MARK_REF_T(::Pathfinding::Poly2Tri::Polygon*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Poly2Tri::Polygon*, "Pathfinding.Poly2Tri", "Polygon");
// Dependencies System.Object
namespace Pathfinding::Poly2Tri {
// Is value type: false
// CS Name: Pathfinding.Poly2Tri.Polygon
class CORDL_TYPE Polygon : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Holes)) ::System::Collections::Generic::IList_1<::Pathfinding::Poly2Tri::Polygon*>*  Holes;

 __declspec(property(get=get_Points)) ::System::Collections::Generic::IList_1<::Pathfinding::Poly2Tri::TriangulationPoint*>*  Points;

 __declspec(property(get=get_Triangles)) ::System::Collections::Generic::IList_1<::Pathfinding::Poly2Tri::DelaunayTriangle*>*  Triangles;

 __declspec(property(get=get_TriangulationMode)) ::Pathfinding::Poly2Tri::TriangulationMode  TriangulationMode;

/// @brief Field _holes, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__holes, put=__cordl_internal_set__holes)) ::System::Collections::Generic::List_1<::Pathfinding::Poly2Tri::Polygon*>*  _holes;

/// @brief Field _last, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__last, put=__cordl_internal_set__last)) ::Pathfinding::Poly2Tri::PolygonPoint*  _last;

/// @brief Field _points, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__points, put=__cordl_internal_set__points)) ::System::Collections::Generic::List_1<::Pathfinding::Poly2Tri::TriangulationPoint*>*  _points;

/// @brief Field _steinerPoints, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__steinerPoints, put=__cordl_internal_set__steinerPoints)) ::System::Collections::Generic::List_1<::Pathfinding::Poly2Tri::TriangulationPoint*>*  _steinerPoints;

/// @brief Field _triangles, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__triangles, put=__cordl_internal_set__triangles)) ::System::Collections::Generic::List_1<::Pathfinding::Poly2Tri::DelaunayTriangle*>*  _triangles;

/// @brief Convert operator to "::Pathfinding::Poly2Tri::Triangulatable"
constexpr operator  ::Pathfinding::Poly2Tri::Triangulatable*() noexcept;

/// @brief Method AddHole, addr 0xa6b07f0, size 0x100, virtual false, abstract: false, final false
inline void AddHole(::Pathfinding::Poly2Tri::Polygon*  poly) ;

/// @brief Method AddPoints, addr 0xa6b08f0, size 0x440, virtual false, abstract: false, final false
inline void AddPoints(::System::Collections::Generic::IEnumerable_1<::Pathfinding::Poly2Tri::PolygonPoint*>*  list) ;

/// @brief Method AddTriangle, addr 0xa6b0d48, size 0xac, virtual true, abstract: false, final true
inline void AddTriangle(::Pathfinding::Poly2Tri::DelaunayTriangle*  t) ;

/// @brief Method AddTriangles, addr 0xa6b0df4, size 0x58, virtual true, abstract: false, final true
inline void AddTriangles(::System::Collections::Generic::IEnumerable_1<::Pathfinding::Poly2Tri::DelaunayTriangle*>*  list) ;

/// @brief Method ClearTriangles, addr 0xa6b0e4c, size 0x6c, virtual true, abstract: false, final true
inline void ClearTriangles() ;

static inline ::Pathfinding::Poly2Tri::Polygon* New_ctor(::System::Collections::Generic::IList_1<::Pathfinding::Poly2Tri::PolygonPoint*>*  points) ;

/// @brief Method Prepare, addr 0xa6b0eb8, size 0x3e0, virtual true, abstract: false, final true
inline void Prepare(::Pathfinding::Poly2Tri::TriangulationContext*  tcx) ;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::Poly2Tri::Polygon*>* const& __cordl_internal_get__holes() const;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::Poly2Tri::Polygon*>*& __cordl_internal_get__holes() ;

constexpr ::Pathfinding::Poly2Tri::PolygonPoint* const& __cordl_internal_get__last() const;

constexpr ::Pathfinding::Poly2Tri::PolygonPoint*& __cordl_internal_get__last() ;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::Poly2Tri::TriangulationPoint*>* const& __cordl_internal_get__points() const;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::Poly2Tri::TriangulationPoint*>*& __cordl_internal_get__points() ;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::Poly2Tri::TriangulationPoint*>* const& __cordl_internal_get__steinerPoints() const;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::Poly2Tri::TriangulationPoint*>*& __cordl_internal_get__steinerPoints() ;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::Poly2Tri::DelaunayTriangle*>* const& __cordl_internal_get__triangles() const;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::Poly2Tri::DelaunayTriangle*>*& __cordl_internal_get__triangles() ;

constexpr void __cordl_internal_set__holes(::System::Collections::Generic::List_1<::Pathfinding::Poly2Tri::Polygon*>*  value) ;

constexpr void __cordl_internal_set__last(::Pathfinding::Poly2Tri::PolygonPoint*  value) ;

constexpr void __cordl_internal_set__points(::System::Collections::Generic::List_1<::Pathfinding::Poly2Tri::TriangulationPoint*>*  value) ;

constexpr void __cordl_internal_set__steinerPoints(::System::Collections::Generic::List_1<::Pathfinding::Poly2Tri::TriangulationPoint*>*  value) ;

constexpr void __cordl_internal_set__triangles(::System::Collections::Generic::List_1<::Pathfinding::Poly2Tri::DelaunayTriangle*>*  value) ;

/// @brief Method .ctor, addr 0xa6b02a0, size 0x548, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IList_1<::Pathfinding::Poly2Tri::PolygonPoint*>*  points) ;

/// @brief Method get_Holes, addr 0xa6b0d40, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Pathfinding::Poly2Tri::Polygon*>* get_Holes() ;

/// @brief Method get_Points, addr 0xa6b0d30, size 0x8, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IList_1<::Pathfinding::Poly2Tri::TriangulationPoint*>* get_Points() ;

/// @brief Method get_Triangles, addr 0xa6b0d38, size 0x8, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IList_1<::Pathfinding::Poly2Tri::DelaunayTriangle*>* get_Triangles() ;

/// @brief Method get_TriangulationMode, addr 0xa6b07e8, size 0x8, virtual true, abstract: false, final true
inline ::Pathfinding::Poly2Tri::TriangulationMode get_TriangulationMode() ;

/// @brief Convert to "::Pathfinding::Poly2Tri::Triangulatable"
constexpr ::Pathfinding::Poly2Tri::Triangulatable* i___Pathfinding__Poly2Tri__Triangulatable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Polygon() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Polygon", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Polygon(Polygon && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Polygon", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Polygon(Polygon const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32328};

/// @brief Field _points, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Pathfinding::Poly2Tri::TriangulationPoint*>*  ____points;

/// @brief Field _steinerPoints, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Pathfinding::Poly2Tri::TriangulationPoint*>*  ____steinerPoints;

/// @brief Field _holes, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Pathfinding::Poly2Tri::Polygon*>*  ____holes;

/// @brief Field _triangles, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Pathfinding::Poly2Tri::DelaunayTriangle*>*  ____triangles;

/// @brief Field _last, offset: 0x30, size: 0x8, def value: None
 ::Pathfinding::Poly2Tri::PolygonPoint*  ____last;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Poly2Tri::Polygon, ____points) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Poly2Tri::Polygon, ____steinerPoints) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Poly2Tri::Polygon, ____holes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Poly2Tri::Polygon, ____triangles) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Poly2Tri::Polygon, ____last) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Poly2Tri::Polygon) == 0x38, "Size mismatch!");

} // namespace end def Pathfinding::Poly2Tri
